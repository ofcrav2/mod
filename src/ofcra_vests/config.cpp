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


class OFCRA_level3_plate_HitpointsProtectionInfo
{
	class Chest
	{
		HitpointName="HitChest";
		armor=16
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
		PassThrough=0.5;
	};
	class Body
	{
		hitpointName="HitBody";
		PassThrough=0.3;
	};
};


