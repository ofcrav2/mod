class CfgPatches
{
	class ofcra_3cb_mi8
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
	class rhs_mi8amtsh_base;
	class UK3CB_Mi8AMTsh_Base : rhs_mi8amtsh_base
	{
		class TextureSources
		{
			class OFCRA_WOODLAND
			{
				displayName = "OFCRA WOODLAND";
				textures[] = {
					"\ofcra_textures\rhs_afrf\mi8_woodland.paa",
					"\rhsafrf\addons\rhs_a2port_air\mi35\data\camo\mi24p_002_camo1_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
				};
				factions[] = {};
			};
		}
	};
	
};