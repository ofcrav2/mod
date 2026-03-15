/// PhysX part
		simulation="tankX";
		normalSpeedForwardCoef=0.5;
		slowSpeedForwardCoef=0.25;
		fuelCapacity=19.5;
//		RHS_fuelCapacity=1540;
		brakeIdleSpeed=1.78;
		maxSpeed=70;
		engineMOI=20;
		enginePower=932;
		peakTorque=4393;
		minOmega=114.72;
		maxOmega=350.85999;
		idleRPM=1200;
		redRPM=3255;
		torqueCurve[]=
		{
			{0.30722001,0},
			{0.44761899,0.94855499},
			{0.52657402,0.89710897},
			{0.60553002,0.84566402},
			{0.68448502,0.794218},
			{0.76344103,0.742773},
			{0.84239602,0.69132698},
			{1.90292,0}
		};
		thrustDelay=0.30000001;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		engineBrakeCoef=0;
		tracksSpeed=1.4;
		tankTurnForce=650000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.72000003;
		accelAidForceCoef=3.3;
		accelAidForceYOffset=-4;
		accelAidForceSpd=2.8299999;
		maxFordingDepth=0;
		waterResistance=0;
		waterDamageEngine=0.2;
		waterLeakiness=10;
		engineLosses=25;
		transmissionLosses=15;
		clutchStrength=30;
		latency=1.3;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.33333299,0.33333299,0,0.95999998,0.33333299,0.98333299,0.69999999,0.98333299,0.73333299,0.98333299,0.73333299};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-10.36,
				"N",
				0,
				"D1",
				4.3800001,
				"D2",
				2.1600001,
				"D3",
				1.46,
				"D4",
				1
			};
			TransmissionRatios[]=
			{
				"High",
				11.55
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.89999998;
		};
	class Wheels {
		class L2 {
			boneName = "wheel_podkoloL1";
			center   = "wheel_1_2_axis";
			boundary = "wheel_1_2_bound";
			steering = 0;
			side = "left";
			width=0.396;
			mass=188;
			MOI=14.0783;
			dampingRate=1000;
			dampingRateInAir=1000;
			dampingRateDamaged=10;
			dampingRateDestroyed=10000;
			maxDroop=0.18000001;
			maxCompression=0.18;
			sprungMass=3833.3301;
			springStrength=254000;
			springDamperRate=11000;
			maxBrakeTorque=10000;
			latStiffX=3;
			latStiffY=40;
			longitudinalStiffnessPerUnitGravity=72000;
			suspTravelDirection[]={-0.125,-1,0};
			frictionVsSlipGraph[]=
			{
				{0,0.40000001},
				{0.18000001,1},
				{0.69999999,0.75}
			};
		};
		class L3: L2 {
			boneName = "wheel_podkolol2";
			center   = "wheel_1_3_axis";
			boundary = "wheel_1_3_bound";
			suspForceAppPointOffset = "wheel_1_3_axis";
		};
		class L4: L2 {
			boneName = "wheel_podkolol3";
			center   = "wheel_1_4_axis";
			boundary = "wheel_1_4_bound";
			suspForceAppPointOffset = "wheel_1_4_axis";
		};
		class L5: L2 {
			boneName = "wheel_podkolol4";
			center   = "wheel_1_5_axis";
			boundary = "wheel_1_5_bound";
			suspForceAppPointOffset = "wheel_1_5_axis";
			sprungMass=5000;
			springStrength=350000;
		};
		class L6: L2 {
			boneName = "wheel_podkolol5";
			center   = "wheel_1_6_axis";
			boundary = "wheel_1_6_bound";
			suspForceAppPointOffset = "wheel_1_6_axis";
			sprungMass=5200;
			springStrength=400000;
		};
		class L7: L2 {
			boneName = "wheel_podkolol6";
			center   = "wheel_1_7_axis";
			boundary = "wheel_1_7_bound";
			suspForceAppPointOffset = "wheel_1_7_axis";
			sprungMass=5500;
			springStrength=500000;
		};
		// rear left wheel, usually Idler or Drive Sproket
		// Note, this wheel may not always be touching the ground, but we need it anyway!
		class L9: L2
		{
			boneName = "wheel_podkolol9";
			center   = "wheel_1_9_axis";
			boundary = "wheel_1_9_bound";
			suspForceAppPointOffset = "wheel_1_9_axis";
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
			suspForceAppPointOffset = "wheel_1_1_axis";
			sprungMass = 1500.0;
			springStrength = 37500;
			springDamperRate = 7500;
			maxDroop = 0;
			maxCompression = 0;
		};

		class R2: L2 {
			boneName = "wheel_podkolop1";
			center   = "wheel_2_2_axis";
			boundary = "wheel_2_2_bound";
			suspForceAppPointOffset = "wheel_2_2_axis";
			side = "right";
		};
		class R3: R2 {
			boneName = "wheel_podkolop2";
			center   = "wheel_2_3_axis";
			boundary = "wheel_2_3_bound";
			suspForceAppPointOffset = "wheel_2_3_axis";
		};
		class R4: R2 {
			boneName = "wheel_podkolop3";
			center   = "wheel_2_4_axis";
			boundary = "wheel_2_4_bound";
			suspForceAppPointOffset = "wheel_2_4_axis";
		};
		class R5: R2 {
			boneName = "wheel_podkolop4";
			center   = "wheel_2_5_axis";
			boundary = "wheel_2_5_bound";
			suspForceAppPointOffset = "wheel_2_5_axis";
			sprungMass=5000;
			springStrength=350000;
		};
		class R6: R2 {
			boneName = "wheel_podkolop5";
			center   = "wheel_2_6_axis";
			boundary = "wheel_2_6_bound";
			suspForceAppPointOffset = "wheel_2_6_axis";
			sprungMass=5200;
			springStrength=400000;
		};
		class R7: R2 {
			boneName = "wheel_podkolop6";
			center   = "wheel_2_7_axis";
			boundary = "wheel_2_7_bound";
			suspForceAppPointOffset = "wheel_2_7_axis";
			sprungMass=5500;
			springStrength=500000;
		};
		// rear right wheel, usually Idler or Drive Sproket
		// Note, this wheel may not always be touching the ground, but we need it anyway!
		class R9: R2 {
			boneName = "wheel_podkolop9";
			center   = "wheel_2_9_axis";
			boundary = "wheel_2_9_bound";
			suspForceAppPointOffset = "wheel_2_9_axis";
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
			suspForceAppPointOffset = "wheel_2_1_axis";
			sprungMass = 1500.0;
			springStrength = 37500;
			springDamperRate = 7500;
			maxDroop = 0;
			maxCompression = 0;
		};
	};
	/// End of PhysX