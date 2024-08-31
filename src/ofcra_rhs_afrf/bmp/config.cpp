class CfgPatches
{
	class ofcra_3cb_an2
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"rhs_main_loadorder",
			"ofcra_textures"
		};
	};
};

class CfgVehicles
{
	class Tank_F;
	class rhs_bmp1tank_base: Tank_F
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