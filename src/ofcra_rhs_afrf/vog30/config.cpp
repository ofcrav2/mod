class CfgPatches
{
	class ofcra_rhs_afrf_vog30
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"rhs_main_loadorder"

		};
	};
};

class CfgAmmo
{
	class G_40mm_HEDP;
	class rhs_ammo_VOG30: G_40mm_HE
	{
		indirectHit=2.211;
		indirectHitRange=3.851;   

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;
		submunitionAmmo="";
	};

	class rhs_ammo_GPD30: rhs_ammo_VOG30
	{
		//has higher direct hit
		indirectHit=2.211;
		indirectHitRange=3.851;   
		submunitionAmmo="";
	};


	class rhs_ammo_VOG17m: rhs_ammo_VOG30
	{
		//slightly smaller
		indirectHit=2.211;
		indirectHitRange=3.151;   
		submunitionAmmo="";
	};
};


class CfgMagazines
{
	class VehicleMagazine;
	class RHS_mag_VOG30_30: VehicleMagazine
	{
		displayName="OFCRA VOG30";
		displayNameShort="OFCRA VOG30";
	};
	class RHS_mag_GPD30_30: RHS_mag_VOG30_30
	{
		displayName="OFCRA GPD30";
		displayNameShort="OFCRA GPD30";
	};
	class RHS_mag_VOG17m_30: RHS_mag_VOG30_30
	{
		displayName="OFCRA VOG17m";
		displayNameShort="OFCRA VOG17m";
	};
};