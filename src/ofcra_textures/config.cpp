class CfgPatches
{
	class ofcra_textures
	{
		name = "ofcra_textures";
		author = "wombat";
		url = "http://example.com";
        requiredVersion=0.1;
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
		displayName="Spanish Arid Vest";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\spain\arid_vest.paa"
		};
	};

	class H_HelmetIA;
	class OFCRA_spain_arid_helmet: H_HelmetIA
	{
		author="wombat";
		displayName="Spanish Arid Helmet";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\spain\arid_helmet.paa"
		};
	};


	class U_B_CombatUniform_mcam;
	class UniformItem;
	class OFCRA_spain_CombatUniform_item_arid: U_B_CombatUniform_mcam
	{
		author="wombat";
		scope=2;
		displayName="Spanish Arid";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_spain_combatuniform_arid";
			containerClass="Supply40";
			mass=40;
		};
	};



// If BW mod is not loaded this does nothing...
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
	class OFCRA_spain_uniform_base: Underwear_F
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
		class EventHandlers: EventHandlers
		{
			init="";
		};
	};

	class OFCRA_spain_combatuniform_arid: OFCRA_spain_uniform_base
	{
		author="wombat";
		displayName="OFCRA Spanish Arid";
		_generalMacro="OFCRA_spain_combatuniform_arid";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="OFCRA_spain_CombatUniform_item_arid";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\spain\arid_uniform.paa"
		};
	};
	
};


