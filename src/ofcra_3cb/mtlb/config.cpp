class CfgPatches
{
	class ofcra_3cb_mtlb
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
	class APC_Tracked_01_base_F;
	class UK3CB_MTLB_BASE : APC_Tracked_01_base_F
	{
		class TextureSources
		{
			class OFCRA_WOODLAND	
			{
				displayName = "OFCRA WOODLAND";
				textures[] = {
					"\ofcra_textures\rhs_afrf\mtlb_woodland.paa",
					"UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_mtlb\data\aaf_pk_mod_co.paa"
					
				};
				factions[] = {};
			};
		}
	};

	class UK3CB_MTLB_ARMED_BASE : UK3CB_MTLB_BASE
	{
		class TextureSources
		{
			class OFCRA_WOODLAND	
			{
				displayName = "OFCRA WOODLAND";
				textures[] = {
					"\ofcra_textures\rhs_afrf\mtlb_woodland.paa",
					"UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_mtlb\data\aaf_pk_mod_co.paa"
					
				};
				factions[] = {};
			};
		}
	};

	class UK3CB_MTLB_PKT : UK3CB_MTLB_ARMED_BASE
	{
		class TextureSources
		{
			class OFCRA_WOODLAND	
			{
				displayName = "OFCRA WOODLAND";
				textures[] = {
					"\ofcra_textures\rhs_afrf\mtlb_woodland.paa",
					"UK3CB_Factions\addons\UK3CB_Factions_Vehicles\apc\UK3CB_Factions_Vehicles_mtlb\data\aaf_pk_mod_co.paa"
					
				};
				factions[] = {};
			};
		}
	};


};