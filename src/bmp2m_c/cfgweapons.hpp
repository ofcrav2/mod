class CfgWeapons
{

	class rhs_weap_2a42;
    class lk_weap_2a42 : rhs_weap_2a42
    {
        class gunParticles
        {
            class Effect
            {
                positionname="Usti hlavne1";
                directionname="Konec hlavne1";
                effectname="AutoCannonFired";
            };
            class EffectL
            {
                positionname="barrel_smoke_l";
                directionname="barrel_smoke_l_dir";
                effectname="RHS_2a42_Fired";
            };
            class EffectR
            {
                positionname="barrel_smoke_r";
                directionname="barrel_smoke_r_dir";
                effectname="RHS_2a42_Fired";
            };
        };
    };

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