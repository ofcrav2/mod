class CfgPatches
{
	class ofcra_cbj_ammo {
		name = "ofcra_cbj_ammo";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
  			"A3_Weapons_F",
            "A3_Weapons_F_Exp"
        };
		
		units[] = {};
		weapons[] = {
			"OFCRA_Rook40_CBJ"
		};
		ammo[]={};
	};
};


//APDS complete  2.5g, tungsten core 2g       730 - 900 m/s
//HET core 2.5g                               730 - 900 m/s
//Sub sonic AP 8g tungsten                    330 m/s
//HP                                          730 - 900 m/s  
//Frangible                                   730 - 900 m/s


class CfgAmmo
{
	class B_9x21_Ball;

	class OFCRA_CBJ_APDS: B_9x21_Ball
	{
		author="OFCRA Wombat";

		

		hit=7;    // 556 vanilla = 9, 556 Mk262 = 10.3, mp5 standard 9mm = 5  ...

		airFriction=-0.00066000002; //	556 mk262  has airFriction=-0.00066000002;

		typicalSpeed=700;


		 //multiplier to speed for AP  556 mk262 = 	caliber=0.67699999;  762 M993 AP = 		caliber=1.41176; @910m/s
		 // caliber=2.1 could get get through MTLB doors
		 // cailber=2.4 seems to go straight through MTLB
		 // At hit=6 and caliber = 2.4 we only seem to bruise on level 3 plate.
		 // At hit=5 and caliber = 3.6 we only seem to bruise on level 3 plate.
		 // At hit=5 and caliber = 7.6 we only seem to bruise on level 3 plate. So we need to have higher damage
		caliber=2.4; 

		ACE_caliber=4.4;
		ACE_bulletLength=26;
		ACE_bulletMass=2.5; // is actually 2g tungsten penetrator,

		//ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};

		//aiming for bullet velocity to drop to ~500 m/s at 300m, from ~850m/s at 0m
		ACE_ballisticCoefficients[]={0.35};  //9mm = 0.17, M2 =~ 1, 
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		//ACE_standardAtmosphere="ICAO"; //ICAO???
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={730,900};
		ACE_barrelLengths[]={102,300};  //wikipedia has 900m/s for 300mm barrel
	};

	class OFCRA_CBJ_HET: OFCRA_CBJ_APDS
	{
		caliber=0.3;
		hit=8; //556 vanilla

		//aiming for bullet velocity to drop to ~200 m/s at 300m, from ~850m/s at 0m
		ACE_ballisticCoefficients[]={0.10};  
		ACE_caliber=7;
		ACE_bulletMass=2.8;
	};

	//don't include HP or FRAN rounds


	class OFCRA_CBJ_SUB: OFCRA_CBJ_APDS
	{
		hit = 9;
		caliber=0.8; 
		typicalSpeed=320;

		ACE_ballisticCoefficients[]={0.08};  
		ACE_caliber=7;
		ACE_bulletMass=2; //is actually 8g tungsten penetrator... But we want it to slow downmore at sub sonic speeds to make lighter
		ACE_muzzleVelocities[]={290,320};
	};
	
};


class CfgMagazines
{
	class 30Rnd_9x21_Mag;

	class OFCRA_30Rnd_CBJ_APDS_Mag: 30Rnd_9x21_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		initSpeed=900;
		displayName="30Rnd APDS CBJ 6.5x25";
	};

	class OFCRA_30Rnd_CBJ_HET_Mag: OFCRA_30Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="30Rnd HET CBJ 6.5x25";
	};


	class OFCRA_30Rnd_CBJ_SUB_Mag: OFCRA_30Rnd_CBJ_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="30Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};
	
		
	class 16Rnd_9x21_Mag;

	class OFCRA_17Rnd_CJB_APDS_Mag: 16Rnd_9x21_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_APDS";
		displayName="17Rnd APDS CBJ 6.5x25";
		initSpeed=900;
	};
	class OFCRA_17Rnd_CJB_HET_Mag: OFCRA_17Rnd_CJB_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_HET";
		displayName="17Rnd HET CBJ 6.5x25";
	};

	class OFCRA_17Rnd_CJB_SUB_Mag: OFCRA_17Rnd_CJB_APDS_Mag
	{
		author="OFCRA Wombat";
		ammo="OFCRA_CBJ_SUB";
		displayName="17Rnd SUB CBJ 6.5x25";
		initSpeed=320;
	};

};



class CfgWeapons
{

/*

	//Just for testing... is DLC weapon so we don't want confusion
	class SMG_05_F;

	class OFCRA_SMG_05_F: SMG_05_F
	{
		author="OFCRA Wombat";
		displayName="MP5K CBJ (DLC)";
		
        baseWeapon="OFCRA_SMG_05_F";
		magazines[]=
		{
			"OFCRA_30Rnd_CBJ_APDS_Mag",
			"OFCRA_30Rnd_CBJ_HET_Mag",
			"OFCRA_30Rnd_CBJ_SUB_Mag"
		};
		magazineWell[]={};
	};

	*/

	class hgun_Rook40_F;

	class OFCRA_Rook40_CBJ: hgun_Rook40_F
	{
		author="OFCRA Wombat";
		displayName="MP443 CBJ";

		baseWeapon="OFCRA_Rook40_CBJ";
		//magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_red_Mag","16Rnd_9x21_green_Mag","16Rnd_9x21_yellow_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Red_Mag","30Rnd_9x21_Yellow_Mag","30Rnd_9x21_Green_Mag"};
		magazines[]=
		{
			"OFCRA_17Rnd_CJB_APDS_Mag",
			"OFCRA_17Rnd_CJB_HET_Mag",
			"OFCRA_17Rnd_CJB_SUB_Mag"
		};
		magazineWell[]={};
	};
	
};
