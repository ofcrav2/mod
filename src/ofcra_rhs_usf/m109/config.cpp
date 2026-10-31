class CfgPatches
{
	class ofcra_rhs_usf_m109
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{
			"OFCRA_m109tank",
			"OFCRA_m109tank_d"

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
	// OFCRA shells only: "=" replaces RHS's list and the empty magazineWell stops RHS / ACE shells
	class rhs_weap_m284: cannon_155mm
	{
		magazines[]={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"
		};
		magazineWell[]={};

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
		class Single7: Single1
		{
			displayName="Charge 6";
			artilleryCharge=0.6;
		};
	};

	// M119 105mm (RHS USAF, 3CB)
	class RHS_weap_M119: mortar_155mm_AMOS
	{
		magazines[]={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"
		};
		magazineWell[]={};
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
	// declarations the M109's turrets / optics inherit from (the same ones RHS's own M109 config uses)
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class ViewOptics;
	};
	class MBT_01_base_F: Tank_F
	{
	};
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
					};
				};
			};
		};
	};
	// every faction's M109 (RHS, 3CB, ...) inherits this: OFCRA shells only
	class rhsusf_m109tank_base : MBT_01_arty_base_F
	{
		class Turrets : Turrets {
			class MainTurret: MainTurret
			{
				magazines[] = {"OFCRA_ARTILLERY_HE_MAG_32","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE","OFCRA_SMOKE_MAGAZINE"};

				// Gunner sights: RHS's Wide / Medium / Narrow (fixed to the turret, not the gun's elevation), then two
				// looking along the barrel (9x and 18x) - like the 2S1's OP5 sight. Config can only use points that exist
				// in the model, so the camera sits on the gun's recoil axis (recoilhlaven_axis, 1.6 m forward of the
				// trunnion, past the turret front) looking at the muzzle (usti hlavne3): both move with the gun's elevation.
				// (konec hlavne3 is the trunnion, inside the turret - that's what blocked the first try.)
				// No thermals on any M109 sight: the gunner's Wide (Medium / Narrow and the barrel sights inherit it)
				// and the commander's sight
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics
						{
							visionMode[]={"Normal"};
							thermalMode[]={};
						};
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						visionMode[]={"Normal"};
						thermalMode[]={};
					};
					class Medium;
					class Narrow;
					// barrel sights at high zoom only - the camera is inside the barrel, so at lower zoom the barrel and
					// muzzle brake fill the view: 9x is clear top to bottom, 18x completely clear (zoom = 0.25 / fov:
					// RHS's Wide 0.8x, Medium 3.6x, Narrow 8.9x)
					class Barrel_9x: Narrow
					{
						opticsDisplayName="BARREL 9x";
						camPos="recoilhlaven_axis";
						camDir="usti hlavne3";
						initFov=0.0278;
						minFov=0.0278;
						maxFov=0.0278;
					};
					class Barrel_18x: Narrow
					{
						opticsDisplayName="BARREL 18x";
						camPos="recoilhlaven_axis";
						camDir="usti hlavne3";
						initFov=0.0139;
						minFov=0.0139;
						maxFov=0.0139;
					};
				};
			};
		};


		class textureSources
		{
			class standard
			{
				displayName="Woodland";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_wd_co.paa",
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_wd_co.paa",
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_wd_co.paa",
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_wd_ca.paa",
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_wd_co.paa"
				};
				factions[]=
				{
					"rhs_faction_usarmy_wd"
				};
			};
			class Desert
			{
				displayName="Desert";
				author="$STR_RHSUSF_AUTHOR_FULL";
				textures[]=
				{
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_01_d_co.paa",
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_02_d_co.paa",
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_03_d_co.paa",
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_d_ca.paa",
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_wheels_d_co.paa"
				};
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};
			class Tan
			{
				displayName="Tan";
				author="wombat";
				textures[]=
				{
					"\ofcra_rhs_usf\m109\rhsusf_m109a6_01_tan_co.paa",
					"\ofcra_rhs_usf\m109\rhsusf_m109a6_02_tan_co.paa",
					"\ofcra_rhs_usf\m109\rhsusf_m109a6_03_tan_co.paa",
					"rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_d_ca.paa",
					"\ofcra_rhs_usf\m109\rhsusf_m109a6_wheels_tan_co.paa"
				};
				factions[]=
				{
					"rhs_faction_usarmy_d"
				};
			};

		};


	};
	// M119 105mm: every faction's M119 inherits this
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
	class RHS_M119_base: StaticCannon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"OFCRA_ARTILLERY_HE_MAG_32","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE","OFCRA_SMOKE_MAGAZINE"};
			};
		};
	};

	class rhsusf_m109_usarmy: rhsusf_m109tank_base{};
	class rhsusf_m109d_usarmy: rhsusf_m109_usarmy{};
	class OFCRA_m109tank: rhsusf_m109_usarmy
	{
		displayName = "OFCRA M109 Howitzer"; 
		scopeCurator=2;


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
		scopeCurator=2;


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

