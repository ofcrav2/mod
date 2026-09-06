class CfgPatches
{
	class ofcra_cbj_ammo_3cb {
		name = "ofcra_cbj_ammo_3cb";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_cbj_ammo",
			"UK3CB_Factions_Weapons",
			"UK3CB_Factions_Weapons2"
        };
		
		units[] = {};
		weapons[] = {
	
		};
		ammo[]={};
	};
};





class CfgMagazines
{

	//Uzi
	class UK3CB_Uzi_32Rnd_Magazine;

	class OFCRA_Uzi_32Rnd_CBJ_APDS_Mag: UK3CB_Uzi_32Rnd_Magazine
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="32Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_Uzi_32Rnd_CBJ_HET_Mag: OFCRA_Uzi_32Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="32Rnd HET CBJ 6.5x25";
	};
	class OFCRA_Uzi_32Rnd_CBJ_SUB_Mag: OFCRA_Uzi_32Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="32Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};

	//Mp5
	class UK3CB_MP5_30Rnd_9x19_Magazine;
	class OFCRA_MP5_30Rnd_CBJ_APDS_Mag: UK3CB_MP5_30Rnd_9x19_Magazine
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="30Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_MP5_30Rnd_CBJ_HET_Mag: OFCRA_MP5_30Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="30Rnd HET CBJ 6.5x25";
	};
	class OFCRA_MP5_30Rnd_CBJ_SUB_Mag: OFCRA_MP5_30Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="30Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};

	//sten
	class UK3CB_Sten_34Rnd_Magazine;
	class OFCRA_Sten_34Rnd_CBJ_APDS_Mag: UK3CB_Sten_34Rnd_Magazine
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="34Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_Sten_34Rnd_CBJ_HET_Mag: OFCRA_Sten_34Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="34Rnd HET CBJ 6.5x25";
	};
	class OFCRA_Sten_34Rnd_CBJ_SUB_Mag: OFCRA_Sten_34Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="34Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};


	//tec9
	class UK3CB_Tec9_32Rnd_Magazine;
	class OFCRA_Tec9_32Rnd_CBJ_APDS_Mag: UK3CB_Tec9_32Rnd_Magazine
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="32Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_Tec9_32Rnd_CBJ_HET_Mag: OFCRA_Tec9_32Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="32Rnd HET CBJ 6.5x25";
	};
	class OFCRA_Tec9_32Rnd_CBJ_SUB_Mag: OFCRA_Tec9_32Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="32Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};
	
	//m45
	class uk3cb_carlg_m45_36rnd_magazine;
	class OFCRA_M45_36Rnd_CBJ_APDS_Mag: uk3cb_carlg_m45_36rnd_magazine
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="36Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_M45_36Rnd_CBJ_HET_Mag: OFCRA_M45_36Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="36Rnd HET CBJ 6.5x25";
	};
	class OFCRA_M45_36Rnd_CBJ_SUB_Mag: OFCRA_M45_36Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="36Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};



	//mat49
	class uk3cb_mat49_32rnd_9x19_magazine;
	class OFCRA_MAT49_32Rnd_CBJ_APDS_Mag: uk3cb_mat49_32rnd_9x19_magazine
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="32Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_MAT49_32Rnd_CBJ_HET_Mag: OFCRA_MAT49_32Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="32Rnd HET CBJ 6.5x25";
	};
	class OFCRA_MAT49_32Rnd_CBJ_SUB_Mag: OFCRA_MAT49_32Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="32Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};


	//bhp
	class UK3CB_BHP_9_13Rnd;
	class OFCRA_BHP_13Rnd_CBJ_APDS_Mag: UK3CB_BHP_9_13Rnd
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="13Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_BHP_13Rnd_CBJ_HET_Mag: OFCRA_BHP_13Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="13Rnd HET CBJ 6.5x25";
	};
	class OFCRA_BHP_13Rnd_CBJ_SUB_Mag: OFCRA_BHP_13Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="13Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};


	//pp2000
	class rhs_mag_9x19mm_7n21_20;
	class OFCRA_PP2000_20Rnd_CBJ_APDS_Mag: rhs_mag_9x19mm_7n21_20
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="20Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_PP2000_20Rnd_CBJ_HET_Mag: OFCRA_PP2000_20Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="20Rnd HET CBJ 6.5x25";
	};
	class OFCRA_PP2000_20Rnd_CBJ_SUB_Mag: OFCRA_PP2000_20Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="20Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};


	//beretta
	class rhsusf_mag_15Rnd_9x19_JHP;
	class OFCRA_BERETTA_15Rnd_CBJ_APDS_Mag: rhsusf_mag_15Rnd_9x19_JHP
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="15Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_BERETTA_15Rnd_CBJ_HET_Mag: OFCRA_BERETTA_15Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="15Rnd HET CBJ 6.5x25";
	};
	class OFCRA_BERETTA_15Rnd_CBJ_SUB_Mag: OFCRA_BERETTA_15Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="15Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};



	//glock
	class rhsusf_mag_17Rnd_9x19_JHP;
	class OFCRA_GLOCK_17Rnd_CBJ_APDS_Mag: rhsusf_mag_17Rnd_9x19_JHP
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="17Rnd APDS CBJ 6.5x25";
	};
	class OFCRA_GLOCK_17Rnd_CBJ_HET_Mag: OFCRA_GLOCK_17Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="17Rnd HET CBJ 6.5x25";
	};
	class OFCRA_GLOCK_17Rnd_CBJ_SUB_Mag: OFCRA_GLOCK_17Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="17Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};


};



