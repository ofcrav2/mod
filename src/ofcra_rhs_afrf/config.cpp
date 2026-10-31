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
	// Turret declarations, one level up, so the artillery below can override MainTurret
	class LandVehicle;
	class Tank;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticCannon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};

	//nerf 2S1 ammo to make it closer to PzH 2000 etc
	// All artillery starts with OFCRA shells only (every faction's 2S1 / 2S3 / D-30 inherits these: RHS, 3CB, ...)
	class rhs_2s1tank_base: Tank_F
	{
		armor=150;
		armorStructural=3;
		damageResistance=0.0054700002;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"};
			};
		};
	};
	class rhs_2s3tank_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"};
			};
		};
	};
	class rhs_D30_base: StaticCannon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"};
			};
		};
	};

	// Direct-fire (AT) versions: keep RHS's AP / HEAT and the rangefinder, HE is one OFCRA 32-round magazine
	class rhs_2s1tank_at_base: rhs_2s1tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"OFCRA_ARTILLERY_HE_MAG_32","rhs_mag_bk13_10","rhs_laserfcsmag","rhs_laserfcsmag"};
			};
		};
	};
	class rhs_2s3tank_at_base: rhs_2s3tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"OFCRA_ARTILLERY_HE_MAG_32","rhs_mag_br540_10","rhs_mag_bp540_4","rhs_laserfcsmag","rhs_laserfcsmag"};
			};
		};
	};
	class rhs_D30_AT_base: rhs_D30_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"rhs_mag_bk6m","rhs_mag_bk6m","rhs_mag_bk6m","rhs_mag_bk6m","rhs_mag_bk6m","rhs_mag_bk6m","rhs_mag_bk6m","rhs_mag_bk6m","rhs_mag_bk6m","rhs_mag_bk6m","OFCRA_ARTILLERY_HE_MAG_32","rhs_laserfcsmag","rhs_laserfcsmag"};
			};
		};
	};
}


class Mode_SemiAuto;
class CfgWeapons
{
	class mortar_155mm_AMOS;
	// OFCRA shells only: "=" replaces RHS's list ("+=" only added to it) and the empty magazineWell stops
	// RHS / ACE shells being loaded through magazine wells
	class rhs_weap_2a33: mortar_155mm_AMOS
	{
		magazines[]={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"
		};
		magazineWell[]={};
		class Single1 : Mode_SemiAuto
		{
			artilleryDispersion=1.7999998;  //mortar = 1.9, artillery base = 7.2
		};
	};
	class rhs_weap_2a31: rhs_weap_2a33
	{
		magazines[]={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"
		};
		magazineWell[]={};
		class Single1: Single1
		{
			artilleryDispersion=1.7999998;  //mortar = 1.9, artillery base = 7.2
		};
	};


	// Direct-fire (AT) guns: RHS's AP / HEAT plus OFCRA HE (they used to inherit the artillery guns' list)
	class rhs_weap_2a33_at: rhs_weap_2a33
	{
		magazines[]={
			"rhs_mag_br540_10","rhs_mag_br540","rhs_mag_bp540_4","rhs_mag_bp540",
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32"
		};
	};
	class rhs_weap_2a31_at: rhs_weap_2a31
	{
		magazines[]={
			"rhs_mag_bk13","rhs_mag_bk13_5","rhs_mag_bk13_10","rhs_mag_bk13_26",
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32"
		};
	};

	class rhs_weap_d30: mortar_155mm_AMOS
	{
		magazines[]={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"
		};
		magazineWell[]={};
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
	class rhs_weap_d30_at: rhs_weap_d30
	{
		magazines[]={
			"rhs_mag_bk6m","rhs_mag_bk6m_5","rhs_mag_bk6m_26","rhs_mag_bk13","rhs_mag_bk13_5","rhs_mag_bk13_26",
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32"
		};
	};
};

