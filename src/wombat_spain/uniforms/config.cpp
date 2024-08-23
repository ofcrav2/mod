class CfgPatches
{
	class WombatSpainUniforms
	{
		addonRootClass="WombatSpain";
		requiredAddons[]= { "WombatSpain" };
		
		units[]=
		{
			"wombat_spain_combatuniform_arid",

		};
		weapons[]=
		{
			"wombat_spain_brilat_CombatUniform_item_arid",
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
	class wombat_spain_uniform_base: Underwear_F
	{
		author="wombat";
		faction="wombat_spain";
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

	class wombat_spain_combatuniform_arid: wombat_spain_uniform_base
	{
		author="wombat";
		_generalMacro="wombat_spain_combatuniform_d";
		displayName="Wombat Spanish Arid";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="wombat_spain_brilat_CombatUniform_item_d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\wombat_spain\uniforms\data\spanish_arid_co.paa"
		};
	};
	
};
class cfgWeapons
{
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class wombat_spain_brilat_CombatUniform_item_arid: U_B_CombatUniform_mcam
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
			uniformClass="wombat_spain_combatuniform_arid";
			containerClass="Supply40";
			mass=40;
		};
	};
	
};