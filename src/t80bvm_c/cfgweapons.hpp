class CfgAmmo
{
	class M_125mm_cannon_ATGM;
	class M_9m112m_bvm_ATGM : M_125mm_cannon_ATGM
	{
//		submunitionAmmo="rhs_ammo_9m112m_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.1};
		submunitionParentSpeedCoef=0;
		submunitionInitSpeed=1053;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		inittime=0;
		irlock=1;
		laserlock=0;
		maneuvrability=9;
		sideairfriction=0.1;
		maxcontrolrange=4000;
		maxspeed=500;
		thrust=112;
		thrusttime=6;
		timetolive=30;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class rhs_mag_3bm46_10;
	class 4Rnd_9m112m_bvm_missiles: VehicleMagazine
	{
		author="Lurker1011";
		scope=2;
		displayName="$STR_RHS_MAG_9M112M";
		displayNameShort="$STR_RHS_MAG_SH_9M112M";
		count=4;
		ammo="M_9m112m_bvm_ATGM";
		initSpeed=125;
		maxleadspeed=50;
		nameSound="missiles";
		displayNameMFDFormat="MISL";
	};
	class rhs_mag_3bm46_14 : rhs_mag_3bm46_10
	{
		count=14;
	};
};
class CfgWeapons
{
	class rhs_weap_pkt;
	class rhs_weap_2a46m_2;
	class rhs_weap_nsvt;
	class cannon_125mm;
	class rhs_weap_2a46m_bvm: rhs_weap_2a46m_2
	{
		displayName="2A46M_125mm_BVM";
		//ballisticsComputer="2 + 16";
		reloadMagazineSound[]=
		{
			"\rhsafrf\addons\rhs_c_heavyweapons\sounds\autoloader",
			1.4125376,
			1,
			200
		};
		aiDispersioncoefX=3.5;
		aiDispersioncoefY=5;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		magazineWell[]=
		{
			"RHS_Cannon_125mm_D81",
			"RHS_Cannon_125mm_2A46M"

		};
/* 		magazines[]=
		{
			"rhs_mag_3bm9",
			"rhs_mag_3bm12",
			"rhs_mag_3bm15",
			"rhs_mag_3bm17",
			"rhs_mag_3bm22",
			"rhs_mag_3bm26",
			"rhs_mag_3bm29",
			"rhs_mag_3bm32",
			"rhs_mag_3bm42",
			"rhs_mag_3bm46",
			"rhs_mag_3bm9_10",
			"rhs_mag_3bm12_10",
			"rhs_mag_3bm15_10",
			"rhs_mag_3bm17_10",
			"rhs_mag_3bm17_14",
			"rhs_mag_3bm22_10",
			"rhs_mag_3bm22_14",
			"rhs_mag_3bm26_10",
			"rhs_mag_3bm26_7",
			"rhs_mag_3bm29_10",
			"rhs_mag_3bm29_7",
			"rhs_mag_3bm32_10",
			"rhs_mag_3bm32_7",
			"rhs_mag_3bm42_10",
			"rhs_mag_3bm42_7",
			"rhs_mag_3bm42m_10",
			"rhs_mag_3bm46_10",
			"rhs_mag_3bm46_8",
			"rhs_mag_3bm46_14",
			
			"rhs_mag_3bk12",
			"rhs_mag_3bk14",
			"rhs_mag_3bk18",
			"rhs_mag_3bk18m",
			"rhs_mag_3bk21",
			"rhs_mag_3bk29",
			"rhs_mag_3bk31",
			"rhs_mag_dummy",
			"rhs_mag_3bk12_8",
			"rhs_mag_3bk14_8",
			"rhs_mag_3bk14_6",
			"rhs_mag_3bk18_8",
			"rhs_mag_3bk18_6",
			"rhs_mag_3bk18m_8",
			"rhs_mag_3bk18m_6",
			"rhs_mag_3bk21_8",
			"rhs_mag_3bk29_8",
			"rhs_mag_3bk31_8",
			"rhs_mag_3bk31_6",
			"rhs_mag_3bk31_3",
			
			"rhs_mag_3of11",
			"rhs_mag_3of26",
			"rhs_mag_3of11_6",
			"rhs_mag_3of26_7",
			"rhs_mag_3of26_6",
			"rhs_mag_3of26_5",
			
			
			
			"4Rnd_125mm_cannon_missiles",
			"4Rnd_9m112m_bvm_missiles"
		}; */
	};
	class rhs_weap_pkt_bvm : rhs_weap_pkt
	{
		//ballisticsComputer="2 + 16";
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne3";
				directionName="konec hlavne3";
				effectName="MachineGunCloud";
			};
		};
	};
	class rhs_weap_nsvt_bvm : rhs_weap_nsvt
	{
		class GunParticles
		{
			class effect1a
			{
				effectname="MachineGunCloud";
				positionname="Usti hlavne2";
				directionname="Konec hlavne2";
			};
			class effect1
			{
				positionname="nabojnicestart";
				directionname="nabojniceend";
				effectname="MachineGunEject";
			};
			class effect2
			{
				positionName="machinegun_eject_pos";
				directionName="machinegun_eject_dir";
				effectName="MachineGunCartridge2";
			};
		};
	};
};