class CfgWeapons
{

	class UK3CB_Micro_Uzi;
	class UK3CB_Uzi;
	class UK3CB_Uzi_Stock;
	//magazines[] = {"UK3CB_Uzi_32Rnd_Magazine","UK3CB_Uzi_32Rnd_Magazine_R","UK3CB_Uzi_32Rnd_Magazine_RT","UK3CB_Uzi_32Rnd_Magazine_Y","UK3CB_Uzi_32Rnd_Magazine_YT","UK3CB_Uzi_32Rnd_Magazine_G","UK3CB_Uzi_32Rnd_Magazine_GT","UK3CB_Uzi_32Rnd_Magazine_W","UK3CB_Uzi_32Rnd_Magazine_WT"};

	class UK3CB_MP5A2;
	class UK3CB_MP5A3;
	class UK3CB_MP5A4;
	class UK3CB_MP5K;
	class UK3CB_MP5K_PDW;
	class UK3CB_MP5N_UGL;
	class UK3CB_MP5SD6;
	//magazines[] = {"UK3CB_9x30Rnd","UK3CB_MP5_30Rnd_9x19_Magazine","UK3CB_MP5_30Rnd_9x19_Magazine_R","UK3CB_MP5_30Rnd_9x19_Magazine_RT","UK3CB_MP5_30Rnd_9x19_Magazine_Y","UK3CB_MP5_30Rnd_9x19_Magazine_YT","UK3CB_MP5_30Rnd_9x19_Magazine_G","UK3CB_MP5_30Rnd_9x19_Magazine_GT","UK3CB_MP5_30Rnd_9x19_Magazine_W","UK3CB_MP5_30Rnd_9x19_Magazine_WT","UK3CB_MP5_30Rnd_9x19_Magazine","UK3CB_MP5_30Rnd_9x19_Magazine_R","UK3CB_MP5_30Rnd_9x19_Magazine_RT","UK3CB_MP5_30Rnd_9x19_Magazine_Y","UK3CB_MP5_30Rnd_9x19_Magazine_YT","UK3CB_MP5_30Rnd_9x19_Magazine_G","UK3CB_MP5_30Rnd_9x19_Magazine_GT","UK3CB_MP5_30Rnd_9x19_Magazine_W","UK3CB_MP5_30Rnd_9x19_Magazine_WT"};

	class UK3CB_Sten;
	//magazines[] = {"UK3CB_Sten_34Rnd_Magazine","UK3CB_Sten_34Rnd_Magazine_Tracer","UK3CB_Sten_34Rnd_Magazine","UK3CB_Sten_34Rnd_Magazine_R","UK3CB_Sten_34Rnd_Magazine_RT","UK3CB_Sten_34Rnd_Magazine_Y","UK3CB_Sten_34Rnd_Magazine_YT","UK3CB_Sten_34Rnd_Magazine_G","UK3CB_Sten_34Rnd_Magazine_GT","UK3CB_Sten_34Rnd_Magazine_W","UK3CB_Sten_34Rnd_Magazine_WT"};

