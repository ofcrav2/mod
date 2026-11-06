// OFCRA Woodland for the 3CB BAF MAN trucks: a generated blob pattern in the BWMod PzH 2000 colours
// (green / brown / black), made with arma3-textures\New-CamoXcf.ps1 from camo\woodland.txt.
// Each truck type's base class has its own TextureSources (Green / Sand), so each gets the entry, with the
// type's own rear part: transport (rear interior), cargo (container), fuel (tank), repair (body, + HX58 crane).
// Number plates stay as they are.
// In a mission:  [_veh, ["OFCRA_Woodland", 1]] call BIS_fnc_initVehicle;
class CfgPatches
{
	class ofcra_bw_mod_man_woodland
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"UK3CB_BAF_Vehicles_MAN"};
	};
};

class CfgVehicles
{
	class UK3CB_BAF_MAN_HX60_Base;
	class UK3CB_BAF_MAN_HX58_Base;
	class UK3CB_BAF_MAN_HX60_Transport_Base: UK3CB_BAF_MAN_HX60_Base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
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
				factions[] = {};
			};
		};
	};
	class UK3CB_BAF_MAN_HX60_Cargo_Base: UK3CB_BAF_MAN_HX60_Base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
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
				factions[] = {};
			};
		};
	};
	class UK3CB_BAF_MAN_HX60_Fuel_Base: UK3CB_BAF_MAN_HX60_Base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
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
				factions[] = {};
			};
		};
	};
	class UK3CB_BAF_MAN_HX60_Repair_Base: UK3CB_BAF_MAN_HX60_Base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
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
				factions[] = {};
			};
		};
	};
	class UK3CB_BAF_MAN_HX58_Transport_Base: UK3CB_BAF_MAN_HX58_Base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
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
				factions[] = {};
			};
		};
	};
	class UK3CB_BAF_MAN_HX58_Cargo_Base: UK3CB_BAF_MAN_HX58_Base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
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
				factions[] = {};
			};
		};
	};
	class UK3CB_BAF_MAN_HX58_Fuel_Base: UK3CB_BAF_MAN_HX58_Base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
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
				factions[] = {};
			};
		};
	};
	class UK3CB_BAF_MAN_HX58_Repair_Base: UK3CB_BAF_MAN_HX58_Base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
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
				factions[] = {};
			};
		};
	};
};
