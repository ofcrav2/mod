class CfgPatches
{
	class ofcra_3cb_maz543
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{
			"OFCRA_MAZ_543_Transport_Open",
			"OFCRA_MAZ_543_Transport_Closed",
			"OFCRA_MAZ_543_Repair",
			"OFCRA_MAZ_543_Refuel",
			"OFCRA_MAZ_543_Recovery",
			"OFCRA_MAZ_543_Reammo",
			"OFCRA_MAZ_543_SCUD"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"UK3CB_Factions_Vehicles_Scud"
		};
	};
};

// Shared drivetrain changes for every OFCRA MAZ 543.
// 3CB's MAZ has no complexGearbox at all (only the legacy gearBox[] array, which PhysX "carx" ignores),
// so the engine falls back to default ratios. Here we give it a real gearbox:
//   wheel radius 0.605 m (wheelCircumference 3.8), maxOmega 262 rad/s (2500 rpm)
//   overall ratio = gear x 8  ->  D1 ~18 km/h, D2 ~29, D3 ~45, D4 ~62 km/h at redline
// enginePower raised 391 -> 700 kW, peakTorque scaled by the same factor so the two stay consistent.
// terrainCoef lowered 3 -> 1.5: 3CB value made it crawl (~10 km/h) on soft surfaces such as sand; lower = less off-road slowdown.
#define OFCRA_MAZ_PHYSICS \
		enginePower = 700; \
		peakTorque = 3466; \
		maxSpeed = 60; \
		terrainCoef = 1.5; \
		class complexGearbox \
		{ \
			GearboxRatios[] = {"R1",-4.0,"N",0,"D1",4.0,"D2",2.5,"D3",1.6,"D4",1.15}; \
			TransmissionRatios[] = {"High",8}; \
			AmphibiousRatios[] = {"R1",-1,"N",0,"D1",1}; \
			gearBoxMode = "auto"; \
			moveOffGear = 1; \
			driveString = "D"; \
			neutralString = "N"; \
			reverseString = "R"; \
		}; \
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95};

class CfgVehicles
{
	class UK3CB_TKA_O_MAZ_543_Transport_Open;
	class UK3CB_TKA_O_MAZ_543_Transport_Closed;
	class UK3CB_TKA_O_MAZ_543_Repair;
	class UK3CB_TKA_O_MAZ_543_Refuel;
	class UK3CB_TKA_O_MAZ_543_Recovery;
	class UK3CB_TKA_O_MAZ_543_Reammo;
	class UK3CB_TKA_O_MAZ_543_SCUD;

	class OFCRA_MAZ_543_Transport_Open: UK3CB_TKA_O_MAZ_543_Transport_Open
	{
		displayName = "MAZ 543 Transport (Open) [OFCRA]";
		OFCRA_MAZ_PHYSICS
	};
	class OFCRA_MAZ_543_Transport_Closed: UK3CB_TKA_O_MAZ_543_Transport_Closed
	{
		displayName = "MAZ 543 Transport (Closed) [OFCRA]";
		OFCRA_MAZ_PHYSICS
	};
	class OFCRA_MAZ_543_Repair: UK3CB_TKA_O_MAZ_543_Repair
	{
		displayName = "MAZ 543 (Repair) [OFCRA]";
		OFCRA_MAZ_PHYSICS
	};
	class OFCRA_MAZ_543_Refuel: UK3CB_TKA_O_MAZ_543_Refuel
	{
		displayName = "MAZ 543 (Refuel) [OFCRA]";
		OFCRA_MAZ_PHYSICS
	};
	class OFCRA_MAZ_543_Recovery: UK3CB_TKA_O_MAZ_543_Recovery
	{
		displayName = "MAZ 543 (Recovery) [OFCRA]";
		OFCRA_MAZ_PHYSICS
	};
	class OFCRA_MAZ_543_Reammo: UK3CB_TKA_O_MAZ_543_Reammo
	{
		displayName = "MAZ 543 (Reammo) [OFCRA]";
		OFCRA_MAZ_PHYSICS
	};
	class OFCRA_MAZ_543_SCUD: UK3CB_TKA_O_MAZ_543_SCUD
	{
		displayName = "MAZ 543 Scud Launcher [OFCRA]";
		OFCRA_MAZ_PHYSICS
	};
};
