class CfgPatches
{
	class ofcra_jmssa_brit_arms {
		name = "ofcra_jmssa_brit_arms";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_textures",
			"JMSSA_brits_mod"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};




class CfgWeapons
{

	class UniformItem;
    class JMSSA_brit_p37_dirty_F_CombatUniform
	{
		class ItemInfo;
	};


//"C:\Users\aridd\Desktop\Project\src\ofcra_jmssa\brit_arms\krrc.jpg"
	class OFCRA_JMSSA_brit_krrc_p37: JMSSA_brit_p37_dirty_F_CombatUniform
	{
		author="OFCRA Wombat";
		displayName="OFCRA British P37 Uniform (KRRC)";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			modelSides[] = {6};
			scope = 0;
			type = 801;
			uniformClass="OFCRA_brit_krrc_soldier";
			containerClass="Supply60";
			mass=40;
		};
	};
	


	class U_NORTH_FIN_M36_W_Greatcoat_camo;

	class OFCRA_gomier_uniform : U_NORTH_FIN_M36_W_Greatcoat_camo
	{
		author="OFCRA Wombat";
		displayName="OFCRA Goumier Uniform";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\top_goumier.paa",
			"\ofcra_textures\greatcoat_goumier.paa"
		};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_goumier_soldier";
			containerClass="Supply40";
			mass=40;
		};
	};

};


class CfgVehicles
{

	class JMSSA_brit_p37_clean_F;

	/*
	hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
	hiddenSelectionsTextures[] = {"JMSSA_brits\data\body\p37_body_eng_co.paa","JMSSA_brits\data\body\p37_arms_eng_co.paa","JMSSA_brits\data\body\p40_trousers_eng_co.paa"};
	*/

	class I_NORTH_FIN_M36_W_Greatcoat_camo;
	class OFCRA_goumier_soldier: I_NORTH_FIN_M36_W_Greatcoat_camo
	{
		displayName="OFCRA Goumier";
		_generalMacro="OFCRA_goumier_soldier";
		uniformClass="OFCRA_gomier_uniform";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_nf\top_goumier.paa",
			"\ofcra_nf\greatcoat_goumier.paa"
		};
	};

};
