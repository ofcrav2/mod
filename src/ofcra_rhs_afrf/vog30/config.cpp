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
	class G_40mm_HE;
	class G_40mm_HEDP;
	class rhs_ammo_VOG30: G_40mm_HE
	{
		hit=48;                 // 20% increase from base 40
		indirectHit=2.322;      // OFCRA 40mm grenade standard
		indirectHitRange=4.236; // OFCRA 40mm grenade standard

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;
		submunitionAmmo="";
	};

	class rhs_ammo_GPD30: rhs_ammo_VOG30
	{
		//has higher direct hit
		hit=60;                 // 20% increase from base 50
		indirectHit=2.322;      // OFCRA 40mm grenade standard
		indirectHitRange=4.236; // OFCRA 40mm grenade standard
		submunitionAmmo="";
	};


	class rhs_ammo_VOG17m: rhs_ammo_VOG30
	{
		//slightly smaller
		hit=42;                 // 20% increase from base 35
		indirectHit=2.322;      // OFCRA 40mm grenade standard
		indirectHitRange=3.466; // OFCRA smaller grenade standard (VOG17m is smaller caliber)
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