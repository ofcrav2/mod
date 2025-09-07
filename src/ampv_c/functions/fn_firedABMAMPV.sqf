params ["_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

if(!local _gunner) exitWith{};

if (_vehicle getVariable ["AAmode",false] == true) then {
    [{
        params ["_projectile"];

        if (!alive _projectile) exitWith {
            true
        };
        private _target = _projectile nearObjects ["Air",5] select {((getPos _x) select 2 > 20) && !(_x isKindOf "ParachuteBase")};
        if (count _target > 0) exitWith {
            _ab = "lk_M789_Prox" createVehicle (_projectile modelToWorld [0,0,random[2, 3 ,4]]);
            deleteVehicle _projectile;        
            true
        };

        false // continue
    }, {}, [_projectile]] call CBA_fnc_waitUntilAndExecute;
} else {
// hint "1";
};