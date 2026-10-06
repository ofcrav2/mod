// CC4: Warrior (mkk warrior_c) 30mm Rarden HE -> OFCRA autocannon HE.
// mkk_ammo_warrior_he inherits B_30mm_HE but overrides the damage (hit 40, indirectHit 10, range 4).
class CfgPatches
{
	class ofcra_cc4_ammo_warrior
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"warrior_c",
			"ofcra_ammo_base"
		};
	};
};

class CfgMagazines
{
	class 140Rnd_30mm_MP_shells_Tracer_Green;
	class mkk_warrior_mag_he: 140Rnd_30mm_MP_shells_Tracer_Green
	{
		ammo = "OFCRA_AUTOCANNON_HE";
	};
};
