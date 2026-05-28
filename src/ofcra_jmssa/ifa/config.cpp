class CfgPatches
{
	class ofcra_jmssa_ifa {
		name = "ofcra_jmssa_ifa";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_ww2_nerf_he",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class CfgAmmo
{

	class OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR;
	class OFCRA_WW2_37mm_FRAG: OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR
	{
		hit=1.2;
		indirectHit=0.5; 		// minimal damage to infantry
	};


	class LIB_S_37L57_M63;
	class OFCRA_WW2_NERFED_HE_37mm: LIB_S_37L57_M63
	{
		indirectHit=0.55;
		indirectHitRange=3;   
	};

	class LIB_SprGr34_KWK40_HE;
	class OFCRA_WW2_Artillery_NERFED_HE_Small: LIB_SprGr34_KWK40_HE
	{
		indirectHit=0.7;
		indirectHitRange=5;   
	};
};



