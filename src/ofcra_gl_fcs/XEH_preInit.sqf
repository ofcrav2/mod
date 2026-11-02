/*
 * OFCRA grenade-launcher fire control - see config.cpp.
 *
 * The engine's zeroing angle for distance D (the gun's angle above the sight line), measured in game: the drop of a
 * shot fired ALONG the sight line, perpendicular to that line, D metres along it, as an angle (sight -3.55 deg / 1745 m
 * -> 15.05 deg, -2.44 / 2100 -> 20.90, level / 1370 -> 10.70; this model matches to ~0.05 deg). So on lasing:
 *   1. distance and angle to the point under the crosshair (ray from the gunner camera);
 *   2. the gun angle whose real arc (initSpeed, airFriction, gravity) passes through that point;
 *   3. the zeroing set to the distance (1 m list) whose engine angle is that angle.
 * One loop per player (postInit), active while the player aims a gun with ofcra_gl_fcs = 1 through its sight.
 * Keys: ofcra_gl_fcs_keys (lase), the game's Zeroing Up / Down (100 m steps).
 */

ofcra_gl_fcs_keys = ["LockTarget"];      // input actions that lase (the vehicle lock / lase range key)
ofcra_gl_fcs_tables = createHashMap;     // [ammo, speed, sight angle] -> engine zeroing angle at 0, 5, 10, ... m
ofcra_gl_fcs_flags = createHashMap;      // weapon -> has ofcra_gl_fcs = 1
#define TSTEP 5      // table step (m), interpolated
#define ZMIN 50      // zeroing list: ZMIN..ZMAX in 1 m steps (the weapon's discreteDistance[])
#define ZMAX 3000

ofcra_gl_fcs_fnc_isFcs = {
    params ["_w"];
    ofcra_gl_fcs_flags getOrDefaultCall [_w, { getNumber (configFile >> "CfgWeapons" >> _w >> "ofcra_gl_fcs") == 1 }, true]
};

// height of a round at horizontal distance _X when fired at _e degrees (-1e9: never gets there)
ofcra_gl_fcs_fnc_height = {
    params ["_v", "_k", "_e", "_X"];
    private _dt = 0.01;
    private _vx = _v * cos _e; private _vz = _v * sin _e;
    private _px = 0; private _pz = 0; private _ox = 0; private _oz = 0; private _n = 0;
    while {_px < _X && {_n < 20000} && {_vx > 1}} do {
        _ox = _px; _oz = _pz;
        private _s = sqrt (_vx * _vx + _vz * _vz);
        _vx = _vx + _k * _s * _vx * _dt;
        _vz = _vz + (_k * _s * _vz - 9.81) * _dt;
        _px = _px + _vx * _dt; _pz = _pz + _vz * _dt;
        _n = _n + 1;
    };
    if (_px < _X) exitWith { -1e9 };
    _oz + (_pz - _oz) * (_X - _ox) / (_px - _ox)
};

// the engine's zeroing angle at 0, 5, 10, ... m for a sight line at _los degrees (see the header)
ofcra_gl_fcs_fnc_table = {
    params ["_ammo", "_v", "_k", ["_los", 0]];
    private _key = [_ammo, round _v, _los];
    private _t = ofcra_gl_fcs_tables getOrDefault [_key, []];
    if (_t isNotEqualTo []) exitWith { _t };
    _t = [0];
    private _c = cos _los; private _sn = sin _los;
    private _dt = 0.005;
    private _vx = _v * _c; private _vz = _v * _sn; private _px = 0; private _pz = 0; private _oa = 0; private _op = 0; private _n = 0;
    private _next = TSTEP;
    while {_n < 40000 && {_vx > 1} && {_next <= ZMAX + 500}} do {
        _oa = _px * _c + _pz * _sn; _op = _pz * _c - _px * _sn;          // along / perpendicular to the sight line
        private _s = sqrt (_vx * _vx + _vz * _vz);
        _vx = _vx + _k * _s * _vx * _dt;
        _vz = _vz + (_k * _s * _vz - 9.81) * _dt;
        _px = _px + _vx * _dt; _pz = _pz + _vz * _dt;
        _n = _n + 1;
        private _a = _px * _c + _pz * _sn; private _pp = _pz * _c - _px * _sn;
        while {_next <= _a} do {
            private _pn = _op + (_pp - _op) * (_next - _oa) / ((_a - _oa) max 1e-6);
            _t pushBack (atan (-_pn / _next));
            _next = _next + TSTEP;
        };
    };
    ofcra_gl_fcs_tables set [_key, _t];
    _t
};

