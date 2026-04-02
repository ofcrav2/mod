
class CfgPatches {
    class ofcra_baf_nlaw {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
		skipWhenMissingDependencies=1;
        requiredAddons[] = {"UK3CB_BAF_Weapons_Ammo"};
        author = "OFCRA wombat";
    };
};

class CfgAmmo
{
	class M_NLAW_AT_F;
	class UK3CB_M_NLAW_AT: M_NLAW_AT_F
	{
		initTime = 0.2;
		
		class ace_missileguidance_type_Nlaw;
		class ace_missileguidance: ace_missileguidance_type_Nlaw
        {
            attackProfiles[]=
			{
				"ace_nlaw_directAttack",
				"ace_nlaw_overflyTopAttack"
			};
			canVanillaLock=0;
			defaultAttackProfile="ace_nlaw_directAttack";
			defaultNavigationType="ace_nlaw_PLOS";
			defaultSeekerLockMode="LOBL";
			defaultSeekerType="ace_nlaw_seeker";
			enabled=1;
			navigationTypes[]=
			{
				"ace_nlaw_PLOS"
			};
			onFired="ace_nlaw_fnc_onFired";
			pitchRate=5;
			seekerAccuracy=1;
			seekerAngle=45;
			seekerLockModes[]=
			{
				"LOBL"
			};
			seekerMaxRange=10;
			seekerMinRange=0;
			seekerTypes[]=
			{
				"ace_nlaw_seeker"
			};
			seekLastTargetPos=0;
			showHintOnCycle=1;
			useModeForAttackProfile=1;
			yawRate=10;
        };
	};
};
