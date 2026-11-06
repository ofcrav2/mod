// OFCRA Polish Olive for the RHS M1A1 (AIM, TUSK I, FEP, HC; not the M1A2). Unused slots (US decals) blank.
// Made with arma3-textures\New-CamoXcf.ps1 (camo\olive.txt). In a mission:  [_veh, ["OFCRA_PL_Olive", 1]] call BIS_fnc_initVehicle;
class CfgPatches
{
	class ofcra_psz_m1a1_olive
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"rhsusf_c_m1a1"};
	};
};

class CfgVehicles
{
	class MBT_01_base_F;
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
		class TextureSources
		{
			class OFCRA_PL_Olive
			{
				displayName = "OFCRA Polish Olive";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_psz\m1a1_olive\m1a1_olive_0.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_1.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_2.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_3.paa",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					""
				};
				factions[] = {};
			};
		};
	};
	class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base
	{
		class TextureSources
		{
			class OFCRA_PL_Olive
			{
				displayName = "OFCRA Polish Olive";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_psz\m1a1_olive\m1a1_olive_tusk_0.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_tusk_1.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_2.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_tusk_3.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_tusk_4.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_tusk_5.paa",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					""
				};
				factions[] = {};
			};
		};
	};
	class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base
	{
		class TextureSources
		{
			class OFCRA_PL_Olive
			{
				displayName = "OFCRA Polish Olive";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_psz\m1a1_olive\m1a1_olive_0.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_1.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_2.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_3.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_fep_4.paa",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					""
				};
				factions[] = {};
			};
		};
	};
	class rhsusf_m1a1hc_wd: rhsusf_m1a1tank_base
	{
		class TextureSources
		{
			class OFCRA_PL_Olive
			{
				displayName = "OFCRA Polish Olive";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_psz\m1a1_olive\m1a1_olive_0.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_1.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_2.paa",
					"ofcra_psz\m1a1_olive\m1a1_olive_3.paa",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					"",
					""
				};
				factions[] = {};
			};
		};
	};
};
