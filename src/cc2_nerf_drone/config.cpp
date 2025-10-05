class CfgPatches
{
	class ofcra_nerfed_demine {
		name = "ofcra_nerfed_demine";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ace_mk6mortar",
			"rhs_main",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

class SensorTemplateIR;
class CfgAmmo
{
	class rhs_ammo_9k38;
	class OFCRA_rhs_ammo_9k38 : rhs_ammo_9k38
	{
		proximityExplosionDistance=6;
		displayName="OFCRA AntiDrone";
		hit=20;
		indirecthit=2;
		indirectHitRange=9;
		explosive=1;
		maneuvrability=60;

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		submunitionAmmo="";

		missileLockMaxDistance=2400;
		missileLockMinDistance=50;
		missileLockMaxSpeed=333;
		missileLockCone=12;
		missileKeepLockedCone=70;


		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=1;
							maxRange=2400;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=1;
							maxRange=1000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=-1;
						angleRangeHorizontal=35;
						angleRangeVertical=35;
						groundNoiseDistanceCoef=0.02;
						maxGroundNoiseDistance=20;
						minSpeedThreshold=0;
						maxSpeedThreshold=-1;
						maxFogSeeThrough=0.80000001;
						minTrackableSpeed=0;
						maxTrackableSpeed=333;
						minTrackableATL=10;
						maxTrackableATL=1900;
					};
				};
			};
		};

	}


	class BombDemine_01_Ammo_F;
	class ONE_Demine: BombDemine_01_Ammo_F
	{
		hit=200;           
		displayName="OFCRA demine"; 

		maxSpeed=200;
		airFriction=0.00099999998;
		sideAirFriction=0.008;
		thrustTime=2.5;
		thrust=9.8;

		indirectHit=2.8;
		indirectHitRange=9;   

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;

		//can hear shell from further if dropped high
		soundFly[]=
		{
			"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Whistle",
			1,
			1,
			300
		};


		triggerDistance=2.5;
		triggerOnImpact=1;
		submunitionConeAngle[]={159,183}; //random degree range from verticle ....  0 = veritcle,180 = We want slightly downward so we can hit down hills etc
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;

		submunitionConeType[]=
		{
			"randomupcone",
			40
		};
		submunitionAmmo[]={"OFCRA_LIGHT_VEHICLE_DESTRUCTION",0.5,"OFCRA_FRAG_SMALL",0.5  };
		submunitionInitialOffset[]={0,0,-1.0}; //100cm above/behind projectile. this is needed to make sure it is not underground
		submunitionParentSpeedCoef=0;
		submunitionDirectionType="SubmunitionAutoLeveling";
		submunitionInitSpeed=240;               //this also effects pentration and damage of sub projectiles as a ratio of their expected speed
		deleteParentWhenTriggered=0;
	};

};


class CfgMagazines
{
	class 4Rnd_Bomb_04_F;
	class PylonRack_4Rnd_BombDemine_01_F: 4Rnd_Bomb_04_F
	{
		displayName="OFCRA demine";
		displayNameShort="OFCRA demine";
		ammo="ONE_Demine";
		count=12;
	};

	class rhs_mag_9k38_rocket;
	class OFCRA_rhs_mag_9k38_rocket: rhs_mag_9k38_rocket
	{
		ammo="OFCRA_rhs_ammo_9k38";
		descriptionshort="Range: 100-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
		displayname="OFCRA 9K38 AnitDrone";
	};
};



class CfgWeapons
{
	class Bomb_04_Plane_CAS_01_F;
	class BombDemine_01_F: Bomb_04_Plane_CAS_01_F
	{
		displayName="OFCRA demine";
		displayNameShort="OFCRA demine";
		reloadTime=5;
	};

	class rhs_weap_igla;
	class OFCRA_rhs_weap_igla: rhs_weap_igla
	{
		displayname = "OFCRA 9K38 AnitDrone";
		magazines[]=
		{
			"OFCRA_rhs_mag_9k38_rocket"
		};
	}
	
};


class CfgVehicles {

	class All;
	class AllVehicles: All
	{
		class NewTurret;
	};
	class Air : AllVehicles{};
	class Helicopter: Air{};

