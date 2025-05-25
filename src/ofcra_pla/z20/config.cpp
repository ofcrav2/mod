class CfgPatches
{
	class ofcra_pla_z20 {
		name = "ofcra_pla_z20";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"Z20_LK",
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};

class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
    
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets{};
	};
	class Z20_base: Helicopter_Base_H
	{
		class Turrets: Turrets{};
	};

	class Z20: Z20_base
	{
        class CargoTurret;
        class Turrets: Turrets
		{	
            class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="Bench(Right 2)";
				proxyIndex=1;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="Door_R";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuationRamp";
				disableSoundAttenuation=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{30,-45},
						{30,-20}
					};
					limitsArrayBottom[]=
					{
						{-40,-45},
						{-40,-20}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="Bench(Right 1)";
				proxyIndex=2;
				enabledByAnimationSource="Door_R";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{30,40},
						{30,80}
					};
					limitsArrayBottom[]=
					{
						{-40,40},
						{-40,80}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="Bench(Left 2)";
				proxyIndex=3;
				enabledByAnimationSource="Door_L";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{30,20},
						{30,45}
					};
					limitsArrayBottom[]=
					{
						{-40,20},
						{-40,45}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="Bench(Left 1)";
				proxyIndex=4;
				enabledByAnimationSource="Door_L";
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{30,-80},
						{30,-40}
					};
					limitsArrayBottom[]=
					{
						{-40,-80},
						{-40,-40}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
    };
};
