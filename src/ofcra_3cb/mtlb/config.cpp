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
	//["uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\csat_w_body_co.paa","uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\csat_w_pk_mod_co.paa"]
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
					"uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\csat_w_pk_mod_co.paa"
					
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
					"uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\csat_w_pk_mod_co.paa"
					
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
					"uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\cdf_pk_mod_co.paa"
					
				};
				factions[] = {};
			};
		}
	};

	class UK3CB_MTLB_KPVT : UK3CB_MTLB_ARMED_BASE
	{
		class TextureSources
		{
			class OFCRA_WOODLAND	
			{
				displayName = "OFCRA WOODLAND";
				textures[] = {
					"\ofcra_textures\rhs_afrf\mtlb_woodland.paa",
					"uk3cb_factions\addons\uk3cb_factions_vehicles\apc\uk3cb_factions_vehicles_mtlb\data\cdf_pk_mod_co.paa",
					"uk3cb_factions\addons\uk3cb_factions_vehicles\uk3cb_factions_vehicles_common\data\btr60\btr60_mtlb_body_cdf_co.paa"
				};
				factions[] = {};
			};
		}
	};
};