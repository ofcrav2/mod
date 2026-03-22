class CfgWeapons
{
	class RHS_weap_Ags30;
	class RHS_weap_Ags30_new : RHS_weap_Ags30
	{
		ballisticsComputer=0;
		class GunParticles
		{
			class effect1
			{
				positionName="usti hlavne3";
				directionName="konec hlavne3";
				effectName="GrenadeLauncherCloud";
			};
		};
		magazines[]=
		{
			"RHS_mag_VOG30_30",
			"RHS_mag_GPD30_30",
			"RHS_mag_VOG17m_30",
			"RHS_mag_VOG30_300",
			"RHS_mag_GPD30_300",
			"RHS_mag_VOG17m_300"
		};
	};
};