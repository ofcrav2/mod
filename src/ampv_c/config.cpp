#include "BIS_AddonInfo.hpp"
class CfgFunctions
{

	class AMPV 
	{
		class AMPV_Weapons
		{
            file = "\ampv_c\functions";
            class firedABMAMPV 
			{
				headerType = -1;
			};
        };
     	class acePylon
		{
		 	class AMPV_actions 
		 	{
		 		file = "\ampv_c\functions\fn_AMPV_actions.sqf";
		 		preInit = 0;
		 		preStart = 0;
		 		postInit = 1;
		 		recompile = 1;
		 	};
		};
    };
};
class CfgPatches
{
	class ampv_c_lk
	{
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"rhsusf_c_heavyweapons",
			"ampv_lk",
			"ampv_rws_lk",
			"ampv_cuas_lk",
			"rhsusf_c_airweapons",
			"ampv_medeacv_lk"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_M1283_M2",
			"usarmy_M1283_M2",
			"usarmy_M1283_M2_WD",
			"B_M1283RWS",
			"usarmy_M1283RWS",
			"usarmy_M1283RWS_WD",
			"B_M1283CUAS",
			"usarmy_M1283CUAS",
			"usarmy_M1283CUAS_WD",
			"B_M1284",
			"usarmy_M1284",
			"usarmy_M1284_WD"
		};
		weapons[]=
		{
			"lk_weap_XM914",
			"LK_weap_m240_m1283_coax",
			"missiles_stinger_AA_LK",
			"lk_missiles_TOW",
			"lk_missiles_hellfire",
			"k_rockets_hydra"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class IRSensorComponent;
class LaserSensorComponent;
class VisualSensorComponent;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Components;
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner;
					};
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class M1283_base: Tank_F
	{
		vehicleClass="Armored";
		displayName="M1283(M2)";
		accuracy=0.30000001;
		author="[CN]Lurker1011,真红战队";
		destrType="DestructDefault";
		model="\ampv\M1283_M2.p3d";
		picture="\ampv_c\ui\m1283_ca.paa";
		icon="\ampv_c\ui\m1283_map_ca.paa";
		editorSubcategory="EdSubcat_APCs";
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_start",
			0.63095737,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_start",
			1,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_stop",
			0.63095737,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_stop",
			1,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_1",
					0.56234133,
					1,
					160
				};
				frequency="0.3	+	((rpm/	2600) factor[(100/	2600),(250/	2600)])*0.1";
				volume="engineOn*camPos*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_2",
					0.79432821,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
				volume="engineOn*camPos*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_3",
					0.89125091,
					1,
					260
				};
				frequency="0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
				volume="engineOn*camPos*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_4",
					1,
					1,
					280
				};
				frequency="0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
				volume="engineOn*camPos*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_5",
					1.1220185,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
				volume="engineOn*camPos*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_6",
					1.2589254,
					1,
					320
				};
				frequency="0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
				volume="engineOn*camPos*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_1",
					1,
					1,
					250
				};
				frequency="0.8	+	((rpm/	2600) factor[(500/	2600),(650/	2600)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_2",
					1.1220185,
					1,
					280
				};
				frequency="0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_3",
					1.2589254,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_4",
					1.4125376,
					1,
					340
				};
				frequency="0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_5",
					1.7782794,
					1,
					360
				};
				frequency="0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_6",
					1.9952624,
					1,
					380
				};
				frequency="0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_1",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(500/	2600),(650/	2600)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_2",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_3",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_1",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(500/	2600),(650/	2600)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(400/	2600)])	*	((rpm/	2600) factor[(730/	2600),(610/	2600)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(600/	2600),(1100/	2600)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(550/	2600),(700/	2600)])	*	((rpm/	2600) factor[(1100/	2600),(760/	2600)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(770/	2600),(1400/	2600)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(1060/	2600)])	*	((rpm/	2600) factor[(1400/	2600),(1180/	2600)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(1150/	2600),(1700/	2600)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1130/	2600),(1370/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1500/	2600)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(1500/	2600),(2100/	2600)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1460/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2100/	2600),(1800/	2600)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2600) factor[(1800/	2600),(2600/	2600)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1750/	2600),(2050/	2600)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					3.1622777,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					3.1622777,
					1,
					250
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
					0.63095737,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
					0.70794576,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
					0.63095737,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
					0.70794576,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
		};
		simulation="tankX";
		fuelCapacity=20;
		brakeIdleSpeed=0.1;
		maxSpeed=65;
		normalSpeedForwardCoef=0.61000001;
		slowSpeedForwardCoef=0.25;
		waterResistanceCoef=0.25;
		enginePower=596;
		maxOmega=314.159;
		minOmega=146.608;
		redRpm=3000;
		idleRpm=1400;
		peakTorque=2000;
		tracksSpeed=1;
		torqueCurve[]=
		{
			{0.42424199,0.80000001},
			{0.54545498,0.94999999},
			{0.60606098,0.99000001},
			{0.63636398,1},
			{0.66666698,0.98000002},
			{0.72727299,0.93000001},
			{0.87878799,0.75999999},
			{1,0.60000002}
		};
		thrustDelay=0.5;
		engineMOI=15;
		dampingRateFullThrottle=1.3;
		dampingRateZeroThrottleClutchEngaged=6;
		dampingRateZeroThrottleClutchDisengaged=1;
		clutchStrength=40;
		latency=1.2;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.98484802,0.42424199,0.98484802,0.60606098,0.98484802,0.57575798,0.98484802,0.54545498,0.98484802,0.54545498,1,0.54545498};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.4000001,
				"N",
				0,
				"D1",
				4.4000001,
				"D2",
				3,
				"D3",
				1.75,
				"D4",
				1.3,
				"D5",
				1,
				"D6",
				0.69999999
			};
			transmissionRatios[]=
			{
				"High",
				17.33
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		tankTurnForce=1100000;
		tankTurnForceAngMinSpd=0.75999999;
		tankTurnForceAngSpd=0.80000001;
		accelAidForceCoef=1.5;
		accelAidForceYOffset=-1;
		accelAidForceSpd=1.4;
		class Wheels
		{
			class L2
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				steering=0;
				width=0.5;
				mass=200;
				MOI=10.89;
				dampingRate=900;
				dampingRateInAir=900;
				dampingRateDestroyed=30000;
				maxDroop=0.12;
				maxCompression=0.12;
				sprungMass=2200;
				springStrength=220000;
				springDamperRate=20000;
				maxBrakeTorque=30000;
				latStiffX=1;
				latStiffY=35;
				longitudinalStiffnessPerUnitGravity=14000;
				rictionVsSlipGraph[]=
				{
					{0,0.75},
					{0.050000001,1.5},
					{0.5,0.89999998}
				};
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				suspForceAppPointOffset="wheel_1_9_axis";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				width=0.5;
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				suspForceAppPointOffset="wheel_1_1_axis";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_axis";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
				suspForceAppPointOffset="wheel_2_5_axis";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
				suspForceAppPointOffset="wheel_2_6_axis";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
				suspForceAppPointOffset="wheel_2_7_axis";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				suspForceAppPointOffset="wheel_2_9_axis";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				width=0.5;
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
		};
		cost=1500000;
		damageResistance=0.02;
		crewVulnerable=0;
		armor=800;
		armorStructural=6;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.80000001;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="";
				passThrough=0.1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.60000002;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitLTrack: HitLTrack
			{
				material=-1;
				armorComponent="hit_trackL";
				name="hit_trackL_point";
				visual="pas_L";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitRTrack: HitRTrack
			{
				material=-1;
				armorComponent="hit_trackR";
				name="hit_trackR_point";
				visual="pas_P";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.1;
			};
			class HitArmor
			{
				armor=3;
				material=-1;
				armorComponent="hit_Armor";
				name="hit_Armor_points";
				visual="Armor";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=2;
				radius=0.1;
				isTurret=0;
			};
			class era_1_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e1";
				armorComponent="e1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e1";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e1";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e1";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e1";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_2_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e2";
				armorComponent="e2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e2";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e2";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e2";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e2";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_3_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e3";
				armorComponent="e3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e3";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e3";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e3";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e3";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_4_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e4";
				armorComponent="e4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e4";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e4";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e4";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e4";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_5_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e5";
				armorComponent="e5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e5";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e5";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e5";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e5";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_6_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e6";
				armorComponent="e6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e6";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e6";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e6";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e6";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_7_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e7";
				armorComponent="e7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e7";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e7";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e7";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e7";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_8_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e8";
				armorComponent="e8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e8";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e8";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e8";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e8";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_9_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e9";
				armorComponent="e9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e9";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e9";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e9";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e9";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_10_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e10";
				armorComponent="e10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e10";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e10";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e10";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e10";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_11_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e11";
				armorComponent="e11";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e11";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e11";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e11";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e11";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_12_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e12";
				armorComponent="e12";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e12";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e12";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e12";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e12";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_13_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e13";
				armorComponent="e13";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e13";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e13";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e13";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e13";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_14_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e14";
				armorComponent="e14";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e14";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e14";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e14";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e14";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_15_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e15";
				armorComponent="e15";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e15";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e15";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e15";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e15";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_16_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e16";
				armorComponent="e16";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e16";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e16";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e16";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e16";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_17_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e17";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e17";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e17";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e17";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_18_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e18";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e18";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e18";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e18";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_19_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e19";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e19";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e19";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e19";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_20_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e20";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e20";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e20";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e20";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_21_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e21";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e21";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e21";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e21";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_22_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e22";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e22";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e22";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e22";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_23_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e23";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e23";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e23";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e23";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_24_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e24";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e24";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e24";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e24";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_25_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e25";
				armorComponent="e25";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e25";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e25";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e25";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e25";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e26";
				armorComponent="e26";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e26";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e26";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e26";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e26";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e27";
				armorComponent="e27";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e27";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e27";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e27";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e27";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_28_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e28";
				armorComponent="e28";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e28";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e28";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e28";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e28";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_29_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e29";
				armorComponent="e29";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e29";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e29";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e29";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e29";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_30_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e30";
				armorComponent="e30";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e30";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e30";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e30";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e30";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_31_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e31";
				armorComponent="e31";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e31";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e31";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e31";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e31";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_32_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e32";
				armorComponent="e32";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e32";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e32";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e32";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e32";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_33_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e33";
				armorComponent="e33";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e33";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e33";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e33";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e33";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_34_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e34";
				armorComponent="e34";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e34";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e34";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e34";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e34";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_35_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e35";
				armorComponent="e35";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e35";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e35";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e35";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e35";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_36_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e36";
				armorComponent="e36";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e36";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e36";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e36";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e36";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_37_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e37";
				armorComponent="e37";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e37";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e37";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e37";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e37";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_38_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e38";
				armorComponent="e38";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e38";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e38";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e38";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e38";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_39_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e39";
				armorComponent="e39";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e39";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e39";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e39";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e39";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_40_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e40";
				armorComponent="e40";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e40";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e40";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e40";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e40";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_41_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e41";
				armorComponent="e41";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e41";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e41";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e41";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e41";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_42_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e42";
				armorComponent="e42";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e42";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e42";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e42";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e42";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_43_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e43";
				armorComponent="e43";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e43";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e43";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e43";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e43";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_44_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e44";
				armorComponent="e44";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e44";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e44";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e44";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e44";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_45_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e45";
				armorComponent="e45";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e45";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e45";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e45";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e45";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_46_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e46";
				armorComponent="e46";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e46";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e46";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e46";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e46";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_47_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e47";
				armorComponent="e47";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e47";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e47";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e47";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e47";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_48_hitpoint
			{
				simulation="RHS_ERA_Arat1";
				armor=-100;
				material=-1;
				name="e48";
				armorComponent="e48";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.16;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="fx_e48";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_e48";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_e48";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_e48";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class SLAT_1_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat1";
				armorComponent="slat1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
			class SLAT_2_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat2";
				armorComponent="slat2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
			class SLAT_3_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat3";
				armorComponent="slat3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
			class SLAT_4_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat4";
				armorComponent="slat4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
			class SLAT_5_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat5";
				armorComponent="slat5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
			class SLAT_6_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat6";
				armorComponent="slat6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
			class SLAT_7_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat7";
				armorComponent="slat7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
			class SLAT_8_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat8";
				armorComponent="slat8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
			class SLAT_9_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat9";
				armorComponent="slat9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
			class SLAT_10_hitpoint
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat10";
				armorComponent="slat10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.16;
				visual="-";
			};
		};
		driverDoor="hatchdriver";
		driverOpticsModel="\A3\weapons_f\reticle\Optics_Driver_01_F.p3d";
		viewDriverInExternal=1100;
		LODDriverTurnedOut=1100;
		LODDriverTurnedIn=1201;
		LODDriverOpticsIn=1201;
		driverAction="Driver_APC_tracked_03_cannon_F_out";
		driverInAction="Driver_APC_tracked_03_cannon_F_in";
		driverForceOptics=0;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverLeftLegAnimName="pedal_brake";
		driverRightLegAnimName="pedal_thrust";
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		driverInfoPanelCameraPos="driverview_old";
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.44999999;
			minFov=0.23;
			maxFov=0.44999999;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
			initAngleY=0;
			initFov=0.89999998;
			minFov=0.25;
			maxFov=1.25;
			minAngleX=-65;
			maxAngleX=85;
			minAngleY=-150;
			maxAngleY=150;
			minMoveX=-0.075000003;
			maxMoveX=0.075000003;
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				camPos="driverview";
				opticsModel="\A3\weapons_f\reticle\optics_empty";
				visionMode[]=
				{
					"Normal"
				};
			};
			class DVE_Wide: Wide
			{
				camPos="view_driver";
				opticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
				visionMode[]=
				{
					"TI"
				};
				initFov=1.07692;
				minFov=1.07692;
				maxFov=1.07692;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ampv\tex\m1283_hull.rvmat",
				"ampv\tex\m1283_hull_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_ears.rvmat",
				"ampv\tex\m1283_ears_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_slat.rvmat",
				"ampv\tex\m1283_slat_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_armour.rvmat",
				"ampv\tex\m1283_armour_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_parts.rvmat",
				"ampv\tex\m1283_parts_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_wheels.rvmat",
				"ampv\tex\m1283_wheels_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_turret.rvmat",
				"ampv\tex\m1283_turret_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\ampv\tex\m1283_hull_co.paa",
			"\ampv\tex\m1283_ears_co.paa",
			"\ampv\tex\m1283_slat_co.paa",
			"\ampv\tex\m1283_armour_co.paa",
			"\ampv\tex\m1283_parts_co.paa",
			"\ampv\tex\m1283_wheels_co.paa",
			"\ampv\tex\m1283_turret_co.paa"
		};
		class TextureSources
		{
			class Woodcamo
			{
				displayName="Desert";
				author="Lurker1011";
				textures[]=
				{
					"\ampv\tex\m1283_hull_co.paa",
					"\ampv\tex\m1283_ears_co.paa",
					"\ampv\tex\m1283_slat_co.paa",
					"\ampv\tex\m1283_armour_co.paa",
					"\ampv\tex\m1283_parts_co.paa",
					"\ampv\tex\m1283_wheels_co.paa",
					"\ampv\tex\m1283_turret_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"rhs_faction_usarmy_d",
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
			{
				displayName="Olive";
				author="Lurker1011";
				textures[]=
				{
					"\ampv\tex\m1283_hull_o_co.paa",
					"\ampv\tex\m1283_ears_o_co.paa",
					"\ampv\tex\m1283_slat_o_co.paa",
					"\ampv\tex\m1283_armour_o_co.paa",
					"\ampv\tex\m1283_parts_o_co.paa",
					"\ampv\tex\m1283_wheels_o_co.paa",
					"\ampv\tex\m1283_turret_o_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"rhs_faction_usarmy_d",
					"rhs_faction_usarmy_wd"
				};
			};
		};
		textureList[]=
		{
			"Woodcamo",
			0.80000001,
			"Olive",
			0.2
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="lk_weap_xm35";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="lk_weap_xm35";
			};
			class muzzle_rot_coax
			{
				source="ammorandom";
				weapon="rhs_weap_m240_bradley_coax";
			};
			class recoil_source
			{
				source="reload";
				weapon="lk_weap_xm35";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="FGM148_veh_AT";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class javalin_tube
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class lower_body
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
			class ReloadAnim
			{
				source="reload";
				weapon="RHS_M2_Abrams_Commander";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="RHS_M2_Abrams_Commander";
			};
			class Revolving
			{
				source="revolving";
				weapon="RHS_M2_Abrams_Commander";
			};
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="RHS_M2_Abrams_Commander";
			};
			class muzzle_hide_MG
			{
				source="reload";
				weapon="RHS_M2_Abrams_Commander";
			};
			class ramp
			{
				source="door";
				animPeriod=3.2850001;
				initPhase=0;
				sound="rhs_ramp";
				soundPosition="ramp_axis";
			};
			class ramp_door
			{
				source="door";
				animPeriod=0.80000001;
				sound="RHS_HMMWV_Door";
				soundPosition="ramp_axis";
				initPhase=0;
			};
			class era_1_source
			{
				source="Hit";
				hitpoint="era_1_hitpoint";
			};
			class era_2_source
			{
				source="Hit";
				hitpoint="era_2_hitpoint";
			};
			class era_3_source
			{
				source="Hit";
				hitpoint="era_3_hitpoint";
			};
			class era_4_source
			{
				source="Hit";
				hitpoint="era_4_hitpoint";
			};
			class era_5_source
			{
				source="Hit";
				hitpoint="era_5_hitpoint";
			};
			class era_6_source
			{
				source="Hit";
				hitpoint="era_6_hitpoint";
			};
			class era_7_source
			{
				source="Hit";
				hitpoint="era_7_hitpoint";
			};
			class era_8_source
			{
				source="Hit";
				hitpoint="era_8_hitpoint";
			};
			class era_9_source
			{
				source="Hit";
				hitpoint="era_9_hitpoint";
			};
			class era_10_source
			{
				source="Hit";
				hitpoint="era_10_hitpoint";
			};
			class era_11_source
			{
				source="Hit";
				hitpoint="era_11_hitpoint";
			};
			class era_12_source
			{
				source="Hit";
				hitpoint="era_12_hitpoint";
			};
			class era_13_source
			{
				source="Hit";
				hitpoint="era_13_hitpoint";
			};
			class era_14_source
			{
				source="Hit";
				hitpoint="era_14_hitpoint";
			};
			class era_15_source
			{
				source="Hit";
				hitpoint="era_15_hitpoint";
			};
			class era_16_source
			{
				source="Hit";
				hitpoint="era_16_hitpoint";
			};
			class era_17_source
			{
				source="Hit";
				hitpoint="era_17_hitpoint";
			};
			class era_18_source
			{
				source="Hit";
				hitpoint="era_18_hitpoint";
			};
			class era_19_source
			{
				source="Hit";
				hitpoint="era_19_hitpoint";
			};
			class era_20_source
			{
				source="Hit";
				hitpoint="era_20_hitpoint";
			};
			class era_21_source
			{
				source="Hit";
				hitpoint="era_21_hitpoint";
			};
			class era_22_source
			{
				source="Hit";
				hitpoint="era_22_hitpoint";
			};
			class era_23_source
			{
				source="Hit";
				hitpoint="era_23_hitpoint";
			};
			class era_24_source
			{
				source="Hit";
				hitpoint="era_24_hitpoint";
			};
			class era_25_source
			{
				source="Hit";
				hitpoint="era_25_hitpoint";
			};
			class era_26_source
			{
				source="Hit";
				hitpoint="era_26_hitpoint";
			};
			class era_27_source
			{
				source="Hit";
				hitpoint="era_27_hitpoint";
			};
			class era_28_source
			{
				source="Hit";
				hitpoint="era_28_hitpoint";
			};
			class era_29_source
			{
				source="Hit";
				hitpoint="era_29_hitpoint";
			};
			class era_30_source
			{
				source="Hit";
				hitpoint="era_30_hitpoint";
			};
			class era_31_source
			{
				source="Hit";
				hitpoint="era_31_hitpoint";
			};
			class era_32_source
			{
				source="Hit";
				hitpoint="era_32_hitpoint";
			};
			class era_33_source
			{
				source="Hit";
				hitpoint="era_33_hitpoint";
			};
			class era_34_source
			{
				source="Hit";
				hitpoint="era_34_hitpoint";
			};
			class era_35_source
			{
				source="Hit";
				hitpoint="era_35_hitpoint";
			};
			class era_36_source
			{
				source="Hit";
				hitpoint="era_36_hitpoint";
			};
			class era_37_source
			{
				source="Hit";
				hitpoint="era_37_hitpoint";
			};
			class era_38_source
			{
				source="Hit";
				hitpoint="era_38_hitpoint";
			};
			class era_39_source
			{
				source="Hit";
				hitpoint="era_39_hitpoint";
			};
			class era_40_source
			{
				source="Hit";
				hitpoint="era_40_hitpoint";
			};
			class era_41_source
			{
				source="Hit";
				hitpoint="era_41_hitpoint";
			};
			class era_42_source
			{
				source="Hit";
				hitpoint="era_42_hitpoint";
			};
			class era_43_source
			{
				source="Hit";
				hitpoint="era_43_hitpoint";
			};
			class era_44_source
			{
				source="Hit";
				hitpoint="era_44_hitpoint";
			};
			class era_45_source
			{
				source="Hit";
				hitpoint="era_45_hitpoint";
			};
			class era_46_source
			{
				source="Hit";
				hitpoint="era_46_hitpoint";
			};
			class era_47_source
			{
				source="Hit";
				hitpoint="era_47_hitpoint";
			};
			class era_48_source
			{
				source="Hit";
				hitpoint="era_48_hitpoint";
			};
			class SLAT_1_source
			{
				source="Hit";
				hitpoint="SLAT_1_hitpoint";
			};
			class SLAT_2_source
			{
				source="Hit";
				hitpoint="SLAT_2_hitpoint";
			};
			class SLAT_3_source
			{
				source="Hit";
				hitpoint="SLAT_3_hitpoint";
			};
			class SLAT_4_source
			{
				source="Hit";
				hitpoint="SLAT_4_hitpoint";
			};
			class SLAT_5_source
			{
				source="Hit";
				hitpoint="SLAT_5_hitpoint";
			};
			class SLAT_6_source
			{
				source="Hit";
				hitpoint="SLAT_6_hitpoint";
			};
			class SLAT_7_source
			{
				source="Hit";
				hitpoint="SLAT_7_hitpoint";
			};
			class SLAT_8_source
			{
				source="Hit";
				hitpoint="SLAT_8_hitpoint";
			};
			class SLAT_9_source
			{
				source="Hit";
				hitpoint="SLAT_9_hitpoint";
			};
			class SLAT_10_source
			{
				source="Hit";
				hitpoint="SLAT_10_hitpoint";
			};
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Open ramp";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'ramp' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 1];this setVariable ['ramp_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close ramp";
				condition="this doorPhase 'ramp' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 0];this setVariable ['ramp_handler',0,true]";
			};
			class lower_commander_body
			{
				displayName="Lower commander's body";
				position="pos commander";
				radius=15;
				showwindow=0;
				condition="this animationPhase 'lower_body' == 0 and (alive this) and player in this;";
				statement="this animate ['lower_body', 1]";
				onlyforplayer=1;
			};
			class reset_commander_body
			{
				displayName="Reset commander's body";
				position="pos commander";
				radius=15;
				showwindow=0;
				condition="this animationPhase 'lower_body' == 1 and (alive this) and player in this;";
				statement="this animate ['lower_body', 0]";
				onlyforplayer=1;
			};
		};
		class EventHandlers: EventHandlers
		{
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=120;
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust_dir2";
				effect="ExhaustEffectTankSide";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=60;
				outerAngle=90;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
			};
			class right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class right2: right
			{
				position="light_R_flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2"
			},
			
			{
				"right",
				"right2"
			}
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				gunnerDoor="ramp_door";
				animationSourceHatch="hatchcommander";
				body="hmg_turret";
				gun="hmg_gun";
				gunBeg="usti hlavne3";
				gunEnd="konec hlavne3";
				memoryPointGun[]=
				{
					"usti hlavne3"
				};
				weapons[]=
				{
					"RHS_M2_Abrams_Commander"
				};
				magazines[]=
				{
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red",
					"rhs_mag_100rnd_127x99_mag_Tracer_Red"
				};
				canUseScanners=0;
				allowTabLock=0;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					10
				};
				isPersonTurret=0;
				usePip=0;
				commanding=2;
				minElev=-10;
				initElev=0;
				maxElev=40;
				gunnerAction="gunner_offroad01";
				gunnerInAction="";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				forceHideGunner=0;
				canHideGunner=0;
				lodturnedout=1000;
				lodturnedin=1000;
				lodopticsout=1000;
				lodopticsin=1000;
				stabilizedInAxes=0;
				gunnerForceOptics=0;
				inGunnerMayFire=1;
				outGunnerMayFire=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RHS_RscWeaponZeroing_TurretAdjust";
				memoryPointGunnerOptics="hmg_gunnerview";
				memoryPointGunnerOutOptics="hmg_gunnerview";
				gunnerCompartments="Compartment1";
				selectionFireAnim="zasleh2";
				primaryGunner=1;
				primaryObserver=0;
				startEngine=0;
				maxhorizontalrotspeed=1.04;
				maxverticalrotspeed=1.04;
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=1;
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				gunnerLeftHandAnimName="handleL";
				gunnerRightHandAnimName="handleR";
				animationSourceStickX="MainTurret_Inertia";
				animationSourceStickY="MainGun_Inertia";
				class ViewOptics: RCWSOptics
				{
					initFov=0.375;
					minFov=0.375;
					maxFov=0.375;
					visionMode[]=
					{
						"Normal"
					};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.75;
					minFov=0.375;
					maxFov=0.75;
					visionMode[]={};
				};
				class OpticsIn: Optics_Commander_01
				{
					class Wide: Wide
					{
						visionMode[]=
						{
							"Normal"
						};
						initFov=0.5;
						minFov=0.5;
						maxFov=0.5;
					};
					class narrow: Wide
					{
						initFov=0.34999999;
						minFov=0.34999999;
						maxFov=0.34999999;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="zbran";
						visual="-";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
					};
				};
				class CommanderOptics
				{
				};
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count=30;
			};
			class _xx_rhsusf_200rnd_556x45_mixed_box
			{
				magazine="rhsusf_200rnd_556x45_mixed_box";
				count=10;
			};
			class _xx_rhs_fgm148_magazine_AT
			{
				magazine="rhs_fgm148_magazine_AT";
				count=5;
			};
			class _xx_rhs_m136_mag
			{
				magazine="rhs_m136_mag";
				count=2;
			};
			class _xx_rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=10;
			};
			class _xx_rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class _xx_rhs_mag_an_m8hc
			{
				magazine="rhs_mag_an_m8hc";
				count=5;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_fgm148
			{
				weapon="rhs_weap_fgm148";
				count=1;
			};
			class _xx_rhs_weap_M136
			{
				weapon="rhs_weap_M136";
				count=2;
			};
		};
		ace_vehicle_damage_eraHitpoints[]=
		{
			"era_1_hitpoint",
			"era_2_hitpoint",
			"era_3_hitpoint",
			"era_4_hitpoint",
			"era_5_hitpoint",
			"era_6_hitpoint",
			"era_7_hitpoint",
			"era_8_hitpoint",
			"era_9_hitpoint",
			"era_10_hitpoint",
			"era_11_hitpoint",
			"era_12_hitpoint",
			"era_13_hitpoint",
			"era_14_hitpoint",
			"era_15_hitpoint",
			"era_16_hitpoint",
			"era_17_hitpoint",
			"era_18_hitpoint",
			"era_19_hitpoint",
			"era_20_hitpoint",
			"era_21_hitpoint",
			"era_22_hitpoint",
			"era_23_hitpoint",
			"era_24_hitpoint",
			"era_25_hitpoint",
			"era_26_hitpoint",
			"era_27_hitpoint",
			"era_28_hitpoint",
			"era_29_hitpoint",
			"era_30_hitpoint",
			"era_31_hitpoint",
			"era_32_hitpoint",
			"era_33_hitpoint",
			"era_34_hitpoint",
			"era_35_hitpoint",
			"era_36_hitpoint",
			"era_37_hitpoint",
			"era_38_hitpoint",
			"era_39_hitpoint",
			"era_40_hitpoint",
			"era_41_hitpoint",
			"era_42_hitpoint",
			"era_43_hitpoint",
			"era_44_hitpoint",
			"era_45_hitpoint",
			"era_46_hitpoint",
			"era_47_hitpoint",
			"era_48_hitpoint"
		};
		ace_vehicle_damage_slatHitpoints[]=
		{
			"SLAT_1_hitpoint",
			"SLAT_2_hitpoint",
			"SLAT_3_hitpoint",
			"SLAT_4_hitpoint",
			"SLAT_5_hitpoint",
			"SLAT_6_hitpoint",
			"SLAT_7_hitpoint",
			"SLAT_8_hitpoint",
			"SLAT_9_hitpoint",
			"SLAT_10_hitpoint"
		};
	};
	class B_M1283_M2: M1283_base
	{
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		accuracy=1000;
		displayName="M1283(M2)";
		author="[CN]Lurker1011,真红战队";
		editorPreview="\ampv_c\ui\m1283_pre.jpg";
		transportSoldier=9;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic02"
		};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9};
		getInProxyOrder[]={9,8,7,4,3,6,5,2,1};
		cargoDoors[]=
		{
			"ramp_door"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo 2"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo 2 dir"
		};
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"wheel_koll1",
					0
				},
				
				{
					"wheel_kolol1",
					0
				},
				
				{
					"wheel_podkolol1",
					0
				},
				
				{
					"wheel_kolp1",
					0
				},
				
				{
					"wheel_kolop1",
					0
				},
				
				{
					"wheel_podkolop1",
					0
				},
				
				{
					"wheel_koll2",
					0
				},
				
				{
					"wheel_kolp2",
					0
				},
				
				{
					"wheel_kolol2",
					0
				},
				
				{
					"wheel_kolol3",
					0
				},
				
				{
					"wheel_kolol4",
					0
				},
				
				{
					"wheel_kolol5",
					0
				},
				
				{
					"wheel_kolol6",
					0
				},
				
				{
					"wheel_kolol7",
					0
				},
				
				{
					"wheel_kolop2",
					0
				},
				
				{
					"wheel_kolop3",
					0
				},
				
				{
					"wheel_kolop4",
					0
				},
				
				{
					"wheel_kolop5",
					0
				},
				
				{
					"wheel_kolop6",
					0
				},
				
				{
					"wheel_kolop7",
					0
				},
				
				{
					"wheel_podkolol2",
					0
				},
				
				{
					"wheel_podkolol3",
					0
				},
				
				{
					"wheel_podkolol4",
					0
				},
				
				{
					"wheel_podkolol5",
					0
				},
				
				{
					"wheel_podkolol6",
					0
				},
				
				{
					"wheel_podkolop2",
					0
				},
				
				{
					"wheel_podkolop3",
					0
				},
				
				{
					"wheel_podkolop4",
					0
				},
				
				{
					"wheel_podkolop5",
					0
				},
				
				{
					"wheel_podkolop6",
					0
				},
				
				{
					"podkolol1_hide_damage",
					0
				},
				
				{
					"podkolol2_hide_damage",
					0
				},
				
				{
					"podkolol3_hide_damage",
					0
				},
				
				{
					"podkolol4_hide_damage",
					0
				},
				
				{
					"podkolol5_hide_damage",
					0
				},
				
				{
					"podkolol6_hide_damage",
					0
				},
				
				{
					"podkolol7_hide_damage",
					0
				},
				
				{
					"podkolol8_hide_damage",
					0
				},
				
				{
					"podkolop1_hide_damage",
					0
				},
				
				{
					"podkolop2_hide_damage",
					0
				},
				
				{
					"podkolop3_hide_damage",
					0
				},
				
				{
					"podkolop4_hide_damage",
					0
				},
				
				{
					"podkolop5_hide_damage",
					0
				},
				
				{
					"podkolop6_hide_damage",
					0
				},
				
				{
					"podkolop7_hide_damage",
					0
				},
				
				{
					"podkolop8_hide_damage",
					0
				},
				
				{
					"damagevez",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.17
				},
				
				{
					"recoil",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"maingunoptics",
					0.17
				},
				
				{
					"wheel_podkolop7",
					0
				},
				
				{
					"wheel_podkolol7",
					0
				},
				
				{
					"hatchdriver",
					0
				},
				
				{
					"hatchcommander",
					0
				},
				
				{
					"hatchgunner",
					0
				},
				
				{
					"damagevezvelitele",
					0
				},
				
				{
					"poklop_commander_damage",
					0
				},
				
				{
					"poklop_gunner_damage",
					0
				},
				
				{
					"poklop_driver_damage",
					0
				},
				
				{
					"zaslehrot_hmg",
					703
				},
				
				{
					"zaslehrot_coax",
					3190.8899
				},
				
				{
					"cannon_muzzle_flash",
					0
				},
				
				{
					"zaslehrot_cannon",
					826
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"indicatorvoltammeter",
					0
				},
				
				{
					"indicatortempoil",
					0
				},
				
				{
					"indicatortempwater",
					0
				},
				
				{
					"indicatorspeed_mfd_driver",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_mfd_driver",
					0
				},
				
				{
					"lights_driver",
					0
				},
				
				{
					"lights_driver_off",
					0
				},
				
				{
					"lights_turret",
					0
				},
				
				{
					"cannon_ready_light",
					0
				},
				
				{
					"engine_damage_indicator",
					0
				},
				
				{
					"main_gun_damage_indicator",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					0.029999999
				},
				
				{
					"indicatortempwater_mfd_driver",
					0
				},
				
				{
					"indicatorfuel_mfd_driver",
					1
				},
				
				{
					"indicator_hull_direction_mfd_driver",
					0
				},
				
				{
					"indicator_main_turret_mfd_driver",
					0
				},
				
				{
					"indicator_com_turret_mfd_driver",
					0
				},
				
				{
					"indicator_hull_direction_mfd_com",
					0
				},
				
				{
					"indicator_main_turret_onscreen_com",
					0
				},
				
				{
					"indicator_main_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_onscreen_com",
					0
				},
				
				{
					"indicator_hull_direction_mfd_gunner",
					0
				},
				
				{
					"indicator_main_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_smoke_1",
					1
				},
				
				{
					"indicator_com_smoke_2",
					1
				},
				
				{
					"indicator_damage_engine",
					0
				},
				
				{
					"indicator_damage_fuel",
					0
				},
				
				{
					"indicator_damage_tracks",
					0
				},
				
				{
					"indicator_turret_damage_hull",
					0
				},
				
				{
					"indicator_turret_damage_engine",
					0
				},
				
				{
					"indicator_turret_damage_fuel",
					0
				},
				
				{
					"indicator_turret_damage_main_gun",
					0
				},
				
				{
					"indicator_turret_damage_track",
					0
				},
				
				{
					"indicator_turret_damage_turret",
					0
				},
				
				{
					"indicator_turret_damage_comturret",
					0
				},
				
				{
					"hide_mfd_and_pip_screen_driver",
					1
				},
				
				{
					"hide_mfd_and_pip_screen_gunner",
					1
				},
				
				{
					"hide_mfd_elements",
					1
				},
				
				{
					"turret_control_x",
					0
				},
				
				{
					"turret_control_y",
					0
				},
				
				{
					"com_turret_control_x",
					0
				},
				
				{
					"com_turret_control_y",
					0
				},
				
				{
					"slat_back_normal_hide",
					0
				},
				
				{
					"slat_back_damage_unhide",
					0
				},
				
				{
					"slat_back_damage_hide",
					0
				},
				
				{
					"slat_back_destroyed_unhide",
					0
				},
				
				{
					"slat_back_firegeo_hide",
					0
				},
				
				{
					"slat_right_normal_hide",
					0
				},
				
				{
					"slat_right_damage_unhide",
					0
				},
				
				{
					"slat_right_damage_hide",
					0
				},
				
				{
					"slat_right_destroyed_unhide",
					0
				},
				
				{
					"slat_right_firegeo_hide",
					0
				},
				
				{
					"slat_left_normal_hide",
					0
				},
				
				{
					"slat_left_damage_unhide",
					0
				},
				
				{
					"slat_left_damage_hide",
					0
				},
				
				{
					"slat_left_destroyed_unhide",
					0
				},
				
				{
					"slat_left_firegeo_hide",
					0
				},
				
				{
					"slat_left_plate_normal_hide",
					0
				},
				
				{
					"slat_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_left_plate_damage_hide",
					0
				},
				
				{
					"slat_right_plate_normal_hide",
					0
				},
				
				{
					"slat_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_right_plate_damage_hide",
					0
				},
				
				{
					"slat_back_plate_normal_hide",
					0
				},
				
				{
					"slat_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_back_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_normal_hide",
					0
				},
				
				{
					"slat_top_back_damage_unhide",
					0
				},
				
				{
					"slat_top_back_damage_hide",
					0
				},
				
				{
					"slat_top_back_destroyed_unhide",
					0
				},
				
				{
					"slat_top_back_firegeo_hide",
					0
				},
				
				{
					"slat_top_right_normal_hide",
					0
				},
				
				{
					"slat_top_right_damage_unhide",
					0
				},
				
				{
					"slat_top_right_damage_hide",
					0
				},
				
				{
					"slat_top_right_destroyed_unhide",
					0
				},
				
				{
					"slat_top_right_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_normal_hide",
					0
				},
				
				{
					"slat_top_left_damage_unhide",
					0
				},
				
				{
					"slat_top_left_damage_hide",
					0
				},
				
				{
					"slat_top_left_destroyed_unhide",
					0
				},
				
				{
					"slat_top_left_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_plate_normal_hide",
					0
				},
				
				{
					"slat_top_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_left_plate_damage_hide",
					0
				},
				
				{
					"slat_top_right_plate_normal_hide",
					0
				},
				
				{
					"slat_top_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_right_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_plate_normal_hide",
					0
				},
				
				{
					"slat_top_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_back_plate_damage_hide",
					0
				},
				
				{
					"com_pos_adjust_to_center",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"zasleh2",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.556;
			verticalOffsetWorld=-0.17299999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
	};
	class usarmy_M1283_M2: B_M1283_M2
	{
		crew="rhsusf_army_ocp_combatcrewman";
		faction="rhs_faction_usarmy_d";
		vehicleClass="rhs_vehclass_tank";
	};
	class usarmy_M1283_M2_WD: B_M1283_M2
	{
		crew="rhsusf_army_ucp_combatcrewman";
		faction="rhs_faction_usarmy_wd";
		vehicleClass="rhs_vehclass_tank";
		editorPreview="\ampv_c\ui\m1283_wd_pre.jpg";
		hiddenSelectionsTextures[]=
		{
			"\ampv\tex\m1283_hull_o_co.paa",
			"\ampv\tex\m1283_ears_o_co.paa",
			"\ampv\tex\m1283_slat_o_co.paa",
			"\ampv\tex\m1283_armour_o_co.paa",
			"\ampv\tex\m1283_parts_o_co.paa",
			"\ampv\tex\m1283_wheels_o_co.paa",
			"\ampv\tex\m1283_turret_o_co.paa"
		};
	};
	class M1283RWS_base: M1283_base
	{
		displayName="M1283(M2/Javelin)";
		model="\ampv_rws\M1283_rws.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7",
			"camo8",
			"camo_crowsj"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ampv\tex\m1283_hull.rvmat",
				"ampv\tex\m1283_hull_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_ears.rvmat",
				"ampv\tex\m1283_ears_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_slat.rvmat",
				"ampv\tex\m1283_slat_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_armour.rvmat",
				"ampv\tex\m1283_armour_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_parts.rvmat",
				"ampv\tex\m1283_parts_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_wheels.rvmat",
				"ampv\tex\m1283_wheels_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_turret.rvmat",
				"ampv\tex\m1283_turret_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"m1126_crows_j\tex\m1126_crows_j.rvmat",
				"m1126_crows_j\tex\m1126_crows_j_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"rhsusf\addons\rhsusf_caiman\data\m153.rvmat",
				"rhsusf\addons\rhsusf_caiman\data\m153_dam.rvmat",
				"ampv\tex\m1283_destruction.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\ampv\tex\m1283_hull_co.paa",
			"\ampv\tex\m1283_ears_co.paa",
			"\ampv\tex\m1283_slat_co.paa",
			"\ampv\tex\m1283_armour_co.paa",
			"\ampv\tex\m1283_parts_co.paa",
			"\ampv\tex\m1283_wheels_co.paa",
			"\ampv\tex\m1283_turret_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_co",
			"\m1126_crows_j\tex\m1126_crows_j_D_co.paa"
		};
		class TextureSources
		{
			class Woodcamo
			{
				displayName="Desert";
				author="Lurker1011";
				textures[]=
				{
					"\ampv\tex\m1283_hull_co.paa",
					"\ampv\tex\m1283_ears_co.paa",
					"\ampv\tex\m1283_slat_co.paa",
					"\ampv\tex\m1283_armour_co.paa",
					"\ampv\tex\m1283_parts_co.paa",
					"\ampv\tex\m1283_wheels_co.paa",
					"\ampv\tex\m1283_turret_co.paa",
					"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_co",
					"\m1126_crows_j\tex\m1126_crows_j_D_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"rhs_faction_usarmy_d",
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
			{
				displayName="Olive";
				author="Lurker1011";
				textures[]=
				{
					"\ampv\tex\m1283_hull_o_co.paa",
					"\ampv\tex\m1283_ears_o_co.paa",
					"\ampv\tex\m1283_slat_o_co.paa",
					"\ampv\tex\m1283_armour_o_co.paa",
					"\ampv\tex\m1283_parts_o_co.paa",
					"\ampv\tex\m1283_wheels_o_co.paa",
					"\ampv\tex\m1283_turret_o_co.paa",
					"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_wd_co.paa",
					"\m1126_crows_j\tex\m1126_crows_j_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"rhs_faction_usarmy_d",
					"rhs_faction_usarmy_wd"
				};
			};
		};
		textureList[]=
		{
			"Woodcamo",
			0.80000001,
			"Olive",
			0.2
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Open ramp";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'ramp' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 1];this setVariable ['ramp_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close ramp";
				condition="this doorPhase 'ramp' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 0];this setVariable ['ramp_handler',0,true]";
			};
			class reloadJavelin
			{
				displayName="Reload FGM-148 Javelin";
				position="pos driver";
				radius=20;
				condition="player == gunner this &&  this  ammo 'FGM148_veh_AT' == 0";
				statement="[this,gunner this] execVM 'ampv_c\scripts\reloadJavelin.sqf'";
				onlyforplayer=1;
			};
		};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="hmg_gunnerview";
					pointDirection="hmg_gunnerview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
				BBoxes[]=
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="RHS_M2_CROWS_M151";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="RHS_M2_CROWS_M151";
			};
			class Revolving
			{
				source="revolving";
				weapon="RHS_M2_CROWS_M151";
			};
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="RHS_M2_CROWS_M151";
			};
			class muzzle_hide_MG
			{
				source="reload";
				weapon="RHS_M2_CROWS_M151";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				gunnerDoor="ramp_door";
				animationsourcehatch="hatchcommander";
				body="hmg_turret";
				gun="hmg_gun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGun[]=
				{
					"usti hlavne"
				};
				weapons[]=
				{
					"RHS_M2_CROWS_M151",
					"FGM148_veh_AT",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"1Rnd_FGM148_AT",
					"SmokeLauncherMag"
				};
				canUseScanners=0;
				allowTabLock=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.39810717,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
				isPersonTurret=0;
				usePip=1;
				commanding=2;
				minElev=-10;
				initElev=0;
				maxElev=40;
				gunnerAction="Gunner_APC_tracked_03_cannon_F_out";
				gunnerInAction="Gunner_APC_tracked_03_cannon_F_in";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				forceHideGunner=0;
				canHideGunner=1;
				lodturnedout=1;
				lodturnedin=1000;
				lodopticsout=1;
				lodopticsin=1;
				stabilizedInAxes=3;
				gunnerForceOptics=0;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				discreteDistance[]={100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RHS_RscStryker_M151_CROWS";
				memoryPointGunnerOptics="hmg_gunnerview";
				memoryPointGunnerOutOptics="hmg_gunnerview";
				gunnerCompartments="Compartment1";
				selectionFireAnim="zasleh2";
				primaryGunner=1;
				primaryObserver=1;
				startEngine=0;
				maxhorizontalrotspeed=1.04;
				maxverticalrotspeed=1.04;
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control";
				class ViewOptics: RCWSOptics
				{
					initFov=0.375;
					minFov=0.375;
					maxFov=0.375;
					visionMode[]=
					{
						"Normal"
					};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-5;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class OpticsIn: Optics_Commander_01
				{
					class DaysightWFOV: ViewOptics
					{
						opticsDisplayName="1.0x";
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
						initFov=0.69999999;
						minFov=0.69999999;
						maxFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_CROWS_Day";
					};
					class ThermalWFOV: DaysightWFOV
					{
						opticsDisplayName="4.3x";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={0,1};
						initFov=0.162791;
						minFov=0.162791;
						maxFov=0.162791;
						hitpoint="Hit_Optic_CROWS_TI";
					};
					class ThermalNFOV: ThermalWFOV
					{
						opticsDisplayName="12.5x";
						initFov=0.056000002;
						minFov=0.056000002;
						maxFov=0.056000002;
					};
					class DaysightNFOV: DaysightWFOV
					{
						opticsDisplayName="15.0x";
						initFov=0.0466667;
						minFov=0.0466667;
						maxFov=0.0466667;
					};
					class DaysightVNFOV: DaysightWFOV
					{
						opticsDisplayName="30.0x";
						initFov=0.0233333;
						minFov=0.0233333;
						maxFov=0.0233333;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="zbran";
						visual="-";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
					};
				};
				class CommanderOptics
				{
				};
			};
		};
	};
	class B_M1283RWS: M1283RWS_base
	{
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		accuracy=1000;
		displayName="M1283(M2/Javelin)";
		author="[CN]Lurker1011,真红战队";
		picture="\ampv_c\ui\m1283_rws_ca.paa";
		editorPreview="\ampv_c\ui\m1283_CrowsJ_pre.jpg";
		transportSoldier=9;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic02"
		};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9};
		getInProxyOrder[]={9,8,7,4,3,6,5,2,1};
		cargoDoors[]=
		{
			"ramp_door"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo 2"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo 2 dir"
		};
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"wheel_koll1",
					0
				},
				
				{
					"wheel_kolol1",
					0
				},
				
				{
					"wheel_podkolol1",
					0
				},
				
				{
					"wheel_kolp1",
					0
				},
				
				{
					"wheel_kolop1",
					0
				},
				
				{
					"wheel_podkolop1",
					0
				},
				
				{
					"wheel_koll2",
					0
				},
				
				{
					"wheel_kolp2",
					0
				},
				
				{
					"wheel_kolol2",
					0
				},
				
				{
					"wheel_kolol3",
					0
				},
				
				{
					"wheel_kolol4",
					0
				},
				
				{
					"wheel_kolol5",
					0
				},
				
				{
					"wheel_kolol6",
					0
				},
				
				{
					"wheel_kolol7",
					0
				},
				
				{
					"wheel_kolop2",
					0
				},
				
				{
					"wheel_kolop3",
					0
				},
				
				{
					"wheel_kolop4",
					0
				},
				
				{
					"wheel_kolop5",
					0
				},
				
				{
					"wheel_kolop6",
					0
				},
				
				{
					"wheel_kolop7",
					0
				},
				
				{
					"wheel_podkolol2",
					0
				},
				
				{
					"wheel_podkolol3",
					0
				},
				
				{
					"wheel_podkolol4",
					0
				},
				
				{
					"wheel_podkolol5",
					0
				},
				
				{
					"wheel_podkolol6",
					0
				},
				
				{
					"wheel_podkolop2",
					0
				},
				
				{
					"wheel_podkolop3",
					0
				},
				
				{
					"wheel_podkolop4",
					0
				},
				
				{
					"wheel_podkolop5",
					0
				},
				
				{
					"wheel_podkolop6",
					0
				},
				
				{
					"podkolol1_hide_damage",
					0
				},
				
				{
					"podkolol2_hide_damage",
					0
				},
				
				{
					"podkolol3_hide_damage",
					0
				},
				
				{
					"podkolol4_hide_damage",
					0
				},
				
				{
					"podkolol5_hide_damage",
					0
				},
				
				{
					"podkolol6_hide_damage",
					0
				},
				
				{
					"podkolol7_hide_damage",
					0
				},
				
				{
					"podkolol8_hide_damage",
					0
				},
				
				{
					"podkolop1_hide_damage",
					0
				},
				
				{
					"podkolop2_hide_damage",
					0
				},
				
				{
					"podkolop3_hide_damage",
					0
				},
				
				{
					"podkolop4_hide_damage",
					0
				},
				
				{
					"podkolop5_hide_damage",
					0
				},
				
				{
					"podkolop6_hide_damage",
					0
				},
				
				{
					"podkolop7_hide_damage",
					0
				},
				
				{
					"podkolop8_hide_damage",
					0
				},
				
				{
					"damagevez",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.17
				},
				
				{
					"recoil",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"maingunoptics",
					0.17
				},
				
				{
					"wheel_podkolop7",
					0
				},
				
				{
					"wheel_podkolol7",
					0
				},
				
				{
					"hatchdriver",
					0
				},
				
				{
					"hatchcommander",
					0
				},
				
				{
					"hatchgunner",
					0
				},
				
				{
					"damagevezvelitele",
					0
				},
				
				{
					"poklop_commander_damage",
					0
				},
				
				{
					"poklop_gunner_damage",
					0
				},
				
				{
					"poklop_driver_damage",
					0
				},
				
				{
					"zaslehrot_hmg",
					703
				},
				
				{
					"zaslehrot_coax",
					3190.8899
				},
				
				{
					"cannon_muzzle_flash",
					0
				},
				
				{
					"zaslehrot_cannon",
					826
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"indicatorvoltammeter",
					0
				},
				
				{
					"indicatortempoil",
					0
				},
				
				{
					"indicatortempwater",
					0
				},
				
				{
					"indicatorspeed_mfd_driver",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_mfd_driver",
					0
				},
				
				{
					"lights_driver",
					0
				},
				
				{
					"lights_driver_off",
					0
				},
				
				{
					"lights_turret",
					0
				},
				
				{
					"cannon_ready_light",
					0
				},
				
				{
					"engine_damage_indicator",
					0
				},
				
				{
					"main_gun_damage_indicator",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					0.029999999
				},
				
				{
					"indicatortempwater_mfd_driver",
					0
				},
				
				{
					"indicatorfuel_mfd_driver",
					1
				},
				
				{
					"indicator_hull_direction_mfd_driver",
					0
				},
				
				{
					"indicator_main_turret_mfd_driver",
					0
				},
				
				{
					"indicator_com_turret_mfd_driver",
					0
				},
				
				{
					"indicator_hull_direction_mfd_com",
					0
				},
				
				{
					"indicator_main_turret_onscreen_com",
					0
				},
				
				{
					"indicator_main_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_onscreen_com",
					0
				},
				
				{
					"indicator_hull_direction_mfd_gunner",
					0
				},
				
				{
					"indicator_main_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_smoke_1",
					1
				},
				
				{
					"indicator_com_smoke_2",
					1
				},
				
				{
					"indicator_damage_engine",
					0
				},
				
				{
					"indicator_damage_fuel",
					0
				},
				
				{
					"indicator_damage_tracks",
					0
				},
				
				{
					"indicator_turret_damage_hull",
					0
				},
				
				{
					"indicator_turret_damage_engine",
					0
				},
				
				{
					"indicator_turret_damage_fuel",
					0
				},
				
				{
					"indicator_turret_damage_main_gun",
					0
				},
				
				{
					"indicator_turret_damage_track",
					0
				},
				
				{
					"indicator_turret_damage_turret",
					0
				},
				
				{
					"indicator_turret_damage_comturret",
					0
				},
				
				{
					"hide_mfd_and_pip_screen_driver",
					1
				},
				
				{
					"hide_mfd_and_pip_screen_gunner",
					1
				},
				
				{
					"hide_mfd_elements",
					1
				},
				
				{
					"turret_control_x",
					0
				},
				
				{
					"turret_control_y",
					0
				},
				
				{
					"com_turret_control_x",
					0
				},
				
				{
					"com_turret_control_y",
					0
				},
				
				{
					"slat_back_normal_hide",
					0
				},
				
				{
					"slat_back_damage_unhide",
					0
				},
				
				{
					"slat_back_damage_hide",
					0
				},
				
				{
					"slat_back_destroyed_unhide",
					0
				},
				
				{
					"slat_back_firegeo_hide",
					0
				},
				
				{
					"slat_right_normal_hide",
					0
				},
				
				{
					"slat_right_damage_unhide",
					0
				},
				
				{
					"slat_right_damage_hide",
					0
				},
				
				{
					"slat_right_destroyed_unhide",
					0
				},
				
				{
					"slat_right_firegeo_hide",
					0
				},
				
				{
					"slat_left_normal_hide",
					0
				},
				
				{
					"slat_left_damage_unhide",
					0
				},
				
				{
					"slat_left_damage_hide",
					0
				},
				
				{
					"slat_left_destroyed_unhide",
					0
				},
				
				{
					"slat_left_firegeo_hide",
					0
				},
				
				{
					"slat_left_plate_normal_hide",
					0
				},
				
				{
					"slat_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_left_plate_damage_hide",
					0
				},
				
				{
					"slat_right_plate_normal_hide",
					0
				},
				
				{
					"slat_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_right_plate_damage_hide",
					0
				},
				
				{
					"slat_back_plate_normal_hide",
					0
				},
				
				{
					"slat_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_back_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_normal_hide",
					0
				},
				
				{
					"slat_top_back_damage_unhide",
					0
				},
				
				{
					"slat_top_back_damage_hide",
					0
				},
				
				{
					"slat_top_back_destroyed_unhide",
					0
				},
				
				{
					"slat_top_back_firegeo_hide",
					0
				},
				
				{
					"slat_top_right_normal_hide",
					0
				},
				
				{
					"slat_top_right_damage_unhide",
					0
				},
				
				{
					"slat_top_right_damage_hide",
					0
				},
				
				{
					"slat_top_right_destroyed_unhide",
					0
				},
				
				{
					"slat_top_right_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_normal_hide",
					0
				},
				
				{
					"slat_top_left_damage_unhide",
					0
				},
				
				{
					"slat_top_left_damage_hide",
					0
				},
				
				{
					"slat_top_left_destroyed_unhide",
					0
				},
				
				{
					"slat_top_left_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_plate_normal_hide",
					0
				},
				
				{
					"slat_top_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_left_plate_damage_hide",
					0
				},
				
				{
					"slat_top_right_plate_normal_hide",
					0
				},
				
				{
					"slat_top_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_right_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_plate_normal_hide",
					0
				},
				
				{
					"slat_top_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_back_plate_damage_hide",
					0
				},
				
				{
					"com_pos_adjust_to_center",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"zasleh2",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.556;
			verticalOffsetWorld=-0.17299999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
	};
	class usarmy_M1283RWS: B_M1283RWS
	{
		crew="rhsusf_army_ocp_combatcrewman";
		faction="rhs_faction_usarmy_d";
		vehicleClass="rhs_vehclass_tank";
	};
	class usarmy_M1283RWS_WD: B_M1283RWS
	{
		crew="rhsusf_army_ucp_combatcrewman";
		faction="rhs_faction_usarmy_wd";
		vehicleClass="rhs_vehclass_tank";
		editorPreview="\ampv_c\ui\m1283_CrowsJ_wd_pre.jpg";
		hiddenSelectionsTextures[]=
		{
			"\ampv\tex\m1283_hull_o_co.paa",
			"\ampv\tex\m1283_ears_o_co.paa",
			"\ampv\tex\m1283_slat_o_co.paa",
			"\ampv\tex\m1283_armour_o_co.paa",
			"\ampv\tex\m1283_parts_o_co.paa",
			"\ampv\tex\m1283_wheels_o_co.paa",
			"\ampv\tex\m1283_turret_o_co.paa",
			"rhsusf\addons\rhsusf_m1a2\data\rhsusf_m1a2sepv2_crows_wd_co.paa",
			"\m1126_crows_j\tex\m1126_crows_j_co.paa"
		};
	};
	class M1283CUAS_base: M1283_base
	{
		displayName="M1283(FEP)";
		model="\ampv_cuas\M1283_cuas.p3d";
		radarType=2;
		reportRemoteTargets=1;
		receiveRemoteTargets=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo_riwp"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ampv\tex\m1283_hull.rvmat",
				"ampv\tex\m1283_hull_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_ears.rvmat",
				"ampv\tex\m1283_ears_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_slat.rvmat",
				"ampv\tex\m1283_slat_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_armour.rvmat",
				"ampv\tex\m1283_armour_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_parts.rvmat",
				"ampv\tex\m1283_parts_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_wheels.rvmat",
				"ampv\tex\m1283_wheels_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv_cuas\tex\riwp.rvmat",
				"ampv_cuas\tex\riwp_damage.rvmat",
				"ampv_cuas\tex\riwp_destruction.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\ampv\tex\m1283_hull_co.paa",
			"\ampv\tex\m1283_ears_co.paa",
			"\ampv\tex\m1283_slat_co.paa",
			"\ampv\tex\m1283_armour_co.paa",
			"\ampv\tex\m1283_parts_co.paa",
			"\ampv\tex\m1283_wheels_co.paa",
			"\ampv_cuas\tex\riwp_co.paa"
		};
		class TextureSources
		{
			class Woodcamo
			{
				displayName="Desert";
				author="Lurker1011";
				textures[]=
				{
					"\ampv\tex\m1283_hull_co.paa",
					"\ampv\tex\m1283_ears_co.paa",
					"\ampv\tex\m1283_slat_co.paa",
					"\ampv\tex\m1283_armour_co.paa",
					"\ampv\tex\m1283_parts_co.paa",
					"\ampv\tex\m1283_wheels_co.paa",
					"\ampv_cuas\tex\riwp_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"rhs_faction_usarmy_d",
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
			{
				displayName="Olive";
				author="Lurker1011";
				textures[]=
				{
					"\ampv\tex\m1283_hull_o_co.paa",
					"\ampv\tex\m1283_ears_o_co.paa",
					"\ampv\tex\m1283_slat_o_co.paa",
					"\ampv\tex\m1283_armour_o_co.paa",
					"\ampv\tex\m1283_parts_o_co.paa",
					"\ampv\tex\m1283_wheels_o_co.paa",
					"\ampv_cuas\tex\riwp_o_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"rhs_faction_usarmy_d",
					"rhs_faction_usarmy_wd"
				};
			};
		};
		textureList[]=
		{
			"Woodcamo",
			0.80000001,
			"Olive",
			0.2
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Open ramp";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'ramp' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 1];this setVariable ['ramp_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close ramp";
				condition="this doorPhase 'ramp' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 0];this setVariable ['ramp_handler',0,true]";
			};
			class SwhitchToADAMode
			{
				displayName="Turn ON Airburst mode";
				position="pos driver";
				radius=20;
				condition="player == gunner this &&  this getVariable ['AAmode',false] == false";
				statement="this setVariable ['AAmode',true,false];";
				onlyforplayer=1;
			};
			class SwhitchToNormalMode
			{
				displayName="Turn OFF Airburst mode";
				position="pos driver";
				radius=20;
				condition="player == gunner this &&  this getVariable ['AAmode',false] == true";
				statement="this setVariable ['AAmode',false,false];";
				onlyforplayer=1;
			};
		};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="hmg_gunnerview";
					pointDirection="hmg_gunnerview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[]={0,0};
				};
				BBoxes[]=
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="LK_weap_m240_m1283_coax";
			};
			class muzzle_hide_MG
			{
				source="reload";
				weapon="LK_weap_m240_m1283_coax";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="lk_weap_XM914";
			};
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="lk_weap_XM914";
			};
			class hideMHR
			{
				displayName="Hide MHR";
				source="user";
				initPhase=0;
				animPeriod=0;
				onPhaseChanged="[(_this # 0),['ActiveRadarSensorComponent',(_this # 1) isEqualTo 0]] remoteExecCall ['enableVehicleSensor',0] ;";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				gunnerDoor="ramp_door";
				animationsourcehatch="hatchcommander";
				body="hmg_turret";
				gun="hmg_gun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh3";
				weapons[]=
				{
					"LK_weap_m240_m1283_coax",
					"lk_weap_XM914",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"300Rnd_30x113mm_M789_HEDT",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"rhs_mag_762x51_M240_200_M80",
					"SmokeLauncherMag"
				};
				canUseScanner = 1;
				allowTabLock=1;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.39810717,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
				isPersonTurret=0;
				usePip=1;
				commanding=2;
				minElev=-20;
				initElev=0;
				maxElev=60;
				gunnerAction="Gunner_APC_tracked_03_cannon_F_out";
				gunnerInAction="Gunner_APC_tracked_03_cannon_F_in";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				forceHideGunner=1;
				canHideGunner=1;
				lodturnedout=1;
				lodturnedin=1000;
				lodopticsout=1;
				lodopticsin=1;
				stabilizedInAxes=3;
				gunnerForceOptics=0;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				discreteDistance[]={100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_APC_Tracked_01_gunner";
				memoryPointGunnerOptics="hmg_gunnerview";
				memoryPointGunnerOutOptics="hmg_gunnerview";
				gunnerCompartments="Compartment1";
				primaryGunner=1;
				primaryObserver=1;
				startEngine=0;
				maxhorizontalrotspeed=1.27;
				maxverticalrotspeed=1.27;
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control";
				class ViewOptics: RCWSOptics
				{
					initFov=0.375;
					minFov=0.375;
					maxFov=0.375;
					visionMode[]=
					{
						"Normal"
					};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-5;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class OpticsIn: Optics_Commander_01
				{
					class Wide
					{
						opticsDisplayName="60HZ";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.5;
						minFov=0.5;
						maxFov=0.5;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_4x";
						gunnerOpticsEffect[]={};
						hitPoint="Hit_Optic_CROWS_Day";
					};
					class Narrow: Wide
					{
						opticsDisplayName="60HZ";
						gunnerOpticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_12x";
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow2x: Narrow
					{
						opticsDisplayName="60HZ 2X";
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Narrow4x: Narrow
					{
						opticsDisplayName="60HZ 4X";
						initFov=0.0145833;
						minFov=0.0145833;
						maxFov=0.0145833;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="hit_turret";
						visual="vez";
						passThrough=0;
						minimalHit=0.14;
						explosionShielding=0.001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="hit_gun";
						visual="-";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
					};
				};
				class CommanderOptics
				{
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={6000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={6000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
				class pylons
				{
					class pylons1
					{
						turret[]={0};
						hardpoints[]=
						{
							"CUAS_pylon_left"
						};
						attachment="2Rnd_Hellfire_AGM";
						priority=13;
						bay=-1;
						maxweight=500;
						UIposition[]={0.60000002,0.25};
					};
					class pylons2: pylons1
					{
						hardpoints[]=
						{
							"CUAS_pylon_right"
						};
						attachment="4Rnd_Stinger_AAM_rightside";
						priority=12;
						UIposition[]={0.15000001,0.25};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"4Rnd_Stinger_AAM",
							"4Rnd_Stinger_AAM_rightside"
						};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown = -30;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.5;
						maxGroundNoiseDistance = 200;
						maxSpeedThreshold = 27.7778;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 225;
						minSpeedThreshold = 20.8333;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 3000;
					};
					class IRSensorComponent: IRSensorComponent
					{
						class AirTarget
						{
							maxRange = 4000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						animDirection = "hmg_gun";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 70;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 2000;
					};
					class LaserSensorComponent: LaserSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 0;
					};
					class VisualSensorComponent: VisualSensorComponent
					{
						class AirTarget
						{
							maxRange = 3000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 2300;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						animDirection = "hmg_gun";
						color[] = {1,1,0.5,0.8};
						componentType = "VisualSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.94;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 70;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						nightRangeCoef = 0;
						typeRecognitionDistance = 2000;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
	};
	class B_M1283CUAS: M1283CUAS_base
	{
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		accuracy=1000;
		displayName="M1283(FEP)";
		author="[CN]Lurker1011,真红战队";
		editorPreview="\ampv_c\ui\m1283_pre.jpg";
		transportSoldier=9;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic02"
		};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9};
		getInProxyOrder[]={9,8,7,4,3,6,5,2,1};
		cargoDoors[]=
		{
			"ramp_door"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo 2"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo 2 dir"
		};
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"wheel_koll1",
					0
				},
				
				{
					"wheel_kolol1",
					0
				},
				
				{
					"wheel_podkolol1",
					0
				},
				
				{
					"wheel_kolp1",
					0
				},
				
				{
					"wheel_kolop1",
					0
				},
				
				{
					"wheel_podkolop1",
					0
				},
				
				{
					"wheel_koll2",
					0
				},
				
				{
					"wheel_kolp2",
					0
				},
				
				{
					"wheel_kolol2",
					0
				},
				
				{
					"wheel_kolol3",
					0
				},
				
				{
					"wheel_kolol4",
					0
				},
				
				{
					"wheel_kolol5",
					0
				},
				
				{
					"wheel_kolol6",
					0
				},
				
				{
					"wheel_kolol7",
					0
				},
				
				{
					"wheel_kolop2",
					0
				},
				
				{
					"wheel_kolop3",
					0
				},
				
				{
					"wheel_kolop4",
					0
				},
				
				{
					"wheel_kolop5",
					0
				},
				
				{
					"wheel_kolop6",
					0
				},
				
				{
					"wheel_kolop7",
					0
				},
				
				{
					"wheel_podkolol2",
					0
				},
				
				{
					"wheel_podkolol3",
					0
				},
				
				{
					"wheel_podkolol4",
					0
				},
				
				{
					"wheel_podkolol5",
					0
				},
				
				{
					"wheel_podkolol6",
					0
				},
				
				{
					"wheel_podkolop2",
					0
				},
				
				{
					"wheel_podkolop3",
					0
				},
				
				{
					"wheel_podkolop4",
					0
				},
				
				{
					"wheel_podkolop5",
					0
				},
				
				{
					"wheel_podkolop6",
					0
				},
				
				{
					"podkolol1_hide_damage",
					0
				},
				
				{
					"podkolol2_hide_damage",
					0
				},
				
				{
					"podkolol3_hide_damage",
					0
				},
				
				{
					"podkolol4_hide_damage",
					0
				},
				
				{
					"podkolol5_hide_damage",
					0
				},
				
				{
					"podkolol6_hide_damage",
					0
				},
				
				{
					"podkolol7_hide_damage",
					0
				},
				
				{
					"podkolol8_hide_damage",
					0
				},
				
				{
					"podkolop1_hide_damage",
					0
				},
				
				{
					"podkolop2_hide_damage",
					0
				},
				
				{
					"podkolop3_hide_damage",
					0
				},
				
				{
					"podkolop4_hide_damage",
					0
				},
				
				{
					"podkolop5_hide_damage",
					0
				},
				
				{
					"podkolop6_hide_damage",
					0
				},
				
				{
					"podkolop7_hide_damage",
					0
				},
				
				{
					"podkolop8_hide_damage",
					0
				},
				
				{
					"damagevez",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.17
				},
				
				{
					"recoil",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"maingunoptics",
					0.17
				},
				
				{
					"wheel_podkolop7",
					0
				},
				
				{
					"wheel_podkolol7",
					0
				},
				
				{
					"hatchdriver",
					0
				},
				
				{
					"hatchcommander",
					0
				},
				
				{
					"hatchgunner",
					0
				},
				
				{
					"damagevezvelitele",
					0
				},
				
				{
					"poklop_commander_damage",
					0
				},
				
				{
					"poklop_gunner_damage",
					0
				},
				
				{
					"poklop_driver_damage",
					0
				},
				
				{
					"zaslehrot_hmg",
					703
				},
				
				{
					"zaslehrot_coax",
					3190.8899
				},
				
				{
					"cannon_muzzle_flash",
					0
				},
				
				{
					"zaslehrot_cannon",
					826
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"indicatorvoltammeter",
					0
				},
				
				{
					"indicatortempoil",
					0
				},
				
				{
					"indicatortempwater",
					0
				},
				
				{
					"indicatorspeed_mfd_driver",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_mfd_driver",
					0
				},
				
				{
					"lights_driver",
					0
				},
				
				{
					"lights_driver_off",
					0
				},
				
				{
					"lights_turret",
					0
				},
				
				{
					"cannon_ready_light",
					0
				},
				
				{
					"engine_damage_indicator",
					0
				},
				
				{
					"main_gun_damage_indicator",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					0.029999999
				},
				
				{
					"indicatortempwater_mfd_driver",
					0
				},
				
				{
					"indicatorfuel_mfd_driver",
					1
				},
				
				{
					"indicator_hull_direction_mfd_driver",
					0
				},
				
				{
					"indicator_main_turret_mfd_driver",
					0
				},
				
				{
					"indicator_com_turret_mfd_driver",
					0
				},
				
				{
					"indicator_hull_direction_mfd_com",
					0
				},
				
				{
					"indicator_main_turret_onscreen_com",
					0
				},
				
				{
					"indicator_main_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_onscreen_com",
					0
				},
				
				{
					"indicator_hull_direction_mfd_gunner",
					0
				},
				
				{
					"indicator_main_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_smoke_1",
					1
				},
				
				{
					"indicator_com_smoke_2",
					1
				},
				
				{
					"indicator_damage_engine",
					0
				},
				
				{
					"indicator_damage_fuel",
					0
				},
				
				{
					"indicator_damage_tracks",
					0
				},
				
				{
					"indicator_turret_damage_hull",
					0
				},
				
				{
					"indicator_turret_damage_engine",
					0
				},
				
				{
					"indicator_turret_damage_fuel",
					0
				},
				
				{
					"indicator_turret_damage_main_gun",
					0
				},
				
				{
					"indicator_turret_damage_track",
					0
				},
				
				{
					"indicator_turret_damage_turret",
					0
				},
				
				{
					"indicator_turret_damage_comturret",
					0
				},
				
				{
					"hide_mfd_and_pip_screen_driver",
					1
				},
				
				{
					"hide_mfd_and_pip_screen_gunner",
					1
				},
				
				{
					"hide_mfd_elements",
					1
				},
				
				{
					"turret_control_x",
					0
				},
				
				{
					"turret_control_y",
					0
				},
				
				{
					"com_turret_control_x",
					0
				},
				
				{
					"com_turret_control_y",
					0
				},
				
				{
					"slat_back_normal_hide",
					0
				},
				
				{
					"slat_back_damage_unhide",
					0
				},
				
				{
					"slat_back_damage_hide",
					0
				},
				
				{
					"slat_back_destroyed_unhide",
					0
				},
				
				{
					"slat_back_firegeo_hide",
					0
				},
				
				{
					"slat_right_normal_hide",
					0
				},
				
				{
					"slat_right_damage_unhide",
					0
				},
				
				{
					"slat_right_damage_hide",
					0
				},
				
				{
					"slat_right_destroyed_unhide",
					0
				},
				
				{
					"slat_right_firegeo_hide",
					0
				},
				
				{
					"slat_left_normal_hide",
					0
				},
				
				{
					"slat_left_damage_unhide",
					0
				},
				
				{
					"slat_left_damage_hide",
					0
				},
				
				{
					"slat_left_destroyed_unhide",
					0
				},
				
				{
					"slat_left_firegeo_hide",
					0
				},
				
				{
					"slat_left_plate_normal_hide",
					0
				},
				
				{
					"slat_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_left_plate_damage_hide",
					0
				},
				
				{
					"slat_right_plate_normal_hide",
					0
				},
				
				{
					"slat_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_right_plate_damage_hide",
					0
				},
				
				{
					"slat_back_plate_normal_hide",
					0
				},
				
				{
					"slat_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_back_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_normal_hide",
					0
				},
				
				{
					"slat_top_back_damage_unhide",
					0
				},
				
				{
					"slat_top_back_damage_hide",
					0
				},
				
				{
					"slat_top_back_destroyed_unhide",
					0
				},
				
				{
					"slat_top_back_firegeo_hide",
					0
				},
				
				{
					"slat_top_right_normal_hide",
					0
				},
				
				{
					"slat_top_right_damage_unhide",
					0
				},
				
				{
					"slat_top_right_damage_hide",
					0
				},
				
				{
					"slat_top_right_destroyed_unhide",
					0
				},
				
				{
					"slat_top_right_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_normal_hide",
					0
				},
				
				{
					"slat_top_left_damage_unhide",
					0
				},
				
				{
					"slat_top_left_damage_hide",
					0
				},
				
				{
					"slat_top_left_destroyed_unhide",
					0
				},
				
				{
					"slat_top_left_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_plate_normal_hide",
					0
				},
				
				{
					"slat_top_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_left_plate_damage_hide",
					0
				},
				
				{
					"slat_top_right_plate_normal_hide",
					0
				},
				
				{
					"slat_top_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_right_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_plate_normal_hide",
					0
				},
				
				{
					"slat_top_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_back_plate_damage_hide",
					0
				},
				
				{
					"com_pos_adjust_to_center",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"zasleh2",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.556;
			verticalOffsetWorld=-0.17299999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
	};
	class usarmy_M1283CUAS: B_M1283CUAS
	{
		crew="rhsusf_army_ocp_combatcrewman";
		faction="rhs_faction_usarmy_d";
		vehicleClass="rhs_vehclass_tank";
	};
	class usarmy_M1283CUAS_WD: B_M1283CUAS
	{
		crew="rhsusf_army_ucp_combatcrewman";
		faction="rhs_faction_usarmy_wd";
		vehicleClass="rhs_vehclass_tank";
		editorPreview="\ampv_c\ui\m1283_wd_pre.jpg";
		hiddenSelectionsTextures[]=
		{
			"\ampv\tex\m1283_hull_o_co.paa",
			"\ampv\tex\m1283_ears_o_co.paa",
			"\ampv\tex\m1283_slat_o_co.paa",
			"\ampv\tex\m1283_armour_o_co.paa",
			"\ampv\tex\m1283_parts_o_co.paa",
			"\ampv\tex\m1283_wheels_o_co.paa",
			"\ampv_cuas\tex\riwp_o_co.paa"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
				class pylons
				{
					class pylons1
					{
						turret[]={0};
						hardpoints[]=
						{
							"CUAS_pylon_left"
						};
						attachment="2Rnd_Hellfire_AGM_O";
						priority=13;
						bay=-1;
						maxweight=500;
						UIposition[]={0.60000002,0.25};
					};
					class pylons2: pylons1
					{
						hardpoints[]=
						{
							"CUAS_pylon_right"
						};
						attachment="4Rnd_Stinger_AAM_rightside_O";
						priority=12;
						UIposition[]={0.15000001,0.25};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"4Rnd_Stinger_AAM_O",
							"4Rnd_Stinger_AAM_rightside_O"
						};
					};
				};
			};
		};
	};
	class M1284_base: M1283_base
	{
		displayName="M1284(Medevac)";
		model="\ampv_medeacv\M1284.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ampv\tex\m1283_hull.rvmat",
				"ampv\tex\m1283_hull_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_ears.rvmat",
				"ampv\tex\m1283_ears_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_slat.rvmat",
				"ampv\tex\m1283_slat_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_armour.rvmat",
				"ampv\tex\m1283_armour_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_parts.rvmat",
				"ampv\tex\m1283_parts_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv\tex\m1283_wheels.rvmat",
				"ampv\tex\m1283_wheels_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat",
				"ampv_medeacv\tex\m1284_parts.rvmat",
				"ampv_medeacv\tex\m1284_parts_damage.rvmat",
				"ampv\tex\m1283_destruction.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\ampv\tex\m1283_hull_co.paa",
			"\ampv\tex\m1283_ears_co.paa",
			"\ampv\tex\m1283_slat_co.paa",
			"\ampv\tex\m1283_armour_co.paa",
			"\ampv\tex\m1283_parts_co.paa",
			"\ampv\tex\m1283_wheels_co.paa",
			"\ampv_medeacv\tex\m1284_parts_co.paa"
		};
		class TextureSources
		{
			class Woodcamo
			{
				displayName="Desert";
				author="Lurker1011";
				textures[]=
				{
					"\ampv\tex\m1283_hull_co.paa",
					"\ampv\tex\m1283_ears_co.paa",
					"\ampv\tex\m1283_slat_co.paa",
					"\ampv\tex\m1283_armour_co.paa",
					"\ampv\tex\m1283_parts_co.paa",
					"\ampv\tex\m1283_wheels_co.paa",
					"\ampv_medeacv\tex\m1284_parts_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"rhs_faction_usarmy_d",
					"rhs_faction_usarmy_wd"
				};
			};
			class Olive
			{
				displayName="Olive";
				author="Lurker1011";
				textures[]=
				{
					"\ampv\tex\m1283_hull_o_co.paa",
					"\ampv\tex\m1283_ears_o_co.paa",
					"\ampv\tex\m1283_slat_o_co.paa",
					"\ampv\tex\m1283_armour_o_co.paa",
					"\ampv\tex\m1283_parts_o_co.paa",
					"\ampv\tex\m1283_wheels_o_co.paa",
					"\ampv_medeacv\tex\m1284_parts_O_co.paa"
				};
				factions[]=
				{
					"BLU_F",
					"rhs_faction_usarmy_d",
					"rhs_faction_usarmy_wd"
				};
			};
		};
		textureList[]=
		{
			"Woodcamo",
			0.80000001,
			"Olive",
			0.2
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Open ramp";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'ramp' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 1];this setVariable ['ramp_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close ramp";
				condition="this doorPhase 'ramp' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 0];this setVariable ['ramp_handler',0,true]";
			};
		};
		class AnimationSources: AnimationSources
		{
		};
		class CargoTurret;
		class Turrets
		{
		};
	};
	class B_M1284: M1284_base
	{
		scope=2;
		scopeCurator=2;
		side=1;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		accuracy=1000;
		displayName="M1284(Medevac)";
		author="[CN]Lurker1011";
		editorPreview="\ampv_c\ui\m1284_pre.jpg";
		picture="\ampv_c\ui\m1284_ca.paa";
		transportSoldier=4;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		cargoAction[]=
		{
			"Passenger_Van_02_Medevac_Back",
			"Passenger_Van_02_Medevac_Back",
			"Patient_Van_02_Medevac_Back",
			"Patient_Van_02_Medevac_Front"
		};
		cargoProxyIndexes[]={1,2,3,4};
		getInProxyOrder[]={1,2,4,3};
		cargoDoors[]=
		{
			"ramp_door"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo 2"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo 2 dir"
		};
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"wheel_koll1",
					0
				},
				
				{
					"wheel_kolol1",
					0
				},
				
				{
					"wheel_podkolol1",
					0
				},
				
				{
					"wheel_kolp1",
					0
				},
				
				{
					"wheel_kolop1",
					0
				},
				
				{
					"wheel_podkolop1",
					0
				},
				
				{
					"wheel_koll2",
					0
				},
				
				{
					"wheel_kolp2",
					0
				},
				
				{
					"wheel_kolol2",
					0
				},
				
				{
					"wheel_kolol3",
					0
				},
				
				{
					"wheel_kolol4",
					0
				},
				
				{
					"wheel_kolol5",
					0
				},
				
				{
					"wheel_kolol6",
					0
				},
				
				{
					"wheel_kolol7",
					0
				},
				
				{
					"wheel_kolop2",
					0
				},
				
				{
					"wheel_kolop3",
					0
				},
				
				{
					"wheel_kolop4",
					0
				},
				
				{
					"wheel_kolop5",
					0
				},
				
				{
					"wheel_kolop6",
					0
				},
				
				{
					"wheel_kolop7",
					0
				},
				
				{
					"wheel_podkolol2",
					0
				},
				
				{
					"wheel_podkolol3",
					0
				},
				
				{
					"wheel_podkolol4",
					0
				},
				
				{
					"wheel_podkolol5",
					0
				},
				
				{
					"wheel_podkolol6",
					0
				},
				
				{
					"wheel_podkolop2",
					0
				},
				
				{
					"wheel_podkolop3",
					0
				},
				
				{
					"wheel_podkolop4",
					0
				},
				
				{
					"wheel_podkolop5",
					0
				},
				
				{
					"wheel_podkolop6",
					0
				},
				
				{
					"podkolol1_hide_damage",
					0
				},
				
				{
					"podkolol2_hide_damage",
					0
				},
				
				{
					"podkolol3_hide_damage",
					0
				},
				
				{
					"podkolol4_hide_damage",
					0
				},
				
				{
					"podkolol5_hide_damage",
					0
				},
				
				{
					"podkolol6_hide_damage",
					0
				},
				
				{
					"podkolol7_hide_damage",
					0
				},
				
				{
					"podkolol8_hide_damage",
					0
				},
				
				{
					"podkolop1_hide_damage",
					0
				},
				
				{
					"podkolop2_hide_damage",
					0
				},
				
				{
					"podkolop3_hide_damage",
					0
				},
				
				{
					"podkolop4_hide_damage",
					0
				},
				
				{
					"podkolop5_hide_damage",
					0
				},
				
				{
					"podkolop6_hide_damage",
					0
				},
				
				{
					"podkolop7_hide_damage",
					0
				},
				
				{
					"podkolop8_hide_damage",
					0
				},
				
				{
					"damagevez",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					0.17
				},
				
				{
					"recoil",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"maingunoptics",
					0.17
				},
				
				{
					"wheel_podkolop7",
					0
				},
				
				{
					"wheel_podkolol7",
					0
				},
				
				{
					"hatchdriver",
					0
				},
				
				{
					"hatchcommander",
					0
				},
				
				{
					"hatchgunner",
					0
				},
				
				{
					"damagevezvelitele",
					0
				},
				
				{
					"poklop_commander_damage",
					0
				},
				
				{
					"poklop_gunner_damage",
					0
				},
				
				{
					"poklop_driver_damage",
					0
				},
				
				{
					"zaslehrot_hmg",
					703
				},
				
				{
					"zaslehrot_coax",
					3190.8899
				},
				
				{
					"cannon_muzzle_flash",
					0
				},
				
				{
					"zaslehrot_cannon",
					826
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"indicatorvoltammeter",
					0
				},
				
				{
					"indicatortempoil",
					0
				},
				
				{
					"indicatortempwater",
					0
				},
				
				{
					"indicatorspeed_mfd_driver",
					0
				},
				
				{
					"indicatorrpm",
					0
				},
				
				{
					"indicatorrpm_mfd_driver",
					0
				},
				
				{
					"lights_driver",
					0
				},
				
				{
					"lights_driver_off",
					0
				},
				
				{
					"lights_turret",
					0
				},
				
				{
					"cannon_ready_light",
					0
				},
				
				{
					"engine_damage_indicator",
					0
				},
				
				{
					"main_gun_damage_indicator",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					0.029999999
				},
				
				{
					"indicatortempwater_mfd_driver",
					0
				},
				
				{
					"indicatorfuel_mfd_driver",
					1
				},
				
				{
					"indicator_hull_direction_mfd_driver",
					0
				},
				
				{
					"indicator_main_turret_mfd_driver",
					0
				},
				
				{
					"indicator_com_turret_mfd_driver",
					0
				},
				
				{
					"indicator_hull_direction_mfd_com",
					0
				},
				
				{
					"indicator_main_turret_onscreen_com",
					0
				},
				
				{
					"indicator_main_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_mfd_com",
					0
				},
				
				{
					"indicator_com_turret_onscreen_com",
					0
				},
				
				{
					"indicator_hull_direction_mfd_gunner",
					0
				},
				
				{
					"indicator_main_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_turret_mfd_gunner",
					0
				},
				
				{
					"indicator_com_smoke_1",
					1
				},
				
				{
					"indicator_com_smoke_2",
					1
				},
				
				{
					"indicator_damage_engine",
					0
				},
				
				{
					"indicator_damage_fuel",
					0
				},
				
				{
					"indicator_damage_tracks",
					0
				},
				
				{
					"indicator_turret_damage_hull",
					0
				},
				
				{
					"indicator_turret_damage_engine",
					0
				},
				
				{
					"indicator_turret_damage_fuel",
					0
				},
				
				{
					"indicator_turret_damage_main_gun",
					0
				},
				
				{
					"indicator_turret_damage_track",
					0
				},
				
				{
					"indicator_turret_damage_turret",
					0
				},
				
				{
					"indicator_turret_damage_comturret",
					0
				},
				
				{
					"hide_mfd_and_pip_screen_driver",
					1
				},
				
				{
					"hide_mfd_and_pip_screen_gunner",
					1
				},
				
				{
					"hide_mfd_elements",
					1
				},
				
				{
					"turret_control_x",
					0
				},
				
				{
					"turret_control_y",
					0
				},
				
				{
					"com_turret_control_x",
					0
				},
				
				{
					"com_turret_control_y",
					0
				},
				
				{
					"slat_back_normal_hide",
					0
				},
				
				{
					"slat_back_damage_unhide",
					0
				},
				
				{
					"slat_back_damage_hide",
					0
				},
				
				{
					"slat_back_destroyed_unhide",
					0
				},
				
				{
					"slat_back_firegeo_hide",
					0
				},
				
				{
					"slat_right_normal_hide",
					0
				},
				
				{
					"slat_right_damage_unhide",
					0
				},
				
				{
					"slat_right_damage_hide",
					0
				},
				
				{
					"slat_right_destroyed_unhide",
					0
				},
				
				{
					"slat_right_firegeo_hide",
					0
				},
				
				{
					"slat_left_normal_hide",
					0
				},
				
				{
					"slat_left_damage_unhide",
					0
				},
				
				{
					"slat_left_damage_hide",
					0
				},
				
				{
					"slat_left_destroyed_unhide",
					0
				},
				
				{
					"slat_left_firegeo_hide",
					0
				},
				
				{
					"slat_left_plate_normal_hide",
					0
				},
				
				{
					"slat_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_left_plate_damage_hide",
					0
				},
				
				{
					"slat_right_plate_normal_hide",
					0
				},
				
				{
					"slat_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_right_plate_damage_hide",
					0
				},
				
				{
					"slat_back_plate_normal_hide",
					0
				},
				
				{
					"slat_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_back_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_normal_hide",
					0
				},
				
				{
					"slat_top_back_damage_unhide",
					0
				},
				
				{
					"slat_top_back_damage_hide",
					0
				},
				
				{
					"slat_top_back_destroyed_unhide",
					0
				},
				
				{
					"slat_top_back_firegeo_hide",
					0
				},
				
				{
					"slat_top_right_normal_hide",
					0
				},
				
				{
					"slat_top_right_damage_unhide",
					0
				},
				
				{
					"slat_top_right_damage_hide",
					0
				},
				
				{
					"slat_top_right_destroyed_unhide",
					0
				},
				
				{
					"slat_top_right_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_normal_hide",
					0
				},
				
				{
					"slat_top_left_damage_unhide",
					0
				},
				
				{
					"slat_top_left_damage_hide",
					0
				},
				
				{
					"slat_top_left_destroyed_unhide",
					0
				},
				
				{
					"slat_top_left_firegeo_hide",
					0
				},
				
				{
					"slat_top_left_plate_normal_hide",
					0
				},
				
				{
					"slat_top_left_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_left_plate_damage_hide",
					0
				},
				
				{
					"slat_top_right_plate_normal_hide",
					0
				},
				
				{
					"slat_top_right_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_right_plate_damage_hide",
					0
				},
				
				{
					"slat_top_back_plate_normal_hide",
					0
				},
				
				{
					"slat_top_back_plate_damage_unhide",
					0
				},
				
				{
					"slat_top_back_plate_damage_hide",
					0
				},
				
				{
					"com_pos_adjust_to_center",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"zasleh2",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.556;
			verticalOffsetWorld=-0.17299999;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
	};
	class usarmy_M1284: B_M1284
	{
		crew="rhsusf_army_ocp_combatcrewman";
		faction="rhs_faction_usarmy_d";
		vehicleClass="rhs_vehclass_tank";
	};
	class usarmy_M1284_WD: B_M1284
	{
		crew="rhsusf_army_ucp_combatcrewman";
		faction="rhs_faction_usarmy_wd";
		vehicleClass="rhs_vehclass_tank";
		editorPreview="\ampv_c\ui\m1284_wd_pre.jpg";
		hiddenSelectionsTextures[]=
		{
			"\ampv\tex\m1283_hull_o_co.paa",
			"\ampv\tex\m1283_ears_o_co.paa",
			"\ampv\tex\m1283_slat_o_co.paa",
			"\ampv\tex\m1283_armour_o_co.paa",
			"\ampv\tex\m1283_parts_o_co.paa",
			"\ampv\tex\m1283_wheels_o_co.paa",
			"\ampv_medeacv\tex\m1284_parts_O_co.paa"
		};
	};
};
class VehicleMagazine;
class CfgMagazines
{
	class 300Rnd_30x113mm_M789_HEDT: VehicleMagazine
	{
		author="[CN]Lurker1011,真红战队";
		displayName="M789 30x113mm HEDP-T";
		displayNameShort="M789 HEDP-T";
		ammo="lk_ammo_30x113mm_M789_HEDP";
		initSpeed=838;
		count=300;
		maxLeadSpeed=500;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.5,4};
	};
	class 4Rnd_Stinger_AAM: VehicleMagazine
	{
		scope=2;
		author="Lurker1011";
		displayNameShort="Stinger";
		descriptionShort="short range anti-air missiles";
		ammo="lk_ammo_fim92_missile";
		count=4;
		initSpeed=0;
		displayName="FIM-92 x4";
		model="\ampv_cuas\stinger_4x_left.p3d";
		mass=370;
		mirrorMissilesIndexes[]={2,1,4,3};
		hardpoints[]=
		{
			"CUAS_pylon_left"
		};
		pylonWeapon="missiles_stinger_AA_LK";
	};
	class 4Rnd_Stinger_AAM_rightside: 4Rnd_Stinger_AAM
	{
		model="\ampv_cuas\stinger_4x_right.p3d";
		hardpoints[]=
		{
			"CUAS_pylon_right"
		};
	};
	class 2Rnd_Hellfire_AGM: 4Rnd_Stinger_AAM
	{
		model="\ampv_cuas\hellfire_2x_left.p3d";
		ammo="LK_ammo_AGM_114L_ampv";
		displayName="AGM-114L";
		displaynameshort="Radar";
		descriptionShort="Longbow Hellfire, Radar-homing";
		count=2;
		mirrorMissilesIndexes[]={2,1};
		pylonWeapon="lk_missiles_hellfire";
	};
	class 2Rnd_Hellfire_AGM_rightside: 2Rnd_Hellfire_AGM
	{
		model="\ampv_cuas\hellfire_2x_right.p3d";
		hardpoints[]=
		{
			"CUAS_pylon_right"
		};
	};
	class 12Rnd_hydra_rockets: 4Rnd_Stinger_AAM
	{
		model="\ampv_cuas\hydra_12x_left.p3d";
		ammo="rhs_ammo_Hydra_M229";
		displayName="M229 Hydra";
		displaynameshort="HE Rockets";
		descriptionShort="x12 17lb HE Hydra";
		count=12;
		mirrorMissilesIndexes[]={2,1,4,3,6,5,8,7,10,9,12,11};
		pylonWeapon="lk_rockets_hydra";
	};
	class 12Rnd_hydra_rockets_rightside: 12Rnd_hydra_rockets
	{
		model="\ampv_cuas\hydra_12x_right.p3d";
		hardpoints[]=
		{
			"CUAS_pylon_right"
		};
	};
	class 2Rnd_Tow2B_AGM: 4Rnd_Stinger_AAM
	{
		model="\ampv_cuas\tow2b_2x_left.p3d";
		ammo="lk_ammo_tow2b";
		displayName="TOW-2B";
		displaynameshort="BGM-71F";
		descriptionShort="x2 TOW AGM";
		count=2;
		mirrorMissilesIndexes[]={2,1};
		pylonWeapon="lk_missiles_TOW";
	};
	class 2Rnd_Tow2A_AGM: 4Rnd_Stinger_AAM
	{
		model="\ampv_cuas\tow2b_2x_left.p3d";
		ammo="lk_ammo_tow2a";
		displayName="TOW-2A";
		displaynameshort="BGM-71E";
		descriptionShort="x2 TOW AGM";
		count=2;
		mirrorMissilesIndexes[]={2,1};
		pylonWeapon="lk_missiles_TOW";
	};
	class 2Rnd_Tow2B_AGM_rightside: 2Rnd_Tow2B_AGM
	{
		model="\ampv_cuas\tow2b_2x_right.p3d";
		hardpoints[]=
		{
			"CUAS_pylon_right"
		};
	};
	class 2Rnd_Tow2A_AGM_rightside: 2Rnd_Tow2A_AGM
	{
		model="\ampv_cuas\tow2b_2x_right.p3d";
		hardpoints[]=
		{
			"CUAS_pylon_right"
		};
	};
	class 4Rnd_Stinger_AAM_O: 4Rnd_Stinger_AAM
	{
		displayName="FIM-92 x4(Olive)";
		model="\ampv_cuas\stinger_4x_left_o.p3d";
		pylonWeapon="missiles_stinger_AA_LK";
	};
	class 4Rnd_Stinger_AAM_rightside_O: 4Rnd_Stinger_AAM_rightside
	{
		displayName="FIM-92 x4(Olive)";
		model="\ampv_cuas\stinger_4x_right_o.p3d";
	};
	class 2Rnd_Hellfire_AGM_O: 2Rnd_Hellfire_AGM
	{
		displayName="AGM-114L(Olive)";
		model="\ampv_cuas\hellfire_2x_left_o.p3d";
		pylonWeapon="lk_missiles_hellfire";
	};
	class 2Rnd_Hellfire_AGM_rightside_O: 2Rnd_Hellfire_AGM_rightside
	{
		displayName="AGM-114L(Olive)";
		model="\ampv_cuas\hellfire_2x_right_o.p3d";
	};
	class 12Rnd_hydra_rockets_O: 12Rnd_hydra_rockets
	{
		displayName="M229 Hydra (Olive)";
		model="\ampv_cuas\hydra_12x_left_o.p3d";
		pylonWeapon="lk_rockets_hydra";
	};
	class 12Rnd_hydra_rockets_rightside_O: 12Rnd_hydra_rockets_rightside
	{
		displayName="M229 Hydra (Olive)";
		model="\ampv_cuas\hydra_12x_right_o.p3d";
	};
	class 2Rnd_Tow2B_AGM_O: 2Rnd_Tow2B_AGM
	{
		displayName="TOW-2B(Olive)";
		model="\ampv_cuas\tow2b_2x_left_o.p3d";
		pylonWeapon="lk_missiles_TOW";
	};
	class 2Rnd_Tow2A_AGM_O: 2Rnd_Tow2A_AGM
	{
		displayName="TOW-2A(Olive)";
		model="\ampv_cuas\tow2b_2x_left_o.p3d";
		pylonWeapon="lk_missiles_TOW";
	};
	class 2Rnd_Tow2B_AGM_rightside_O: 2Rnd_Tow2B_AGM_rightside
	{
		displayName="TOW-2B(Olive)";
		model="\ampv_cuas\tow2b_2x_right_o.p3d";
	};
	class 2Rnd_Tow2A_AGM_rightside_O: 2Rnd_Tow2A_AGM_rightside
	{
		displayName="TOW-2A(Olive)";
		model="\ampv_cuas\tow2b_2x_right_o.p3d";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class rhs_weap_M197;
class rhs_weap_M230
{
	class manual;
};
class FakeHorn;
class MissileLauncher;
class missiles_SCALPEL
{
	class TopDown;
};
class missiles_DAGR;
class Rocket_04_HE_Plane_CAS_01_F
{
	class Far_AI;
	class Burst;
};
class Missile_AGM_02_Plane_CAS_01_F;
class rhs_weap_TOW_Launcher_static;
class rhs_weap_AGM114L_Launcher;
class rhs_weap_FFARLauncher_M229;
class autocannon_Base_F;
class rhs_weap_m240veh;
class CfgWeapons
{
	class lk_weap_XM914: autocannon_Base_F
	{
		ballisticsComputer = "1 + 2 + 16";
		displayName="XM914";
		magazines[]=
		{
			"300Rnd_30x113mm_M789_HEDT"
		};
		class GunParticles
		{
			class Effect
			{
				effectName="MachineGun2";
				positionName="usti hlavne";
				directionName="konec hlavne";
			};
		};
		modes[]=
		{
			"lowROF",
			"close",
			"short",
			"medium",
			"far"
		};
		class lowROF: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"RHSUSF_M230_Shot_SoundSet"
				};
			};
			displayName="low ROF";
			textureType="fullAuto";
			autoFire=1;
			reloadTime=0.30000001;
			dispersion=0.0055;
			showToPlayer=1;
			burst=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=1;
			minRangeProbab=0.0099999998;
			midRange=2;
			midRangeProbab=0.0099999998;
			maxRange=3;
			maxRangeProbab=0.0099999998;
		};
		class close: lowROF
		{
			showToPlayer=0;
			soundBurst=0;
			burst=10;
			burstRangeMax=20;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.34999999;
			midRange=200;
			midRangeProbab=0.88;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class short: close
		{
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=1;
			aiRateOfFireDistance=600;
			minRange=200;
			midRange=500;
			maxRange=800;
		};
		class medium: close
		{
			reloadTime=0.30000001;
			dispersion=0.0055;
			burst=6;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDistance=800;
			minRange=600;
			minRangeProbab=0.34999999;
			midRange=800;
			midRangeProbab=0.77999997;
			maxRange=1000;
			maxRangeProbab=0.30000001;
		};
		class far: close
		{
			reloadTime=0.30000001;
			dispersion=0.0055;
			burst=3;
			burstRangeMax=7;
			aiRateOfFire=3;
			aiRateOfFireDistance=1000;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.60000002;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
	};
	class LK_weap_m240_m1283_coax: rhs_weap_m240veh
	{
		displayName="M240C";
		displaynameshort="M240C";
		cursorAim="mg";
		showAimCursorInternal=0;
		ballisticsComputer="2 + 16";
		minZeroing=200;
		class GunParticles
		{
			class M240_AmmoBeltLinkEject
			{
				positionName="ammobeltlinks_start";
				directionName="ammobeltlinks_end";
				effectName="MachineGunEject2";
			};
			class M240_AmmoBeltCaseEject
			{
				positionName="shelleject_start";
				directionName="shelleject_end";
				effectName="RHSUSF_762Cartridge";
			};
			class M240_WhiteGas
			{
				positionName="usti hlavne 3";
				directionName="konec hlavne 3";
				effectName="RifleAssaultCloud";
			};
			class M240_RHSUSF_BarrelRefract
			{
				positionName="usti hlavne 3";
				directionName="konec hlavne 3";
				effectName="RHSUSF_BarrelRefractHeavy";
			};
		};
	};
	class missiles_stinger_AA_LK: MissileLauncher
	{
		displayName="FIM-92 stinger";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\weapons\Rockets\missile_2",
				1.1220185,
				1.3,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.56234133,
			2.5
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		magazines[]=
		{
			"4Rnd_Stinger_AAM",
			"4Rnd_Stinger_AAM_rightside",
			"4Rnd_Stinger_AAM_O",
			"4Rnd_Stinger_AAM_rightside_O"
		};
		holdsterAnimValue=1;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.80000001;
		textureType="semi";
		showAimCursorInternal=0;
		minRange=10;
		minRangeProbab=0.30000001;
		midRange=2500;
		midRangeProbab=0.80000001;
		maxRange=4800;
		maxRangeProbab=0.1;
	};
	class lk_missiles_TOW: missiles_SCALPEL
	{
		displayName="BGM-71 TOW";
		magazines[]=
		{
			"2Rnd_Tow2B_AGM",
			"2Rnd_Tow2B_AGM_rightside",
			"2Rnd_Tow2B_AGM_O",
			"2Rnd_Tow2B_AGM_rightside_O",
			"2Rnd_Tow2A_AGM",
			"2Rnd_Tow2A_AGM_rightside",
			"2Rnd_Tow2A_AGM_O",
			"2Rnd_Tow2A_AGM_rightside_O"
		};
		weaponLockSystem=4;
		modes[]=
		{
			"direct"
		};
		class direct: TopDown
		{
			textureType="direct";
			displayName="Direct";
		};
		canLock=0;
	};
	class lk_missiles_hellfire: rhs_weap_AGM114L_Launcher
	{
		displayName="AGM-114L Hellfire II";
		magazines[]=
		{
			"2Rnd_Hellfire_AGM",
			"2Rnd_Hellfire_AGM_rightside",
			"2Rnd_Hellfire_AGM_O",
			"2Rnd_Hellfire_AGM_rightside_O"
		};
		weaponLockSystem=8;
		aiRateOfFire=5;
		aiRateOfFireDistance=1000;
		maxrange=8000;
		maxrangeprobab=0.60000002;
		midrange=2000;
		midrangeprobab=0.89999998;
		minrange=250;
		minrangeprobab=0.60000002;
		nameSound="MissileLauncher";
		canLock=2;
		weaponLockDelay=3;
		modes[]=
		{
			"TopDown",
			"LoalDistance"
		};
		class LoalDistance: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F_EPC\Weapons\missile_epc_1",
					1.7782794,
					1,
					3500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			lockingTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_1",
				0.56234133,
				1
			};
			lockedTargetSound[]=
			{
				"\A3\Sounds_F\weapons\Rockets\locked_3",
				0.56234133,
				2.5
			};
			textureType="semi";
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			maxrange=8000;
			maxrangeprobab=0.60000002;
			midrange=2000;
			midrangeprobab=0.89999998;
			minrange=250;
			minrangeprobab=0.60000002;
		};
		class TopDown: LoalDistance
		{
			textureType="topDown";
			ascendHeight=150;
			descendDistance=180;
			minDistance=150;
			ascendAngle=30;
		};
		class Cruise: TopDown
		{
			displayName="LOAL-HI";
		};
	};
	class lk_rockets_hydra: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName="Hydra (M229 HEPD)";
		scope=2;
		magazines[]=
		{
			"12Rnd_hydra_rockets",
			"12Rnd_hydra_rockets_rightside",
			"12Rnd_hydra_rockets_O",
			"12Rnd_hydra_rockets_rightside_O"
		};
	};
};
class ammo_Penetrator_Base;
class ammo_Penetrator_105mm;
class Sh_105mm_HEAT_MP;
class Sh_120mm_APFSDS;
class rhs_ammo_ap_penetrator;
class rhs_ammo_fim92_missile;
class rhs_ammo_TOW2B_AT;
class rhs_ammo_TOW2_BB;
class rhs_ammo_TOW2A_AT;
class B_30mm_HE;
class Missile_AGM_02_F;
class CfgAmmo
{
	class lk_ammo_fim92_missile: rhs_ammo_fim92_missile
	{
		initTime=0.0099999998;
		model="\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_Rocket";
		proxyShape="\ampv_cuas\stinger_missile.p3d";
	};
	class lk_ammo_tow2b: rhs_ammo_TOW2B_AT
	{
		model="\rhsusf\addons\rhsusf_heavyweapons\atgm\Tow2B";
		proxyShape="\ampv_cuas\tow2b_missile.p3d";
	};
	class lk_ammo_tow2a: rhs_ammo_TOW2A_AT
	{
		model="\rhsusf\addons\rhsusf_heavyweapons\atgm\tow2a";
		proxyShape="\ampv_cuas\tow2b_missile.p3d";
	};
	class lk_ammo_Penetrator_30x113mm: ammo_Penetrator_Base
	{
		hit=90;
		submunitionConeType[]=
		{
			"randomcenter",
			4
		};
		caliber=1.66667;
	};
	class lk_M789_Prox: B_30mm_HE
	{
		typicalSpeed=850;
		hit=25;
		indirectHit = 18;
		indirectHitRange = 3.5;
		explosive=0.80000001;
		caliber=1.4;
		simulation = "shotRocket";
		timeToLive = 0;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class lk_ammo_30x113mm_M789_HEDP: B_30mm_HE
	{
		allowagainstinfantry=1;
		hit=37;
		indirectHit=15;
		indirectHitRange=3;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=2;
		tracerStartTime=0.1;
		tracerEndTime=4;
		explosive=0.40000001;
		caliber=2;
		airFriction=-0.00078;
		timeToLive=12;
		submunitionAmmo="lk_ammo_Penetrator_30x113mm";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1053;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		class EventHandlers {
            fired = "_this call AMPV_fnc_firedABMAMPV;";
        };
	};
	class LK_ammo_AGM_114L_ampv: Missile_AGM_02_F
	{
		submunitionAmmo="rhs_ammo_Hellfire_AT_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1053;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		model="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
		proxyShape="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
		cost=300;
		hit=400;
		cmImmunity=0.9;
		indirectHit=25;
		indirectHitRange=8;
		irLock=1;
		laserLock=0;
		airLock=1;
		maxSpeed=475;
		simulationStep=0.0049999999;
		airFriction=0.029999999;
		sideAirFriction=0.15000001;
		initTime=0;
		thrustTime=6;
		thrust=200;
		fuseDistance=5;
		manualControl=0;
		maxControlRange=8000;
		trackOversteer=1;
		trackLead=0.65;
		maneuvrability=22;
		timeToLive=70;
		whistleDist=4;
		effectsMissileInit="MissileDAR1";
		effectsMissile="rhs_missile2";
		missileLockMaxDistance=6000;
		missileLockMinDistance=200;
		missileLockMaxSpeed=120;
		missileLockCone=90;
		missileKeepLockedCone=90;
		lockSeekRadius=4000;
		autoSeekTarget=1;
		weaponLockSystem=8;
		maneuvDependsOnSpeedCoef=0.017999999;
		flightProfiles[]=
		{
			"TopDown",
			"LoalDistance",
			"Cruise"
		};
		class Direct
		{
		};
		class TopDown
		{
			ascendAngle=39;
			ascendHeight=360;
			minDistance=600;
			descendDistance=500;
		};
		class LoalDistance
		{
			lockSeekDistanceFromParent=1000;
		};
		class Cruise
		{
			preferredFlightAltitude=500;
			lockDistanceToTarget=500;
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class RadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=4500;
							maxRange=4500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=-1;
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=-1;
						maxFogSeeThrough=0.80000001;
						minTrackableSpeed=0;
						maxTrackableSpeed=120;
						minTrackableATL=-1;
						maxTrackableATL=1000;
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class Proxystinger_missile: ProxyWeapon
	{
		model="\ampv_cuas\stinger_missile.p3d";
		simulation="maverickweapon";
	};
	class Proxytow2b_missile: ProxyWeapon
	{
		model="\ampv_cuas\tow2b_missile.p3d";
		simulation="maverickweapon";
	};
};
class cfgMods
{
	author="[CN]Lurker1011,真红战队";
	timepacked="1733180110";
};
