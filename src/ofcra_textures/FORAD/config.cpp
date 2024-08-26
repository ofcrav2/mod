class CfgPatches
{
	class ofcra_textures_forad
	{
		author = "OFCRA Wombat";
		units[]={};
		requiredAddons[]=
		{
			"ofcra_textures"
		};
	};
};

class CfgVehicles
{
	class Offroad_01_unarmed_base_F;
	class Offroad_01_civil_base_F: Offroad_01_unarmed_base_F
	{
		class TextureSources
		{
			class OFCRA_FORAD
			{
				displayName = "FORAD";
				textures[] = {
					"\ofcra_textures\FORAD\offroad.paa",
					"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"
				};
				factions[] = {};
			};
		}
	}
	class Offroad_01_base_F;
	class Offroad_01_military_base_F: Offroad_01_base_F
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
		}
	}





	class OFCRA_soldier_base;
	
	class OFCRA_FORAD_soldier: OFCRA_soldier_base
	{
		author="wombat";
		displayName="OFCRA FORAD";
		_generalMacro="OFCRA_FORAD_soldier";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="OFCRA_FORAD_uniform";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\FORAD\uniform.paa"
		};
	};


	class OFCRA_FORED_soldier: OFCRA_FORAD_soldier
	{
		author="wombat";
		displayName="OFCRA FORED";
		_generalMacro="OFCRA_FORED_soldier";
		uniformClass="OFCRA_FORED_uniform";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\FORAD\fored.paa"
		};
	};
};

class cfgWeapons
{


	class V_PlateCarrier1_blk;
	class OFCRA_FORAD_vest: V_PlateCarrier1_blk
	{
		author="wombat";
		scope=2;
		displayName="OFCRA FORAD Vest";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\FORAD\forad_vest.paa"
		};
	};
	class OFCRA_FORED_vest: OFCRA_FORAD_vest
	{
		displayName="OFCRA FORED Vest";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\FORAD\fored_vest.paa"
		};
	};

	class H_HelmetIA;
	class OFCRA_FORAD_helmet: H_HelmetIA
	{
		author="wombat";
		displayName="OFCRA OFARAD Helmet";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\FORAD\forad_helmet.paa"
		};
	};
	class OFCRA_FORED_helmet: OFCRA_FORAD_helmet
	{
		displayName="OFCRA FORED Helmet";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\FORAD\fored_helmet.paa"
		};
	};


	class U_B_CombatUniform_mcam;
	class UniformItem;


	class OFCRA_FORAD_uniform: U_B_CombatUniform_mcam
	{
		author="wombat";
		scope=2;
		displayName="OFCRA FORAD";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_FORAD_soldier";
			containerClass="Supply40";
			mass=40;
		};
	};

	class OFCRA_FORED_uniform: OFCRA_FORAD_uniform
	{
		displayName="OFCRA FORED";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_FORED_soldier";
			containerClass="Supply40";
			mass=40;
		};
	};
};



