// CC4 skin for the RHS M113A3 (M2/Early) - no gun shield. Used by the CC4 faction (cc4\faction.txt: m113).
// Hand-written, not generated: Build-ModConfigs.ps1 doesn't touch this file.
// The Early hull sheet (camo1) has the same layout as the M113A3 one, so it reuses the CC4 hull texture m113_0.paa.
// Its second sheet (camo2) has a different layout, so it keeps the RHS olive Early texture.
// camo3-5 are the same textures the CC4 M113 uses.
class CfgPatches
{
	class ofcra_cc4_m113_early
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"rhsusf_c_m113",
			"UK3CB_Factions_Vehicles_M113"
		};
	};
};

class CfgVehicles
{
	class rhsusf_m113_usarmy_supply;
	class rhsusf_m113_usarmy_M2_90: rhsusf_m113_usarmy_supply
	{
		class TextureSources
		{
			class OFCRA_CC4
			{
				displayName = "OFCRA CC4";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_cc4\m113\m113_0.paa",
					"\rhsusf\addons\rhsusf_m113\data_90s\m113a3_02_od_h_90s_co.paa",
					"\uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_m113\data\ion_b_m113a3_03_co.paa",
					"\rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa",
					"\uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_m113\data\ion_b_m23_pintle_co.paa"
				};
				factions[] = {};
			};
		};
	};
};
