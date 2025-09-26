class CfgPatches
{
	class ofcra_bw_mod_pzh2000
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"bwa3_pzh2000",
			"ofcra_ammo_base"
		};
	};
};



class CfgAmmo
{
	class OFCRA_12cm_HEAT;
	class BWA3_Sh_120mm_MZ: OFCRA_12cm_HEAT
	{
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};	
};
class CfgMagazines
{
	class 30Rnd_120mm_HE_shells;
	class BWA3_1Rnd_MZ_shells: 30Rnd_120mm_HE_shells
	{
		displayNameShort="OFCRA 12cm HEAT";
		ammo="OFCRA_12cm_HEAT";
	};

	class BWA3_1Rnd_HE_shells: 30Rnd_120mm_HE_shells
	{
		displayNameShort="OFCRA 12cm HE";
		ammo="OFCRA_12cm_BASE";
	};	
	
};



class Mode_SemiAuto;
class CfgWeapons
{

	class CannonCore;
	class BWA3_RH155mm_AMOS: CannonCore
	{
		magazines[]+={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32",	"OFCRA_SMOKE_MAGAZINE"
		};

		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Single4",
			"Single5",
			"Single6",
			"Single7"
		};
		class Single1 : Mode_SemiAuto
		{
			displayName="Charge 0";
			artilleryCharge=0.145;
			artilleryDispersion=1.7999998;  //mortar = 1.9, artillery base = 7.2
		};
		class Single2: Single1
		{
			displayName="Charge 1";
			artilleryCharge=0.19;
		};
		class Single3: Single1
		{
			displayName="Charge 2";
			artilleryCharge=0.24;
		};
		class Single4: Single1
		{
			displayName="Charge 3";
			artilleryCharge=0.30;
		};
		class Single5: Single1
		{
			displayName="Charge 4";
			artilleryCharge=0.38;
		};
		class Single6: Single1
		{
			displayName="Charge 5";
			artilleryCharge=0.48;
		};
		class Single7: Single1
		{
			displayName="Charge 6";
			artilleryCharge=0.6;
		};
	};

	class OFCRA_RH155mm_AMOS: BWA3_RH155mm_AMOS
	{
		displayName = "OFCRA 155mm Howitzer"; 
		magazines[]={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32",	"OFCRA_SMOKE_MAGAZINE"
		};
	};
}


class CfgVehicles
{


	class Tank;
	class Tank_F: Tank {
		class Turrets;
	}
	class BWA3_Panzerhaubitze2000_base : Tank_F{
		class Turrets : Turrets {
			class MainTurret;
		}
	}

	class BWA3_Panzerhaubitze2000_Fleck: BWA3_Panzerhaubitze2000_base{};
	class BWA3_Panzerhaubitze2000_Tropen: BWA3_Panzerhaubitze2000_base{};


	class OFCRA_Panzerhaubitze2000_Tropen: BWA3_Panzerhaubitze2000_Tropen
	{
		displayName = "OFCRA PzH 2000"; 


		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OFCRA_RH155mm_AMOS"
				};
				magazines[]= {
					"OFCRA_ARTILLERY_HE_MAG_32",
					"OFCRA_ARTILLERY_HE_MAG_32",

					"OFCRA_SMOKE_MAGAZINE",
					"OFCRA_SMOKE_MAGAZINE",
				};
			};
		};
	};
	class OFCRA_Panzerhaubitze2000_Fleck: BWA3_Panzerhaubitze2000_Fleck
	{
		displayName = "OFCRA PzH 2000";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OFCRA_RH155mm_AMOS"
				};
				magazines[]= {
					"OFCRA_ARTILLERY_HE_MAG_32",
					"OFCRA_ARTILLERY_HE_MAG_32",

					"OFCRA_SMOKE_MAGAZINE",
					"OFCRA_SMOKE_MAGAZINE",
				};
			};
		};
	};
}