// sets the zeroing of the gunner's current weapon to distance _d; returns "ok", "sent" (to the turret's machine) or "FAILED"
ofcra_gl_fcs_fnc_setZero = {
    params ["_veh", "_tp", "_d"];
    private _w = _veh currentWeaponTurret _tp;
    private _g = _veh turretUnit _tp;
    private _z = [_w, _w, (round (_d - ZMIN)) max 0 min (ZMAX - ZMIN)];
    if (_veh setWeaponZeroing _z) exitWith { "ok" };
    if (!isNull _g && {_g setWeaponZeroing _z}) exitWith { "ok" };
    if (!isNull _g && {!local _g}) exitWith { [_g, _z] remoteExecCall ["setWeaponZeroing", _g]; "sent" };
    "FAILED"
};

// sets the zeroing for the current mode: "lase" (the stored lased point, for the loaded magazine) or "manual"
ofcra_gl_fcs_fnc_apply = {
    params ["_veh", "_tp"];
    private _mag = _veh currentMagazineTurret _tp;
    if (_mag == "") exitWith {};
    _veh setVariable ["ofcra_gl_fcs_mag", _mag];
    if ((_veh getVariable ["ofcra_gl_fcs_mode", ""]) == "manual") exitWith {
        [_veh, _tp, _veh getVariable ["ofcra_gl_fcs_manual", 300]] call ofcra_gl_fcs_fnc_setZero;
    };
    (_veh getVariable ["ofcra_gl_fcs_target", []]) params [["_d", -1], ["_los", 0]];
    if (_d < 0) exitWith {};
    private _w = _veh currentWeaponTurret _tp;
    private _magName = getText (configFile >> "CfgMagazines" >> _mag >> "displayNameShort");
    private _ammo = getText (configFile >> "CfgMagazines" >> _mag >> "ammo");
    private _v = getNumber (configFile >> "CfgMagazines" >> _mag >> "initSpeed");
    private _ws = getNumber (configFile >> "CfgWeapons" >> _w >> "initSpeed");
    if (_ws > 0) then { _v = _ws }; if (_ws < 0) then { _v = _v * -_ws };
    private _k = getNumber (configFile >> "CfgAmmo" >> _ammo >> "airFriction");
    private _t = [_ammo, _v, _k, (round (_los * 4)) / 4] call ofcra_gl_fcs_fnc_table;   // sight angle to 0.25 deg
    private _H = _d * cos _los; private _dz = _d * sin _los;
    // gun angle (absolute) whose arc passes through the lased point: bisection on the low arc
    private _lo = _los; private _hi = 45;
    if ((([_v, _k, _hi, _H] call ofcra_gl_fcs_fnc_height) - _dz) < 0) exitWith {
        systemChat format ["FCS: %1 m - out of range for %2", round _d, _magName];
    };
    for "_i" from 1 to 30 do {
        private _m = (_lo + _hi) / 2;
        if ((([_v, _k, _m, _H] call ofcra_gl_fcs_fnc_height) - _dz) < 0) then { _lo = _m } else { _hi = _m };
    };
    private _above = (_lo + _hi) / 2 - _los;           // the gun's angle above the sight line
    // the zeroing distance whose engine angle is _above
    private _i = _t findIf { _x >= _above };
    if (_i < 1) exitWith { systemChat format ["FCS: %1 m - can't aim %2 deg above the sight", round _d, _above toFixed 1] };
    private _a0 = _t select (_i - 1); private _a1 = _t select _i;
    private _fake = TSTEP * ((_i - 1) + (_above - _a0) / ((_a1 - _a0) max 1e-6));
    private _res = [_veh, _tp, _fake] call ofcra_gl_fcs_fnc_setZero;
    systemChat format ["FCS: %1 m, %2 | gun +%3 deg%4", round _d, _magName, _above toFixed 1,
        ["", " | zeroing FAILED", " | zeroing sent to the turret's machine"] select (["ok", "FAILED", "sent"] find _res)];
};

