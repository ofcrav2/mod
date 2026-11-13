// M1A1 (RHS USAF): 8 rounds of OFCRA 12cm HE added to the main gun load.
// rhs_mag_M1069 is one 8-round magazine and fires OFCRA_12cm_BASE (see ../config.cpp).
// RHS sets the main gun load in these 4 classes; every other M1A1 (aim wd/d, tusk d, fep wd/od,
// and the OFCRA Polish ones in ofcra_psz) inherits from one of them.
// Full lists ("=" replaces RHS's): 28 AP + 8 HEAT + 8 HE, MGs, laser rangefinder.
class CfgPatches
{
	class ofcra_rhs_usf_m1a1
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"rhsusf_c_m1a1",
			"ofcra_rhs_usf"
		};
	};
};

class CfgVehicles
{
	class Tank;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class MBT_01_base_F: Tank_F {};

	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					"rhs_mag_M829A3",   // 28 AP
					"rhs_mag_M830A1",   // 8 HEAT
					"rhs_mag_M1069",   // 8 HE (OFCRA)
					"rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200",   // 9 mags
					"rhs_laserfcsmag", "rhs_laserfcsmag"   // 2 mags
				};
			};
		};
	};
	class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					"rhs_mag_M829A3",   // 28 AP
					"rhs_mag_M830A1",   // 8 HEAT
					"rhs_mag_M1069",   // 8 HE (OFCRA)
					"rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red",   // TUSK M2
					"rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200",   // 9 mags
					"rhs_laserfcsmag", "rhs_laserfcsmag"   // 2 mags
				};
			};
		};
	};
	class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					"rhs_mag_M829A3",   // 28 AP
					"rhs_mag_M830A1",   // 8 HEAT
					"rhs_mag_M1069",   // 8 HE (OFCRA)
					"rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200",   // 9 mags
					"rhs_laserfcsmag", "rhs_laserfcsmag"   // 2 mags
				};
			};
		};
	};
	class rhsusf_m1a1hc_wd: rhsusf_m1a1tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					"rhs_mag_M829A1",   // 28 AP
					"rhs_mag_M830A1",   // 8 HEAT
					"rhs_mag_M1069",   // 8 HE (OFCRA)
					"rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200", "rhs_mag_762x51_M240_1200",   // 9 mags
					"rhs_laserfcsmag", "rhs_laserfcsmag"   // 2 mags
				};
			};
		};
	};
};