	class UK3CM_Tec9;
	class UK3CM_Tec9_Full;
	//magazines[] = {"UK3CB_Tec9_32Rnd_Magazine","UK3CB_Tec9_32Rnd_Magazine_R","UK3CB_Tec9_32Rnd_Magazine_RT","UK3CB_Tec9_32Rnd_Magazine_Y","UK3CB_Tec9_32Rnd_Magazine_YT","UK3CB_Tec9_32Rnd_Magazine_G","UK3CB_Tec9_32Rnd_Magazine_GT","UK3CB_Tec9_32Rnd_Magazine_W","UK3CB_Tec9_32Rnd_Magazine_WT"};

	class UK3CB_port_said_m45;
	//magazines[] = {"uk3cb_carlg_m45_36rnd_magazine","uk3cb_carlg_m45_36rnd_magazine_r","uk3cb_carlg_m45_36rnd_magazine_rt","uk3cb_carlg_m45_36rnd_magazine_y","uk3cb_carlg_m45_36rnd_magazine_yt","uk3cb_carlg_m45_36rnd_magazine_g","uk3cb_carlg_m45_36rnd_magazine_gt","uk3cb_carlg_m45_36rnd_magazine_w","uk3cb_carlg_m45_36rnd_magazine_wt"};

	class UK3CB_mat49;
	//magazines[] = {"uk3cb_mat49_32rnd_9x19_magazine","uk3cb_mat49_32rnd_9x19_magazine_r","uk3cb_mat49_32rnd_9x19_magazine_rt","uk3cb_mat49_32rnd_9x19_magazine_y","uk3cb_mat49_32rnd_9x19_magazine_yt","uk3cb_mat49_32rnd_9x19_magazine_g","uk3cb_mat49_32rnd_9x19_magazine_gt","uk3cb_mat49_32rnd_9x19_magazine_w","uk3cb_mat49_32rnd_9x19_magazine_wt"};

	class UK3CB_BHP;
	class UK3CB_BHP_sup;
	//magazines[] = {"UK3CB_BHP_9_13Rnd","UK3CB_BAF_9_13Rnd"};

	class rhs_weap_pp2000_folded;
	class rhs_weap_pp2000;
	//magazines[] = {"rhs_mag_9x19mm_7n21_20","rhs_mag_9x19mm_7n31_20","rhs_mag_9x19mm_7n21_44","rhs_mag_9x19mm_7n31_44"};

	class rhsusf_weap_m9;
	//magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_FMJ"};


	class rhsusf_weap_glock17g4;	
	//magazines[] = {"rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_FMJ"};




// --- OFCRA CBJ Weapon Configurations ---

