class CfgPatches
{
	class ofcra_textures_tan
	{
		name = "ofcra_textures_tan";
		author = "wombat";
		url = "http://example.com";
        requiredVersion=0.1;

		skipWhenMissingDependencies=1;
		requiredAddons[] = {
            "ofcra_textures"
		};

		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};


class cfgWeapons
{
	class Vest_Camo_Base;
	class V_Press_F : Vest_Camo_Base
	{
		class ItemInfo;
	};
	class OFCRA_tan_Vest: V_Press_F
	{
		author="wombat";
		scope=2;
		displayName="OFCRA Tan Vest";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\tan\vest.jpg"
		};

		class ItemInfo : ItemInfo{
			containerClass="Supply120";
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};
	
	class UniformItem;
	class U_I_G_resistanceLeader_F;
	class OFCRA_tan_Uniform_Tshirt: U_I_G_resistanceLeader_F
	{
		author="wombat";
		scope=2;
		displayName="OFCRA Tan Tshirt";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\tan\tshirt.jpg"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_tan_Soldier_Tshirt";
			containerClass="Supply40";
			mass=40;
		};
	};
};

class CfgVehicles
{
	class I_G_resistanceLeader_F;
	class OFCRA_tan_Soldier_Tshirt: I_G_resistanceLeader_F
	{
		displayName="OFCRA Tan Soldier Tshirt";
		uniformClass="OFCRA_tan_Uniform_Tshirt";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\tan\tshirt.jpg"
		};
	};
};

