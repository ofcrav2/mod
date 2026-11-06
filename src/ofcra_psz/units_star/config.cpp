// OFCRA Polish Olive star as placeable vehicles in Polish Armed Forces '20 (WDL), with PSZ crew.
class CfgPatches
{
	class ofcra_psz_units_star
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {
			"OFCRA_PL_PSZ_PL_WDL20_Star_944",
			"OFCRA_PL_PSZ_PL_WDL20_Star_1466",
			"OFCRA_PL_PSZ_PL_WDL20_Star_1466_Command",
			"OFCRA_PL_PSZ_PL_WDL20_Star_1466_Fuel",
			"OFCRA_PL_PSZ_PL_WDL20_Star_1466_Ammo"
		};
		weapons[] = {};
		requiredAddons[] = {"psz_wheeled_star", "ofcra_psz_star_olive", "psz_characters"};
	};
};

class CfgVehicles
{
	class PSZ_PL_WDL20_Star_944;
	class PSZ_PL_WDL20_Star_1466;
	class PSZ_PL_WDL20_Star_1466_Command;
	class PSZ_PL_WDL20_Star_1466_Fuel;
	class PSZ_PL_WDL20_Star_1466_Ammo;

	class OFCRA_PL_PSZ_PL_WDL20_Star_944: PSZ_PL_WDL20_Star_944
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		displayName = "Star 944 (Olive)";
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\star_olive\star_olive_0.paa",
			"ofcra_psz\star_olive\star_olive_1.paa",
			"ofcra_psz\star_olive\star_olive_2.paa"
		};
	};
	class OFCRA_PL_PSZ_PL_WDL20_Star_1466: PSZ_PL_WDL20_Star_1466
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		displayName = "Star 1466 (Olive)";
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\star_olive\star_olive_0.paa",
			"ofcra_psz\star_olive\star_olive_1.paa",
			"ofcra_psz\star_olive\star_olive_2.paa"
		};
	};
	class OFCRA_PL_PSZ_PL_WDL20_Star_1466_Command: PSZ_PL_WDL20_Star_1466_Command
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		displayName = "Star 1466 (Command Vehicle) (Olive)";
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\star_olive\star_olive_0.paa",
			"ofcra_psz\star_olive\star_olive_command_1.paa",
			"ofcra_psz\star_olive\star_olive_2.paa"
		};
	};
	class OFCRA_PL_PSZ_PL_WDL20_Star_1466_Fuel: PSZ_PL_WDL20_Star_1466_Fuel
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		displayName = "Star 1466 (Fuel Truck) (Olive)";
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\star_olive\star_olive_0.paa",
			"ofcra_psz\star_olive\star_olive_fuel_1.paa",
			"ofcra_psz\star_olive\star_olive_2.paa"
		};
	};
	class OFCRA_PL_PSZ_PL_WDL20_Star_1466_Ammo: PSZ_PL_WDL20_Star_1466_Ammo
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		displayName = "Star 1466 (Ammo Truck) (Olive)";
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\star_olive\star_olive_0.paa",
			"ofcra_psz\star_olive\star_olive_ammo_1.paa",
			"ofcra_psz\star_olive\star_olive_2.paa"
		};
	};
};
