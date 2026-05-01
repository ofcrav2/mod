class CfgPatches
{
	class ofcra_spotter_drone {
		name = "ofcra_spotter_drone";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_ammo_base"
		};
		units[] = {
			"OFCRA_B_UAV_SPOTTER",
			"OFCRA_O_UAV_SPOTTER",
			"OFCRA_I_UAV_SPOTTER",
			"OFCRA_B_UAV_01_backpack_F",
			"OFCRA_O_UAV_01_backpack_F",
			"OFCRA_I_UAV_01_backpack_F"
		};
		weapons[] = {};
		ammo[]={};

	};
};


class CfgVehicles {

	class All;
	class AllVehicles: All
	{
		class NewTurret;
	};
	class Air : AllVehicles{};
	class Helicopter: Air{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};

	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
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
		class assembleInfo : assembleInfo
		{
			dissasembleTo[]=
			{
				"OFCRA_O_UAV_01_backpack_F"
			};
		};

	}
	class OFCRA_I_UAV_SPOTTER : OFCRA_B_UAV_SPOTTER
	{
		side=2;
		faction="IND_F";
		crew="I_UAV_AI";
		typicalCargo[]= {"I_UAV_AI"};
		class assembleInfo : assembleInfo
		{
			dissasembleTo[]=
			{
				"OFCRA_I_UAV_01_backpack_F"
			};
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

}