	class Helicopter_Base_F: Helicopter
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	}
	class UAV_01_base_F: Helicopter_Base_F
	{
		irTarget=1;
		irTargetSize=1;
		armor=0.5;
		armorStructural=0.60000002;
		explosionShielding=0.059999999;
		damageResistance=0.00039999999;
		fuelCapacity=32;

		class EventHandlers
		{
			class BIS_EH
			{
				hitPart="_ammo = ((_this # 0) # 6) # 4; if (_ammo == 'OFCRA_rhs_ammo_9k38') then {((_this select 0) select 0) setDamage 1}";
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			}
		};
	};

	class B_UAV_01_F: UAV_01_base_F
	{
	};

	class OFCRA_B_UAV_SPOTTER : B_UAV_01_F
	{
		displayName="OFCRA Spotter drone";
		displayNameShort="OFCRA Spotter drone";
		scopeCurator=2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				//remove laser designator
				weapons[]={};
				magazines[]={};
			};
		};
		class Sounds
		{
			//All external sounds volume from 150 to 600
			class Engine_Idle_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\Uav_01\Uav_01_Eng_01_Ext",
					1.4125376,
					1,
					600
				};
				frequency="1  * (1 + 0.3  * ((abs(speed) factor [0,	24]) - 0))+  ((1-engineon) * 0.01*(rpm factor [0,1]))";
				volume="campos * 1 * ((abs(speed) factor [0,	24]) factor[ (13 - 0)/(24 - 0) - (((13 - 0)/(24 - 0) - 0) - (0.7 * (((13 - 0)/(24 - 0) - 0)))) / 2, 0 + (((13 - 0)/(24 - 0) - 0) - (0.7 * (((13 - 0)/(24 - 0) - 0)))) / 2]) * (rotorSpeed factor[ 0.2, 1])";
			};
			class Engine_01_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\Uav_01\Uav_01_Eng_01_Ext",
					1.7782794,
					1,
					600
				};
				frequency="1  * (1.2 + 0.3  * ((abs(speed) factor [0,	24]) - (13 - 0)/(24 - 0)))+  ((1-engineon) * 0.01*(rpm factor [0,1]))";
				volume="campos * 1 * (((abs(speed) factor [0,	24]) factor[ 0 + (((13 - 0)/(24 - 0) - 0) - (0.7 * (((13 - 0)/(24 - 0) - 0)))) / 2, (13 - 0)/(24 - 0) - (((13 - 0)/(24 - 0) - 0) - (0.7 * (((13 - 0)/(24 - 0) - 0)))) / 2]) * ((abs(speed) factor [0,	24]) factor[ (19 - 0)/(24 - 0) - (((19 - 0)/(24 - 0) - (13 - 0)/(24 - 0)) - (0.7 * (((19 - 0)/(24 - 0) - (13 - 0)/(24 - 0))))) / 2, (13 - 0)/(24 - 0) + (((19 - 0)/(24 - 0) - (13 - 0)/(24 - 0)) - (0.7 * (((19 - 0)/(24 - 0) - (13 - 0)/(24 - 0))))) / 2]))";
			};
			class Engine_02_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\Uav_01\Uav_01_Eng_02_Ext",
					1.7782794,
					1,
					600
				};
				frequency="1  * (1.2 + 0.3  * ((abs(speed) factor [0,	24]) - (19 - 0)/(24 - 0)))+  ((1-engineon) * 0.01*(rpm factor [0,1]))";
				volume="campos * 1 * (((abs(speed) factor [0,	24]) factor[ (13 - 0)/(24 - 0) + (((19 - 0)/(24 - 0) - (13 - 0)/(24 - 0)) - (0.7 * (((19 - 0)/(24 - 0) - (13 - 0)/(24 - 0))))) / 2, (19 - 0)/(24 - 0) - (((19 - 0)/(24 - 0) - (13 - 0)/(24 - 0)) - (0.7 * (((19 - 0)/(24 - 0) - (13 - 0)/(24 - 0))))) / 2]) * ((abs(speed) factor [0,	24]) factor[ (23 - 0)/(24 - 0) - (((23 - 0)/(24 - 0) - (19 - 0)/(24 - 0)) - (0.7 * (((23 - 0)/(24 - 0) - (19 - 0)/(24 - 0))))) / 2, (19 - 0)/(24 - 0) + (((23 - 0)/(24 - 0) - (19 - 0)/(24 - 0)) - (0.7 * (((23 - 0)/(24 - 0) - (19 - 0)/(24 - 0))))) / 2]))";
			};
			class Engine_03_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\Uav_01\Uav_01_Eng_03_Ext",
					1.9952624,
					1,
					600
				};
				frequency="1  * (1.2 + 0.3  * ((abs(speed) factor [0,	24]) - (23 - 0)/(24 - 0)))+  ((1-engineon) * 0.01*(rpm factor [0,1]))";
				volume="campos * 1 * ((abs(speed) factor [0,	24]) factor[ (19 - 0)/(24 - 0) + (((23 - 0)/(24 - 0) - (19 - 0)/(24 - 0)) - (0.7 * (((23 - 0)/(24 - 0) - (19 - 0)/(24 - 0))))) / 2, (23 - 0)/(24 - 0) - (((23 - 0)/(24 - 0) - (19 - 0)/(24 - 0)) - (0.7 * (((23 - 0)/(24 - 0) - (19 - 0)/(24 - 0))))) / 2])";
			};
			class Engine_Lateral_Movement_01_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\Uav_01\Uav_01_Engine_Lateral_Movement_Ext",
					1,
					1,
					600
				};
				frequency="1 + angVelocity envelope [0.5,2,2.5,3]";
				volume="camPos * (abs(speed) factor[10, 25]) * (angVelocity factor [0.5,2.5])";
			};
			class Rotors_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\Uav_01\Uav_01_Rotors_01",
					0.31622776,
					3.2,
					600
				};
				frequency="1 * rotorThrust*rpm";
				volume="camPos * rpm * (rotorSpeed factor [0.01, 0.1]) + (abs(speed) factor[0, 25])";
			};
		};


		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"OFCRA_B_UAV_01_backpack_F"
			};
		};

	};



	class OFCRA_O_UAV_SPOTTER : OFCRA_B_UAV_SPOTTER
	{
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		typicalCargo[]= {"O_UAV_AI"};
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="OFCRA Spotter drone";
			assembleTo="OFCRA_O_UAV_01_backpack_F";
		};
	}
	class OFCRA_I_UAV_SPOTTER : OFCRA_B_UAV_SPOTTER
	{
		side=2;
		faction="IND_F";
		crew="I_UAV_AI";
		typicalCargo[]= {"I_UAV_AI"};
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="OFCRA Spotter drone";
			assembleTo="OFCRA_I_UAV_01_backpack_F";

		};
	}


	class B_UAV_01_backpack_F;
	class OFCRA_B_UAV_01_backpack_F: B_UAV_01_backpack_F
	{
		scopeCurator=2;
		displayName="OFCRA Spotter drone Backpack";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="OFCRA Spotter drone";
			assembleTo="OFCRA_B_UAV_SPOTTER";
		};
	};
	class O_UAV_01_backpack_F : B_UAV_01_backpack_F{};
	class OFCRA_O_UAV_01_backpack_F: O_UAV_01_backpack_F
	{
		scopeCurator=2;
		displayName="OFCRA Spotter drone Backpack";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="OFCRA Spotter drone";
			assembleTo="OFCRA_O_UAV_SPOTTER";
		};
	};
	class I_UAV_01_backpack_F : B_UAV_01_backpack_F{};
	class OFCRA_I_UAV_01_backpack_F: I_UAV_01_backpack_F
	{
		scopeCurator=2;
		displayName="OFCRA Spotter drone Backpack";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="OFCRA Spotter drone";
			assembleTo="OFCRA_I_UAV_SPOTTER";
		};
	};

	class UAV_06_base_F;
	class UAV_06_antimine_base_F: UAV_06_base_F
    {

		irTarget=1;
		irTargetSize=1;

		class EventHandlers
		{
			class BIS_EH
			{
				hitPart="_ammo = ((_this # 0) # 6) # 4; if (_ammo == 'OFCRA_rhs_ammo_9k38') then {((_this select 0) select 0) setDamage 1}";
			};
		};

		mapsize=6;

		hiddenSelectionsTextures[]=
		{
			"A3\Air_F_Orange\UAV_06\Data\C_IDAP_UAV_06_antimine_CO.paa"
		};


		displayName="OFCRA demine";
		displayNameShort="OFCRA demine";
		fuelCapacity=32;
		class Sounds
		{
			class Idle_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_Eng_01_Ext",
					0.89125091,
					1,
					900
				};
				frequency="0.96 * 1  * (1 + 0.3  * ((abs(speed) factor [0,	30]) - 0))+  ((1-engineon) * 0.01*(rpm factor [0,1]))";
				volume="3.71 * campos * 1 * ((abs(speed) factor [0,	30]) factor[ (15 - 0)/(30 - 0) - (((15 - 0)/(30 - 0) - 0) - (0.7 * (((15 - 0)/(30 - 0) - 0)))) / 2, 0 + (((15 - 0)/(30 - 0) - 0) - (0.7 * (((15 - 0)/(30 - 0) - 0)))) / 2]) * (rotorSpeed factor[ 0.2, 1])";
			};
			class Engine_01_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_Eng_01_Ext",
					1.1220185,
					1,
					900
				};
				frequency="0.97 * 1  * (1.2 + 0.3  * ((abs(speed) factor [0,	30]) - (15 - 0)/(30 - 0)))+  ((1-engineon) * 0.01*(rpm factor [0,1]))";
				volume="3.71 * campos * 1 * (((abs(speed) factor [0,	30]) factor[ 0 + (((15 - 0)/(30 - 0) - 0) - (0.7 * (((15 - 0)/(30 - 0) - 0)))) / 2, (15 - 0)/(30 - 0) - (((15 - 0)/(30 - 0) - 0) - (0.7 * (((15 - 0)/(30 - 0) - 0)))) / 2]) * ((abs(speed) factor [0,	30]) factor[ (25 - 0)/(30 - 0) - (((25 - 0)/(30 - 0) - (15 - 0)/(30 - 0)) - (0.7 * (((25 - 0)/(30 - 0) - (15 - 0)/(30 - 0))))) / 2, (15 - 0)/(30 - 0) + (((25 - 0)/(30 - 0) - (15 - 0)/(30 - 0)) - (0.7 * (((25 - 0)/(30 - 0) - (15 - 0)/(30 - 0))))) / 2]))";
			};
			class Engine_02_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_Eng_02_Ext",
					1.1220185,
					1,
					900
				};
				frequency="0.98 * 1  * (1.2 + 0.3  * ((abs(speed) factor [0,	30]) - (25 - 0)/(30 - 0)))+  ((1-engineon) * 0.01*(rpm factor [0,1]))";
				volume="3.71 * campos * 1 * (((abs(speed) factor [0,	30]) factor[ (15 - 0)/(30 - 0) + (((25 - 0)/(30 - 0) - (15 - 0)/(30 - 0)) - (0.7 * (((25 - 0)/(30 - 0) - (15 - 0)/(30 - 0))))) / 2, (25 - 0)/(30 - 0) - (((25 - 0)/(30 - 0) - (15 - 0)/(30 - 0)) - (0.7 * (((25 - 0)/(30 - 0) - (15 - 0)/(30 - 0))))) / 2]) * ((abs(speed) factor [0,	30]) factor[ (29 - 0)/(30 - 0) - (((29 - 0)/(30 - 0) - (25 - 0)/(30 - 0)) - (0.7 * (((29 - 0)/(30 - 0) - (25 - 0)/(30 - 0))))) / 2, (25 - 0)/(30 - 0) + (((29 - 0)/(30 - 0) - (25 - 0)/(30 - 0)) - (0.7 * (((29 - 0)/(30 - 0) - (25 - 0)/(30 - 0))))) / 2]))";
			};
			class Engine_03_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_Eng_03_Ext",
					1.2589254,
					1,
					900
				};
				frequency="0.99 * 1  * (1.2 + 0.3  * ((abs(speed) factor [0,	30]) - (29 - 0)/(30 - 0)))+  ((1-engineon) * 0.01*(rpm factor [0,1]))";
				volume="3.71 * campos * 1 * ((abs(speed) factor [0,	30]) factor[ (25 - 0)/(30 - 0) + (((29 - 0)/(30 - 0) - (25 - 0)/(30 - 0)) - (0.7 * (((29 - 0)/(30 - 0) - (25 - 0)/(30 - 0))))) / 2, (29 - 0)/(30 - 0) - (((29 - 0)/(30 - 0) - (25 - 0)/(30 - 0)) - (0.7 * (((29 - 0)/(30 - 0) - (25 - 0)/(30 - 0))))) / 2])";
			};
			class Engine_Lateral_Movement_01_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_Engine_Lateral_Movement",
					0.70794576,
					1,
					900
				};
				frequency="1 + angVelocity interpolate [0,3.5,1,1.2]";
				volume="3.71 * camPos * (abs(speed) factor[10, 25]) * (angVelocity factor [0.5,2.5])";
			};
			class WindNoise_01_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_WindNoise_01_Ext",
					0.14125375,
					1,
					900
				};
				frequency=1;
				volume=" 3.71 * camPos * (abs(speed) factor[10, 20]) * (angVelocity factor [0.5,2.5])";
			};
			class Rotors_Ext
			{
				sound[]=
				{
					"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\Rotors_Synth_03",
					0.63095737,
					3,
					900
				};
				frequency="1 + rotorThrust*rpm";
				volume="3.71 * camPos * rpm * (rotorSpeed factor [0.01, 0.1]) + (abs(speed) factor[0, 25])";
			};

		};


	};

	class B_UAV_06_antimine_base_F : UAV_06_antimine_base_F
    {
		side=1;
		faction="BLU_F";
		forceInGarage=1;
		crew="B_UAV_AI_F";

		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_UAV_06_antimine_F.jpg";
		displayName="OFCRA grenade drone";
		scope=2;
		icon="\A3\Air_F_Orange\UAV_06\Data\UI\Map_UAV_06_demining_CA.paa";
		picture="\A3\Air_F_Orange\UAV_06\Data\UI\UAV_06_demining_CA.paa";

		typicalCargo[]=
		{
			"B_UAV_AI_F"
		};

		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"B_UAV_06_antimine_backpack_F"
			};
		};
	}

	class O_UAV_06_antimine_base_F : UAV_06_antimine_base_F
    {
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		forceInGarage=1;

		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_UAV_06_antimine_F.jpg";
		displayName="OFCRA grenade drone";
		scope=2;
		icon="\A3\Air_F_Orange\UAV_06\Data\UI\Map_UAV_06_demining_CA.paa";
		picture="\A3\Air_F_Orange\UAV_06\Data\UI\UAV_06_demining_CA.paa";

		typicalCargo[]=
		{
			"O_UAV_AI"
		};

		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"O_UAV_06_antimine_backpack_F"
			};
		};
	}

	class I_UAV_06_antimine_base_F : UAV_06_antimine_base_F
    {
		side=2;
		faction="IND_F";
		crew="O_UAV_AI";
		forceInGarage=1;

		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_UAV_06_antimine_F.jpg";
		displayName="OFCRA grenade drone";
		scope=2;
		icon="\A3\Air_F_Orange\UAV_06\Data\UI\Map_UAV_06_demining_CA.paa";
		picture="\A3\Air_F_Orange\UAV_06\Data\UI\UAV_06_demining_CA.paa";

		typicalCargo[]=
		{
			"I_UAV_AI"
		};

		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"I_UAV_06_antimine_backpack_F"
			};
		};

	}

	class B_UAV_06_backpack_F;
	class B_UAV_06_antimine_backpack_F: B_UAV_06_backpack_F
	{
		displayName="Grenade Drone Backback";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="Demining Drone";
			assembleTo="B_UAV_06_antimine_base_F";
		};
	};

	class O_UAV_06_backpack_F;
	class O_UAV_06_antimine_backpack_F: O_UAV_06_backpack_F
	{
		displayName="Grenade Drone Backback";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="Demining Drone";
			assembleTo="O_UAV_06_antimine_base_F";
		};
	};

	class I_UAV_06_backpack_F;
	class I_UAV_06_antimine_backpack_F: I_UAV_06_backpack_F
	{
		displayName="Grenade Drone Backback";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="Demining Drone";
			assembleTo="I_UAV_06_antimine_base_F";
		};
	};


}