// the vehicle whose FCS gun this player aims through its sight (manned gunner, or UAV terminal gunner), else objNull
ofcra_gl_fcs_fnc_vehicle = {
    private _veh = objectParent player;
    if (!isNull _veh && {gunner _veh isEqualTo player}) exitWith { [objNull, _veh] select (cameraView == "GUNNER") };
    _veh = getConnectedUAV player;
    if (isNull _veh) exitWith { objNull };
    private _uc = UAVControl _veh;
    private _i = _uc find player;
    if (_i >= 0 && {(_uc select (_i + 1)) == "GUNNER"} && {cameraView != "EXTERNAL"}) exitWith { _veh };
    objNull
};

ofcra_gl_fcs_fnc_loop = {
    private _last = objNull; private _wasLase = false; private _wasUp = false; private _wasDown = false;
    while {true} do {
        sleep 0.02;
        private _veh = call ofcra_gl_fcs_fnc_vehicle;
        private _tp = if (isNull _veh) then { [] } else { _veh unitTurret (gunner _veh) };
        if (!isNull _veh && {alive _veh} && {_tp isNotEqualTo []} && {[_veh currentWeaponTurret _tp] call ofcra_gl_fcs_fnc_isFcs}) then {
            if (_veh isNotEqualTo _last) then { _last = _veh; _wasLase = true; _wasUp = true; _wasDown = true };
            private _w = _veh currentWeaponTurret _tp;
            // lase: distance and angle of the point under the crosshair
            private _lase = (ofcra_gl_fcs_keys findIf { inputAction _x > 0 }) >= 0;
            if (_lase && !_wasLase) then {
                private _c0 = AGLToASL positionCameraToWorld [0, 0, 0];
                private _c1 = AGLToASL positionCameraToWorld [0, 0, 5000];
                private _hit = lineIntersectsSurfaces [_c0, _c1, _veh, objNull, true, 1, "VIEW", "GEOM"];
                if (count _hit == 0) then {
                    systemChat "FCS: no range";
                } else {
                    private _p = (_hit select 0) select 0;
                    private _dir = vectorNormalized (_p vectorDiff _c0);
                    _veh setVariable ["ofcra_gl_fcs_target", [_c0 vectorDistance _p, asin (_dir select 2)]];
                    _veh setVariable ["ofcra_gl_fcs_mode", "lase"];
                    [_veh, _tp] call ofcra_gl_fcs_fnc_apply;
                };
            };
            _wasLase = _lase;
            // Zeroing Up / Down: whole 100 m steps (the engine has already moved 1 m; snapped from the current value)
            private _up = inputAction "ZeroingUp" > 0; private _down = inputAction "ZeroingDown" > 0;
            if ((_up && !_wasUp) || (_down && !_wasDown)) then {
                private _cur = ((_veh turretUnit _tp) currentZeroing [_w, _w]) param [0, 300];
                private _new = if (_up) then { ((floor (_cur / 100)) + 1) * 100 } else { ((ceil (_cur / 100)) - 1) * 100 };
                _new = _new max 100 min ZMAX;
                _veh setVariable ["ofcra_gl_fcs_mode", "manual"];
                _veh setVariable ["ofcra_gl_fcs_manual", _new];
                [_veh, _tp, _new] call ofcra_gl_fcs_fnc_setZero;
                sleep 0.05;
                [_veh, _tp, _new] call ofcra_gl_fcs_fnc_setZero;
                systemChat format ["FCS: manual zeroing %1 m", _new];
            };
            _wasUp = _up; _wasDown = _down;
            // magazine changed: the engine resets the zeroing - set it again for the new ammo
            if ((_veh currentMagazineTurret _tp) != (_veh getVariable ["ofcra_gl_fcs_mag", ""])) then {
                sleep 0.3;
                [_veh, _tp] call ofcra_gl_fcs_fnc_apply;
                _veh setVariable ["ofcra_gl_fcs_mag", _veh currentMagazineTurret _tp];
            };
        } else { _last = objNull; _wasLase = false; _wasUp = false; _wasDown = false };
    };
};
