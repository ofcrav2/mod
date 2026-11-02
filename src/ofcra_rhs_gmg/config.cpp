class CfgPatches
{
	class ofcra_rhs_gmg {
		name = "ofcra_rhs_gmg";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"rhsusf_main_loadorder",
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

class CfgAmmo
{
	class G_40mm_HEDP;
	class OFCRA_G_40mm_HEDP: G_40mm_HEDP
	{	
		hit=108;				// don't nerf direct hit effect
		indirectHit=2.322;      // OFCRA 40mm grenade standard
		indirectHitRange=4.236; // OFCRA 40mm grenade standard

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;

		// The real Mk19 speed (240 m/s on the magazines) and drag for its real max range (~2200 m).
		airFriction=-0.00047;
		typicalSpeed=240;       // = the magazines' initSpeed (was 185, inherited)
	};


	class G_40mm_HE;
	
	class rhs_ammo_mk19m3_M384: G_40mm_HE
	{
		hit=48;                 // 20% increase from base 40
		indirectHit=2.322;      // OFCRA 40mm grenade standard
		indirectHitRange=4.236; // OFCRA 40mm grenade standard

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;
	};	

	// Slow, low-drag copy for the RHS Mk19 HE belts (see OFCRA_G_40mm_HEDP). The RHS ammo itself is left
	// as is, as other RHS ammo inherits from it.
	class OFCRA_ammo_mk19_M384: rhs_ammo_mk19m3_M384
	{
		airFriction=-0.00047;
		typicalSpeed=240;
	};
	
	class rhs_ammo_mk19m3_M430I: rhs_ammo_mk19m3_M384
	{
		hit=42;                 // 20% increase from base 35
		indirectHit=2.322;      // OFCRA 40mm grenade standard
		indirectHitRange=4.236; // OFCRA 40mm grenade standard

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;
	};	
};

class CfgMagazines
{
	class VehicleMagazine;
	class 200Rnd_40mm_G_belt: VehicleMagazine	
	{
		
		ammo="OFCRA_G_40mm_HEDP";
		count=25;
		initSpeed=240;          // see OFCRA_G_40mm_HEDP
		displayNameShort="OFCRA 40mm HE";
		displayName="OFCRA 40mm HE";
	};
	class 96Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		ammo="OFCRA_G_40mm_HEDP";
		count=25;
		initSpeed=240;          // see OFCRA_G_40mm_HEDP
		displayNameShort="OFCRA 40mm HE";
		displayName="OFCRA 40mm HE";
	};
	class 64Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		ammo="OFCRA_G_40mm_HEDP";
		count=25;
		initSpeed=240;          // see OFCRA_G_40mm_HEDP
		displayNameShort="OFCRA 40mm HE";
		displayName="OFCRA 40mm HE";
	};	
	class 32Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		ammo="OFCRA_G_40mm_HEDP";
		count=25;
		initSpeed=240;          // see OFCRA_G_40mm_HEDP
		displayNameShort="OFCRA 40mm HE";
		displayName="OFCRA 40mm HE";
	};		


	class RHS_48Rnd_40mm_MK19: VehicleMagazine
	{
		count=25;
		ammo="OFCRA_ammo_mk19_M384";
		initSpeed=240;          // see OFCRA_G_40mm_HEDP
		displaynameshort="OFCRA GMG";
		displayName="OFCRA GMG";
	};
	class RHS_96Rnd_40mm_MK19: RHS_48Rnd_40mm_MK19
	{
		count=25;
		ammo="OFCRA_ammo_mk19_M384";
		initSpeed=240;          // see OFCRA_G_40mm_HEDP
		displaynameshort="OFCRA GMG";
		displayName="OFCRA GMG";
	};	
	class RHS_48Rnd_40mm_MK19_M430I: RHS_48Rnd_40mm_MK19
	{
		count=25;
		initSpeed=240;          // see OFCRA_G_40mm_HEDP
		ammo="OFCRA_G_40mm_HEDP";
		displaynameshort="OFCRA GMG HEDP";
		displayName="OFCRA GMG HEDP";
	};	
	class RHS_96Rnd_40mm_MK19_M430I: RHS_48Rnd_40mm_MK19_M430I
	{
		count=25;
		initSpeed=240;          // see OFCRA_G_40mm_HEDP
		ammo="OFCRA_G_40mm_HEDP";
		displaynameshort="OFCRA GMG HEDP";
		displayName="OFCRA GMG HEDP";
	};	


};
