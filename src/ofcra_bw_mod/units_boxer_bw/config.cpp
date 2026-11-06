// With BWMod loaded: the units_boxer vehicles move from NATO to Bundeswehr (Flecktarn) with BW crew.
class CfgPatches
{
	class ofcra_bw_mod_units_boxer_bw
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"ofcra_bw_mod_units_boxer", "bwa3_pzh2000"};
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
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "Boxer IFV";
	};
	class OFCRA_BW_mkk_boxer_m2_b: mkk_boxer_m2_b
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "Boxer M2";
	};
	class OFCRA_BW_mkk_boxer_gmw_b: mkk_boxer_gmw_b
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "Boxer GMW";
	};
	class OFCRA_BW_mkk_boxer_mgs_b: mkk_boxer_mgs_b
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "Boxer MGS";
	};
	class OFCRA_BW_mkk_boxer_ranger_b: mkk_boxer_ranger_b
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "Boxer Skyranger 30";
	};
	class OFCRA_BW_mkk_boxer_unarmed_b: mkk_boxer_unarmed_b
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "Boxer Unarmed";
	};
	class OFCRA_BW_mkk_boxer_med_b: mkk_boxer_med_b
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "Boxer Ambulance";
	};
};
