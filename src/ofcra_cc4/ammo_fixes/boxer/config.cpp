// CC4: Boxer (mkk boxer_c) HE rounds -> OFCRA ammo.
//  - IFV 30mm HE: BWA3_B_30mm_HE already inherits the OFCRA B_30mm_MP damage, but BWA3's ACE compat
//    turns ACE fragmentation back on. Use the vanilla tracer MP round instead (OFCRA values, frag off).
//  - MGS 105mm HE-T DM512 -> OFCRA_12cm_BASE, HEAT-T DM12 -> OFCRA_12cm_HEAT
//    (the same OFCRA classes the Leopard 2 120mm uses in ofcra_bw_mod\pzh2000).
//  - GMW 40mm already uses OFCRA_G_40mm_HEDP (ofcra_rhs_gmg). M2 has no HE.
class CfgPatches
{
	class ofcra_cc4_ammo_boxer
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"boxer_c",
			"ofcra_ammo_base"
		};
	};
};

class CfgMagazines
{
	class BWA3_160Rnd_HE_shells;
	class mkk_MK30_100Rnd_HE_shells: BWA3_160Rnd_HE_shells
	{
		ammo = "B_30mm_MP_Tracer_Red";
	};

	class mkk_mag_M1069_105mm;
	class mkk_boxmgs_mag_dm512: mkk_mag_M1069_105mm
	{
		ammo = "OFCRA_12cm_BASE";
	};

	class mkk_mag_M830A1_105mm;
	class mkk_boxmgs_mag_dm12: mkk_mag_M830A1_105mm
	{
		ammo = "OFCRA_12cm_HEAT";
	};
};
