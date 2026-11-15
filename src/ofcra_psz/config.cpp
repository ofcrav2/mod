class CfgPatches
{
	class ofcra_psz {
		name = "ofcra_psz";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"psz_weapons",
			"psz_wheeled",
			"ofcra_ammo_base",
			"ofcra_rhs_afrf"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

class CfgMagazines
{
	class rhs_mag_3uof8_230;
	class PSZ_30x173_Belt_151_MP_T: rhs_mag_3uof8_230
	{
		displayName="OFCRA HE 30mm";
		ammo="rhs_ammo_3uof8";
		count=150;
		displayNameShort="OFCRA 30mm HE";
	};
}

class CfgWeapons
{
	// Spike LR: no thermal sight (was {"Normal","TI"}). OpticsModes / StepScope are PSZ's own classes (no parents),
	// so only visionMode changes - everything else about the sight stays PSZ's.
	class launch_Titan_short_base;
	class PSZ_Spike_LR: launch_Titan_short_base
	{
		class OpticsModes
		{
			class StepScope
			{
				visionMode[]={"Normal"};
			};
		};
	};
};


class RCWSOptics
{

	visionMode[]=
	{
		"Normal",
		"NVG",
	};
	thermalMode[]={0};
};