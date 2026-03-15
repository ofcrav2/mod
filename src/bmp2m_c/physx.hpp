		simulation="tankX";
		fuelCapacity=20;
		brakeIdleSpeed=0.1;
		maxSpeed=70;
		normalSpeedForwardCoef=0.61;
		slowSpeedForwardCoef=0.25;
		canFloat = 1;
		waterLeakiness = 250.0;
		maxFordingDepth = 0.05;
		waterResistance = 1;
		waterDamageEngine = 0.9;

		engineShiftY           		 = -0.8;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns
		waterLinearDampingCoefY 	 = 2;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
		waterLinearDampingCoefX 	 = 2.0;		/// affects sliding of the ship in turns
		waterAngularDampingCoef 	 = 3.2;		/// increase this for smoother movement, but beware too high values
		waterResistanceCoef 		 = 0.015;	/// how much does water slow the ship down
		enginePower=300;
		minOmega	= 75;
		maxOmega	= 298.45;
		idleRPM		= 700;
		redRPM		= 2850;
		peakTorque=1005;
		tracksSpeed=1;
		torqueCurve[] = {
		{__EVAL(100/2850),__EVAL(0/981)},
		{__EVAL(900/2850),__EVAL(935/981)},
		{__EVAL(1500/2850),__EVAL(981/981)},
		{__EVAL(1600/2850),__EVAL(981/981)},
		{__EVAL(1800/2850),__EVAL(935/981)},
		{__EVAL(2200/2850),__EVAL(880/981)},
		{__EVAL(2600/2850),__EVAL(811/981)},
		{__EVAL(3101/2850),__EVAL(0/981)}
		};
		thrustDelay=0.3;
		engineMOI=8;
		dampingRateFullThrottle=1.3;
		dampingRateZeroThrottleClutchEngaged=6;
		dampingRateZeroThrottleClutchDisengaged=1;
		clutchStrength=20;
		latency=1.2;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[] = 
		{						// rpm ratio max/min pair
			__EVAL(2850/2850)	, __EVAL(1000/2850),
			__EVAL(1000/2850)	, 0,
			__EVAL(2380/2850)	, __EVAL(1000/2850),
			__EVAL(2550/2850)	, __EVAL(1900/2850),
			__EVAL(2600/2850)	, __EVAL(1900/2850),
			__EVAL(2600/2850)	, __EVAL(1900/2850),
			__EVAL(2850/2850)	, __EVAL(1900/2850)
		};
		class complexGearbox
		{
			GearboxRatios[] =
			{
				"R1",-7.25,
				"N",0,
				"D1",5.25,
				"D2",2.842,
				"D3",1.912,
				"D4",1.28,
				"D5",0.858
			};
			AmphibiousRatios[]		= {"R1", -14.5, "N", 0, "D1", 14.5};
			transmissionRatios[]=
			{
				"High",
				12.66
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		tankTurnForce=550000;
		tankTurnForceAngMinSpd=0.8;
		tankTurnForceAngSpd=0.9;
		accelAidForceCoef=4;
		accelAidForceYOffset=-3.5;
		accelAidForceSpd=3.5999999;
		antiRollbarForceCoef=20;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=10;
		antiRollbarSpeedMax=55;
/// end of gearbox

class Wheels 
{
	class L2 
	{
        side="left";
		suspTravelDirection[]={-0.125,-1,0};
		boneName="wheel_podkoloL1";
		center="wheel_1_2_axis";
		boundary="wheel_1_2_bound";
		steering=0;
		width=0.28799999;
		mass=120;
		MOI=__EVAL(1.0*(0.5*120*(0.355^2)));	
		maxBrakeTorque=2000;
		sprungMass=1208.33;
		springStrength=127500;
		springDamperRate=7000;
		maxDroop=0.18000001;
		maxCompression=0.18000001;
		dampingRate=328;
		dampingRateInAir=328;
		dampingRateDamaged=10;
		dampingRateDestroyed=10000;
		latStiffX=2;
		latStiffY=30;
		longitudinalStiffnessPerUnitGravity=32000;
		frictionVsSlipGraph[]=
		{
			{0,0.80000001},
			{0.38,1},
			{0.69999999,0.64999998}
		};
	};
	class L3: L2 {
		boneName = "wheel_podkolol2";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2 {
		boneName = "wheel_podkolol3";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2 {
		boneName = "wheel_podkolol4";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};
	class L6: L2 {
		boneName = "wheel_podkolol5";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
	};
	class L7: L2 {
		boneName = "wheel_podkolol6";
		center   = "wheel_1_7_axis";
		boundary = "wheel_1_7_bound";
	};

	// rear left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L9: L2
	{
		boneName = "wheel_podkolol9";
		center   = "wheel_1_9_axis";
		boundary = "wheel_1_9_bound";

		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L1: L2 {
        width=0.50;
		boneName = "";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";

		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};

	class R2: L2 
	{
		suspTravelDirection[]={0.125,-1,0};
		boneName = "wheel_podkolop1";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
	};
	class R3: R2 {
		boneName = "wheel_podkolop2";
		center   = "wheel_2_3_axis";
		boundary = "wheel_2_3_bound";

	};
	class R4: R2 {
		boneName = "wheel_podkolop3";
		center   = "wheel_2_4_axis";
		boundary = "wheel_2_4_bound";
	};
	class R5: R2 {
		boneName = "wheel_podkolop4";
		center   = "wheel_2_5_axis";
		boundary = "wheel_2_5_bound";
	};
	class R6: R2 {
		boneName = "wheel_podkolop5";
		center   = "wheel_2_6_axis";
		boundary = "wheel_2_6_bound";
	};
	class R7: R2 {
		boneName = "wheel_podkolop6";
		center   = "wheel_2_7_axis";
		boundary = "wheel_2_7_bound";
	};

	// rear right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R9: R2 {
		boneName = "wheel_podkolop9";
		center   = "wheel_2_9_axis";
		boundary = "wheel_2_9_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	// front right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R1: R2 {
        width=0.50;
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
};
/// End of PhysX