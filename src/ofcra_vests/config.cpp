class CfgPatches
{
	class ofcra_vests {
		name = "ofcra_vests";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};



/*
	This does not work. Having :

	 "ItemInfo" >> "HitpointsProtectionInfo"

	 Inherit from this somehow breaks it. Instead copy and paste these values into each vest that is needed to be modified

*/
class OFCRA_level3_plate_HitpointsProtectionInfo
{
	class Chest
	{
		HitpointName="HitChest";
		armor=16;
		PassThrough=0.3;
	};
	class Diaphragm
	{
		HitpointName="HitDiaphragm";
		armor=16;
		PassThrough=0.3;
	};
	class Abdomen
	{
		hitpointName="HitAbdomen";
		armor=16;
		PassThrough=0.3;
	};
	class Body
	{
		hitpointName="HitBody";
		PassThrough=0.3;
	};
};


