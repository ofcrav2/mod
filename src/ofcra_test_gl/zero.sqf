/*
 * TEST: fire control for the TEST Stomper (gun raise FCS), using the game's own zeroing.
 *
 * The engine's zeroing angle for distance D (the gun's angle above the sight line) is measured in game: the drop of a
 * shot fired ALONG the sight line, perpendicular to that line, D metres along it, as an angle. That is fine for flat
 * shots but lands lobbed grenades short. So:
 *   - lasing (input actions in ofcra_test_zero_keys, default the vehicle lock / lase key) measures the distance and
 *     angle to the point under the crosshair;
 *   - the real arc is simulated to find the gun angle that hits that point (speed / drag of the loaded magazine);
 *   - the zeroing is set to the "distance" (1 m table 50..3000 m) whose engine angle IS that angle; the engine raises
 *     the gun and fires every round at it (fire rate, HUD, weapons and multiplayer all stock).
 *   - Page Up / Down (zeroing up / down) step the zeroing in whole 100 m (manual mode, plain engine zeroing).
 *   - after a magazine change the zeroing is set again for the new ammo (the engine resets it).
 * Runs on the gunner's machine.
 */

ofcra_test_zero_keys = ["LockTarget"];   // input actions that lase (the vehicle lock / lase range key)
ofcra_test_zero_weapons = ["OFCRA_TEST_MK19_ZERO", "OFCRA_TEST_AGS_ZERO"] apply { toLowerANSI _x };
ofcra_test_zero_tables = createHashMap;
#define TSTEP 5      // table step (m), interpolated
#define ZMIN 50      // zeroing list: ZMIN..ZMAX in 1 m steps (config discreteDistance[])
#define ZMAX 3000

