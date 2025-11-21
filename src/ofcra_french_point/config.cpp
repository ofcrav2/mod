class CfgPatches
{
	class ofcra_french_point {
		name = "ofcra_french_point";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofrp_a3_static",
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

//OFrP_MILAN_F2_MIRA_FR
//["OFrP_MILAN_F2_MIRA_Base","OFrP_MILAN_F2_Base","OFrP_MILAN_F1_Base","StaticMGWeapon","StaticWeapon","LandVehicle","Land","AllVehicles","All"]


class CfgVehicles
{

	class StaticMGWeapon;
	class OFrP_MILAN_F1_Base : StaticMGWeapon
	{
		class Turrets;
	};

	class OFrP_MILAN_F2_Base : OFrP_MILAN_F1_Base
	{
		class Turrets : Turrets
		{
			class MainTurret;
		};
	};

	class OFrP_MILAN_F2_MIRA_Base : OFrP_MILAN_F2_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics;
			};
		};
	}

	class OFrP_MILAN_F2_MIRA_FR : OFrP_MILAN_F2_MIRA_Base
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class ViewOptics : ViewOptics
				{
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};
};