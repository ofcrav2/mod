class CfgPatches
{
	class ofcra_3cb_police_hilux
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]={};
		requiredAddons[]=
		{
			"UK3CB_Factions_Vehicles_hilux",
			"ofcra_3cb_police"
		};
	};
};

class CfgVehicles
{
	class Car_F;
	class UK3CB_Hilux_Base: Car_F
	{
		class TextureSources
		{
			class OFCRA_POLICE_SWEDISH
			{
				displayName = "OFCRA Police Swedish";
				textures[] = {
					"\ofcra_3cb_police\hilux\sweden.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
					"uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\armour\rusty_metal_armour_co.paa"
				};
				factions[] = {};
			};
			class OFCRA_POLICE_GENERIC
			{
				displayName = "OFCRA Police Generic";
				textures[] = {
					"\ofcra_3cb_police\hilux\generic.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
					"uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\armour\rusty_metal_armour_co.paa"
				};
				factions[] = {};
			};
		}
	};

	class UK3CB_Hilux_Closed: UK3CB_Hilux_Base{
		class TextureSources
		{
			class OFCRA_POLICE_SWEDISH
			{
				displayName = "OFCRA Police Swedish";
				textures[] = {
					"\ofcra_3cb_police\hilux\sweden.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
					"uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\armour\rusty_metal_armour_co.paa"
				};
				factions[] = {};
			};
			class OFCRA_POLICE_GENERIC
			{
				displayName = "OFCRA Police Generic";
				textures[] = {
					"\ofcra_3cb_police\hilux\generic.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
					"uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\armour\rusty_metal_armour_co.paa"
				};
				factions[] = {};
			};
		}
	};	
	class UK3CB_B_Hilux_Closed_APD: UK3CB_Hilux_Closed{
		class TextureSources
		{
			class OFCRA_POLICE_SWEDISH
			{
				displayName = "OFCRA Police Swedish";
				textures[] = {
					"\ofcra_3cb_police\hilux\sweden.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
					"uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\armour\rusty_metal_armour_co.paa"
				};
				factions[] = {};
			};
			class OFCRA_POLICE_GENERIC
			{
				displayName = "OFCRA Police Generic";
				textures[] = {
					"\ofcra_3cb_police\hilux\generic.paa",
					"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
					"uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\armour\rusty_metal_armour_co.paa"
				};
				factions[] = {};
			};
		}
	};

	class OFCRA_POLICE_HILUX_SWEDEN: UK3CB_B_Hilux_Closed_APD
	{
		displayName = "Police Hilux (Sweden)";
		author = "wombat";
		hiddenSelectionsTextures[] = {
			"\ofcra_3cb_police\hilux\sweden.paa",
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
			"uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\armour\rusty_metal_armour_co.paa"
		};

		textureList[] = {"OFCRA_POLICE_SWEDISH",1};
	};

	class OFCRA_B_POLICE_HILUX_SWEDEN: OFCRA_POLICE_HILUX_SWEDEN
	{
		side = 1;
		crew = "B_G_soldier_F";
		faction = "OFCRA_Police_Faction";
		scope = 2;
	}

	class OFCRA_POLICE_HILUX_GENERIC: UK3CB_B_Hilux_Closed_APD
	{
		displayName = "Police Hilux (Generic)";
		author = "wombat";
		hiddenSelectionsTextures[] = {
			"\ofcra_3cb_police\hilux\generic.paa",
			"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa",
			"uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\armour\rusty_metal_armour_co.paa"
		};
		textureList[] = {"OFCRA_POLICE_GENERIC",1};
	};

	class OFCRA_B_POLICE_HILUX_GENERIC: OFCRA_POLICE_HILUX_GENERIC
	{
		side = 1;
		crew = "B_G_soldier_F";
		faction = "OFCRA_Police_Faction";
		scope = 2;
	};
	
};
