class CfgPatches
{
	class ofcra_9k79 {
		name = "ofcra_9k79";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"rhs_main_loadorder",
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


//up armour 9k79 launcher so it can't be destroyed with a few hand grenades or light mortar shells
class CfgVehicles
{
	class Truck_F;


	class OTR21_Base: Truck_F
	{
		armor=50;
		armorStructural=5;
		damageResistance=0.0003700002;
	}
};