class CfgPatches
{
	class ofcra_rhs_usf_m109
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"rhsusf_main_loadorder",
			"ofcra_ammo_base"
		};
	};
};



class Mode_SemiAuto;
class CfgWeapons
{

	class mortar_155mm_AMOS;
	class cannon_155mm: mortar_155mm_AMOS
	{
		class Single1;
	};
	class rhs_weap_m284: cannon_155mm
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
			"Single6"
		};
		class Single1 : Single1
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
	};

	class OFCRA_weap_m284: rhs_weap_m284
	{
		displayName = "OFCRA 155mm Howitzer"; 
		magazines[]={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32",	"OFCRA_SMOKE_MAGAZINE"
		};
	};
}


class CfgVehicles
{
	class MBT_01_base_F;
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets;
	};
	class rhsusf_m109tank_base : MBT_01_arty_base_F
	{
		class Turrets : Turrets {
			class MainTurret;
		}
	};
	class rhsusf_m109_usarmy: rhsusf_m109tank_base{};
	class rhsusf_m109d_usarmy: rhsusf_m109_usarmy{};
	class OFCRA_m109tank: rhsusf_m109_usarmy
	{
		displayName = "OFCRA M109 Howitzer"; 


		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OFCRA_weap_m284"
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

	class OFCRA_m109tank_d: rhsusf_m109d_usarmy
	{
		displayName = "OFCRA M109 Howitzer"; 


		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OFCRA_weap_m284"
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
};

