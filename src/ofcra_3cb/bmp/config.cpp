class CfgPatches
{
	class ofcra_3cb_bmp
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"rhs_main_loadorder",
			"UK3CB_Factions_Vehicles_Tseries",
			"ofcra_textures"
		};
	};
};

class CfgVehicles
{

	class rhs_bmp1tank_base;
	class UK3CB_BMP1Tank_Base: rhs_bmp1tank_base
	{
		class textureSources
		{
			class OFCRA_GREEN
			{
				displayName="OFCRA Green";
				author="wombat";
				textures[]=	{
					"\ofcra_textures\rhs_afrf\bmp_green_1.paa",
					"\ofcra_textures\rhs_afrf\bmp_green_2.paa",
					"\ofcra_textures\rhs_afrf\bmp_green_3.paa",
					"\ofcra_textures\rhs_afrf\bmp_green_4.paa",
					"rhsafrf\addons\rhs_bmp\textures\bmp_5_co.paa",
					"rhsafrf\addons\rhs_bmp\textures\bmp_6_co.paa"
				};
				factions[] = {};
			};
		};
	};			
};