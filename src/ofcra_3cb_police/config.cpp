class CfgPatches
{
	class ofcra_3cb_police {
		name = "ofcra_3cb_police";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"UK3CB_Factions_Vehicles_Tseries",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};


class cfgFactionClasses 
{ 
	class OFCRA_Police_Faction
	{ 
		displayName = "OFCRA Police";  // Name on ingame menus 
		priority = 3; // Position in list. 
		side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
		icon = ""; // Leave as is
	}; 
}; 