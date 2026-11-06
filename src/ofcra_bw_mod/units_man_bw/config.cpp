// With BWMod loaded: the units_man vehicles move from NATO to Bundeswehr (Flecktarn) with BW crew.
class CfgPatches
{
	class ofcra_bw_mod_units_man_bw
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"ofcra_bw_mod_units_man", "bwa3_pzh2000"};
	};
};

class CfgVehicles
{
	class UK3CB_BAF_MAN_HX60_Transport_Green;
	class UK3CB_BAF_MAN_HX60_Cargo_Green_A;
	class UK3CB_BAF_MAN_HX60_Cargo_Green_B;
	class UK3CB_BAF_MAN_HX60_Fuel_Green;
	class UK3CB_BAF_MAN_HX60_Repair_Green;
	class UK3CB_BAF_MAN_HX58_Transport_Green;
	class UK3CB_BAF_MAN_HX58_Cargo_Green_A;
	class UK3CB_BAF_MAN_HX58_Cargo_Green_B;
	class UK3CB_BAF_MAN_HX58_Fuel_Green;
	class UK3CB_BAF_MAN_HX58_Repair_Green;

	class OFCRA_BW_UK3CB_BAF_MAN_HX60_Transport_Green: UK3CB_BAF_MAN_HX60_Transport_Green
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX60 4x4 Transport";
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX60_Cargo_Green_A: UK3CB_BAF_MAN_HX60_Cargo_Green_A
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX60 4x4 Cargo Empty";
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX60_Cargo_Green_B: UK3CB_BAF_MAN_HX60_Cargo_Green_B
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX60 4x4 Cargo Loaded";
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX60_Fuel_Green: UK3CB_BAF_MAN_HX60_Fuel_Green
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX60 4x4 Fuel";
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX60_Repair_Green: UK3CB_BAF_MAN_HX60_Repair_Green
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX60 4x4 Repair";
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Transport_Green: UK3CB_BAF_MAN_HX58_Transport_Green
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX58 6x6 Transport";
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Cargo_Green_A: UK3CB_BAF_MAN_HX58_Cargo_Green_A
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX58 6x6 Cargo Empty";
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Cargo_Green_B: UK3CB_BAF_MAN_HX58_Cargo_Green_B
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX58 6x6 Cargo Loaded";
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Fuel_Green: UK3CB_BAF_MAN_HX58_Fuel_Green
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX58 6x6 Fuel";
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Repair_Green: UK3CB_BAF_MAN_HX58_Repair_Green
	{
		faction = "BWA3_Faction_Fleck";
		crew = "BWA3_Crew_Fleck";
		typicalCargo[] = {"BWA3_Crew_Fleck"};
		displayName = "MAN HX58 6x6 Repair";
	};
};
