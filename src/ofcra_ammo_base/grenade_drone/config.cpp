class CfgPatches
{
	class ofcra_grenade_drone {
		name = "ofcra_grenade_drone";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_ammo_base"
		};
		units[] = {
			"B_UAV_06_antimine_base_F",
			"O_UAV_06_antimine_base_F",
			"I_UAV_06_antimine_base_F",
			"OFCRA_B_UAV_06_AT",
			"OFCRA_O_UAV_06_AT",
			"OFCRA_I_UAV_06_AT",
			"OFCRA_B_UAV_06_AT_backpack",
			"OFCRA_O_UAV_06_AT_backpack",
			"OFCRA_I_UAV_06_AT_backpack"

			

		};
		weapons[] = {};
		ammo[]={};

	};
};

class CfgAmmo
{
	class BombDemine_01_Ammo_F;
	class OFCRA_DroneGrenade: BombDemine_01_Ammo_F
	{
		hit=200;           
		displayName="OFCRA drone grenade"; 

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


	class OFCRA_DroneGrenade_AT: OFCRA_DroneGrenade
	{
		warheadName="AP";
		caliber=350; //this is a multiplier of speed... Grenade is slow
		hit=400;

		indirectHit=2;
		indirectHitRange=9;  

		displayName="OFCRA AT drone grenade";


		triggerDistance=2.5;
		triggerOnImpact=1;
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionInitSpeed=1500;    
		submunitionInitialOffset[]={0,0,-10.0}; //100cm above/behind projectile.
		submunitionDirectionType="SubmunitionModelDirection";

		submunitionAmmo	= "OFCRA_DroneGrenade_AT_PEN";
		submunitionConeAngle=4;
		submunitionConeType[]=
		{
			"randomcenter",
			2
		};

	};

	class BombDemine_01_SubAmmo_F;
	class OFCRA_DroneGrenade_AT_PEN : BombDemine_01_SubAmmo_F{
		//shotShell makes a nice pattern from the submunition code but does not pen,
		//simulation="shotBullet";   
		simulation="shotShell";   
		warheadName="HEAT";   //this does seem to make a difference and have submunition pattern with shell but good AP
		caliber=1500; //this is a multiplier of speed... should go through most things
		hit=150;  //lower damage
		explosive=0;

		simulationStep=0.002;
		airFriction=-0.28;
		deflecting=0;
	}


};


class CfgMagazines
{
	class 4Rnd_Bomb_04_F;
	class PylonRack_4Rnd_BombDemine_01_F: 4Rnd_Bomb_04_F
	{
		displayName="OFCRA drone grenade";
		displayNameShort="OFCRA drone grenade";
		ammo="OFCRA_DroneGrenade";
		count=12;
	};

	class OFCRA_12Rnd_DroneGrenade_AT: PylonRack_4Rnd_BombDemine_01_F
	{
		displayName="OFCRA AT drone grenade";
		displayNameShort="OFCRA AT drone grenade";
		ammo="OFCRA_DroneGrenade_AT";
		pylonWeapon="OFCRA_DroneGrenade_Weapon";
	};





};



class CfgWeapons
{
	class Bomb_04_Plane_CAS_01_F;
	class BombDemine_01_F: Bomb_04_Plane_CAS_01_F
	{
		displayName="OFCRA drone grenade";
		displayNameShort="OFCRA drone grenade";
		reloadTime=5;
	};

	class OFCRA_DroneGrenade_Weapon: BombDemine_01_F
	{
		magazines[]=
		{
			"OFCRA_12Rnd_DroneGrenade_AT"
		};
	};
	
};


class CfgVehicles {

	class UAV_06_base_F;
	class UAV_06_antimine_base_F: UAV_06_base_F
    {


		class Components;
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


		displayName="OFCRA drone grenade";
		displayNameShort="OFCRA drone grenade";
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
		crew="I_UAV_AI";
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
		displayName="Grenade Drone Backpack";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="Grenade Drone";
			assembleTo="B_UAV_06_antimine_base_F";
		};
	};

	class O_UAV_06_backpack_F;
	class O_UAV_06_antimine_backpack_F: O_UAV_06_backpack_F
	{
		displayName="Grenade Drone Backpack";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="Grenade Drone";
			assembleTo="O_UAV_06_antimine_base_F";
		};
	};

	class I_UAV_06_backpack_F;
	class I_UAV_06_antimine_backpack_F: I_UAV_06_backpack_F
	{
		displayName="Grenade Drone Backpack";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="Grenade Drone";
			assembleTo="I_UAV_06_antimine_base_F";
		};
	};

	class OFCRA_UAV_06_AT_base: UAV_06_antimine_base_F
	{
		displayName="OFCRA AT Grenade Drone";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\a3\Air_F_Orange\UAV_06\Data\UI\UAV_06_Demining_3DEN_CA.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=15;
						hardpoints[]=
						{
							"ANTIMINE_DRONE_PYLON"
						};
						attachment="OFCRA_12Rnd_DroneGrenade_AT";
						bay=-1;
						priority=1;
						UIposition[]={0.31999999,0.28};
						turret[]={};
						mirroredMissilePos=0;
					};
				};
			};
		};
	};

	class OFCRA_B_UAV_06_AT: OFCRA_UAV_06_AT_base
	{
		side=1;
		faction="BLU_F";
		crew="B_UAV_AI_F";
		forceInGarage=1;

		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_UAV_06_antimine_F.jpg";
		displayName="OFCRA AT grenade drone";
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
				"OFCRA_B_UAV_06_AT_backpack"
			};
		};

	};

	class OFCRA_B_UAV_06_AT_backpack : B_UAV_06_backpack_F
	{
		displayName="AT Grenade Drone Backpack";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="AT Grenade Drone";
			assembleTo="OFCRA_B_UAV_06_AT";
		};
	};

	class OFCRA_O_UAV_06_AT: OFCRA_UAV_06_AT_base
	{
		side=0;
		faction="OPF_F";
		crew="O_UAV_AI";
		forceInGarage=1;

		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_UAV_06_antimine_F.jpg";
		displayName="OFCRA AT grenade drone";
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
				"OFCRA_O_UAV_06_AT_backpack"
			};
		};

	};

	class OFCRA_O_UAV_06_AT_backpack : O_UAV_06_backpack_F
	{
		displayName="AT Grenade Drone Backpack";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="AT Grenade Drone";
			assembleTo="OFCRA_O_UAV_06_AT";
		};
	};


	class OFCRA_I_UAV_06_AT: OFCRA_UAV_06_AT_base
	{
		side=2;
		faction="IND_F";
		crew="I_UAV_AI";
		forceInGarage=1;

		editorPreview="\A3\EditorPreviews_F_Orange\Data\CfgVehicles\C_IDAP_UAV_06_antimine_F.jpg";
		displayName="OFCRA AT grenade drone";
		scope=2;
		icon="\A3\Air_F_Orange\UAV_06\Data\UI\Map_UAV_06_demining_CA.paa";
		picture="\A3\Air_F_Orange\Data\UI\UAV_06_demining_CA.paa";

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
				"OFCRA_I_UAV_06_AT_backpack"
			};
		};

	};

	class OFCRA_I_UAV_06_AT_backpack : I_UAV_06_backpack_F
	{
		displayName="AT Grenade Drone Backpack";
		class assembleInfo
		{
			primary=1;
			base="";
			dissasembleTo[]={};
			displayName="AT Grenade Drone";
			assembleTo="OFCRA_I_UAV_06_AT";
		};
	};


}

