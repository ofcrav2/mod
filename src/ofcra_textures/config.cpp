class CfgPatches
{
	class ofcra_textures
	{
		name = "ofcra_textures";
		author = "wombat";
		url = "http://example.com";
        requiredVersion=0.1;

		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};

class cfgFactionClasses
{
	class OFCRA
	{
		displayName = "OFCRA";
		priority = 1;
		side = 1;
		icon = "";
	}
};

class cfgWeapons
{
	class V_PlateCarrier1_blk;
	class OFCRA_spain_arid_vest: V_PlateCarrier1_blk
	{
		author="wombat";
		scope=2;
		displayName="OFCRA Spanish Arid";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\spain\arid_vest.paa"
		};
	};

	class H_HelmetIA;
	class OFCRA_spain_arid_helmet: H_HelmetIA
	{
		author="wombat";
		displayName="OFCRA Spanish Arid";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\spain\arid_helmet.paa"
		};
	};

	class OFCRA_Invisible_helmet: H_HelmetIA
	{
		author="wombat";
		displayName="OFCRA Invisible Helmet";
		model = "\A3\weapons_f\empty";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
	}

	class U_B_CombatUniform_mcam;
	class UniformItem;
	class OFCRA_spain_CombatUniform_item_arid: U_B_CombatUniform_mcam
	{
		author="wombat";
		scope=2;
		displayName="OFCRA Spanish Arid";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_spain_soldier_arid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class OFCRA_amongus_CombatUniform_item_bright: U_B_CombatUniform_mcam
	{
		author="wombat";
		scope=2;
		displayName="OFCRA Amongus Bright";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_amongus_soldier_bright";
			containerClass="Supply40";
			mass=40;
		};
	};
	class OFCRA_amongus_CombatUniform_item_dark: U_B_CombatUniform_mcam
	{
		author="wombat";
		scope=2;
		displayName="OFCRA Amongus Dark";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_amongus_soldier_dark";
			containerClass="Supply40";
			mass=40;
		};
	};
	

// If BW mod is not loaded this does nothing...
// TODO move to separate PBO
	class BWA3_Leopard2_Tropen;
	class OFCRA_arid_Leopard2: BWA3_Leopard2_Tropen
	{
		faction="OFCRA";
		side=1;
		author="wombat";
		displayName="Spanish Arid Leopard2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]=
		{ 
			"\ofcra_textures\spain\leopard\arid_base.paa",
			"\ofcra_textures\spain\leopard\arid_turret.paa"
		};
		class EventHandlers 
		{
			init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
		};
	};
};

class CfgVehicles
{
	class B_Soldier_F;
	class Underwear_F: B_Soldier_F
	{
		class EventHandlers;
	};
	class OFCRA_soldier_base: Underwear_F
	{
		author="wombat";
		faction="OFCRA";
		scope=1;
		vehicleClass="Uniforms";
		uniformAccessories[]={};
		magazines[]={};
		respawnmagazines[]={};
		items[]={};
		respawnitems[]={};
		linkedItems[]={};
		respawnLinkedItems[]={};
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class EventHandlers: EventHandlers
		{
			init="";
		};
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
	};

	class OFCRA_spain_soldier_arid: OFCRA_soldier_base
	{
		displayName="OFCRA Spanish Arid";
		_generalMacro="OFCRA_spain_soldier_arid";
		uniformClass="OFCRA_spain_CombatUniform_item_arid";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\spain\arid_uniform.paa"
		};
	};

	
	class OFCRA_amongus_soldier_bright: OFCRA_soldier_base
	{
		displayName="OFCRA Amongus Bright";
		_generalMacro="OFCRA_amongus_soldier_bright";
		uniformClass="OFCRA_amongus_CombatUniform_item_bright";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\amongus\bright.paa"
		};
	};
	class OFCRA_amongus_soldier_dark: OFCRA_soldier_base
	{
		displayName="OFCRA Amongus Dark";
		_generalMacro="OFCRA_amongus_soldier_dark";
		uniformClass="OFCRA_amongus_CombatUniform_item_dark";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\amongus\dark.paa"
		};

	};
};

