/*
a: reyhard


*/

params["_v","","","_t"];

// executes everytime someone get out from vehicle
// if both turret are locked perform loop with 0.5s interval till commander station is opened at least
if( (isnull (_v turretUnit [0,2])) && (_v lockedTurret [0,0]) )then
{
	[_v,[0,0],false] call rhs_fnc_setTurretLock;
};