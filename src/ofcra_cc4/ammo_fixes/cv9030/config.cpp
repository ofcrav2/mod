// CC4: CV90/30 (mkk_cv_9030) Mk44 HEI -> OFCRA autocannon HE.
// mkk_ammo_30mm_he_mk44 inherits B_30mm_HE but overrides the damage (hit 40, indirectHit 10, range 4).
class CfgPatches
{
	class ofcra_cc4_ammo_cv9030
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"mkk_cv_9030",
			"ofcra_ammo_base"
		};
	};
};

class CfgMagazines
{
	class rhs_mag_3uof8_150;
	class mkk_mag_mk44_he_80rnd: rhs_mag_3uof8_150
	{
		ammo = "OFCRA_AUTOCANNON_HE";
	};
};
