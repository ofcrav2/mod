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



	class OFCRA_JMSSA_brit_krrc_p37: JMSSA_brit_p37_dirty_F_CombatUniform
	{
		author="OFCRA Wombat";
		displayName="OFCRA British P37 (KRRC)";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			modelSides[] = {6};
			scope = 0;
			type = 801;
			uniformClass="OFCRA_JMSSA_krrc_soldier";
			containerClass="Supply60";
			mass=40;
		};
	};

	class OFCRA_JMSSA_brit_krrc_cpl_p37: JMSSA_brit_p37_dirty_F_CombatUniform
	{
		author="OFCRA Wombat";
		displayName="OFCRA British P37 (KRRC CPL)";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			modelSides[] = {6};
			scope = 0;
			type = 801;
			uniformClass="OFCRA_JMSSA_krrc_cpl_soldier";
			containerClass="Supply60";
			mass=40;
		};
	};

	class OFCRA_JMSSA_brit_krrc_lcpl_p37: JMSSA_brit_p37_dirty_F_CombatUniform
	{
		author="OFCRA Wombat";
		displayName="OFCRA British P37 (KRRC LCPL)";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			modelSides[] = {6};
			scope = 0;
			type = 801;
			uniformClass="OFCRA_JMSSA_krrc_lcpl_soldier";
			containerClass="Supply60";
			mass=40;
		};
	};

	class OFCRA_JMSSA_polish: JMSSA_brit_p37_dirty_F_CombatUniform
	{
		author="OFCRA Wombat";
		displayName="OFCRA Polish";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			modelSides[] = {6};
			scope = 0;
			type = 801;
			uniformClass="OFCRA_JMSSA_pol_soldier";
			containerClass="Supply60";
			mass=40;
		};
	};

	class OFCRA_JMSSA_polish_cpl: JMSSA_brit_p37_dirty_F_CombatUniform
	{
		author="OFCRA Wombat";
		displayName="OFCRA Polish CPL";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			modelSides[] = {6};
			scope = 0;
			type = 801;
			uniformClass="OFCRA_JMSSA_pol_cpl_soldier";
			containerClass="Supply60";
			mass=40;
		};
	};

	class OFCRA_JMSSA_polish_lcpl: JMSSA_brit_p37_dirty_F_CombatUniform
	{
		author="OFCRA Wombat";
		displayName="OFCRA Polish LCPL";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			modelSides[] = {6};
			scope = 0;
			type = 801;
			uniformClass="OFCRA_JMSSA_pol_lcpl_soldier";
			containerClass="Supply60";
			mass=40;
		};
	};

	

};


class CfgVehicles
{

	class JMSSA_brit_p37_clean_F;

	class OFCRA_JMSSA_krrc_soldier: JMSSA_brit_p37_clean_F
	{
		author="OFCRA Wombat";
		displayName="OFCRA British P37 (KRRC)";
		uniformClass="OFCRA_JMSSA_brit_krrc_p37";
		hiddenSelectionsTextures[]=
		{
			"jmssa_brits\data\body\p37_body_eng_co.paa",
			"jmssa_brits\data\body\p37_arms_eng_co.paa",
			"jmssa_brits\data\body\p40_trousers_eng_co.paa",
			"\ofcra_jmssa\brit_arms\krrc.paa"
		};
	};

	class OFCRA_JMSSA_krrc_cpl_soldier: JMSSA_brit_p37_clean_F
	{
		author="OFCRA Wombat";
		displayName="OFCRA British P37 (KRRC CPL)";
		uniformClass="OFCRA_JMSSA_brit_krrc_cpl_p37";
		hiddenSelectionsTextures[]=
		{
			"jmssa_brits\data\body\p37_body_eng_co.paa",
			"jmssa_brits\data\body\p37_arms_eng_cp_co.paa",
			"jmssa_brits\data\body\p40_trousers_eng_co.paa",
			"\ofcra_jmssa\brit_arms\krrc.paa"
		};
	};

	class OFCRA_JMSSA_krrc_lcpl_soldier: JMSSA_brit_p37_clean_F
	{
		author="OFCRA Wombat";
		displayName="OFCRA British P37 (KRRC LCPL)";
		uniformClass="OFCRA_JMSSA_brit_krrc_lcpl_p37";
		hiddenSelectionsTextures[]=
		{
			"jmssa_brits\data\body\p37_body_eng_co.paa",
			"jmssa_brits\data\body\p37_arms_eng_lcp_co.paa",
			"jmssa_brits\data\body\p40_trousers_eng_co.paa",
			"\ofcra_jmssa\brit_arms\krrc.paa"
		};
	};

	class OFCRA_JMSSA_pol_soldier: JMSSA_brit_p37_clean_F
	{
		author="OFCRA Wombat";
		displayName="OFCRA Polish";
		uniformClass="OFCRA_JMSSA_polish";
		hiddenSelectionsTextures[]=
		{
			"jmssa_brits\data\body\p37_body_eng_co.paa",
			"jmssa_brits\data\body\p37_arms_eng_co.paa",
			"jmssa_brits\data\body\p40_trousers_eng_co.paa",
			"\ofcra_jmssa\brit_arms\poland.paa"
		};
	};

	class OFCRA_JMSSA_pol_cpl_soldier: JMSSA_brit_p37_clean_F
	{
		author="OFCRA Wombat";
		displayName="OFCRA Polish CPL";
		uniformClass="OFCRA_JMSSA_polish_cpl";
		hiddenSelectionsTextures[]=
		{
			"jmssa_brits\data\body\p37_body_eng_co.paa",
		"jmssa_brits\data\body\p37_arms_eng_cp_co.paa",
			"jmssa_brits\data\body\p40_trousers_eng_co.paa",
			"\ofcra_jmssa\brit_arms\poland.paa"
		};
	};

	class OFCRA_JMSSA_pol_lcpl_soldier: JMSSA_brit_p37_clean_F
	{
		author="OFCRA Wombat";
		displayName="OFCRA Polish LCPL";
		uniformClass="OFCRA_JMSSA_polish_lcpl";
		hiddenSelectionsTextures[]=
		{
			"jmssa_brits\data\body\p37_body_eng_co.paa",
			"jmssa_brits\data\body\p37_arms_eng_lcp_co.paa",
			"jmssa_brits\data\body\p40_trousers_eng_co.paa",
			"\ofcra_jmssa\brit_arms\poland.paa"
		};
	};


};
