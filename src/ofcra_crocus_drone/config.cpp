class CfgPatches
{
	class ofcra_crocus_drone {
		name = "ofcra_crocus_drone";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ArmaFPV_Data"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

class CfgVehicles {

	class Helicopter_Base_F;
	class drone_base_F: Helicopter_Base_F
	{
		irTarget=1;
		irTargetSize=1;
		class EventHandlers
		{
			class BIS_EH
			{
				hitPart="((_this select 0) select 0) setDamage 1";
			};
		};
	}
}

