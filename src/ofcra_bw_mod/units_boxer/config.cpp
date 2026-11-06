// Boxer in OFCRA Woodland, every type, as placeable vehicles. In NATO (BLU_F, "(Woodland)" in the name) when
// BWMod is missing; units_boxer_bw moves them to Bundeswehr (Flecktarn), named as the originals.
class CfgPatches
{
	class ofcra_bw_mod_units_boxer
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {
			"OFCRA_BW_mkk_boxer_ifv_b",
			"OFCRA_BW_mkk_boxer_m2_b",
			"OFCRA_BW_mkk_boxer_gmw_b",
			"OFCRA_BW_mkk_boxer_mgs_b",
			"OFCRA_BW_mkk_boxer_ranger_b",
			"OFCRA_BW_mkk_boxer_unarmed_b",
			"OFCRA_BW_mkk_boxer_med_b"
		};
		weapons[] = {};
		requiredAddons[] = {"boxer_c", "ofcra_bw_mod_boxer_woodland"};
	};
};

class CfgVehicles
{
	class mkk_boxer_ifv_b;
	class mkk_boxer_m2_b;
	class mkk_boxer_gmw_b;
	class mkk_boxer_mgs_b;
	class mkk_boxer_ranger_b;
	class mkk_boxer_unarmed_b;
	class mkk_boxer_med_b;

	class OFCRA_BW_mkk_boxer_ifv_b: mkk_boxer_ifv_b
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "Boxer IFV (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_2.paa"
		};
	};
	class OFCRA_BW_mkk_boxer_m2_b: mkk_boxer_m2_b
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "Boxer M2 (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_2.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_rws_3.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_rws_4.paa"
		};
	};
	class OFCRA_BW_mkk_boxer_gmw_b: mkk_boxer_gmw_b
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "Boxer GMW (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_2.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_rws_3.paa"
		};
	};
	class OFCRA_BW_mkk_boxer_mgs_b: mkk_boxer_mgs_b
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "Boxer MGS (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_mgs_1.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_mgs_2.paa"
		};
	};
	class OFCRA_BW_mkk_boxer_ranger_b: mkk_boxer_ranger_b
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "Boxer Skyranger 30 (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_ranger_2.paa"
		};
	};
	class OFCRA_BW_mkk_boxer_unarmed_b: mkk_boxer_unarmed_b
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "Boxer Unarmed (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_2.paa"
		};
	};
	class OFCRA_BW_mkk_boxer_med_b: mkk_boxer_med_b
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "Boxer Ambulance (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
			"ofcra_bw_mod\boxer_woodland\boxer_woodland_2.paa"
		};
	};
};
