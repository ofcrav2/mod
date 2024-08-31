class CfgPatches
{
	class ofcra_rhs_afrf_mi8
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


	class Heli_Light_02_base_F;
	class RHS_Mi8_base : Heli_Light_02_base_F
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
	class rhs_mi8amt_base : RHS_Mi8_base
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
	class RHS_Mi8AMT_VVS_Base : rhs_mi8amt_base
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

	class rhs_mi8mtv3_base : RHS_Mi8_base
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
	class rhs_mi8amtsh_base : rhs_mi8mtv3_base
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
