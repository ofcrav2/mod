class CfgPatches
{
	class ofcra_tfar
	{
		name = "ofcra_tfar";
		author = "wombat";
		url = "http://example.com";
        requiredVersion=0.1;
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
            "tfar_backpacks"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};




class CfgVehicles
{
	class TFAR_rt1523g_sage;



	class OFCRA_rt1523g_white : TFAR_rt1523g_sage
	{
		author = "OFCRA Wombat";
		displayName = "RT-1523G (White)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {"ofcra_tfar\rt1523g_white.paa"};
		tf_encryptionCode = "tf_west_radio_code";
		tf_range = 20000;
	};

	class OFCRA_rt1523g_white_Opfor : OFCRA_rt1523g_white
	{
		tf_encryptionCode = "tf_east_radio_code";
	};

	class OFCRA_rt1523g_light_grey : OFCRA_rt1523g_white
	{
		displayName = "RT-1523G (Light Grey)";
		hiddenSelectionsTextures[] = {"ofcra_tfar\rt1523g_light_grey.paa"};
	};

	class OFCRA_rt1523g_light_grey_Opfor : OFCRA_rt1523g_light_grey
	{
		tf_encryptionCode = "tf_east_radio_code";
	};


	class OFCRA_rt1523g_black : OFCRA_rt1523g_white
	{
		displayName = "RT-1523G (Black)";
		hiddenSelectionsTextures[] = {"ofcra_tfar\rt1523g_black.paa"};
	};

	class OFCRA_rt1523g_black_Opfor : OFCRA_rt1523g_black
	{
		tf_encryptionCode = "tf_east_radio_code";
	};


	class TFAR_anprc155_coyote;

	class OFCRA_anprc155_white : TFAR_anprc155_coyote
	{
		author = "OFCRA Wombat";
		displayName = "AN/PRC-155 (White)";
		scope = 2;
		scopeArsenal = 2;
		hiddenSelectionsTextures[] = {"ofcra_tfar\anprc15_white.paa"};
		tf_encryptionCode = "tf_west_radio_code";
		tf_range = 20000;
	};

	class OFCRA_anprc155_white_Opfor : OFCRA_anprc155_white
	{
		tf_encryptionCode = "tf_east_radio_code";
	};

	class OFCRA_anprc155_light_grey : OFCRA_anprc155_white
	{
		displayName = "AN/PRC-155 (Light Grey)";
		hiddenSelectionsTextures[] = {"ofcra_tfar\anprc15_light_grey.paa"};
	};

	class OFCRA_anprc155_light_grey_Opfor : OFCRA_anprc155_light_grey
	{
		tf_encryptionCode = "tf_east_radio_code";
	};

	class OFCRA_anprc155_black : OFCRA_anprc155_white
	{
		displayName = "AN/PRC-155 (Black)";
		hiddenSelectionsTextures[] = {"ofcra_tfar\anprc15_black.paa"};
	};

	class OFCRA_anprc155_black_Opfor : OFCRA_anprc155_black
	{
		tf_encryptionCode = "tf_east_radio_code";
	};


	class OFCRA_InvisibleRadio : OFCRA_rt1523g_white
	{
		model = "\A3\weapons_f\empty";
		displayName = "Invisible Radio";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	}

	class OFCRA_InvisibleRadio_Opfor : OFCRA_InvisibleRadio
	{
		tf_encryptionCode = "tf_east_radio_code";
	};
	


};
