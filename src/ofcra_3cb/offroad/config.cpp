class CfgPatches
{
	class ofcra_3cb_offroad
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"UK3CB_Factions_Vehicles_Tseries",
		};
	};
};

class CfgVehicles
{
	
	class Offroad_01_armed_base_F;
	class UK3CB_Offroad_HMG_Base : Offroad_01_armed_base_F
	{
		class TextureSources
		{
			class OFCRA_FORAD
			{
				displayName = "OFCRA FORAD";
				textures[] = {
					"\ofcra_textures\FORAD\offroad.paa",
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"
				};
				factions[] = {};
			};
		};
	};

	class Offroad_01_AT_base_F;
	class UK3CB_Offroad_AT_Base : Offroad_01_AT_base_F
	{
		class TextureSources
		{
			class OFCRA_FORAD
			{
				displayName = "OFCRA FORAD";
				textures[] = {
					"\ofcra_textures\FORAD\offroad.paa",
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"
				};
				factions[] = {};
			};
		};
	};
};