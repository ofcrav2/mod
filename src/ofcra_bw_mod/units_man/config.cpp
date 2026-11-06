// 3CB BAF MAN HX60 / HX58 in OFCRA Woodland, every type, as placeable vehicles. In NATO (BLU_F) when BWMod is
// missing; units_man_bw moves them to Bundeswehr (Flecktarn).
class CfgPatches
{
	class ofcra_bw_mod_units_man
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {
			"OFCRA_BW_UK3CB_BAF_MAN_HX60_Transport_Green",
			"OFCRA_BW_UK3CB_BAF_MAN_HX60_Cargo_Green_A",
			"OFCRA_BW_UK3CB_BAF_MAN_HX60_Cargo_Green_B",
			"OFCRA_BW_UK3CB_BAF_MAN_HX60_Fuel_Green",
			"OFCRA_BW_UK3CB_BAF_MAN_HX60_Repair_Green",
			"OFCRA_BW_UK3CB_BAF_MAN_HX58_Transport_Green",
			"OFCRA_BW_UK3CB_BAF_MAN_HX58_Cargo_Green_A",
			"OFCRA_BW_UK3CB_BAF_MAN_HX58_Cargo_Green_B",
			"OFCRA_BW_UK3CB_BAF_MAN_HX58_Fuel_Green",
			"OFCRA_BW_UK3CB_BAF_MAN_HX58_Repair_Green"
		};
		weapons[] = {};
		requiredAddons[] = {"UK3CB_BAF_Vehicles_MAN", "ofcra_bw_mod_man_woodland"};
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
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX60 4x4 Transport (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_9.paa"
		};
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX60_Cargo_Green_A: UK3CB_BAF_MAN_HX60_Cargo_Green_A
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX60 4x4 Cargo Empty (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_cargo_9.paa"
		};
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX60_Cargo_Green_B: UK3CB_BAF_MAN_HX60_Cargo_Green_B
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX60 4x4 Cargo Loaded (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_cargo_9.paa"
		};
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX60_Fuel_Green: UK3CB_BAF_MAN_HX60_Fuel_Green
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX60 4x4 Fuel (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_fuel_9.paa"
		};
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX60_Repair_Green: UK3CB_BAF_MAN_HX60_Repair_Green
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX60 4x4 Repair (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_repair_9.paa"
		};
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Transport_Green: UK3CB_BAF_MAN_HX58_Transport_Green
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX58 6x6 Transport (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_9.paa"
		};
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Cargo_Green_A: UK3CB_BAF_MAN_HX58_Cargo_Green_A
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX58 6x6 Cargo Empty (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_cargo_9.paa"
		};
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Cargo_Green_B: UK3CB_BAF_MAN_HX58_Cargo_Green_B
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX58 6x6 Cargo Loaded (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_cargo_9.paa"
		};
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Fuel_Green: UK3CB_BAF_MAN_HX58_Fuel_Green
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX58 6x6 Fuel (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_fuel_9.paa"
		};
	};
	class OFCRA_BW_UK3CB_BAF_MAN_HX58_Repair_Green: UK3CB_BAF_MAN_HX58_Repair_Green
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		displayName = "MAN HX58 6x6 Repair (Woodland)";
		textureList[] = {"OFCRA_Woodland", 1};
		hiddenSelectionsTextures[] =
		{
			"",
			"",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_man\data\number0_co.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_4.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_5.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_6.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_7.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_8.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_repair_9.paa",
			"ofcra_bw_mod\man_woodland\man_woodland_repair_10.paa"
		};
	};
};
