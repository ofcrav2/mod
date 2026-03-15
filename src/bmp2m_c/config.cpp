#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class bmp2m_c_lk
	{
		requiredAddons[]=
		{
			"rhsusf_c_heavyweapons",
			"rhs_bmp"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_bmp2mbzk",
			"MSV_bmp2mbzk",
			"TV_bmp2mbzk"
		};
		weapons[]=
		{
			"RHS_weap_Ags30_new"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
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
class Optics_Gunner_MBT_02: Optics_Armored
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
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		lk_bmp_Cargo="lk_BMP_Cargo01";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class lk_BMP_Cargo01: Crew
		{
			file="\bmp2m\rhsve_bmp2_cargo.rtm";
			interpolateTo[]=
			{
				"RHS_KIA_BMP2_Cargo01",
				0.1
			};
			connectTo[]=
			{
				"lk_BMP_Cargo01",
				0.1
			};
			equivalentTo="lk_BMP_Cargo01";
			variantsAI[]=
			{
				"lk_BMP_Cargo01",
				0.1
			};
			variantAfter[]={5,10,20};
			speed=0.30000001;
		};
	};
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
	class bmp2mbzk_base: Tank_F
	{
		vehicleClass="Armored";
		displayName="BMP-2M(Berezhok)";
		accuracy=0.30000001;
		author="[CN]Lurker1011,真红战队";
		unitInfoType="RHS_RscInfoBMP2";
		destrType="DestructDefault";
		model="\bmp2m\bmp2m_bzk.p3d";
		picture="\bmp2m_c\ui\BMP2M_ca.paa";
		Icon="\rhsafrf\addons\rhs_bmp\data\icomap_bmp2_CA.paa";
		editorSubcategory="EdSubcat_APCs";
		weaponsGroup1="1+128";
		weaponsGroup4=64;
		driverCanSee="2+4+8";
		gunnerCanSee="2+4+8";
		commanderCanSee="2+4+8";
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
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.7879457,
			1
		};
		soundEngineOnExt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.7309573,
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop",
			0.78794575,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
			0.73095739,
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
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_alap",
					8.9125099,
					1,
					400
				};
				frequency="0.95	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="(thrust factor [0.1,0])*engineOn*camPos*(rpm interpolate [700,900,1,0])";
			};
			class Engine
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.2,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(600/	2850),(1000/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.9943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine1_ext_thrust_extra
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.9943281,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine1_ext_thrust_extra2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
					2.3943281,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.1912509,
					1,
					850
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.2,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.4220185,
					1,
					840
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.6125376,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*camPos*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					1.5912509,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					1.4220185,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					1.5589254,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					1.7125376,
					1,
					850
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					1.8848932,
					1,
					950
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					1.9782794,
					1,
					1000
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					3.1952624,
					1,
					1050
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.81622773,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.55481339,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_int_thrust_extra
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.9943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int_thrust_extra2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
					1.3943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.59810716,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.64668357,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.70118719,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.76234132,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.83095735,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.65481335,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					0.69810718,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					0.7466836,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					0.7466836,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					0.80118722,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					0.86234134,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					1.1,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.56234133,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.79432821,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.19810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.1466836,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.1011872,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.16234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.26234132,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.11622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.15481336,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.19810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.1466836,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.20118719,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
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
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
		simulation="tankX";
		fuelCapacity=20;
		brakeIdleSpeed=0.1;
		maxSpeed=70;
		normalSpeedForwardCoef=0.61000001;
		slowSpeedForwardCoef=0.25;
		canFloat=1;
		waterLeakiness=250;
		maxFordingDepth=0.050000001;
		waterResistance=1;
		waterDamageEngine=0.89999998;
		engineShiftY=-0.80000001;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=2;
		waterAngularDampingCoef=3.2;
		waterResistanceCoef=0.015;
		enginePower=300;
		minOmega=75;
		maxOmega=298.45001;
		idleRPM=700;
		redRPM=2850;
		peakTorque=1005;
		tracksSpeed=1;
		torqueCurve[]=
		{
			{0.035087701,0},
			{0.31578901,0.95310903},
			{0.52631599,1},
			{0.56140399,1},
			{0.63157898,0.95310903},
			{0.77192998,0.897044},
			{0.91228098,0.82670701},
			{1.08807,0}
		};
		thrustDelay=0.30000001;
		engineMOI=8;
		dampingRateFullThrottle=1.3;
		dampingRateZeroThrottleClutchEngaged=6;
		dampingRateZeroThrottleClutchDisengaged=1;
		clutchStrength=20;
		latency=1.2;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.35087699,0.35087699,0,0.83508801,0.35087699,0.89473701,0.66666698,0.91228098,0.66666698,0.91228098,0.66666698,1,0.66666698};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-7.25,
				"N",
				0,
				"D1",
				5.25,
				"D2",
				2.842,
				"D3",
				1.9119999,
				"D4",
				1.28,
				"D5",
				0.85799998
			};
			AmphibiousRatios[]=
			{
				"R1",
				-14.5,
				"N",
				0,
				"D1",
				14.5
			};
			transmissionRatios[]=
			{
				"High",
				12.66
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		tankTurnForce=550000;
		tankTurnForceAngMinSpd=0.80000001;
		tankTurnForceAngSpd=0.89999998;
		accelAidForceCoef=4;
		accelAidForceYOffset=-3.5;
		accelAidForceSpd=3.5999999;
		antiRollbarForceCoef=20;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=55;
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
				width=0.28799999;
				mass=120;
				MOI=7.5615001;
				maxBrakeTorque=2000;
				sprungMass=1208.33;
				springStrength=127500;
				springDamperRate=7000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				dampingRate=328;
				dampingRateInAir=328;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				latStiffX=2;
				latStiffY=30;
				longitudinalStiffnessPerUnitGravity=32000;
				frictionVsSlipGraph[]=
				{
					{0,0.80000001},
					{0.38,1},
					{0.69999999,0.64999998}
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
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
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
		enableGPS=1;
		armor=350;
		armorStructural=600;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.80000001;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="";
				passThrough=0;
				minimalHit=0.54000002;
				explosionShielding=0.15000001;
				radius=0.30000001;
				depends="(HitArmor)*0.1";
			};
			class HitEngine: HitEngine
			{
				armor=0.44999999;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="";
				passThrough=0;
				minimalHit=0.139;
				explosionShielding=0.0089999996;
				radius=0.17;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="exhaust";
						intensity=0.5;
						interval=1;
						lifeTime=60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type="SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type="RHS_FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation="sound";
						type="Fire";
					};
				};
			};
			class HitLTrack: HitLTrack
			{
				material=-1;
				armorComponent="hit_trackL";
				name="hit_trackL_point";
				visual="";
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
				visual="";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitFuelTank_Left
			{
				armor=-80;
				material=-1;
				name="Hit_Fuel_left_points";
				armorComponent="Hit_Fuel_L";
				visual="";
				passThrough=0;
				minimalHit=0.30000001;
				explosionShielding=0;
				radius=0.1;
			};
			class HitFuelTank_Right: HitFuelTank_Left
			{
				name="Hit_Fuel_right_points";
				armorComponent="Hit_Fuel_R";
			};
			class HitFuelTank_int: HitFuelTank_Left
			{
				name="hit_fuel_point";
				armorComponent="Hit_Fuel_I";
			};
			class HitFuel
			{
				armor=1;
				name="hit_fuel_point";
				armorComponent="";
				visual="";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.0099999998;
				depends="(HitFuelTank_Left+HitFuelTank_Right)*0.3+(HitFuelTank_int)*0.5";
			};
			class HitArmor
			{
				armor=1;
				material=-1;
				armorComponent="hit_Armor";
				name="hit_Armor_points";
				visual="";
				passThrough=0;
				minimalHit=0.2;
				explosionShielding=2;
				radius=0.1;
				isTurret=0;
			};
			class slat_front_1
			{
				simulation="RHS_SLAT";
				armor=-60;
				material=-1;
				name="slat_front_1_hitpoints";
				armorComponent="slat_front_1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.07;
				radius=0.075000003;
				visual="";
			};
			class slat_front_2: slat_front_1
			{
				name="slat_front_2_hitpoints";
				armorComponent="slat_front_2";
			};
			class slat_front_3: slat_front_1
			{
				name="slat_front_3_hitpoints";
				armorComponent="slat_front_3";
			};
			class slat_front_4: slat_front_1
			{
				name="slat_front_4_hitpoints";
				armorComponent="slat_front_4";
			};
			class slat_front_5: slat_front_1
			{
				name="slat_front_5_hitpoints";
				armorComponent="slat_front_5";
			};
			class slat_front_6: slat_front_1
			{
				name="slat_front_6_hitpoints";
				armorComponent="slat_front_6";
			};
			class slat_left_1: slat_front_1
			{
				name="slat_left_1_hitpoints";
				armorComponent="slat_left_1";
				radius=0.15000001;
			};
			class slat_left_2: slat_left_1
			{
				name="slat_left_2_hitpoints";
				armorComponent="slat_left_2";
			};
			class slat_left_3: slat_left_1
			{
				name="slat_left_3_hitpoints";
				armorComponent="slat_left_3";
			};
			class slat_left_4: slat_left_1
			{
				name="slat_left_4_hitpoints";
				armorComponent="slat_left_4";
			};
			class slat_left_5: slat_left_1
			{
				name="slat_left_5_hitpoints";
				armorComponent="slat_left_5";
			};
			class slat_left_6: slat_left_1
			{
				name="slat_left_6_hitpoints";
				armorComponent="slat_left_6";
			};
			class slat_left_7: slat_left_1
			{
				name="slat_left_7_hitpoints";
				armorComponent="slat_left_7";
			};
			class slat_left_8: slat_left_1
			{
				name="slat_left_8_hitpoints";
				armorComponent="slat_left_8";
			};
			class slat_left_9: slat_left_1
			{
				name="slat_left_9_hitpoints";
				armorComponent="slat_left_9";
			};
			class slat_left_10: slat_left_1
			{
				name="slat_left_10_hitpoints";
				armorComponent="slat_left_10";
			};
			class slat_left_11: slat_left_1
			{
				name="slat_left_11_hitpoints";
				armorComponent="slat_left_11";
			};
			class slat_left_12: slat_left_1
			{
				name="slat_left_12_hitpoints";
				armorComponent="slat_left_12";
			};
			class slat_left_13: slat_left_1
			{
				name="slat_left_13_hitpoints";
				armorComponent="slat_left_13";
			};
			class slat_left_14: slat_left_1
			{
				name="slat_left_14_hitpoints";
				armorComponent="slat_left_14";
			};
			class slat_right_1: slat_left_1
			{
				name="slat_right_1_hitpoints";
				armorComponent="slat_right_1";
			};
			class slat_right_2: slat_right_1
			{
				name="slat_right_2_hitpoints";
				armorComponent="slat_right_2";
			};
			class slat_right_3: slat_right_1
			{
				name="slat_right_3_hitpoints";
				armorComponent="slat_right_3";
			};
			class slat_right_4: slat_right_1
			{
				name="slat_right_4_hitpoints";
				armorComponent="slat_right_4";
			};
			class slat_right_5: slat_right_1
			{
				name="slat_right_5_hitpoints";
				armorComponent="slat_right_5";
			};
			class slat_right_6: slat_right_1
			{
				name="slat_right_6_hitpoints";
				armorComponent="slat_right_6";
			};
			class slat_right_7: slat_right_1
			{
				name="slat_right_7_hitpoints";
				armorComponent="slat_right_7";
			};
			class slat_right_8: slat_right_1
			{
				name="slat_right_8_hitpoints";
				armorComponent="slat_right_8";
			};
			class slat_right_9: slat_right_1
			{
				name="slat_right_9_hitpoints";
				armorComponent="slat_right_9";
			};
			class slat_right_10: slat_right_1
			{
				name="slat_right_10_hitpoints";
				armorComponent="slat_right_10";
			};
			class slat_right_11: slat_right_1
			{
				name="slat_right_11_hitpoints";
				armorComponent="slat_right_11";
			};
			class slat_right_12: slat_right_1
			{
				name="slat_right_12_hitpoints";
				armorComponent="slat_right_12";
			};
			class slat_right_13: slat_right_1
			{
				name="slat_right_13_hitpoints";
				armorComponent="slat_right_13";
			};
			class slat_right_14: slat_right_1
			{
				name="slat_right_14_hitpoints";
				armorComponent="slat_right_14";
			};
			class slat_back_1: slat_right_1
			{
				name="slat_back_1_hitpoints";
				armorComponent="slat_back_1";
			};
			class slat_back_2: slat_right_1
			{
				name="slat_back_2_hitpoints";
				armorComponent="slat_back_2";
			};
			class slat_turret_1: slat_right_1
			{
				name="slat_turret_1_hitpoints";
				armorComponent="slat_turret_1";
			};
			class slat_turret_2: slat_turret_1
			{
				name="slat_turret_2_hitpoints";
				armorComponent="slat_turret_2";
			};
			class slat_turret_3: slat_turret_1
			{
				name="slat_turret_3_hitpoints";
				armorComponent="slat_turret_3";
			};
			class slat_turret_4: slat_turret_1
			{
				name="slat_turret_4_hitpoints";
				armorComponent="slat_turret_4";
			};
			class slat_turret_5: slat_turret_1
			{
				name="slat_turret_5_hitpoints";
				armorComponent="slat_turret_5";
			};
			class slat_turret_6: slat_turret_1
			{
				name="slat_turret_6_hitpoints";
				armorComponent="slat_turret_6";
			};
			class slat_turret_7: slat_turret_1
			{
				name="slat_turret_7_hitpoints";
				armorComponent="slat_turret_7";
			};
			class slat_turret_8: slat_turret_1
			{
				name="slat_turret_8_hitpoints";
				armorComponent="slat_turret_8";
			};
			class slat_turret_9: slat_turret_1
			{
				name="slat_turret_9_hitpoints";
				armorComponent="slat_turret_9";
			};
			class slat_turret_10: slat_turret_1
			{
				name="slat_turret_10_hitpoints";
				armorComponent="slat_turret_10";
			};
			class slat_turret_11: slat_turret_1
			{
				name="slat_turret_11_hitpoints";
				armorComponent="slat_turret_11";
			};
		};
		driverDoor="hatchdriver";
		driverOpticsModel="\A3\weapons_f\reticle\Optics_Driver_01_F.p3d";
		viewDriverInExternal=1;
		LODDriverTurnedOut=1100;
		LODDriverTurnedIn=1201;
		LODDriverOpticsIn=1100;
		driverAction="RHS_BMP3_driverout";
		driverInAction="RHS_BMP3_driver";
		driverForceOptics=0;
		driverLeftHandAnimName="steering";
		driverRightHandAnimName="steering";
		driverLeftLegAnimName="";
		driverRightLegAnimName="";
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
				camPos="view_driver";
				opticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				visionMode[]=
				{
					"Normal"
				};
			};
			class Narrow: Wide
			{
				camPos="view_driver";
				opticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				initFov=0.75;
				minFov=0.75;
				maxFov=0.75;
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"n1",
			"n2",
			"n3"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"bmp2m\data\bmp2m_hull.rvmat",
				"bmp2m\data\bmp2m_hull_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat",
				"bmp2m\data\bmp2m_armour.rvmat",
				"bmp2m\data\bmp2m_armour_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat",
				"bmp2m\data\bmp2m_turret.rvmat",
				"bmp2m\data\bmp2m_turret_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat",
				"bmp2m\data\bmp2m_wheels.rvmat",
				"bmp2m\data\bmp2m_wheels_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat",
				"bmp2m\data\bmp2m_Berezhok.rvmat",
				"bmp2m\data\bmp2m_Berezhok_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\bmp2m\data\bmp2m_hull_co.paa",
			"\bmp2m\data\bmp2m_armour_co.paa",
			"\bmp2m\data\bmp2m_turret_co.paa",
			"\bmp2m\data\bmp2m_wheels_co.paa",
			"\bmp2m\data\BMP2M_Berezhok_co.paa"
		};
		class TextureSources
		{
			class Olive
			{
				displayName="Olive";
				author="Lurker1011";
				textures[]=
				{
					"\bmp2m\data\bmp2m_hull_co.paa",
					"\bmp2m\data\bmp2m_armour_co.paa",
					"\bmp2m\data\bmp2m_turret_co.paa",
					"\bmp2m\data\bmp2m_wheels_co.paa",
					"\bmp2m\data\BMP2M_Berezhok_co.paa"
				};
				factions[]={};
			};
			class sand
			{
				displayName="sand";
				author="Lurker1011";
				textures[]=
				{
					"\bmp2m\data\bmp2m_hull_d_co.paa",
					"\bmp2m\data\bmp2m_armour_d_co.paa",
					"\bmp2m\data\bmp2m_turret_d_co.paa",
					"\bmp2m\data\bmp2m_wheels_d_co.paa",
					"\bmp2m\data\BMP2M_Berezhok_d_co.paa"
				};
				factions[]={};
			};
		};
		textureList[]=
		{
			"Olive",
			1
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="lk_weap_2a42";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="lk_weap_2a42";
			};
			class muzzle_rot_coax
			{
				source="ammorandom";
				weapon="rhs_weap_pkt";
			};
			class recoil_source
			{
				source="reload";
				weapon="lk_weap_2a42";
			};
			class smokecap_revolving_source
			{
				source="revolving";
				weapon="rhs_weap_902a";
			};
			class door_l
			{
				source="door";
				animPeriod=0.80000001;
				sound="RHS_HMMWV_Door";
				soundPosition="door_l_axis";
				initPhase=0;
			};
			class door_r: door_l
			{
				soundPosition="door_r_axis";
			};
			class hatch_left
			{
				displayName="hatch_left";
				source="door";
				animPeriod=0.60000002;
				initPhase=0;
			};
			class hatch_right: hatch_left
			{
				displayName="hatch_right";
			};
			class hatch_front
			{
				source="door";
				animPeriod=0.60000002;
				initPhase=0;
			};
			class slats_hull_hide
			{
				source="user";
				displayName="show the slats of hull";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class slats_turret_hide
			{
				source="user";
				displayName="show the slats of turret";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class slat_door_l_hide
			{
				source="user";
				displayName="show the slats of left door";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class slat_door_r_hide
			{
				source="user";
				displayName="show the slats of right door";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class factory_armour_hide
			{
				source="user";
				displayName="show the factory armour";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class woodlog_hide
			{
				source="user";
				displayName="show the woodlog";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class elev
			{
				source="user";
				animperiod=0.0016;
			};
			class elev_bank
			{
				source="user";
				animperiod=0.0016;
			};
			class lead
			{
				source="user";
				animperiod=0.001;
			};
			class offset
			{
				source="user";
				animperiod=0.00019999999;
			};
			class TCOverrideTurret
			{
				source="user";
				animPeriod=4;
				initPhase=0;
			};
			class slat_front_1_src
			{
				source="Hit";
				hitpoint="slat_front_1";
			};
			class slat_front_2_src: slat_front_1_src
			{
				hitpoint="slat_front_2";
			};
			class slat_front_3_src: slat_front_1_src
			{
				hitpoint="slat_front_3";
			};
			class slat_front_4_src: slat_front_1_src
			{
				hitpoint="slat_front_4";
			};
			class slat_front_5_src: slat_front_1_src
			{
				hitpoint="slat_front_5";
			};
			class slat_front_6_src: slat_front_1_src
			{
				hitpoint="slat_front_6";
			};
			class slat_left_1_src: slat_front_1_src
			{
				hitpoint="slat_left_1";
			};
			class slat_left_2_src: slat_front_1_src
			{
				hitpoint="slat_left_2";
			};
			class slat_left_3_src: slat_front_1_src
			{
				hitpoint="slat_left_3";
			};
			class slat_left_4_src: slat_front_1_src
			{
				hitpoint="slat_left_4";
			};
			class slat_left_5_src: slat_front_1_src
			{
				hitpoint="slat_left_5";
			};
			class slat_left_6_src: slat_front_1_src
			{
				hitpoint="slat_left_6";
			};
			class slat_left_7_src: slat_front_1_src
			{
				hitpoint="slat_left_7";
			};
			class slat_left_8_src: slat_front_1_src
			{
				hitpoint="slat_left_8";
			};
			class slat_left_9_src: slat_front_1_src
			{
				hitpoint="slat_left_9";
			};
			class slat_left_10_src: slat_front_1_src
			{
				hitpoint="slat_left_10";
			};
			class slat_left_11_src: slat_front_1_src
			{
				hitpoint="slat_left_11";
			};
			class slat_left_12_src: slat_front_1_src
			{
				hitpoint="slat_left_12";
			};
			class slat_left_13_src: slat_front_1_src
			{
				hitpoint="slat_left_13";
			};
			class slat_left_14_src: slat_front_1_src
			{
				hitpoint="slat_left_14";
			};
			class slat_right_1_src: slat_front_1_src
			{
				hitpoint="slat_right_1";
			};
			class slat_right_2_src: slat_front_1_src
			{
				hitpoint="slat_right_2";
			};
			class slat_right_3_src: slat_front_1_src
			{
				hitpoint="slat_right_3";
			};
			class slat_right_4_src: slat_front_1_src
			{
				hitpoint="slat_right_4";
			};
			class slat_right_5_src: slat_front_1_src
			{
				hitpoint="slat_right_5";
			};
			class slat_right_6_src: slat_front_1_src
			{
				hitpoint="slat_right_6";
			};
			class slat_right_7_src: slat_front_1_src
			{
				hitpoint="slat_right_7";
			};
			class slat_right_8_src: slat_front_1_src
			{
				hitpoint="slat_right_8";
			};
			class slat_right_9_src: slat_front_1_src
			{
				hitpoint="slat_right_9";
			};
			class slat_right_10_src: slat_front_1_src
			{
				hitpoint="slat_right_10";
			};
			class slat_right_11_src: slat_front_1_src
			{
				hitpoint="slat_right_11";
			};
			class slat_right_12_src: slat_front_1_src
			{
				hitpoint="slat_right_12";
			};
			class slat_right_13_src: slat_front_1_src
			{
				hitpoint="slat_right_13";
			};
			class slat_right_14_src: slat_front_1_src
			{
				hitpoint="slat_right_14";
			};
			class slat_back_1_src: slat_front_1_src
			{
				hitpoint="slat_back_1";
			};
			class slat_back_2_src: slat_front_1_src
			{
				hitpoint="slat_back_2";
			};
			class slat_turret_1_src: slat_front_1_src
			{
				hitpoint="slat_turret_1";
			};
			class slat_turret_2_src: slat_front_1_src
			{
				hitpoint="slat_turret_2";
			};
			class slat_turret_3_src: slat_front_1_src
			{
				hitpoint="slat_turret_3";
			};
			class slat_turret_4_src: slat_front_1_src
			{
				hitpoint="slat_turret_4";
			};
			class slat_turret_5_src: slat_front_1_src
			{
				hitpoint="slat_turret_5";
			};
			class slat_turret_6_src: slat_front_1_src
			{
				hitpoint="slat_turret_6";
			};
			class slat_turret_7_src: slat_front_1_src
			{
				hitpoint="slat_turret_7";
			};
			class slat_turret_8_src: slat_front_1_src
			{
				hitpoint="slat_turret_8";
			};
			class slat_turret_9_src: slat_front_1_src
			{
				hitpoint="slat_turret_9";
			};
			class slat_turret_10_src: slat_front_1_src
			{
				hitpoint="slat_turret_10";
			};
			class slat_turret_11_src: slat_front_1_src
			{
				hitpoint="slat_turret_11";
			};
		};
		class UserActions
		{
			class OpenCargoDoor_left
			{
				displayName="Open left cargo door";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'door_l' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['door_l', 1];this setVariable ['door_l_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor_left: OpenCargoDoor_left
			{
				displayName="Close left cargo door";
				condition="this doorPhase 'door_l' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['door_l', 0];this setVariable ['door_l_handler',0,true]";
			};
			class OpenCargoDoor_right
			{
				displayName="Open right cargo door";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'door_r' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['door_r', 1];this setVariable ['door_r_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor_right: OpenCargoDoor_right
			{
				displayName="Close right cargo door";
				condition="this doorPhase 'door_r' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['door_r', 0];this setVariable ['door_r_handler',0,true]";
			};
		};
		class EventHandlers: EventHandlers
		{
		};
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
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
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
			class gunner_display
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="gunnerview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.5;
					turret[]={0};
				};
				BBoxes[]=
				{
					"PIP_GUN_TL",
					"PIP_GUN_TR",
					"PIP_GUN_BL",
					"PIP_GUN_BR"
				};
			};
			class crew_front_display_1
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP_1_POS";
					pointDirection="PIP_1_DIR";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
				BBoxes[]=
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
			class crew_front_display_2
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP_2_POS";
					pointDirection="PIP_2_DIR";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
				BBoxes[]=
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body="obsTurret";
						gun="obsGun";
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						memoryPointGun="usti hlavne3";
						gunBeg="Usti hlavne3";
						gunEnd="Konec hlavne3";
						gunnerDoor="hatchcommander";
						animationsourcehatch="hatchcommander";
						minElev=-15;
						maxElev=80;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.9;
						maxVerticalRotSpeed=1.9;
						weapons[]={};
						magazines[]={};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							0.0099999998,
							1,
							50
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						gunnerAction="rhs_bmp3_commanderOut";
						gunnerInAction="rhs_bmp3_gunner";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						animationSourceStickX="joystick_commander_x";
						animationSourceStickY="joystick_commander_y";
						gunnerLeftHandAnimName="joystick_commander_y";
						gunnerRightHandAnimName="joystick_commander_y";
						usePip=2;
						turretFollowFreeLook=2;
						headAimDown=30;
						isPersonTurret=0;
						personTurretAction="RHS_passenger_inside_6";
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=40;
						initOutTurn=0;
						gunnerForceOptics=0;
						lodturnedout=1;
						lodturnedin=1202;
						lodopticsout=1;
						lodopticsin=1;
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={4,5};
						};
						class ViewGunner: ViewGunner
						{
							initAngleX=-15;
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
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
						turretInfoType="RscOptics_MBT_02_commander";
						startEngine=0;
						gunnerHasFlares=1;
						viewGunnerInExternal=1;
						class HitPoints
						{
							class HitTurretCom
							{
								isTurret=1;
								armor=0.1;
								material=-1;
								armorComponent="Hit_Commander_turret";
								name="hit_com_turret_point";
								visual="commander_turret_hit";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.2;
							};
							class HitGunCom
							{
								isGun=1;
								armor=0.1;
								material=-1;
								armorComponent="Hit_Commander_gun";
								name="hit_com_gun_point";
								visual="commander_gun_hit";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.2;
							};
						};
						selectionFireAnim="zasleh2";
					};
				};
				gunnerDoor="hatchgunner";
				animationsourcehatch="hatchgunner";
				body="Mainturret";
				gun="Maingun";
				gunBeg="usti hlavne1";
				gunEnd="konec hlavne1";
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh3";
				weapons[]=
				{
					"lk_weap_2a42",
					"RHS_weap_Ags30_new",
					"rhs_weap_pkt",
					"rhs_weap_902a",
					"rhs_weap_fcs_ammo"
				};
				magazines[]=
				{
					"rhs_mag_762x54mm_2000",
					"RHS_mag_VOG30_300",
					"rhs_mag_3uof8_340",
					"rhs_mag_3ubr8_160",
					"rhs_mag_3d17_6",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				canUseScanners=0;
				allowTabLock=0;
				soundServo[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\turret1.wss",
					4,
					1,
					10
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
				usePip=2;
				minElev=-4;
				initElev=10;
				maxElev=74;
				gunnerAction="rhs_bmp3_gunnerOut";
				gunnerInAction="rhs_bmp3_gunner";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				forceHideGunner=0;
				canHideGunner=1;
				lodturnedout=1;
				lodturnedin=1202;
				lodopticsout=1;
				lodopticsin=1;
				stabilizedInAxes=3;
				gunnerForceOptics=0;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				discreteDistance[]={};
				discreteDistanceInitIndex=0;
				turretInfoType="RHS_RscWeaponESSA_FCS";
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerCompartments="Compartment1";
				primaryGunner=1;
				primaryObserver=0;
				startEngine=0;
				maxHorizontalRotSpeed=0.75;
				maxVerticalRotSpeed=0.15;
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				animationSourceStickX="joystick_gunner_x";
				animationSourceStickY="joystick_gunner_y";
				gunnerLeftHandAnimName="joystick_gunner_y";
				gunnerRightHandAnimName="joystick_gunner_Y";
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
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						opticsDisplayName="DAY3";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="DAY12";
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow: Medium
					{
						opticsDisplayName="DAY24";
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Autotrack: Narrow
					{
						opticsDisplayName="AUTOTRACK";
						directionStabilized=1;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="hit_turret";
						armorComponent="Hit_Mainturret";
						visual="vez";
						passThrough=0;
						minimalHit=0.25;
						explosionShielding=0.001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="hit_gun";
						armorComponent="Hit_Maingun";
						visual="-";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
					};
				};
				class Components
				{
				};
				class Reflectors
				{
					class Searchlight
					{
						color[]={1900,1300,950};
						ambient[]={5,5,5};
						position="Light_T_pos";
						direction="Light_T_end";
						hitpoint="Light_T";
						selection="Light_T";
						size=1;
						innerAngle=8;
						outerAngle=15;
						coneFadeCoef=1;
						intensity=45;
						useFlare=0;
						dayLight=1;
						flareSize=1;
						class Attenuation
						{
							start=1;
							constant=0;
							linear=0;
							quadratic=0.02;
							hardLimitStart=630;
							hardLimitEnd=660;
						};
					};
					class Searchlight2: Searchlight
					{
						color[]={7,6,6.5};
						ambient[]={22,22,22};
						position="Light_T_flare";
						size=1;
						innerAngle=30;
						outerAngle=175;
						coneFadeCoef=10;
						intensity=100;
						useFlare=1;
						dayLight=0;
						flareSize=1.85;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=0;
							quadratic=10;
							hardLimitStart=0;
							hardLimitEnd=0.89999998;
						};
					};
				};
			};
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
		ace_vehicle_damage_slatHitpoints[]=
		{
			"slat_front_1",
			"slat_front_2",
			"slat_front_3",
			"slat_front_4",
			"slat_front_5",
			"slat_front_6",
			"slat_left_1",
			"slat_left_2",
			"slat_left_3",
			"slat_left_4",
			"slat_left_5",
			"slat_left_6",
			"slat_left_7",
			"slat_left_8",
			"slat_left_9",
			"slat_left_10",
			"slat_left_11",
			"slat_left_12",
			"slat_left_13",
			"slat_left_14",
			"slat_right_1",
			"slat_right_2",
			"slat_right_3",
			"slat_right_4",
			"slat_right_5",
			"slat_right_6",
			"slat_right_7",
			"slat_right_8",
			"slat_right_9",
			"slat_right_10",
			"slat_right_11",
			"slat_right_12",
			"slat_right_13",
			"slat_right_14",
			"slat_back_1",
			"slat_back_2",
			"slat_turret_1",
			"slat_turret_2",
			"slat_turret_3",
			"slat_turret_4",
			"slat_turret_5",
			"slat_turret_6",
			"slat_turret_7",
			"slat_turret_8",
			"slat_turret_9",
			"slat_turret_10",
			"slat_turret_11"
		};
	};
	class bmp2mbzk: bmp2mbzk_base
	{
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\rhsafrf\addons\rhs_a2port_car\data\loadouts\RHS_BM21_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"RHS_HP_T15"
						};
						priority=1;
						maxweight=200;
						UIposition[]={0.12,0.1};
						bay=-1;
						attachment="rhs_mag_9m133m2_pylon";
						turret[]={0};
						hitpoint="HitTurret";
					};
					class pylon2: pylon1
					{
						priority=2;
						UIposition[]={0.12,0.14};
					};
					class pylon3: pylon1
					{
						priority=3;
						UIposition[]={0.12,0.18000001};
					};
					class pylon4: pylon1
					{
						priority=4;
						UIposition[]={0.12,0.22};
					};
				};
				class Bays
				{
					class MainBay
					{
						bayOpenTime=3;
						openBayWhenWeaponSelected=1;
						autoCloseWhenEmptyDelay=1;
					};
				};
				class Presets
				{
				};
			};
		};
	};
	class O_bmp2mbzk: bmp2mbzk
	{
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_F";
		crew="O_crew_F";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		accuracy=1000;
		displayName="BMP-2M(Berezhok)";
		author="[CN]Lurker1011,真红战队";
		editorPreview="\bmp2m_c\ui\bmp2m_pre.jpg";
		transportSoldier=7;
		cargoAction[]=
		{
			"lk_bmp_Cargo"
		};
		cargoDoors[]=
		{
			"door_l",
			"door_r",
			"door_l",
			"door_r",
			"door_l",
			"door_r",
			"door_l"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo 2",
			"pos cargo",
			"pos cargo 2",
			"pos cargo",
			"pos cargo 2",
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo 2 dir",
			"pos cargo dir",
			"pos cargo 2 dir",
			"pos cargo dir",
			"pos cargo 2 dir",
			"pos cargo dir"
		};
		cargoGetInAction[]=
		{
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInMedium"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutMedium"
		};
		cargoProxyIndexes[]={1,2,3,4,5,6,7};
		getInProxyOrder[]={7,1,4,2,5,3,6};
	};
	class MSV_bmp2mbzk: O_bmp2mbzk
	{
		editorSubcategory="rhs_EdSubcat_ifv";
		crew="rhs_msv_emr_armoredcrew";
		faction="rhs_faction_msv";
		vehicleClass="rhs_vehclass_tank";
	};
	class TV_bmp2mbzk: O_bmp2mbzk
	{
		editorSubcategory="rhs_EdSubcat_ifv";
		crew="rhs_msv_emr_armoredcrew";
		faction="rhs_faction_tv";
		vehicleClass="rhs_vehclass_tank";
	};
};
class VehicleMagazine;
class CfgMagazines
{
	class RHS_mag_VOG30_300: VehicleMagazine
	{
		displayName="$STR_RHS_MAG_VOG30";
		displayNameShort="$STR_RHS_MAG_SH_VOG30";
		count=300;
		ammo="rhs_ammo_VOG30";
		initSpeed=185;
		nameSound="handgrenade";
	};
	class RHS_mag_GPD30_300: RHS_mag_VOG30_300
	{
		displayName="$STR_RHS_MAG_GPD30";
		displayNameShort="$STR_RHS_MAG_SH_GPD30";
		ammo="rhs_ammo_GPD30";
	};
	class RHS_mag_VOG17m_300: RHS_mag_VOG30_300
	{
		displayName="$STR_RHS_MAG_VOG17m";
		displayNameShort="$STR_RHS_MAG_SH_VOG17m";
		ammo="rhs_ammo_VOG17m";
	};
};
class CfgMagazineWells
{
};
class CfgWeapons
{
	class RHS_weap_Ags30;
	class RHS_weap_Ags30_new: RHS_weap_Ags30
	{
		ballisticsComputer=0;
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne3";
				directionName="konec hlavne3";
				effectName="GrenadeLauncherCloud";
			};
		};
		magazines[]=
		{
			"RHS_mag_VOG30_30",
			"RHS_mag_GPD30_30",
			"RHS_mag_VOG17m_30",
			"RHS_mag_VOG30_300",
			"RHS_mag_GPD30_300",
			"RHS_mag_VOG17m_300"
		};
	};
};
class cfgMods
{
	author="[CN]Lurker1011,真红战队";
	timepacked="1769200211";
};