    ///////////////////////////////////////////
    // Uzi Family
    class OFCRA_Micro_Uzi_CBJ: UK3CB_Micro_Uzi
    {
        author="OFCRA Wombat";
        displayName="Micro Uzi CBJ";
        baseWeapon="OFCRA_Micro_Uzi_CBJ";
        magazines[]=
        {
            "OFCRA_Uzi_32Rnd_CBJ_APDS_Mag",
            "OFCRA_Uzi_32Rnd_CBJ_HET_Mag",
            "OFCRA_Uzi_32Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_Uzi_CBJ: UK3CB_Uzi
    {
        author="OFCRA Wombat";
        displayName="Uzi CBJ";
        baseWeapon="OFCRA_Uzi_CBJ";
        magazines[]=
        {
            "OFCRA_Uzi_32Rnd_CBJ_APDS_Mag",
            "OFCRA_Uzi_32Rnd_CBJ_HET_Mag",
            "OFCRA_Uzi_32Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_Uzi_Stock_CBJ: UK3CB_Uzi_Stock
    {
        author="OFCRA Wombat";
        displayName="Uzi Stock CBJ";
        baseWeapon="OFCRA_Uzi_Stock_CBJ";
        magazines[]=
        {
            "OFCRA_Uzi_32Rnd_CBJ_APDS_Mag",
            "OFCRA_Uzi_32Rnd_CBJ_HET_Mag",
            "OFCRA_Uzi_32Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };

    ///////////////////////////////////////////
    // MP5 Family
    class OFCRA_MP5A2_CBJ: UK3CB_MP5A2
    {
        author="OFCRA Wombat";
        displayName="MP5A2 CBJ";
        baseWeapon="OFCRA_MP5A2_CBJ";
        magazines[]=
        {
            "OFCRA_MP5_30Rnd_CBJ_APDS_Mag",
            "OFCRA_MP5_30Rnd_CBJ_HET_Mag",
            "OFCRA_MP5_30Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_MP5A3_CBJ: UK3CB_MP5A3
    {
        author="OFCRA Wombat";
        displayName="MP5A3 CBJ";
        baseWeapon="OFCRA_MP5A3_CBJ";
        magazines[]=
        {
            "OFCRA_MP5_30Rnd_CBJ_APDS_Mag",
            "OFCRA_MP5_30Rnd_CBJ_HET_Mag",
            "OFCRA_MP5_30Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_MP5A4_CBJ: UK3CB_MP5A4
    {
        author="OFCRA Wombat";
        displayName="MP5A4 CBJ";
        baseWeapon="OFCRA_MP5A4_CBJ";
        magazines[]=
        {
            "OFCRA_MP5_30Rnd_CBJ_APDS_Mag",
            "OFCRA_MP5_30Rnd_CBJ_HET_Mag",
            "OFCRA_MP5_30Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_MP5K_CBJ: UK3CB_MP5K
    {
        author="OFCRA Wombat";
        displayName="MP5K CBJ";
        baseWeapon="OFCRA_MP5K_CBJ";
        magazines[]=
        {
            "OFCRA_MP5_30Rnd_CBJ_APDS_Mag",
            "OFCRA_MP5_30Rnd_CBJ_HET_Mag",
            "OFCRA_MP5_30Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_MP5K_PDW_CBJ: UK3CB_MP5K_PDW
    {
        author="OFCRA Wombat";
        displayName="MP5K PDW CBJ";
        baseWeapon="OFCRA_MP5K_PDW_CBJ";
        magazines[]=
        {
            "OFCRA_MP5_30Rnd_CBJ_APDS_Mag",
            "OFCRA_MP5_30Rnd_CBJ_HET_Mag",
            "OFCRA_MP5_30Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_MP5N_UGL_CBJ: UK3CB_MP5N_UGL
    {
        author="OFCRA Wombat";
        displayName="MP5N (UGL) CBJ";
        baseWeapon="OFCRA_MP5N_UGL_CBJ";
        magazines[]=
        {
            "OFCRA_MP5_30Rnd_CBJ_APDS_Mag",
            "OFCRA_MP5_30Rnd_CBJ_HET_Mag",
            "OFCRA_MP5_30Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_MP5SD6_CBJ: UK3CB_MP5SD6
    {
        author="OFCRA Wombat";
        displayName="MP5SD6 CBJ";
        baseWeapon="OFCRA_MP5SD6_CBJ";
        magazines[]=
        {
            "OFCRA_MP5_30Rnd_CBJ_APDS_Mag",
            "OFCRA_MP5_30Rnd_CBJ_HET_Mag",
            "OFCRA_MP5_30Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };

    ///////////////////////////////////////////
    // Sten
    class OFCRA_Sten_CBJ: UK3CB_Sten
    {
        author="OFCRA Wombat";
        displayName="Sterling CBJ";
        baseWeapon="OFCRA_Sten_CBJ";
        magazines[]=
        {
            "OFCRA_Sten_34Rnd_CBJ_APDS_Mag",
            "OFCRA_Sten_34Rnd_CBJ_HET_Mag",
            "OFCRA_Sten_34Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };

    ///////////////////////////////////////////
    // Tec-9 Family
    class OFCRA_Tec9_CBJ: UK3CM_Tec9
    {
        author="OFCRA Wombat";
        displayName="Tec-9 CBJ";
        baseWeapon="OFCRA_Tec9_CBJ";
        magazines[]=
        {
            "OFCRA_Tec9_32Rnd_CBJ_APDS_Mag",
            "OFCRA_Tec9_32Rnd_CBJ_HET_Mag",
            "OFCRA_Tec9_32Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_Tec9_Full_CBJ: UK3CM_Tec9_Full
    {
        author="OFCRA Wombat";
        displayName="Tec-9 Full CBJ";
        baseWeapon="OFCRA_Tec9_Full_CBJ";
        magazines[]=
        {
            "OFCRA_Tec9_32Rnd_CBJ_APDS_Mag",
            "OFCRA_Tec9_32Rnd_CBJ_HET_Mag",
            "OFCRA_Tec9_32Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };

    ///////////////////////////////////////////
    // Carl Gustaf M45 / Port Said
    class OFCRA_Port_Said_CBJ: UK3CB_port_said_m45
    {
        author="OFCRA Wombat";
        displayName="Port Said CBJ";
        baseWeapon="OFCRA_Port_Said_CBJ";
        magazines[]=
        {
            "OFCRA_M45_36Rnd_CBJ_APDS_Mag",
            "OFCRA_M45_36Rnd_CBJ_HET_Mag",
            "OFCRA_M45_36Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };

    ///////////////////////////////////////////
    // MAT-49
    class OFCRA_MAT49_CBJ: UK3CB_mat49
    {
        author="OFCRA Wombat";
        displayName="MAT-49 CBJ";
        baseWeapon="OFCRA_MAT49_CBJ";
        magazines[]=
        {
            "OFCRA_MAT49_32Rnd_CBJ_APDS_Mag",
            "OFCRA_MAT49_32Rnd_CBJ_HET_Mag",
            "OFCRA_MAT49_32Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };

    ///////////////////////////////////////////
    // Browning Hi-Power Family
    class OFCRA_BHP_CBJ: UK3CB_BHP
    {
        author="OFCRA Wombat";
        displayName="Browning HP CBJ";
        baseWeapon="OFCRA_BHP_CBJ";
        magazines[]=
        {
            "OFCRA_BHP_13Rnd_CBJ_APDS_Mag",
            "OFCRA_BHP_13Rnd_CBJ_HET_Mag",
            "OFCRA_BHP_13Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_BHP_sup_CBJ: UK3CB_BHP_sup
    {
        author="OFCRA Wombat";
        displayName="Browning HP (Sup) CBJ";
        baseWeapon="OFCRA_BHP_sup_CBJ";
        magazines[]=
        {
            "OFCRA_BHP_13Rnd_CBJ_APDS_Mag",
            "OFCRA_BHP_13Rnd_CBJ_HET_Mag",
            "OFCRA_BHP_13Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };

    ///////////////////////////////////////////
    // PP-2000 Family
    class OFCRA_PP2000_folded_CBJ: rhs_weap_pp2000_folded
    {
        author="OFCRA Wombat";
        displayName="PP-2000 (Folded) CBJ";
        baseWeapon="OFCRA_PP2000_folded_CBJ";
        magazines[]=
        {
            "OFCRA_PP2000_20Rnd_CBJ_APDS_Mag",
            "OFCRA_PP2000_20Rnd_CBJ_HET_Mag",
            "OFCRA_PP2000_20Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };
    class OFCRA_PP2000_CBJ: rhs_weap_pp2000
    {
        author="OFCRA Wombat";
        displayName="PP-2000 CBJ";
        baseWeapon="OFCRA_PP2000_CBJ";
        magazines[]=
        {
            "OFCRA_PP2000_20Rnd_CBJ_APDS_Mag",
            "OFCRA_PP2000_20Rnd_CBJ_HET_Mag",
            "OFCRA_PP2000_20Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };

    ///////////////////////////////////////////
    // Beretta M9
    class OFCRA_M9_CBJ: rhsusf_weap_m9
    {
        author="OFCRA Wombat";
        displayName="M9 Beretta CBJ";
        baseWeapon="OFCRA_M9_CBJ";
        magazines[]=
        {
            "OFCRA_BERETTA_15Rnd_CBJ_APDS_Mag",
            "OFCRA_BERETTA_15Rnd_CBJ_HET_Mag",
            "OFCRA_BERETTA_15Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };

    ///////////////////////////////////////////
    // Glock 17
    class OFCRA_Glock17_CBJ: rhsusf_weap_glock17g4
    {
        author="OFCRA Wombat";
        displayName="Glock 17 CBJ";
        baseWeapon="OFCRA_Glock17_CBJ";
        magazines[]=
        {
            "OFCRA_GLOCK_17Rnd_CBJ_APDS_Mag",
            "OFCRA_GLOCK_17Rnd_CBJ_HET_Mag",
            "OFCRA_GLOCK_17Rnd_CBJ_SUB_Mag"
        };
        magazineWell[]={};
    };



};
