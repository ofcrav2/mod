class CfgPatches
{
	class ofcra_ghost
	{
		name = "ofcra_textures";
		author = "wombat";
		url = "http://example.com";
        requiredVersion=0.1;
		requiredAddons[] = {
			"ofcra_textures",
			"A3_Data_F_Enoch_Loadorder"
		};

		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};


class cfgWeapons
{
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class OFCRA_VR_Ghost_CombatUniform_item: U_B_CombatUniform_mcam
	{
		author="wombat";
		scope=2;
		displayName="OFCRA VR Ghost uniform";
		hiddenSelections[]=
		{
			"camo",
			"Camo_arm_left",
			"Camo_arm_right",
			"Camo_body",
			"Camo_head",
			"Camo_leg_left",
			"Camo_leg_right"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_VR_Ghost_Soldier";
			containerClass="Supply40";
			mass=40;
		};
	};

};

class CfgVehicles
{
	class OFCRA_soldier_base;
	class OFCRA_VR_Ghost_Soldier: OFCRA_soldier_base
	{
		displayName="OFCRA VR Ghost";
		_generalMacro="OFCRA_VR_Ghost_Soldier";
		uniformClass="OFCRA_VR_Ghost_CombatUniform_item";
		scope=2;
		faction="OFCRA";	
		nakedUniform="U_VirtualMan_F";


		hiddenSelections[]=
		{
			"Camo_arm_left",
			"Camo_arm_right",
			"Camo_body",
			"Camo_head",
			"Camo_leg_left",
			"Camo_leg_right"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			""
		};
	};

	class OFCRA_O_VR_Ghost_Soldier: OFCRA_VR_Ghost_Soldier
	{
		side=0;
		faction="OPF_F";
	};
};

