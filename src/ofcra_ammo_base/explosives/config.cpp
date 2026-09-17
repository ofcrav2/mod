class CfgPatches
{
	class ofcra_ammo_base_explosives {
		name = "ofcra_ammo_base_explosives";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"A3_Weapons_F", // CRITICAL: Ensures the vanilla Put weapon loads first
			"ace_explosives",
			"ace_frag",
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};
		magazines[]={
			"OFCRA_SatchelCharge",
		};
	};
};

class CfgAmmo
{
	
};


class CfgMagazines
{
	class CA_Magazine;
	class OFCRA_SatchelCharge: CA_Magazine
	{
		author="OFCRA Wombat";
		scope=2;
		picture="\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model="\A3\Weapons_F\Explosives\satchel_i";
		descriptionShort="Large Explosive Charge";
		type=512;
		allowedSlots[]={901,701};
		value=5;
		ammo="SatchelCharge_Remote_Ammo";
		mass=80;
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		displayName="Satchel Charge";
		displayNameShort="Satchel Charge";
		ace_explosives_Placeable=1;
		useAction=0;
		ace_explosives_SetupObject="ACE_Explosives_Place_SatchelCharge";
		ace_explosives_DelayTime=1;

		ace_explosives_isSticky = 1;

		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Timer",
			};
			class Timer
			{
				FuseTime=0.5;
			};
		};
	};
};



class CfgWeapons
{
	class Default;
	//make it visible in the arsenal explosives section
	class Put : Default
    {
		class PutMuzzle;
        class PipeBombMuzzle : PutMuzzle
        {
            magazines[] += {"OFCRA_SatchelCharge"}; 
        };
    };
};
