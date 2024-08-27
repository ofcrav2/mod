class CfgPatches
{
	class ofcra_3cb_t34_skin
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{
			"OFCRA_FRENCH_T34",
			"OFCRA_B_FRENCH_T34",
			"OFCRA_O_FRENCH_T34"
		};

		requiredAddons[]=
		{
			"UK3CB_Factions_Vehicles_Tseries",
			"ofcra_3cb_t34_nerf_he"

		};

	};
};
class CfgVehicles
{
	class MBT_02_base_F;
	class UK3CB_T34: MBT_02_base_F
	{
		class TextureSources
		{
			class OFCRA_FRENCH
			{
				displayName = "French";
				textures[] = {
					"\ofcra_3cb\t34\skin\t34_french_0_co.paa",
					"\ofcra_3cb\t34\skin\t34_french_1_co.paa",
					"\ofcra_3cb\t34_skin\t34_french_2_co.paa",
					"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t34\data\t34_wheels_co.paa",
					"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t34\data\t34_body03_co.paa",
					"\A3\Ui_f\data\Map\Markers\Flags\france_ca.paa"
				};
				factions[] = {};
			};
		}
	}

	class OFCRA_FRENCH_T34: UK3CB_T34
	{
		displayName = "T-34-85M (French Camo)";
		author = "wombat";
		hiddenSelectionsTextures[] = {
			"\ofcra_3cb\t34\skin\t34_french_0_co.paa",
			"\ofcra_3cb\t34\skin\t34_french_1_co.paa",
			"\ofcra_3cb\t34\skin\t34_french_2_co.paa",
			"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t34\data\t34_wheels_co.paa",
			"\UK3CB_Factions\addons\UK3CB_Factions_Vehicles\armour\UK3CB_Factions_Vehicles_T-series\t34\data\t34_body03_co.paa",
			"\A3\Ui_f\data\Map\Markers\Flags\france_ca.paa"};
		textureList[] = {"OFCRA_FRENCH",1};
	};

	
	class OFCRA_B_FRENCH_T34: OFCRA_FRENCH_T34
	{
		side = 1;
		crew = "B_G_soldier_F";
		faction = "BLU_F";
		scope = 2;
	}

		
	class OFCRA_O_FRENCH_T34: OFCRA_FRENCH_T34
	{
		side = 0;
		crew = "O_soldier_F";
		faction = "OPF_F";
		scope = 2;
	}
	
};
