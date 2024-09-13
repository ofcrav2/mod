class CfgPatches
{
	class ofcra_rhs_usf_m1220 {
		name = "ofcra_rhs_usf_m1220";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"rhsusf_main_loadorder"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};



//"rhsusf_M1220_usarmy_d"
//["rhsusf_caiman_base","Truck_01_base_F","Truck_F","Car_F","Car","LandVehicle","Land","AllVehicles","All"]

//["rhsusf_M1220_M2_usarmy_d","rhsusf_caiman_GPK_base","rhsusf_caiman_base","Truck_01_base_F","Truck_F","Car_F","Car","LandVehicle","Land","AllVehicles","All"]


//["rhsusf_caiman_GPK_base","rhsusf_caiman_base","Truck_01_base_F","Truck_F","Car_F","Car","LandVehicle","Land","AllVehicles","All"]

//["rhsusf_M1220_M153_M2_usarmy_d","rhsusf_M1220_M2_usarmy_d","rhsusf_caiman_GPK_base","rhsusf_caiman_base","Truck_01_base_F","Truck_F","Car_F","Car","LandVehicle","Land","AllVehicles","All"]
//"rhsusf_M1220_M153_MK19_usarmy_d"


class CfgVehicles
{
	class Truck_01_base_F;

	class rhsusf_caiman_base: Truck_01_base_F{
		class TextureSources
		{
			class OFCRA_SNOW
			{
				displayName = "OFCRA Snow";
				textures[]={
					"\ofcra_rhs_usf\m1220\body_white.paa",
					"\ofcra_rhs_usf\m1220\chassis_white.paa",
					"\ofcra_rhs_usf\m1220\accessory_white.paa",
					"\ofcra_rhs_usf\m1220\armor_white.paa",
					"\ofcra_rhs_usf\m1220\turret_white.paa",
					"\ofcra_rhs_usf\m1220\wheel_white.paa",
					"\ofcra_rhs_usf\m1220\mount_white.paa",
					"\ofcra_rhs_usf\m1220\amb_white.paa",
					"\ofcra_rhs_usf\m1220\crows_white.paa",
					"\ofcra_rhs_usf\m1220\net_white.paa"
				};
			};
		};
	};

	class rhsusf_M1220_usarmy_d: rhsusf_caiman_base
	{};
	class OFCRA_M1220_WINTER: rhsusf_M1220_usarmy_d
	{
		displayName = "OFCRA M1220 (Winter)";
		author = "wombat";
		hiddenSelectionsTextures[] = {
			"\ofcra_rhs_usf\m1220\body_white.paa",
			"\ofcra_rhs_usf\m1220\chassis_white.paa",
			"\ofcra_rhs_usf\m1220\accessory_white.paa",
			"\ofcra_rhs_usf\m1220\armor_white.paa",
			"\ofcra_rhs_usf\m1220\turret_white.paa",
			"\ofcra_rhs_usf\m1220\wheel_white.paa",
			"\ofcra_rhs_usf\m1220\mount_white.paa",
			"\ofcra_rhs_usf\m1220\amb_white.paa",
			"\ofcra_rhs_usf\m1220\crows_white.paa",
			"\ofcra_rhs_usf\m1220\net_white.paa"
		};
		textureList[] = {"OFCRA_SNOW",1};
	};

	class OFCRA_B_M1220_WINTER: OFCRA_M1220_WINTER
	{
		side = 1;
		crew = "B_G_soldier_F";
		faction = "BLU_F";
		scope = 2;
	};


	
};
