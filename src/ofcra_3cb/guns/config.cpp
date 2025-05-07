class CfgPatches
{
	class ofcra_3cb_guns
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"UK3CB_Factions_Weapons",
			"UK3CB_Factions_Weapons2",
			"uk3cb_factions_lfr",
		};
	};
};


//reference values
//rhs 556 m855a1, hit = 9, caliber = 0.65  <-- standard RHS nato 556 round
//rhs m61 AP, hit = 12.55, caliber = 0.79
//rhs m80ball, hit = 11.55, caluber = 0.45
//rhs m993ball. hit = 11.55, caliber = 1.41  <-- best 762 RHS 762 marksman round
//rhs  7n26, hit =14.47, caliber =1.1  <--- best PKP round
//rhs  7n14, hit = 13.61, caliber = 0.9 <--- second best PKP round


class CfgAmmo
{
	class UK3CB_930x62_Ball_R;
	class OFCRA_930x62_AP : UK3CB_930x62_Ball_R
	{
		caliber = 2.5;
	}

	class UK3CB_762x25_Ball;
	class OFCRA_762x25_Ball_AP : UK3CB_762x25_Ball
	{
		hit = 8;
		caliber = 0.8;
	};

	class UK3CB_762x39_Ball_Red;
	class OFCRA_762x39_Ball_AP : UK3CB_762x39_Ball_Red
	{
		hit = 14.47;
		caliber = 1.1;
	};

};

class CfgMagazines
{
	class UK3CB_CZ550_5rnd_Mag;
	class OFCRA_CZ550_5rnd_Mag_AP : UK3CB_CZ550_5rnd_Mag
	{
		ammo = "OFCRA_930x62_AP";
		displayName = "CZ550 5Rnd AP";
	};

	class UK3CB_ppsh_71rnd_magazine;
	class OFCRA_ppsh_71rnd_magazine_AP : UK3CB_ppsh_71rnd_magazine
	{
		ammo = "OFCRA_762x25_Ball_AP";
		displayName = "71Rnd PPSH-41 AP";
	};

	class UK3CB_RPD_100Rnd_762x39;
	class OFCRA_RPD_100Rnd_762x39_AP : UK3CB_RPD_100Rnd_762x39
	{
		ammo = "OFCRA_762x39_Ball_AP";
		displayName = "100Rnd RPD AP";
	};


};
class CfgWeapons
{
	class rhs_weap_XM2010_Base_F;
	class UK3CB_CZ550 : rhs_weap_XM2010_Base_F
	{
		magazines[]+={
			"OFCRA_CZ550_5rnd_Mag_AP"
		};
	};

	class rhs_weap_pp2000;
	class uk3cb_ppsh41 : rhs_weap_pp2000
	{
		magazines[]+={
			"OFCRA_ppsh_71rnd_magazine_AP"
		};
	};

	class LMG_Zafir_F;
	class UK3CB_RPD : LMG_Zafir_F
	{
		magazines[]+={
			"OFCRA_RPD_100Rnd_762x39_AP"
		};
	};

	class H_HelmetB_camo;
	class OFCRA_GREEN_HELMET_camo : H_HelmetB_camo 
	{
		author="OFCRA wombat";
		_generalMacro="Combat Helmet (Grass Cammo OFCRA)";
		displayName="Combat Helmet (Grass Cammo OFCRA)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPA\BLUFOR\Data\equip1_grass_co.paa",
			"\A3\characters_f\common\data\ghillie2_co.paa"
		};
	}

};