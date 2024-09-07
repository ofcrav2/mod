class CfgPatches
{
	class ofcra_3cb_police_suv
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]={};

		requiredAddons[]=
		{
			"UK3CB_Factions_Vehicles_SUV",
			"ofcra_3cb_police"
		};

	};
};

//["UK3CB_B_SUV_Armoured","UK3CB_SUV_Armoured_Base","UK3CB_SUV_Base","Car_F","Car","LandVehicle","Land","AllVehicles","All"]

class CfgVehicles
{
	class Car_F;
	class UK3CB_SUV_Base: Car_F
	{
		class TextureSources
		{
			class OFCRA_POLICE_SWEDISH
			{
				displayName = "OFCRA Police Swedish";
				textures[] = {
					"\ofcra_3cb_police\suv\sweden.paa",
					"\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\lightbar_co.paa"
				};
				factions[] = {};
			};
			class OFCRA_POLICE_GENERIC
			{
				displayName = "OFCRA Police Generic";
				textures[] = {
					"\ofcra_3cb_police\suv\generic.paa",
					"\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\lightbar_co.paa"
				};
				factions[] = {};
			};
		}
	};

	class UK3CB_SUV: UK3CB_SUV_Base{};	
	class UK3CB_SUV_Pol: UK3CB_SUV{
		class TextureSources
		{
			class OFCRA_POLICE_SWEDISH
			{
				displayName = "OFCRA Police Swedish";
				textures[] = {
					"\ofcra_3cb_police\suv\sweden.paa",
					"\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\lightbar_co.paa"
				};
				factions[] = {};
			};
			class OFCRA_POLICE_GENERIC
			{
				displayName = "OFCRA Police Generic";
				textures[] = {
					"\ofcra_3cb_police\suv\generic.paa",
					"\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\lightbar_co.paa"
				};
				factions[] = {};
			};
		}
	};

	class OFCRA_POLICE_SUV_SWEDEN: UK3CB_SUV_Pol
	{
		displayName = "Police SUV (Sweden)";
		author = "wombat";
		hiddenSelectionsTextures[] = {
			"\ofcra_3cb_police\suv\sweden.paa",
			"\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\lightbar_co.paa"
		};

		textureList[] = {"OFCRA_POLICE_SWEDISH",1};
	};

	
	class OFCRA_B_POLICE_SUV_SWEDEN: OFCRA_POLICE_SUV_SWEDEN
	{
		side = 1;
		crew = "B_G_soldier_F";
		faction = "OFCRA_Police_Faction";
		scope = 2;
	};

	class OFCRA_POLICE_SUV_GENERIC: UK3CB_SUV_Pol
	{
		displayName = "Police SUV (Generic)";
		author = "wombat";
		hiddenSelectionsTextures[] = {
			"\ofcra_3cb_police\suv\generic.paa",
			"\uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\lightbar_co.paa"
		};
		textureList[] = {"OFCRA_POLICE_GENERIC",1};
	};

	class OFCRA_B_POLICE_SUV_GENERIC: OFCRA_POLICE_SUV_GENERIC
	{
		side = 1;
		crew = "B_G_soldier_F";
		faction = "OFCRA_Police_Faction";
		scope = 2;
	};


	class UK3CB_SUV_Armoured_Base: UK3CB_SUV_Base
	{
		class TextureSources
		{
			class OFCRA_POLICE_SWEDISH
			{
				displayName = "OFCRA Police Swedish";
				textures[] = {
					"\ofcra_3cb_police\suv\sweden.paa",
				};
				factions[] = {};
			};
			class OFCRA_POLICE_GENERIC
			{
				displayName = "OFCRA Police Generic";
				textures[] = {
					"\ofcra_3cb_police\suv\generic.paa",
				};
				factions[] = {};
			};
		}
	};

	
	class OFCRA_POLICE_SUV_Armoured_SWEDEN: UK3CB_SUV_Armoured_Base
	{
		displayName = "Police SUV Armoured (Sweden)";
		author = "wombat";
		hiddenSelectionsTextures[] = {
			"\ofcra_3cb_police\suv\sweden.paa",
		};

		textureList[] = {"OFCRA_POLICE_SWEDISH",1};
	};

	class OFCRA_B_POLICE_SUV_Armoured_SWEDEN: OFCRA_POLICE_SUV_Armoured_SWEDEN
	{
		side = 1;
		crew = "B_G_soldier_F";
		faction = "OFCRA_Police_Faction";
		scope = 2;
	};

	class OFCRA_POLICE_SUV_Armoured_GENERIC: UK3CB_SUV_Armoured_Base
	{
		displayName = "Police SUV Armoured (Generic)";
		author = "wombat";
		hiddenSelectionsTextures[] = {
			"\ofcra_3cb_police\suv\generic.paa",
		};
		textureList[] = {"OFCRA_POLICE_GENERIC",1};
	};

	class OFCRA_B_POLICE_SUV_Armoured_GENERIC: OFCRA_POLICE_SUV_Armoured_GENERIC
	{
		side = 1;
		crew = "B_G_soldier_F";
		faction = "OFCRA_Police_Faction";
		scope = 2;
	};
	
};
