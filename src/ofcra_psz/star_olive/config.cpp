// OFCRA Polish Olive for the PSZ Star 944 / 1466 (cab, cargo, wheels); the 1466 Command / Fuel / Ammo get their own
// rear body. Made with arma3-textures\New-CamoXcf.ps1 (camo\olive.txt).
// In a mission:  [_veh, ["OFCRA_PL_Olive", 1]] call BIS_fnc_initVehicle;
class CfgPatches
{
	class ofcra_psz_star_olive
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"psz_wheeled_star"};
	};
};

class CfgVehicles
{
	class PSZ_Truck;
	class PSZ_Star_1466;
	class PSZ_Star_944: PSZ_Truck
	{
		class TextureSources
		{
			class OFCRA_PL_Olive
			{
				displayName = "OFCRA Polish Olive";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_psz\star_olive\star_olive_0.paa",
					"ofcra_psz\star_olive\star_olive_1.paa",
					"ofcra_psz\star_olive\star_olive_2.paa"
				};
				factions[] = {};
			};
		};
	};
	class PSZ_PL_Star_1466_Ammo: PSZ_Star_1466
	{
		class TextureSources
		{
			class OFCRA_PL_Olive
			{
				displayName = "OFCRA Polish Olive";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_psz\star_olive\star_olive_0.paa",
					"ofcra_psz\star_olive\star_olive_ammo_1.paa",
					"ofcra_psz\star_olive\star_olive_2.paa"
				};
				factions[] = {};
			};
		};
	};
	class PSZ_PL_Star_1466_Command: PSZ_Star_1466
	{
		class TextureSources
		{
			class OFCRA_PL_Olive
			{
				displayName = "OFCRA Polish Olive";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_psz\star_olive\star_olive_0.paa",
					"ofcra_psz\star_olive\star_olive_command_1.paa",
					"ofcra_psz\star_olive\star_olive_2.paa"
				};
				factions[] = {};
			};
		};
	};
	class PSZ_PL_Star_1466_Fuel: PSZ_Star_1466
	{
		class TextureSources
		{
			class OFCRA_PL_Olive
			{
				displayName = "OFCRA Polish Olive";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_psz\star_olive\star_olive_0.paa",
					"ofcra_psz\star_olive\star_olive_fuel_1.paa",
					"ofcra_psz\star_olive\star_olive_2.paa"
				};
				factions[] = {};
			};
		};
	};
};
