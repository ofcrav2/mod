/*
    OFCRA TEST - HEAT variant S (OFCRA_TEST_12cm_HEAT_S). TEMPORARY: delete with the ofcra_test_he addon.

    The shell's penetrator comes from config. This adds the fragment burst: when an S shell explodes, an
    OFCRA_TEST_HEAT_BURST is dropped 1 m behind the explosion point, flying on along the shell's line, so it
    hits the same surface straight away and throws the HEAT fragment cone. It gets the shell's shooter.

    Runs at mission start on every machine (postInit). Only the machine that owns the shooter spawns the
    burst, so it happens once in multiplayer. balance_test.sqf also calls OFCRA_TEST_heatHook directly.
*/
OFCRA_TEST_heatHook = {
    params ["_p"];
    if (isNull _p || { _p getVariable ["ofcra_heat_hooked", false] }) exitWith {};
    _p setVariable ["ofcra_heat_hooked", true];
    _p addEventHandler ["Explode", {
        params ["_p", "_pos", "_vel"];
        (getShotParents _p) params [["_veh", objNull], ["_who", objNull]];
        private _owner = if (isNull _who) then { _veh } else { _who };
        if (!isNull _owner && { !local _owner }) exitWith {};
        private _dir = vectorNormalized _vel;
        if (_dir isEqualTo [0, 0, 0]) then { _dir = [0, 0, -1] };
        private _b = createVehicle ["OFCRA_TEST_HEAT_BURST", [0, 0, 5000], [], 0, "CAN_COLLIDE"];
        _b setPosASL (_pos vectorDiff (_dir vectorMultiply 1));
        _b setVectorDir _dir;
        _b setVelocity (_dir vectorMultiply 40);
        if (!isNull _veh) then { _b setShotParents [_veh, _who] };
    }];
};

if (isNil "ofcra_test_heat_peh") then {
    ofcra_test_heat_peh = addMissionEventHandler ["ProjectileCreated", {
        params ["_p"];
        if (typeOf _p == "OFCRA_TEST_12cm_HEAT_S") then { [_p] call OFCRA_TEST_heatHook };
    }];
};
