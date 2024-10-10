class CfgPatches
{
	class ofcra_rhs_afrf {
		name = "ofcra_rhs_afrf";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ace_frag",
			"rhs_main_loadorder",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};



class CfgMagazines
{

	//BTR-80A HE-FRAG
	class 450Rnd_127x108_Ball;
	class rhs_mag_3uor6_230: 450Rnd_127x108_Ball
	{
		displayName="OFCRA Autocannon HE";
		displayNameShort="OFCRA Autocannon HE";
		ammo="OFCRA_AUTOCANNON_HE";
	}
	//this is supposed to be better than the 3uor6_230
	class rhs_mag_3uof8_230: rhs_mag_3uor6_230
	{
		displayName="OFCRA Autocannon HE";
		displayNameShort="OFCRA Autocannon HE";
		ammo="OFCRA_AUTOCANNON_HE";
	}

	//T-80 HEAT
	class rhs_mag_3bk_base;
	class rhs_mag_3bk31_8: rhs_mag_3bk_base
	{
		displayName="OFCRA 12.5cm HEAT";
		displayNameShort="OFCRA 12.5cm HEAT";
		ammo="OFCRA_12cm_HEAT";
		initSpeed=905;
	};
	//T-80 HE-FRAG
	class rhs_mag_3of_base;
	class rhs_mag_3of26_6: rhs_mag_3of_base
	{
		displayName="OFCRA 12.5cm HE";
		displayNameShort="OFCRA 12.5cm HE";
		ammo="OFCRA_12cm_BASE";
		initSpeed=850;
		tracersEvery=0;
	};


};

class CfgVehicles
{
	//nerf 2S1 ammo to make it closer to PzH 2000 etc
	class Tank_F;
	class rhs_2s1tank_base: Tank_F
	{
		armor=150;
		armorStructural=3;
		damageResistance=0.0054700002;
	};
}


class Mode_SemiAuto;
class CfgWeapons
{
	class mortar_155mm_AMOS;
	class rhs_weap_2a33: mortar_155mm_AMOS
	{
		magazines[]+={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"
		};
		class Single1 : Mode_SemiAuto
		{
			artilleryDispersion=1.7999998;  //mortar = 1.9, artillery base = 7.2
		};
	};
	class rhs_weap_2a31: rhs_weap_2a33
	{
		magazines[]+={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32"
		};
		class Single1: Single1
		{
			artilleryDispersion=1.7999998;  //mortar = 1.9, artillery base = 7.2
		};
	};


	class rhs_weap_d30: mortar_155mm_AMOS
	{
		magazines[]+={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"
		};
		class Single1: Mode_SemiAuto
		{
			artilleryDispersion=1.7999998;  //mortar = 1.9, artillery base = 7.2
			artilleryCharge=0.16; //from 0.25999999;
		};
		class Single2: Single1
		{
			artilleryCharge=0.19;
		};
		class Single3: Single1
		{
			artilleryCharge=0.24;
		};
		class Single4: Single1
		{
			artilleryCharge=0.30;
		};
		class Single5: Single1
		{
			artilleryCharge=0.38;
		};
		class Single6: Single1
		{
			artilleryCharge=0.48;
		};
	};
};

