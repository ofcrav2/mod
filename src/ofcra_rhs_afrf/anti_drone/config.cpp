class CfgPatches
{
	class ofcra_anti_drone {
		name = "ofcra_anti_drone";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
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
};


class CfgMagazines
{
	class rhs_mag_9k38_rocket;
	class OFCRA_rhs_mag_9k38_rocket: rhs_mag_9k38_rocket
	{
		ammo="OFCRA_rhs_ammo_9k38";
		descriptionshort="Range: 100-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
		displayname="OFCRA 9K38 AntiDrone";
	};
};



class CfgWeapons
{
	class rhs_weap_igla;
	class OFCRA_rhs_weap_igla: rhs_weap_igla
	{
		displayname = "OFCRA 9K38 AntiDrone";
		magazines[]=
		{
			"OFCRA_rhs_mag_9k38_rocket"
		};
	}
	
};
