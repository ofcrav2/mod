class CfgPatches
{
	class ofcra_psz_uniform {
		name = "ofcra_psz_uniform";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"psz_characters",
			"psz_weapons"
		};
		units[] = {};
		weapons[] = {"OFCRA_PSZ_Beryl_Winter"}; 
		ammo[]={};

	};
};



class CfgWeapons
{

	class PSZ_Beryl04_D;
	class OFCRA_PSZ_Beryl_Winter : PSZ_Beryl04_D
	{
		author = "OFCRA Wombat";
		scope = 2;
    	scopeArsenal = 2;

		baseWeapon="OFCRA_PSZ_Beryl_Winter";
		
		//hiddenSelectionsTextures[] = {"psz\weapons\beryl\data\psz_beryl96_co.paa","psz\weapons\beryl\data\psz_beryl_elements_co.paa","psz\weapons\beryl\data\psz_beryl_stanag_adapter_co.paa"};
		hiddenSelectionsTextures[] = {"ofcra_psz\uniform\beryl_base_winter.paa","ofcra_psz\uniform\beryl_elements_winter.paa","psz\weapons\beryl\data\psz_beryl_stanag_adapter_co.paa"};
		//hiddenSelectionsTextures[] = {"\ofcra_psz\uniform\beryl_base_winter.paa","\ofcra_psz\uniform\beryl_elements_winter.paa","psz\weapons\beryl\data\psz_beryl_stanag_adapter_co.paa"};
		
		displayName = "wz.96D Beryl Winter";
	}

	class PSZ_V_UKO_L_DES_R_Headset;
	class OFCRA_PSZ_V_Winter : PSZ_V_UKO_L_DES_R_Headset
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Winter";
		//hiddenSelectionsTextures[] = {"psz\characters\pl\data\psz_armor_DES_co.paa","PSZ\characters\pl\data\psz_equip_co.paa"};
		hiddenSelectionsTextures[] = {	"\ofcra_psz\uniform\winter_vest.paa", "PSZ\characters\pl\data\psz_equip_co.paa" };
	};

	class UniformItem;
	class PSZ_U_PL_DES_wz2010_Crye;
	class OFCRA_PSZ_U_Winter : PSZ_U_PL_DES_wz2010_Crye
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Winter";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_PSZ_Winter_Rifleman";
			containerClass="Supply40";
			mass=40;
		};
	};
	


	class PSZ_H_wz2005_DES;
	class OFCRA_PSZ_H_Winter : PSZ_H_wz2005_DES
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Winter";
		hiddenSelectionsTextures[] = { "\ofcra_psz\uniform\winter_helmet.paa" };
	};


}

class CfgVehicles
{
	class PSZ_PL_DES20_Soldier_Rifleman;
	class OFCRA_PSZ_Winter_Rifleman: PSZ_PL_DES20_Soldier_Rifleman
	{
		author = "OFCRA Wombat";
		displayName="OFCRA PSZ Winter";
		_generalMacro="OFCRA_PSZ_Winter_Rifleman";
		uniformClass="OFCRA_PSZ_U_Winter";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_psz\uniform\winter_uniform.paa"
		};
	};


	class Weapon_PSZ_Beryl04_D;
	class OFCRA_PSZ_Beryl_Winter_Weapon: Weapon_PSZ_Beryl04_D
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeArsenal = 2;
		displayName = "wz.96D Beryl Winter";
		class TransportWeapons
		{
			class OFCRA_PSZ_Beryl_Winter
			{
				weapon="OFCRA_PSZ_Beryl_Winter";
				count=1;
			};
		};
		
	};

	class PSZ_PL_WDL20_Rosomak_M1M;

/*
[
"psz\wheeled\rosomak\data\psz_body_01_wdl_co.paa",
"psz\wheeled\rosomak\data\psz_body_02_wdl_co.paa",
"psz\wheeled\rosomak\data\psz_body_03_wdl_co.paa",
"psz\wheeled\rosomak\data\psz_adds_01_wdl_co.paa",
"psz\wheeled\rosomak\data\psz_adds_02_olv_co.paa",
"psz\wheeled\rosomak\data\psz_h30p_wdl_co.paa",
"psz\wheeled\rosomak\data\psz_lso_rama_olv_co.paa",
"a3\armor_f\data\camonet_nato_green_co.paa",
"psz\common\data\tablice_rej\white\0_ca.paa",
"psz\common\data\tablice_rej\white\8_ca.paa",
"psz\common\data\tablice_rej\white\5_ca.paa",
"psz\common\data\tablice_rej\white\8_ca.paa"
]


[
"psz\wheeled\star\data\psz_star_truck_olive_co.paa",
"psz\wheeled\star\data\psz_star_cargo_olive_co.paa",
"psz\wheeled\star\data\psz_star_wheel_olive_co.paa"
]

*/
}