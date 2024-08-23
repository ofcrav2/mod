class CfgPatches
{
	class ofcra_3cb_t34_nerf_he {
		name = "ofcra_3cb_t34_nerf_he";
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




class CfgMagazines
{
	class UK3CB_O365K_GREEN;
	class OFCRA_O365K_HE_OLD: UK3CB_O365K_GREEN
	{
		displayName="OFCRA O365K HE (old)";
		ammo="OFCRA_8cm_NO_ARMOUR_BASE";
	};

	class OFCRA_O365K_HE: UK3CB_O365K_GREEN
	{
		displayName="OFCRA O365K HE (cold war)";
		ammo="OFCRA_8cm_LOW_ARMOUR_BASE";
	};
};



class CfgWeapons
{
	class rhs_weap_d10tg;
	class UK3CB_S53: rhs_weap_d10tg
	{
		magazines[]+={ "OFCRA_O365K_HE","OFCRA_O365K_HE_OLD" };
	};
};

