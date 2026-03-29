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
		units[] = {"OFCRA_PSZ_Rosomak_Winter","OFCRA_PSZ_Tumak2_WKM","OFCRA_PSZ_Tumak2_UKM","OFCRA_PSZ_Tumak2_Winter","OFCRA_PSZ_Star_944","OFCRA_PSZ_Star_1466"};
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
		hiddenSelectionsTextures[] = {"ofcra_psz\winter\beryl_base.paa","ofcra_psz\winter\beryl_elements.paa","psz\weapons\beryl\data\psz_beryl_stanag_adapter_co.paa"};
		displayName = "wz.96D Beryl Winter";
	}

	class PSZ_V_UKO_L_DES_R_Headset;
	class OFCRA_PSZ_V_Winter : PSZ_V_UKO_L_DES_R_Headset
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Winter";
		//hiddenSelectionsTextures[] = {"psz\characters\pl\data\psz_armor_DES_co.paa","PSZ\characters\pl\data\psz_equip_co.paa"};
		hiddenSelectionsTextures[] = {	"\ofcra_psz\winter\vest.paa", "PSZ\characters\pl\data\psz_equip_co.paa" };
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
			uniformClass="OFCRA_PSZ_Rifleman";
			containerClass="Supply40";
			mass=40;
		};
	};
	
	class PSZ_H_wz2005_DES;
	class OFCRA_PSZ_H_Winter : PSZ_H_wz2005_DES
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Winter";
		hiddenSelectionsTextures[] = { "\ofcra_psz\winter\helmet.paa" };
	};
}

class CfgVehicles
{
	class PSZ_PL_DES20_Soldier_Rifleman;
	class OFCRA_PSZ_Rifleman: PSZ_PL_DES20_Soldier_Rifleman
	{
		author = "OFCRA Wombat";
		displayName="OFCRA PSZ Winter";
		_generalMacro="OFCRA_PSZ_Rifleman";
		uniformClass="OFCRA_PSZ_U_Winter";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_psz\winter\uniform.paa"
		};
	};


	class Weapon_PSZ_Beryl04_D;
	class OFCRA_PSZ_Beryl_Weapon: Weapon_PSZ_Beryl04_D
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

	class PSZ_PL_WDL10_Rosomak_M1M;
	class PSZ_PL_WDL20_Rosomak_M1M : PSZ_PL_WDL10_Rosomak_M1M
	{
		class AnimationSources;
	};



	class OFCRA_PSZ_Rosomak_Winter : PSZ_PL_WDL20_Rosomak_M1M
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Rosomak Winter";

		hiddenSelectionsTextures[]=
		{
"psz\wheeled\rosomak\data\psz_body_01_wdl_co.paa",
"psz\wheeled\rosomak\data\psz_body_02_wdl_co.paa",
"psz\wheeled\rosomak\data\psz_body_03_wdl_co.paa",
"\ofcra_psz\winter\ros_wheels.paa",
"psz\wheeled\rosomak\data\psz_adds_02_olv_co.paa",
"\ofcra_psz\winter\ros_turret.paa",
"psz\wheeled\rosomak\data\psz_lso_rama_olv_co.paa",
"\ofcra_psz\winter\net.paa",
"psz\common\data\tablice_rej\white\0_ca.paa",
"psz\common\data\tablice_rej\white\8_ca.paa",
"psz\common\data\tablice_rej\white\5_ca.paa",
"psz\common\data\tablice_rej\white\8_ca.paa"
		};

		class AnimationSources: AnimationSources
		{
			class ros_camonet{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
		};
	};

	class PSZ_PL_WDL20_Tumak2;
	class PSZ_PL_WDL20_Tumak2_UKM;
	class PSZ_PL_WDL20_Tumak2_WKM;

	class OFCRA_PSZ_Tumak2_Winter : PSZ_PL_WDL20_Tumak2
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Tumak2 Winter";

		hiddenSelectionsTextures[]=
		{
"\ofcra_psz\winter\tumak_body1.paa",
"\ofcra_psz\winter\tumak_body2.paa",
"psz\wheeled\tumak\data\psz_tumak2_adds_01_co.paa",
"\ofcra_psz\winter\tumak_wheel.paa",
"psz\wheeled\tumak\data\psz_tumak_interior_co.paa",
"\ofcra_psz\winter\tumak_turret.paa",
		};
	};
	class OFCRA_PSZ_Tumak2_UKM : PSZ_PL_WDL20_Tumak2_UKM
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Tumak2 UKM Winter";

		hiddenSelectionsTextures[]=
		{
"\ofcra_psz\winter\tumak_body1.paa",
"\ofcra_psz\winter\tumak_body2.paa",
"psz\wheeled\tumak\data\psz_tumak2_adds_01_co.paa",
"\ofcra_psz\winter\tumak_wheel.paa",
"psz\wheeled\tumak\data\psz_tumak_interior_co.paa",
"\ofcra_psz\winter\tumak_turret.paa",
		};
	};
	class OFCRA_PSZ_Tumak2_WKM : PSZ_PL_WDL20_Tumak2_WKM
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Tumak2 WKM Winter";

		hiddenSelectionsTextures[]=
		{
"\ofcra_psz\winter\tumak_body1.paa",
"\ofcra_psz\winter\tumak_body2.paa",
"psz\wheeled\tumak\data\psz_tumak2_adds_01_co.paa",
"\ofcra_psz\winter\tumak_wheel.paa",
"psz\wheeled\tumak\data\psz_tumak_interior_co.paa",
"\ofcra_psz\winter\tumak_turret.paa",
		};
	};


	class PSZ_PL_WDL20_Star_1466;
	class PSZ_PL_WDL20_Star_944;

	class OFCRA_PSZ_Star_1466 : PSZ_PL_WDL20_Star_1466
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Star 1466 Winter";

		hiddenSelectionsTextures[]=
		{
"\ofcra_psz\winter\star_cab.paa",			
"\ofcra_psz\winter\star_cargo.paa",
"\ofcra_psz\winter\star_wheel.paa",
		};
	};
	class OFCRA_PSZ_Star_944 : PSZ_PL_WDL20_Star_944
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA PSZ Star 944 Winter";

		hiddenSelectionsTextures[]=
		{
"\ofcra_psz\winter\star_cab.paa",			
"\ofcra_psz\winter\star_cargo.paa",
"\ofcra_psz\winter\star_wheel.paa",
		};
	};

}