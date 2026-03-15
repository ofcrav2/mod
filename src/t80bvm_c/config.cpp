#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class T80BVM_C_LK
	{
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"rhs_c_heavyweapons",
			"rhs_c_vehiclesounds"
		};
		requiredVersion=0.1;
		units[]=
		{
			"O_T80BVM",
			"rhs_tv_t80bvm",
			"O_T80BVM_OLD",
			"rhs_tv_t80bvm_old"
		};
		weapons[]=
		{
			"rhs_weap_2a46m_bvm",
			"rhs_weap_nsvt_bvm",
			"rhs_weap_pkt_bvm"
		};
	};
};
class RscInGameUI
{
	class RscUnitInfo;
	class RscUnitInfoSoldier;
	class RscUnitInfoTank;
	class RHS_RscWeaponPlissa_FCS;
	class RHS_RscWeaponPlissa_bvm_FCS: RHS_RscWeaponPlissa_FCS
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
	};
};
class CfgFunctions
{
	class t80bvm
	{
		class functions
		{
			class findPlayer
			{
				file="t80bvm_c\scripts\rhs_findPlayer.sqf";
				description="Find player controled unit";
			};
			class hatch
			{
				file="t80bvm_c\scripts\rhs_hatch.sqf";
				description="hatch";
			};
			class init
			{
				file="t80bvm_c\scripts\rhs_init.sqf";
				description="ztz99_init";
			};
		};
	};
};
class CfgAmmo
{
	class M_125mm_cannon_ATGM;
	class M_9m112m_bvm_ATGM: M_125mm_cannon_ATGM
	{
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1053;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		inittime=0;
		irlock=1;
		laserlock=0;
		maneuvrability=9;
		sideairfriction=0.1;
		maxcontrolrange=4000;
		maxspeed=500;
		thrust=112;
		thrusttime=6;
		timetolive=30;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class rhs_mag_3bm46_10;
	class 4Rnd_9m112m_bvm_missiles: VehicleMagazine
	{
		author="Lurker1011";
		scope=2;
		displayName="$STR_RHS_MAG_9M112M";
		displayNameShort="$STR_RHS_MAG_SH_9M112M";
		count=4;
		ammo="M_9m112m_bvm_ATGM";
		initSpeed=125;
		maxleadspeed=50;
		nameSound="missiles";
		displayNameMFDFormat="MISL";
	};
	class rhs_mag_3bm46_14: rhs_mag_3bm46_10
	{
		count=14;
	};
};
class CfgWeapons
{
	class rhs_weap_pkt;
	class rhs_weap_2a46m_2;
	class rhs_weap_nsvt;
	class cannon_125mm;
	class rhs_weap_2a46m_bvm: rhs_weap_2a46m_2
	{
		displayName="2A46M_125mm_BVM";
		reloadMagazineSound[]=
		{
			"\rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",
			1.4125376,
			1,
			200
		};
		aiDispersioncoefX=3.5;
		aiDispersioncoefY=5;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		magazineWell[]=
		{
			"RHS_Cannon_125mm_D81",
			"RHS_Cannon_125mm_2A46M"
		};
	};
	class rhs_weap_pkt_bvm: rhs_weap_pkt
	{
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne3";
				directionName="konec hlavne3";
				effectName="MachineGunCloud";
			};
		};
	};
	class rhs_weap_nsvt_bvm: rhs_weap_nsvt
	{
		class GunParticles
		{
			class effect1a
			{
				effectname="MachineGunCloud";
				positionname="Usti hlavne2";
				directionname="Konec hlavne2";
			};
			class effect1
			{
				positionname="nabojnicestart";
				directionname="nabojniceend";
				effectname="MachineGunEject";
			};
			class effect2
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunCartridge2";
			};
		};
	};
};
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
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
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class lk_T80BVM_base: Tank_F
	{
		vehicleClass="Armored";
		displayName="T80BVM";
		accuracy=0.30000001;
		author="[CN]Lurker1011,真红战队";
		unitInfoType="RHS_RscInfoT80";
		model="\t80bvm\T80BVM";
		picture="\rhsafrf\addons\rhs_t80\data\icon\rhs_t80_pic_ca.paa";
		Icon="\rhsafrf\addons\rhs_t72\data\icomap_t72_CA.paa";
		destrType="DestructDefault";
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundTurnIn[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOut[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnInInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOutInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
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
			"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t80\t80_engine_ext_start",
			1.7782794,
			1
		};
		soundEngineOnExt[]=
		{
			"rhsafrf\addons\rhs_vehiclesounds\sounds\armor\t80\t80_engine_ext_start",
			1.7782794,
			1,
			100
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_Int_Stop",
			1,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\MBT_02\MBT_02_Engine_Ext_Stop",
			3.1622777,
			1,
			100
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095737,
			1,
			100
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095737,
			1,
			100
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095737,
			1,
			100
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		woodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		woodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		woodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		woodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		woodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
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
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		ArmorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		ArmorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		class Sounds
		{
			soundSetsInt[]=
			{
				"RHS_T80_Engine_RPM0_INT_SoundSet",
				"RHS_T80_Engine_RPM1_INT_SoundSet",
				"RHS_T80_Engine_RPM2_INT_SoundSet",
				"RHS_T80_Engine_INT_Burst_SoundSet",
				"RHS_T80_Tracks_01_INT_SoundSet",
				"RHS_T80_Tracks_02_INT_SoundSet",
				"RHS_T80_Tracks_03_INT_SoundSet",
				"RHS_T80_Tracks_04_INT_SoundSet",
				"RHS_T80_Tracks_05_INT_SoundSet",
				"RHS_T80_Tracks_06_INT_SoundSet",
				"RHS_T80_Interior_Tone_Engine_Off_SoundSet",
				"RHS_T80_Interior_Tone_Engine_On_SoundSet",
				"RHS_T80_Rattling_INT_SoundSet",
				"RHS_T80_Rain_INT_SoundSet",
				"RHS_T80_Tracks_Brake_Hard_INT_SoundSet",
				"RHS_T80_Tracks_Brake_Soft_INT_SoundSet",
				"RHS_T80_Tracks_Turn_Hard_INT_SoundSet",
				"RHS_T80_Tracks_Turn_Soft_INT_SoundSet",
				"RHS_T80_Drive_Water_INT_SoundSet",
				"RHS_T80_Drive_Dirt_INT_SoundSet",
				"",
				"MBT_02_Turbine01_Int_Tonal_SoundSet",
				"MBT_02_Turbine01_Int_Noisy_SoundSet",
				"MBT_02_Servo01_Int_SoundSet",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet",
				"Tank_General_Collision_Int_SoundSet",
				"rhs_tank_t72_int_autoloader_SoundSet"
			};
			soundSetsExt[]=
			{
				"RHS_T80_Engine_RPM0_EXT_SoundSet",
				"RHS_T80_Engine_RPM1_EXT_SoundSet",
				"RHS_T80_Engine_RPM2_EXT_SoundSet",
				"RHS_T80_Engine_EXT_Burst_SoundSet",
				"RHS_T80_Tracks_01_EXT_SoundSet",
				"RHS_T80_Tracks_02_EXT_SoundSet",
				"RHS_T80_Tracks_03_EXT_SoundSet",
				"RHS_T80_Tracks_04_EXT_SoundSet",
				"RHS_T80_Tracks_05_EXT_SoundSet",
				"RHS_T80_Tracks_06_EXT_SoundSet",
				"RHS_T80_Rain_EXT_SoundSet",
				"RHS_T80_Tracks_Brake_Hard_EXT_SoundSet",
				"RHS_T80_Tracks_Brake_Soft_EXT_SoundSet",
				"RHS_T80_Tracks_Turn_Hard_EXT_SoundSet",
				"RHS_T80_Tracks_Turn_Soft_EXT_SoundSet",
				"RHS_T80_Drive_Water_EXT_SoundSet",
				"RHS_T80_Drive_Dirt_EXT_SoundSet",
				"",
				"MBT_02_Turbine01_Ext_Front_Tonal_SoundSet",
				"MBT_02_Turbine01_Ext_Rear_Tonal_SoundSet",
				"MBT_02_Turbine01_Ext_Front_Noisy_SoundSet",
				"MBT_02_Turbine01_Ext_Rear_Noisy_SoundSet",
				"MBT_02_Servo01_Ext_SoundSet",
				"MBT_02_Servo02_Ext_SoundSet",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundShader",
				"rhs_tank_t72_ext_autoloader_SoundSet"
			};
		};
		simulation="tankX";
		normalSpeedForwardCoef=0.5;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=19.5;
		brakeIdleSpeed=1.78;
		maxSpeed=70;
		engineMOI=20;
		enginePower=932;
		peakTorque=4393;
		minOmega=114.72;
		maxOmega=350.85999;
		idleRPM=1200;
		redRPM=3255;
		torqueCurve[]=
		{
			{0.30722001,0},
			{0.44761899,0.94855499},
			{0.52657402,0.89710897},
			{0.60553002,0.84566402},
			{0.68448502,0.794218},
			{0.76344103,0.742773},
			{0.84239602,0.69132698},
			{1.90292,0}
		};
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineBrakeCoef=0;
		tracksSpeed=1.4;
		tankTurnForce=650000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=3.3;
		accelAidForceYOffset=-4;
		accelAidForceSpd=2.8299999;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=30;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.33333299,0.33333299,0,0.95999998,0.33333299,0.98333299,0.69999999,0.98333299,0.73333299,0.98333299,0.73333299};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.925,
				"N",
				0,
				"D1",
				4.3800001,
				"D2",
				2.1600001,
				"D3",
				1.46,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				11.55
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.89999998;
		};
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				steering=0;
				side="left";
				width=0.396;
				mass=188;
				MOI=14.0783;
				dampingRate=1000;
				dampingRateInAir=1000;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				sprungMass=3833.3301;
				springStrength=254000;
				springDamperRate=11000;
				maxBrakeTorque=10000;
				latStiffX=3;
				latStiffY=40;
				longitudinalStiffnessPerUnitGravity=72000;
				suspTravelDirection[]={-0.125,-1,0};
				frictionVsSlipGraph[]=
				{
					{0,0.40000001},
					{0.18000001,1},
					{0.69999999,0.75}
				};
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_axis";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
				suspForceAppPointOffset="wheel_1_5_axis";
				sprungMass=5000;
				springStrength=350000;
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
				suspForceAppPointOffset="wheel_1_6_axis";
				sprungMass=5200;
				springStrength=400000;
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
				suspForceAppPointOffset="wheel_1_7_axis";
				sprungMass=5500;
				springStrength=500000;
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
				sprungMass=5000;
				springStrength=350000;
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
				suspForceAppPointOffset="wheel_2_6_axis";
				sprungMass=5200;
				springStrength=400000;
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
				suspForceAppPointOffset="wheel_2_7_axis";
				sprungMass=5500;
				springStrength=500000;
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
		extCameraPosition[]={0,2.5,-8};
		crewVulnerable=0;
		driverInfoPanelCameraPos="driverview_panel";
		LODDriverOpticsIn=1201;
		LODDriverTurnedin=1100;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		viewDriverInExternal=1;
		LODDriverTurnedOut=0;
		driverAction="driver_apcwheeled2_out";
		driverInAction="Driver_MBT_02_F_in";
		driverLeftHandAnimName="drivingstick_left";
		driverRightHandAnimName="drivingstick_right";
		driverLeftLegAnimName="pedal_brake";
		driverRightLegAnimName="pedal_thrust";
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		driverForceOptics=0;
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		magazines[]=
		{
			"rhs_mag_smokegen"
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.25;
			minFov=0.13;
			maxFov=0.25;
		};
		class ViewPilot: ViewPilot
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
			class Narrow: Wide
			{
				camPos="driverview_old";
				opticsModel="\A3\weapons_f\reticle\Optics_Driver_01_F";
				initFov=0.75;
				minFov=0.75;
				maxFov=0.75;
			};
		};
		armor=550;
		armorStructural=220;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=100;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_points";
				visual="zbytek";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.13;
			};
			class HitEngine: HitEngine
			{
				armor=-150;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.0099999998;
				radius=0.23;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_smoke1";
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
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type="WeaponWreckSmoke";
						position="engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position="engine_smoke3";
					};
				};
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_LTrack";
				name="pas_L";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_RTrack";
				name="pas_P";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitFuelTank_Left
			{
				armor=-80;
				material=-1;
				name="Hit_FuelTank_Left";
				armorComponent="Hit_FuelTank_Left";
				visual="-";
				passThrough=0;
				minimalHit=0.30000001;
				explosionShielding=0;
				radius=0.1;
			};
			class HitFuelTank_Right: HitFuelTank_Left
			{
				name="Hit_FuelTank_Right";
				armorComponent="Hit_FuelTank_Right";
			};
			class HitFuel
			{
				armor=999;
				name="Hit_Fuel";
				armorComponent="Hit_Fuel";
				visual="-";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.0099999998;
				depends="(HitFuelTank_Left+HitFuelTank_Right)*0.5";
			};
			class HitArmor
			{
				armor=1;
				material=-1;
				armorComponent="hit_Armor";
				name="hit_Armor_points";
				visual="Armor";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=2;
				radius=0.1;
				isTurret=0;
			};
			class era_1_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e1";
				armorComponent="e1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e2";
				armorComponent="e2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e3";
				armorComponent="e3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e4";
				armorComponent="e4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e5";
				armorComponent="e5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e6";
				armorComponent="e6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e7";
				armorComponent="e7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e8";
				armorComponent="e8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e9";
				armorComponent="e9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e10";
				armorComponent="e10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e11";
				armorComponent="e11";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e12";
				armorComponent="e12";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e13";
				armorComponent="e13";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e14";
				armorComponent="e14";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e15";
				armorComponent="e15";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e16";
				armorComponent="e16";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e17";
				armorComponent="e17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e18";
				armorComponent="e18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e19";
				armorComponent="e19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e20";
				armorComponent="e20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e21";
				armorComponent="e21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e22";
				armorComponent="e22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e23";
				armorComponent="e23";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="e24";
				armorComponent="e24";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et1";
				armorComponent="et1";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et1";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et1";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et1";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et1";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_26_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et2";
				armorComponent="et2";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et2";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et2";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et2";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et2";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_27_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et3";
				armorComponent="et3";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et3";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et3";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et3";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et3";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_28_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et4";
				armorComponent="et4";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et4";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et4";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et4";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et4";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_29_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et5";
				armorComponent="et5";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et5";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et5";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et5";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et5";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_30_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et6";
				armorComponent="et6";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et6";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et6";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et6";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et6";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_31_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et7";
				armorComponent="et7";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et7";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et7";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et7";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et7";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_32_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et8";
				armorComponent="et8";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et8";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et8";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et8";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et8";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_33_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et9";
				armorComponent="et9";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et9";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et9";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et9";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et9";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_34_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et10";
				armorComponent="et10";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et10";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et10";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et10";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et10";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_35_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et11";
				armorComponent="et11";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et11";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et11";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et11";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et11";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_36_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et12";
				armorComponent="et12";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et12";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et12";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et12";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et12";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_37_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et13";
				armorComponent="et13";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et13";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et13";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et13";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et13";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_38_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et14";
				armorComponent="et14";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et14";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et14";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et14";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et14";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_39_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et15";
				armorComponent="et15";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et15";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et15";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et15";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et15";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_40_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et16";
				armorComponent="et16";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et16";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et16";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et16";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et16";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_41_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et17";
				armorComponent="et17";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et17";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et17";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et17";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et17";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_42_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et18";
				armorComponent="et18";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et18";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et18";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et18";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et18";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_43_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et19";
				armorComponent="et19";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et19";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et19";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et19";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et19";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_44_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et20";
				armorComponent="et20";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et20";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et20";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et20";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et20";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_45_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et21";
				armorComponent="et21";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et21";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et21";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et21";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et21";
						intensity=1;
						interval=1;
						lifeTime=0.029999999;
					};
				};
			};
			class era_46_hitpoint
			{
				simulation="RHS_ERA_MALACHIT";
				armor=-100;
				material=-1;
				name="et22";
				armorComponent="et22";
				passThrough=0;
				minimalHit=-0.5;
				explosionShielding=0.0070000002;
				radius=0.2;
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
						position="fx_et22";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="fx_et22";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="fx_et22";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
					class RHS_ERA_Shard
					{
						simulation="particles";
						type="RHS_ERA_Shard";
						position="fx_et22";
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
				radius=0.1;
				visual="-";
			};
			class SLAT_2_hitpoint: SLAT_1_hitpoint
			{
				name="slat2";
				armorComponent="slat2";
			};
			class SLAT_3_hitpoint: SLAT_1_hitpoint
			{
				name="slat3";
				armorComponent="slat3";
			};
			class SLAT_4_hitpoint: SLAT_1_hitpoint
			{
				name="slat4";
				armorComponent="slat4";
			};
			class SLAT_5_hitpoint: SLAT_1_hitpoint
			{
				name="slat5";
				armorComponent="slat5";
			};
			class SLAT_6_hitpoint: SLAT_1_hitpoint
			{
				name="slat6";
				armorComponent="slat6";
			};
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
						maxHorizontalRotSpeed=1.9;
						maxVerticalRotSpeed=1.9;
						stabilizedInAxes=3;
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							0.0099999998,
							1,
							50
						};
						minElev=-20;
						maxElev=30;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						memoryPointGun="usti hlavne2";
						gunBeg="usti hlavne2";
						gunEnd="konec hlavne2";
						weapons[]=
						{
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						turretInfoType="rhs_gui_optic_TKN4S_rangefinder";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
						discreteDistanceInitIndex=5;
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[]={};
						gunnerHasFlares=1;
						class OpticsIn
						{
							class day1
							{
								hitpoint="Hit_Optic_TKN4S";
								opticsDisplayName="DAY";
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s.p3d";
							};
							class day2: day1
							{
								opticsDisplayName="DAYZOOM";
								initFov=0.087499999;
								minFov=0.087499999;
								maxFov=0.087499999;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s_zoom.p3d";
							};
							class night3: day1
							{
								opticsDisplayName="NIGHT";
								initFov=0.1;
								minFov=0.1;
								maxFov=0.1;
								visionMode[]=
								{
									"NVG"
								};
								gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
							};
						};
						gunnerAction="Commander_MBT_01_cannon_F_out";
						gunnerInAction="Commander_MBT_01_cannon_F_in";
						personTurretAction="vehicle_turnout_2";
						isPersonTurret=1;
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						startEngine=0;
						viewGunnerInExternal=1;
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						LODTurnedIn=1000;
						LODTurnedOut=1000;
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.30000001;
								material=-1;
								armorComponent="hit_com_turret";
								name="vezVelitele";
								visual="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.30000001;
								material=-1;
								armorComponent="hit_com_gun";
								name="zbranVelitele";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isGun=1;
							};
						};
						selectionFireAnim="";
					};
					class CommanderMG: CommanderOptics
					{
						gunnername="Commander MG";
						proxyindex=2;
						dontCreateAi=1;
						cantCreateAI=1;
						isPersonTurret=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						memoryPointGun="usti hlavne2";
						gunBeg="usti hlavne2";
						gunEnd="konec hlavne2";
						body="mg_turret";
						gun="mg_gun";
						animationSourceBody="mg_turret";
						animationSourceGun="mg_gun";
						animationSourceStickX="CommanderTurret_Inertia";
						animationSourceStickY="CommanderGun_Inertia";
						gunnerDoor="";
						stabilizedInAxes=0;
						canHideGunner=0;
						memoryPointGunnerOutOptics="commander_out_view";
						gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
						soundAttenuationTurret="HeliAttenuationGunner";
						disableSoundAttenuation=0;
						LODOpticsIn=1000;
						LODOpticsOut=1000;
						gunnerLeftHandAnimName="";
						gunnerRightHandAnimName="mg_handle2";
						gunnerLeftLegAnimName="leg_L";
						gunnerRightLegAnimName="leg_R";
						minElev=-10;
						maxElev=60;
						minTurn=-180;
						maxTurn=180;
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						turretInfoType="RscOptics_Offroad_01";
						optics=0;
						usePip=0;
						gunnerOutOpticsShowCursor=1;
						gunnerAction="rhs_t80_commander_out";
						gunnerInAction="rhs_T80_Commander_in";
						weapons[]=
						{
							"rhs_weap_nsvt_bvm"
						};
						magazines[]=
						{
							"rhs_mag_127x108mm_150",
							"rhs_mag_127x108mm_150",
							"rhs_mag_127x108mm_150",
							"rhs_mag_127x108mm_150",
							"rhs_mag_127x108mm_150",
							"rhs_mag_127x108mm_150"
						};
						selectionFireAnim="muzzlehmg";
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]=
								{
									"Normal"
								};
								initFov=0.60000002;
								minFov=0.60000002;
								maxFov=0.60000002;
							};
							class Medium: Wide
							{
								visionMode[]=
								{
									"Normal"
								};
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
							};
							class Narrow: Wide
							{
								camPos="nsv_gunnerview";
								visionMode[]=
								{
									"Normal"
								};
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
							};
						};
						class ViewOptics: ViewOptics
						{
							minFov=0.25;
							maxFov=1.25;
							initFov=0.75;
						};
						class ViewGunner: ViewGunner
						{
						};
						gunnercompartments="Compartment5";
					};
				};
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh1";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				body="rhs_t80b_mainturret";
				gun="rhs_t80b_maingun";
				weapons[]=
				{
					"rhs_weap_2a46m_2",
					"rhs_weap_pkt_bvm",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_10",
					"rhs_mag_3bk31_8",
					"rhs_mag_3of26_6",
					"rhs_mag_9m112m_4",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				minElev=-5;
				maxElev=15;
				initElev=10;
				initTurn=-13;
				lockWhenDriverOut=1;
				soundServo[]=
				{
					"rhsafrf\addons\rhs_t72\sounds\traverse",
					7,
					1,
					30
				};
				turretInfoType="RHS_RscWeaponSosnaU_FCS";
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="gunnerview2";
						hitpoint="Hit_Optic_SosnaU";
						opticsDisplayName="TI1";
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="TI2";
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow: Medium
					{
						opticsDisplayName="TI3";
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Narrow2: Narrow
					{
						opticsDisplayName="AUTOTRACK";
						directionStabilized=1;
					};
				};
				class Reflectors
				{
					class Searchlight_FG125
					{
						color[]={1900,1300,950};
						ambient[]={5,5,5};
						position="Light_T_pos";
						direction="Light_T_end";
						hitpoint="Light_FG125";
						selection="Light_FG125";
						size=1;
						innerAngle=8;
						outerAngle=15;
						coneFadeCoef=1;
						intensity=45;
						useFlare=1;
						dayLight=1;
						flareSize=0.85000002;
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
					class Searchlight_FG125_Flare
					{
						color[]={7,6,6.5};
						ambient[]={22,22,22};
						position="Light_T_flare";
						direction="Light_T_end";
						hitpoint="Light_FG125";
						selection="Light_FG125";
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
				gunnerAction="rhs_t80_gunner_out";
				gunnerInAction="rhs_t80_gunner_in";
				forceHideGunner=0;
				inGunnerMayFire=1;
				viewGunnerInExternal=1;
				LODTurnedIn=1;
				LODTurnedOut=1;
				startEngine=0;
				maxHorizontalRotSpeed=0.8;
				maxVerticalRotSpeed=0.12;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{20.1126,-107.5349},
						{19.8932,99.317703}
					};
					limitsArrayBottom[]=
					{
						{-9.1273003,-108.1836},
						{-7.1046,-44.255001},
						{-9.1674995,31.497801},
						{-9.0504999,102.8447}
					};
				};
				class TurnIn: TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-180},
						{15,180}
					};
					limitsArrayBottom[]=
					{
						{-2,-180},
						{-2,-160},
						{-3,-137},
						{-5,-131},
						{-5,-35},
						{-4.5,-21},
						{-5,-20},
						{-5,20},
						{-4.5,21},
						{-5,35},
						{-5,131},
						{-3,137},
						{-2,160},
						{-2,180}
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=-100;
						material=-1;
						armorComponent="hit_main_turret";
						name="vez";
						visual="";
						passThrough=0;
						minimalHit=0.0099999998;
						explosionShielding=0.0089999996;
						radius=0.15000001;
						isTurret=1;
					};
					class HitGun
					{
						armor=-150;
						material=-1;
						armorComponent="hit_main_gun";
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=-0.2;
						explosionShielding=0.001;
						radius=0.12;
						isGun=1;
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenSelectionsTextures[]=
		{
			"\t80bvm\tex\t80bvm_hull_co.paa",
			"\t80bvm\tex\t80bvm_turret_co.paa",
			"\t80bvm\tex\t80bvm_era_co.paa",
			"\t80bvm\tex\t80bvm_nvst_co.paa",
			"\t80bvm\tex\t80bvm_wheels_co.paa",
			"\t80bvm\tex\t80bvm_slat_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm\tex\t80bvm_hull_co.paa",
					"\t80bvm\tex\t80bvm_turret_co.paa",
					"\t80bvm\tex\t80bvm_era_co.paa",
					"\t80bvm\tex\t80bvm_nvst_co.paa",
					"\t80bvm\tex\t80bvm_wheels_co.paa",
					"\t80bvm\tex\t80bvm_slat_co.paa"
				};
			};
			class standard_2
			{
				displayName="Standard(black rubber)";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm_camo\tex\t80bvm_hull_2_co.paa",
					"\t80bvm\tex\t80bvm_turret_co.paa",
					"\t80bvm_camo\tex\t80bvm_era_2_co.paa",
					"\t80bvm\tex\t80bvm_nvst_co.paa",
					"\t80bvm\tex\t80bvm_wheels_co.paa",
					"\t80bvm\tex\t80bvm_slat_co.paa"
				};
			};
			class sand
			{
				displayName="Sand";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm_camo\tex\t80bvm_hull_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_turret_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_era_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_nvst_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_wheels_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_slat_D_co.paa"
				};
			};
			class sand_2
			{
				displayName="Sand(black rubber)";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm_camo\tex\t80bvm_hull_D2_co.paa",
					"\t80bvm_camo\tex\t80bvm_turret_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_era_D2_co.paa",
					"\t80bvm_camo\tex\t80bvm_nvst_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_wheels_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_slat_D_co.paa"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="rhs_weap_2a46m_2";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="rhs_weap_2a46m_2";
			};
			class muzzle_rot_coax
			{
				source="ammorandom";
				weapon="rhs_weap_pkt_bvm";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="rhs_weap_nsvt_bvm";
			};
			class ReloadMagazine: ReloadAnim
			{
				source="reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source="revolving";
			};
			class muzzle_rot_MG: ReloadAnim
			{
				source="ammorandom";
			};
			class muzzle_hide_MG: ReloadAnim
			{
				source="reload";
			};
			class recoil_source
			{
				source="door";
				animPeriod=6;
				initPhase=0;
			};
			class TCOverrideTurret
			{
				source="user";
				animPeriod=4;
				initPhase=0;
			};
			class reload_source
			{
				weapon="rhs_weap_2a46m_2";
				source="reload";
			};
			class autoloader
			{
				source="user";
				animPeriod=3.25;
				initPhase=0;
			};
			class turretHide: autoloader
			{
				animPeriod=1e-010;
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
			class reload_magazine_source: reload_source
			{
				source="reloadMagazine";
			};
			class HidePlate
			{
				displayName="Hide Plate";
				author="Lurker1011";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=0;
			};
			class showFeulTank
			{
				displayName="Additional fuel tanks(uselessness)";
				author="Lurker1011";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
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
				hitpoint="era_44_hitpoint";
			};
			class era_46_source
			{
				source="Hit";
				hitpoint="era_44_hitpoint";
			};
			class slat_1_source
			{
				source="Hit";
				hitpoint="SLAT_1_hitpoint";
			};
			class slat_2_source
			{
				source="Hit";
				hitpoint="SLAT_2_hitpoint";
			};
			class slat_3_source
			{
				source="Hit";
				hitpoint="SLAT_3_hitpoint";
			};
			class slat_4_source
			{
				source="Hit";
				hitpoint="SLAT_4_hitpoint";
			};
			class slat_5_source
			{
				source="Hit";
				hitpoint="SLAT_5_hitpoint";
			};
			class slat_6_source
			{
				source="Hit";
				hitpoint="SLAT_6_hitpoint";
			};
			class optic_box
			{
				source="user";
				animPeriod=0.5;
				initPhase=1;
			};
			class armor_roof_hide
			{
				displayName="hide armor roof";
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
			class rudder_skirt_hide
			{
				displayName="hide rudder_skirt";
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
			class fuel_barrel_hide
			{
				displayName="Hide fuel barrel";
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
			class wood_log_hide
			{
				displayName="Hide wood log";
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
			class chain_hide
			{
				displayName="Hide chain";
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class rudder_plate_hide
			{
				displayName="Hide rudder plate";
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
			class deploy_shovel
			{
				source="door";
				animPeriod=2;
				initPhase=0;
			};
			class HitEngine_src
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitFuel_src
			{
				source="Hit";
				hitpoint="HitFuel";
				raw=1;
			};
			class HitHull_src
			{
				source="Hit";
				hitpoint="HitHull";
				raw=1;
			};
			class HitLTrack_src
			{
				source="Hit";
				hitpoint="HitLTrack";
				raw=1;
			};
			class HitRTrack_src
			{
				source="Hit";
				hitpoint="HitRTrack";
				raw=1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"t80bvm\tex\t80bvm_hull.rvmat",
				"t80bvm\tex\t80bvm_hull_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_turret.rvmat",
				"t80bvm\tex\t80bvm_turret_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_era.rvmat",
				"t80bvm\tex\t80bvm_era_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_nvst.rvmat",
				"t80bvm\tex\t80bvm_nvst_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_wheels.rvmat",
				"t80bvm\tex\t80bvm_wheels_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_slat.rvmat",
				"t80bvm\tex\t80bvm_slat_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat"
			};
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
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[]={15,20,20};
					ambient[]={0,0,0};
					intensity=1;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
					point="light_interior1";
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="Light_r";
				direction="Light_r_end";
				hitpoint="Light_r";
				selection="light_l";
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
				position="light_R_flare";
				useFlare=1;
			};
		};
		class RenderTargets
		{
			class driver_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[]={-1};
				};
				BBoxes[]=
				{
					"PIP_DRV_TL",
					"PIP_DRV_TR",
					"PIP_DRV_BL",
					"PIP_DRV_BR"
				};
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2"
			}
		};
		class UserActions
		{
			class trunk_open
			{
				displayName="Use HMG";
				position="trunk_action";
				radius=4;
				onlyForplayer=0;
				shortcut="turnOut";
				condition="this animationPhase 'hatchcommander'>0.5 and ((call rhsusf_fnc_findPlayer) == commander this)";
				statement="(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,1]];[this,[[0,0],true]] remoteExecCall ['lockTurret'];this animate ['optic_box',0]";
			};
			class trunk_close: trunk_open
			{
				displayName="Leave HMG";
				shortcut="turnIn";
				condition="vehicle (call rhsusf_fnc_findPlayer) turretUnit [0,1] == (call rhsusf_fnc_findPlayer)";
				statement="(call rhsusf_fnc_findPlayer) action ['moveToTurret', this, [0,0]];[this,[[0,0],false]] remoteExecCall ['lockTurret'];this animate ['optic_box',1]";
			};
			class Deploy_shovel
			{
				displayName="Deploy shovel";
				position="pos driver";
				radius=15;
				onlyForplayer=0;
				condition="player == driver this && this doorPhase 'deploy_shovel' == 0";
				statement="this animateDoor ['deploy_shovel', 1]";
				shortcut="user12";
			};
			class retract_shovel: Deploy_shovel
			{
				displayName="retract shovel";
				condition="player == driver this && this doorPhase 'deploy_shovel' == 1";
				statement="this animateDoor ['deploy_shovel', 0]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				init="_this call t80bvm_fnc_init;";
				fired="_this call RHS_fnc_t80_autoloader;";
				killed="[_this select 0,'rhs_Wreck_T80u_turret_F'] call rhs_fnc_turretBlow";
				engine="[_this select 0,_this select 1,20] call rhs_fnc_engineStartupDelay;_this call rhs_fnc_engineCheckDamage;";
				getOut="_this call t80bvm_fnc_hatch;_this call rhs_fnc_hatchAbandon";
			};
		};
		class MFD
		{
			class MFD_Driver_Heading
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=0.5;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.61000001,0.62,0};
					alpha=1;
					condition="on";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0},
							1
						};
						right[]=
						{
							{1,0},
							1
						};
						down[]=
						{
							{0.5,0.81},
							1
						};
					};
				};
			};
			class MFD_Driver_Fire
			{
				topLeft="MFD_2_TL";
				topRight="MFD_2_TR";
				bottomLeft="MFD_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.92000002,0.0099999998,0};
				alpha=0.5;
				enableParallax=0;
				font="LCD14";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.92000002,0.0099999998,0};
					alpha=1;
					blinkingPattern[]={1,1};
					blinkingStartsOn=1;
					class Driver_Fire
					{
						type="text";
						source="static";
						text="锟愶緹锟愶緸锟愶緰锟愶緪锟愶緺";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.45500001,0.105},
							1
						};
						right[]=
						{
							{0.85500002,0.105},
							1
						};
						down[]=
						{
							{0.45500001,0.70499998},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_text
			{
				topLeft="MFD_Driver_1_TL";
				topRight="MFD_Driver_1_TR";
				bottomLeft="MFD_Driver_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="static";
						text="锟愶緪锟愶緱锟愶緲锟愶緶锟愶荆锟愶劲";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0.02},
							1
						};
						right[]=
						{
							{0.69999999,0.02},
							1
						};
						down[]=
						{
							{0.44999999,0.87},
							1
						};
					};
				};
			};
			class MFD_Driver_Heading_second
			{
				topLeft="MFD_Driver_2_TL";
				topRight="MFD_Driver_2_TR";
				bottomLeft="MFD_Driver_2_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Driver_Heading
					{
						type="text";
						source="heading";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.44999999,0},
							1
						};
						right[]=
						{
							{0.94999999,0},
							1
						};
						down[]=
						{
							{0.44999999,0.81},
							1
						};
					};
				};
			};
		};
		acre_hasInfantryPhone = 0;
	};
	class O_T80BVM: lk_T80BVM_base
	{
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_F";
		crew="O_T_Crew_F";
		typicalCargo[]=
		{
			"O_T_Crew_F"
		};
		accuracy=1000;
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
			"era_46_hitpoint"
		};
		ace_vehicle_damage_slatHitpoints[]=
		{
			"SLAT_1_hitpoint",
			"SLAT_2_hitpoint",
			"SLAT_3_hitpoint",
			"SLAT_4_hitpoint",
			"SLAT_5_hitpoint",
			"SLAT_6_hitpoint"
		};
		displayName="T-80BVM (obr.2023g.)";
		author="[CN]Lurker1011,真红战队";
		editorPreview="t80bvm_c\ui\t80bvm_pre.jpg";
	};
	class rhs_tv_t80bvm: O_T80BVM
	{
		vehicleClass="rhs_vehclass_tank";
		editorSubcategory="rhs_EdSubcat_tank";
		faction="rhs_faction_tv";
		crew="rhs_msv_emr_armoredcrew";
		typicalCargo[]=
		{
			"rhs_msv_emr_armoredcrew"
		};
	};
	class T80BVM_OLD: lk_T80BVM_base
	{
		model="\t80bvm\T80BVM_2";
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
		hiddenSelectionsTextures[]=
		{
			"\t80bvm\tex\t80bvm_hull_co.paa",
			"\t80bvm\tex\t80bvm_turret_co.paa",
			"\t80bvm\tex\t80bvm_era_co.paa",
			"\t80bvm\tex\t80bvm_nvst_co.paa",
			"\t80bvm\tex\t80bvm_wheels_co.paa",
			"\t80bvm\tex\t80bvm_slat_co.paa",
			"\t80bvm\tex\ERA_soft_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm\tex\t80bvm_hull_co.paa",
					"\t80bvm\tex\t80bvm_turret_co.paa",
					"\t80bvm\tex\t80bvm_era_co.paa",
					"\t80bvm\tex\t80bvm_nvst_co.paa",
					"\t80bvm\tex\t80bvm_wheels_co.paa",
					"\t80bvm\tex\t80bvm_slat_co.paa",
					"\t80bvm\tex\ERA_soft_co.paa"
				};
			};
			class standard_2
			{
				displayName="Standard(black rubber)";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm_camo\tex\t80bvm_hull_2_co.paa",
					"\t80bvm\tex\t80bvm_turret_co.paa",
					"\t80bvm_camo\tex\t80bvm_era_2_co.paa",
					"\t80bvm\tex\t80bvm_nvst_co.paa",
					"\t80bvm\tex\t80bvm_wheels_co.paa",
					"\t80bvm\tex\t80bvm_slat_co.paa",
					"\t80bvm_camo\tex\ERA_soft_2_co.paa"
				};
			};
			class sand
			{
				displayName="Sand";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm_camo\tex\t80bvm_hull_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_turret_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_era_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_nvst_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_wheels_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_slat_D_co.paa",
					"\t80bvm_camo\tex\ERA_soft_D_co.paa"
				};
			};
			class sand_2
			{
				displayName="Sand(black rubber)";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm_camo\tex\t80bvm_hull_D2_co.paa",
					"\t80bvm_camo\tex\t80bvm_turret_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_era_D2_co.paa",
					"\t80bvm_camo\tex\t80bvm_nvst_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_wheels_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_slat_D_co.paa",
					"\t80bvm_camo\tex\ERA_soft_D2_co.paa"
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"t80bvm\tex\t80bvm_hull.rvmat",
				"t80bvm\tex\t80bvm_hull_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_turret.rvmat",
				"t80bvm\tex\t80bvm_turret_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_era.rvmat",
				"t80bvm\tex\t80bvm_era_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_nvst.rvmat",
				"t80bvm\tex\t80bvm_nvst_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_wheels.rvmat",
				"t80bvm\tex\t80bvm_wheels_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\t80bvm_slat.rvmat",
				"t80bvm\tex\t80bvm_slat_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				"t80bvm\tex\ERA_soft.rvmat",
				"t80bvm\tex\ERA_soft_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat"
			};
		};
		class HitPoints: HitPoints
		{
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
				radius=0.1;
				visual="-";
			};
			class SLAT_8_hitpoint: SLAT_7_hitpoint
			{
				name="slat8";
				armorComponent="slat8";
			};
			class SLAT_9_hitpoint: SLAT_7_hitpoint
			{
				name="slat9";
				armorComponent="slat9";
			};
			class SLAT_10_hitpoint: SLAT_7_hitpoint
			{
				name="slat10";
				armorComponent="slat10";
			};
		};
		class AnimationSources: AnimationSources
		{
			class slat_7_source
			{
				source="Hit";
				hitpoint="SLAT_7_hitpoint";
			};
			class slat_8_source
			{
				source="Hit";
				hitpoint="SLAT_8_hitpoint";
			};
			class slat_9_source
			{
				source="Hit";
				hitpoint="SLAT_9_hitpoint";
			};
			class slat_10_source
			{
				source="Hit";
				hitpoint="SLAT_10_hitpoint";
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
			"era_46_hitpoint"
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
	class O_T80BVM_OLD: T80BVM_OLD
	{
		scope=2;
		scopeCurator=2;
		side=0;
		faction="OPF_F";
		crew="O_T_Crew_F";
		typicalCargo[]=
		{
			"O_T_Crew_F"
		};
		accuracy=1000;
		displayName="T-80BVM (obr.2017g.)";
		author="[CN]Lurker1011,真红战队";
		editorPreview="t80bvm_c\ui\t80bvm_2_pre.jpg";
	};
	class rhs_tv_t80bvm_old: O_T80BVM_OLD
	{
		vehicleClass="rhs_vehclass_tank";
		editorSubcategory="rhs_EdSubcat_tank";
		faction="rhs_faction_tv";
		crew="rhs_msv_emr_armoredcrew";
		typicalCargo[]=
		{
			"rhs_msv_emr_armoredcrew"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
};
class cfgMods
{
	author="[CN]Lurker1011,真红战队";
	timepacked="1769037831";
};
