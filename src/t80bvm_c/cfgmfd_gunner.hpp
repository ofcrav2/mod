class MFD_Gunner_AmmoType
{
	topLeft = "MFD_5_TL";
	topRight = "MFD_5_TR";
	bottomLeft = "MFD_5_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0.84,0.86,0.84};
	alpha = 0.5;
	turret[] = {0};
	enableParallax = 0;
	font = "LCD14";
	class material
	{
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		emissive[] = {1000,1000,1000,1};
	};
	class Bones{};
	class Draw
	{
		color[] = {0.92,0.01,0};
		alpha = 1;
		condition = "1";
		class Gunner_AmmoType
		{
			type = "text";
			source = "ammoFormat";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.455,0.05},1};
			right[] = {{1.355,0.05},1};
			down[] = {{0.455,0.76},1};
		};
	};
};
class MFD_Gunner_AmmoIndicator
{
	topLeft = "MFD_3_TL";
	topRight = "MFD_3_TR";
	bottomLeft = "MFD_3_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0.84,0.86,0.84};
	alpha = 0.5;
	enableParallax = 0;
	turret[] = {0};
	font = "LCD14";
	class material
	{
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		emissive[] = {1000,1000,1000,1};
	};
	class Bones{};
	class Draw
	{
		color[] = {0.92,0.01,0};
		alpha = 1;
		condition = "1";
		class Gunner_Text_1
		{
			type = "text";
			source = "ammo";
			sourceScale = 1;
			sourceLength = 2;
			sourceIndex = 1000;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.5,0},1};
			right[] = {{1.3,0},1};
			down[] = {{0.5,0.3},1};
		};
		class Gunner_Text_2
		{
			type = "text";
			source = "ammo";
			sourceScale = 1;
			sourceLength = 2;
			sourceIndex = 1001;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.5,0.3},1};
			right[] = {{1.3,0.3},1};
			down[] = {{0.5,0.6},1};
		};
		class Gunner_Text_3
		{
			type = "text";
			source = "ammo";
			sourceScale = 1;
			sourceLength = 2;
			sourceIndex = 1002;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.5,0.6},1};
			right[] = {{1.3,0.6},1};
			down[] = {{0.5,0.9},1};
		};
	};
};
class MFD_Gunner_Ready_To_Fire
{
	topLeft = "mfd_gun_cli_TL";
	topRight = "mfd_gun_cli_TR";
	bottomLeft = "mfd_gun_cli_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0,0,0};
	alpha = 0.5;
	enableParallax = 0;
	font = "RobotoCondensedLight";
	class material
	{
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		emissive[] = {1000,1000,1000,1};
	};
	class Bones{};
	class Draw
	{
		color[] = {0,0,0};
		alpha = 1;
		condition = "1";
		class Top_text
		{
			type = "text";
			source = "static";
			text = "￐ﾚ ￐ﾡ￐ﾢ￐ﾠ￐ﾕ￐ﾛ￐ﾬ￐ﾑ￐ﾕ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.45,0.05},1};
			right[] = {{0.67,0.05},1};
			down[] = {{0.45,0.55},1};
		};
		class Bottom_text
		{
			type = "text";
			source = "static";
			text = "￐ﾓ￐ﾞ￐ﾢ￐ﾞ￐ﾒ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.465,0.45},1};
			right[] = {{0.685,0.45},1};
			down[] = {{0.465,0.95},1};
		};
	};
};
class MFD_Gunner_Display
{
	topLeft = "mfd_gun_TL";
	topRight = "mfd_gun_TR";
	bottomLeft = "mfd_gun_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {1,1,1};
	alpha = 0.5;
	enableParallax = 0;
	turret[] = {0};
	font = "RobotoCondensedLight";
	class material
	{
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		emissive[] = {1000,1000,1000,1};
	};
	class Bones{};
	class Draw
	{
		color[] = {1,1,1};
		alpha = 1;
		condition = "1";
		class Main_armament
		{
			type = "text";
			source = "static";
			text = "￐ﾓ￐ﾛ￐ﾐ￐ﾒ￐ﾝ￐ﾞ￐ﾕ ￐ﾞ￐ﾠ￐ﾣ￐ﾔ￐ﾘ￐ﾕ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "right";
			refreshRate = 0.1;
			pos[] = {{0.015,-0.005},1};
			right[] = {{0.075,-0.005},1};
			down[] = {{0.015,0.073},1};
		};
		class Machinegun
		{
			type = "text";
			source = "static";
			text = "￐ﾟ￐ﾣ￐ﾛ￐ﾕ￐ﾜ￐ﾕ￐ﾢ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "right";
			refreshRate = 0.1;
			pos[] = {{0.015,0.31},1};
			right[] = {{0.075,0.31},1};
			down[] = {{0.015,0.388},1};
		};
		class Main_armament_ammo_type
		{
			type = "text";
			source = "static";
			text = "￐ﾢ￐ﾘ￐ﾟ ￐ﾐ￐ﾜ￐ﾣ￐ﾝ￐ﾘ￐ﾦ￐ﾘ￐ﾘ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.545,-0.005},1};
			right[] = {{0.605,-0.005},1};
			down[] = {{0.545,0.073},1};
		};
		class Lased_distance_elevation
		{
			type = "text";
			source = "static";
			text = "￐ﾔ￐ﾐ￐ﾛ￐ﾬ￐ﾝ￐ﾞ￐ﾡ￐ﾢ￐ﾬ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "right";
			refreshRate = 0.1;
			pos[] = {{0.015,0.84},1};
			right[] = {{0.075,0.84},1};
			down[] = {{0.015,0.918},1};
		};
		class Azimut
		{
			type = "text";
			source = "static";
			text = "￐ﾐ￐ﾗ￐ﾘ￐ﾜ￐ﾣ￐ﾢ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "right";
			refreshRate = 0.1;
			pos[] = {{0.015,0.915},1};
			right[] = {{0.075,0.915},1};
			down[] = {{0.015,0.993},1};
		};
		class Damage
		{
			type = "text";
			source = "static";
			text = "￐ﾟ￐ﾞ￐ﾒ￐ﾠ￐ﾕ￐ﾖ￐ﾔ￐ﾕ￐ﾝ￐ﾘ￐ﾯ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "right";
			refreshRate = 0.1;
			pos[] = {{0.015,0.39},1};
			right[] = {{0.075,0.39},1};
			down[] = {{0.015,0.468},1};
		};
		class Heading
		{
			type = "text";
			source = "[x]turretworld";
			sourceScale = 1;
			sourceLength = 3;
			scale = 0.2;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.34,0.915},1};
			right[] = {{0.4,0.915},1};
			down[] = {{0.34,0.993},1};
		};
		class Lased_Range
		{
			type = "text";
			source = "laserDist";
			sourceScale = 1;
			sourceLength = 4;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.34,0.84},1};
			right[] = {{0.4,0.84},1};
			down[] = {{0.34,0.918},1};
		};
	};
};
class MFD_Gunner_Main_Armament_Ammo_Type
{
	topLeft = "mfd_gun_TL";
	topRight = "mfd_gun_TR";
	bottomLeft = "mfd_gun_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0.84,0.86,0.84};
	alpha = 0.5;
	turret[] = {0};
	enableParallax = 0;
	font = "RobotoCondensedLight";
	class material
	{
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		emissive[] = {1000,1000,1000,1};
	};
	class Bones{};
	class Draw
	{
		color[] = {1,1,1};
		alpha = 1;
		condition = "1";
		class Gunner_AmmoType
		{
			type = "text";
			source = "ammoFormat";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.56,0.065},1};
			right[] = {{0.68,0.065},1};
			down[] = {{0.56,0.185},1};
		};
	};
};
class MFD_Gunner_Coax_Ammo
{
	topLeft = "mfd_gun_TL";
	topRight = "mfd_gun_TR";
	bottomLeft = "mfd_gun_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0.84,0.86,0.84};
	alpha = 0.5;
	enableParallax = 0;
	turret[] = {0};
	font = "RobotoCondensedLight";
	class material
	{
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		emissive[] = {1000,1000,1000,1};
	};
	class Bones{};
	class Draw
	{
		color[] = {1,1,1};
		alpha = 1;
		condition = "1";
		class Gunner_Text_1
		{
			type = "text";
			source = "ammo";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			sourceIndex = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.31,0.31},1};
			right[] = {{0.37,0.31},1};
			down[] = {{0.31,0.388},1};
		};
	};
};
class MFD_Gunner_AmmoIndicator_Main_Armament
{
	topLeft = "mfd_gun_TL";
	topRight = "mfd_gun_TR";
	bottomLeft = "mfd_gun_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0.84,0.86,0.84};
	alpha = 0.5;
	enableParallax = 0;
	turret[] = {0};
	font = "RobotoCondensedLight";
	class material
	{
		ambient[] = {1,1,1,1};
		diffuse[] = {1,1,1,1};
		emissive[] = {1000,1000,1000,1};
	};
	class Bones{};
	class Draw
	{
		color[] = {1,1,1};
		alpha = 1;
		condition = "1";
		class Main_Armament_Ammo_Type_1
		{
			type = "text";
			source = "static";
			text = "￐ﾑ￐ﾠ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "right";
			refreshRate = 0.1;
			pos[] = {{0.015,0.065},1};
			right[] = {{0.075,0.065},1};
			down[] = {{0.015,0.143},1};
		};
		class Gunner_Text_1
		{
			type = "text";
			source = "ammo";
			sourceScale = 1;
			sourceLength = 2;
			sourceIndex = 1000;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.17,0.065},1};
			right[] = {{0.23,0.065},1};
			down[] = {{0.17,0.143},1};
		};
		class Main_Armament_Ammo_Type_2
		{
			type = "text";
			source = "static";
			text = "￐ﾞ￐ﾤ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "right";
			refreshRate = 0.1;
			pos[] = {{0.015,0.125},1};
			right[] = {{0.075,0.125},1};
			down[] = {{0.015,0.203},1};
		};
		class Gunner_Text_2
		{
			type = "text";
			source = "ammo";
			sourceScale = 1;
			sourceLength = 2;
			sourceIndex = 1001;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.17,0.125},1};
			right[] = {{0.23,0.125},1};
			down[] = {{0.17,0.203},1};
		};
		class Main_Armament_Ammo_Type_3
		{
			type = "text";
			source = "static";
			text = "￐ﾚ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "right";
			refreshRate = 0.1;
			pos[] = {{0.015,0.185},1};
			right[] = {{0.075,0.185},1};
			down[] = {{0.015,0.263},1};
		};
		class Gunner_Text_3
		{
			type = "text";
			source = "ammo";
			sourceScale = 1;
			sourceLength = 2;
			sourceIndex = 1002;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.17,0.185},1};
			right[] = {{0.23,0.185},1};
			down[] = {{0.17,0.263},1};
		};
	};
};
