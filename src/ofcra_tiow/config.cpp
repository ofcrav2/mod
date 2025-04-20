class CfgPatches
{
	class ofcra_tiow {
		name = "ofcra_tiow";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"A40k_WepBase",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};



class CfgMagazines
{

	class VehicleMagazine;
	class TIOW_IG_HeavyBolter_Mag: VehicleMagazine
	{
		displayName="OFCRA HeavyBolter HE";
		displayNameShort="OFCRA HeavyBolter HE";
		ammo="OFCRA_AUTOCANNON_HE";
	}

};
