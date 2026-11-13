// Leopard 2A6M (BWMod): 8 rounds of OFCRA 12cm HE added to the main gun load
// (BWA3_1Rnd_HE_shells fires OFCRA_12cm_BASE - see ../pzh2000/config.cpp).
// Full list ("=" replaces BWMod's): 25 KE + 12 HEAT (MZ) + 8 HE, coax MG.
class CfgPatches
{
	class ofcra_bw_mod_leopard2
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"bwa3_leopard2",
			"ofcra_bw_mod_pzh2000"
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
	// BWA3_Leopard2_Fleck and _Tropen both inherit this turret
	class BWA3_Leopard_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] =
				{
					"BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells", "BWA3_1Rnd_KE_shells",   // 25
					"BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells", "BWA3_1Rnd_MZ_shells",   // 12
					"BWA3_1Rnd_HE_shells", "BWA3_1Rnd_HE_shells", "BWA3_1Rnd_HE_shells", "BWA3_1Rnd_HE_shells", "BWA3_1Rnd_HE_shells", "BWA3_1Rnd_HE_shells", "BWA3_1Rnd_HE_shells", "BWA3_1Rnd_HE_shells",   // 8
					"BWA3_1200Rnd_762x51", "BWA3_1200Rnd_762x51", "BWA3_1200Rnd_762x51"   // 3
				};
			};
		};
	};
};