// height of a round at horizontal distance _X when fired at _e degrees (-1e9: never gets there)
ofcra_test_zero_fnc_height = {
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

// the engine's zeroing angle at 0, 5, 10, ... m for a sight line at _los degrees (see the header). Measured: sight
// -3.55 deg / zero 1745 m -> 15.05 deg, -2.44 / 2100 -> 20.90, level / 1370 -> 10.70: matched to ~0.05 deg.
ofcra_test_zero_fnc_table = {
    params ["_ammo", "_v", "_k", ["_los", 0]];
    private _key = [_ammo, round _v, _los];
    private _t = ofcra_test_zero_tables getOrDefault [_key, []];
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
    ofcra_test_zero_tables set [_key, _t];
    _t
};

// sets the zeroing to distance _d (1 m list); returns true when it took
ofcra_test_zero_fnc_setZero = {
    params ["_veh", "_d"];
    private _w = _veh currentWeaponTurret [0];
    private _idx = (round (_d - ZMIN)) max 0 min (ZMAX - ZMIN);
    private _ok = _veh setWeaponZeroing [_w, _w, _idx];
    if (!_ok) then { _ok = (gunner _veh) setWeaponZeroing [_w, _w, _idx] };
    _ok
};

// sets the zeroing for the current mode: "lase" (the stored lased point, for the loaded magazine) or "manual"
ofcra_test_zero_fnc_apply = {
    params ["_veh"];
    private _mag = _veh currentMagazineTurret [0];
    if (_mag == "") exitWith {};
    _veh setVariable ["ofcra_test_zero_mag", _mag];
    if ((_veh getVariable ["ofcra_test_zero_mode", ""]) == "manual") exitWith {
        [_veh, _veh getVariable ["ofcra_test_zero_manual", 300]] call ofcra_test_zero_fnc_setZero;
    };
    (_veh getVariable ["ofcra_test_zero_target", []]) params [["_d", -1], ["_los", 0]];
    if (_d < 0) exitWith {};
    private _w = _veh currentWeaponTurret [0];
    private _ammo = getText (configFile >> "CfgMagazines" >> _mag >> "ammo");
    private _v = getNumber (configFile >> "CfgMagazines" >> _mag >> "initSpeed");
    private _ws = getNumber (configFile >> "CfgWeapons" >> _w >> "initSpeed");
    if (_ws > 0) then { _v = _ws }; if (_ws < 0) then { _v = _v * -_ws };
    private _k = getNumber (configFile >> "CfgAmmo" >> _ammo >> "airFriction");
    private _t = [_ammo, _v, _k, (round (_los * 4)) / 4] call ofcra_test_zero_fnc_table;   // sight angle to 0.25 deg
    private _H = _d * cos _los; private _dz = _d * sin _los;
    // gun angle (absolute) whose arc passes through the lased point: bisection on the low arc
    private _lo = _los; private _hi = 45;
    if ((([_v, _k, _hi, _H] call ofcra_test_zero_fnc_height) - _dz) < 0) exitWith {
        systemChat format ["FCS: %1 m is out of range for %2", round _d, getText (configFile >> "CfgMagazines" >> _mag >> "displayName")];
    };
    for "_i" from 1 to 30 do {
        private _m = (_lo + _hi) / 2;
        if ((([_v, _k, _m, _H] call ofcra_test_zero_fnc_height) - _dz) < 0) then { _lo = _m } else { _hi = _m };
    };
    private _gun = (_lo + _hi) / 2;
    private _above = _gun - _los;                        // the gun's angle above the sight line
    // the zeroing distance whose engine angle is _above
    private _i = _t findIf { _x >= _above };
    if (_i < 1) exitWith { systemChat format ["FCS: can't set %1 deg above the sight", _above toFixed 2] };
    private _a0 = _t select (_i - 1); private _a1 = _t select _i;
    private _fake = TSTEP * ((_i - 1) + (_above - _a0) / ((_a1 - _a0) max 1e-6));
    private _ok = [_veh, _fake] call ofcra_test_zero_fnc_setZero;
    systemChat format ["FCS: %1 m (sight %2) | gun %3 deg above sight | zeroing set to %4 m | %5",
        round _d, _los toFixed 2, _above toFixed 2, round _fake, ["FAILED", "ok"] select _ok];
};

// is this player the gunner (manned or UAV) of _veh, looking through the sight?
ofcra_test_zero_fnc_mine = {
    params ["_veh"];
    if (gunner _veh isEqualTo player) exitWith { cameraView == "GUNNER" };
    private _uc = UAVControl _veh;
    private _i = _uc find player;
    _i >= 0 && {(_uc select (_i + 1)) == "GUNNER"} && {cameraView != "EXTERNAL"}
};

ofcra_test_zero_fnc_loop = {
    params ["_veh"];
    private _wasLase = false; private _wasUp = false; private _wasDown = false;
    while {!isNull _veh && {alive _veh}} do {
        sleep 0.02;
        if ([_veh] call ofcra_test_zero_fnc_mine && {toLowerANSI (_veh currentWeaponTurret [0]) in ofcra_test_zero_weapons}) then {
            private _w = _veh currentWeaponTurret [0];
            // lase: distance and angle of the point under the crosshair
            private _lase = (ofcra_test_zero_keys findIf { inputAction _x > 0 }) >= 0;
            if (_lase && !_wasLase) then {
                private _c0 = AGLToASL positionCameraToWorld [0, 0, 0];
                private _c1 = AGLToASL positionCameraToWorld [0, 0, 5000];
                private _hit = lineIntersectsSurfaces [_c0, _c1, _veh, objNull, true, 1, "VIEW", "GEOM"];
                if (count _hit == 0) then {
                    systemChat "FCS: no range (nothing under the crosshair)";
                } else {
                    private _p = (_hit select 0) select 0;
                    private _dir = vectorNormalized (_p vectorDiff _c0);
                    _veh setVariable ["ofcra_test_zero_target", [_c0 vectorDistance _p, asin (_dir select 2)]];
                    _veh setVariable ["ofcra_test_zero_mode", "lase"];
                    [_veh] call ofcra_test_zero_fnc_apply;
                };
            };
            _wasLase = _lase;
            // Page Up / Down: whole 100 m steps (the engine has moved 1 m by now; from the current value either way)
            private _up = inputAction "ZeroingUp" > 0; private _down = inputAction "ZeroingDown" > 0;
            if ((_up && !_wasUp) || (_down && !_wasDown)) then {
                private _cur = ((gunner _veh) currentZeroing [_w, _w]) param [0, 300];
                private _new = if (_up) then { ((floor (_cur / 100)) + 1) * 100 } else { ((ceil (_cur / 100)) - 1) * 100 };
                _new = _new max 100 min ZMAX;
                _veh setVariable ["ofcra_test_zero_mode", "manual"];
                _veh setVariable ["ofcra_test_zero_manual", _new];
                [_veh, _new] call ofcra_test_zero_fnc_setZero;
                sleep 0.05;
                [_veh, _new] call ofcra_test_zero_fnc_setZero;
                systemChat format ["FCS: manual zeroing %1 m", _new];
            };
            _wasUp = _up; _wasDown = _down;
            // magazine changed: the engine resets the zeroing - set it again for the new ammo
            if ((_veh currentMagazineTurret [0]) != (_veh getVariable ["ofcra_test_zero_mag", ""])) then {
                sleep 0.3;
                [_veh] call ofcra_test_zero_fnc_apply;
                _veh setVariable ["ofcra_test_zero_mag", _veh currentMagazineTurret [0]];
            };
        } else { _wasLase = false; _wasUp = false; _wasDown = false };
    };
};
