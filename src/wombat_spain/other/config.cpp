class CfgPatches
{
	class WombatSpainVests
	{
		addonRootClass="WombatSpain";
		requiredAddons[]= { "WombatSpain" };
		units[] = {};
		weapons[] = {};
	};
};

class cfgFactionClasses
{
	class Spain_Faction
	{
		displayName = "Spain";
		priority = 1;
		side = 1;
		icon = "";
	}

};

class cfgWeapons
{
	class V_PlateCarrier1_blk;
	class wombat_spain_arid_vest: V_PlateCarrier1_blk
	{
		author="wombat";
		scope=2;
		displayName="Spanish Arid Vest";
		hiddenSelectionsTextures[]=
		{
			"\wombat_spain\other\data\spain_arid_vest.paa"
		};
	};

	class H_HelmetIA;
	class wombat_spain_arid_helmet: H_HelmetIA
	{
		author="wombat";
		displayName="Spanish Arid Helmet";
		hiddenSelectionsTextures[]=
		{
			"\wombat_spain\other\data\spain_arid_helmet.paa"
		};
	};

	class BWA3_Leopard2_Tropen;
	class wombat_spain_Leopard2: BWA3_Leopard2_Tropen
	{
		faction="Spain_Faction";
		side=1;
		author="wombat";
		displayName="Spanish Arid Leopard2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]=
		{ 
			"\wombat_spain\other\data\leo_base.paa",
			"\wombat_spain\other\data\leo_turret.paa"
		};
		class EventHandlers 
		{
			init = "(_this select 0) setVariable [""BIS_enableRandomization"", false];";
		};
	};
};