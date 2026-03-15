class MFD_Commander_Display
{
	topLeft = "mfd_com_TL";
	topRight = "mfd_com_TR";
	bottomLeft = "mfd_com_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {1,1,1};
	alpha = 0.5;
	enableParallax = 0;
	turret[] = {0,0};
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
			down[] = {{0.015,0.145},1};
		};
		class Machinegun
		{
			type = "text";
			source = "static";
			text = "￐ﾟ￐ﾣ￐ﾛ￐ﾕ￐ﾜ￐ﾕ￐ﾢ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.51,-0.005},1};
			right[] = {{0.57,-0.005},1};
			down[] = {{0.51,0.145},1};
		};
		class Commander_machinegun
		{
			type = "text";
			source = "static";
			text = "￐ﾟ￐ﾣ￐ﾛ￐ﾕ￐ﾜ￐ﾕ￐ﾢ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.72,0.19},1};
			right[] = {{0.78,0.19},1};
			down[] = {{0.72,0.34},1};
		};
		class Commander_armament
		{
			type = "text";
			source = "static";
			text = "￐ﾞ￐ﾠ￐ﾣ￐ﾔ￐ﾘ￐ﾕ ￐ﾚ￐ﾞ￐ﾜ￐ﾐ￐ﾝ￐ﾔ￐ﾘ￐ﾠ￐ﾐ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.795,0.005},1};
			right[] = {{0.845,0.005},1};
			down[] = {{0.795,0.125},1};
		};
		class Commander_armament_magazines
		{
			type = "text";
			source = "static";
			text = "￐ﾜ￐ﾐ￐ﾓ.";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.47,0.4},1};
			right[] = {{0.53,0.4},1};
			down[] = {{0.47,0.55},1};
		};
		class Main_armament_ammo_type
		{
			type = "text";
			source = "static";
			text = "￐ﾢ￐ﾘ￐ﾟ ￐ﾐ￐ﾜ￐ﾣ￐ﾝ￐ﾘ￐ﾦ￐ﾘ￐ﾘ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "right";
			refreshRate = 0.1;
			pos[] = {{0.015,0.61},1};
			right[] = {{0.075,0.61},1};
			down[] = {{0.015,0.76},1};
		};
		class Lased_distance_elevation
		{
			type = "text";
			source = "static";
			text = "￐ﾔ￐ﾐ￐ﾛ￐ﾬ￐ﾝ￐ﾞ￐ﾡ￐ﾢ￐ﾬ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.735,0.61},1};
			right[] = {{0.79,0.61},1};
			down[] = {{0.735,0.76},1};
		};
		class Azimut
		{
			type = "text";
			source = "static";
			text = "￐ﾐ￐ﾗ￐ﾘ￐ﾜ￐ﾣ￐ﾢ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.71,0.8},1};
			right[] = {{0.77,0.8},1};
			down[] = {{0.71,0.95},1};
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
			pos[] = {{0.015,0.82},1};
			right[] = {{0.075,0.82},1};
			down[] = {{0.015,0.97},1};
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
			pos[] = {{0.925,0.8},1};
			right[] = {{0.985,0.8},1};
			down[] = {{0.925,0.95},1};
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
			pos[] = {{0.925,0.61},1};
			right[] = {{0.985,0.61},1};
			down[] = {{0.925,0.76},1};
		};
	};
};
class MFD_Commander_Intercom
{
	topLeft = "MFD_6_TL";
	topRight = "MFD_6_TR";
	bottomLeft = "MFD_6_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0.84,0.86,0.84};
	alpha = 0.5;
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
		condition = "on";
		class Com_Intercom
		{
			type = "text";
			source = "static";
			text = "￐ﾒ￐ﾝ ￐ﾚ￐ﾐ￐ﾝ￐ﾐ￐ﾛ";
			sourceScale = 1;
			sourceLength = 3;
			scale = 1;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.455,0.105},1};
			right[] = {{0.555,0.105},1};
			down[] = {{0.455,0.385},1};
		};
	};
};
class MFD_Commander_Ready_To_Fire
{
	topLeft = "mfd_com_cli_TL";
	topRight = "mfd_com_cli_TR";
	bottomLeft = "mfd_com_cli_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0,0,0};
	alpha = 0.5;
	enableParallax = 0;
	font = "RobotoCondensedLight";
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
			scale = 1;
			sourceScale = 1;
			align = "center";
			pos[] = {{0.48,0.05},1};
			right[] = {{0.68,0.05},1};
			down[] = {{0.48,0.56},1};
		};
		class Bottom_text
		{
			type = "text";
			source = "static";
			text = "￐ﾓ￐ﾞ￐ﾢ￐ﾞ￐ﾒ";
			scale = 1;
			sourceScale = 1;
			align = "center";
			pos[] = {{0.5,0.41},1};
			right[] = {{0.7,0.41},1};
			down[] = {{0.5,0.92},1};
		};
	};
};
class MFD_Commander_Smoke_Indicator
{
	topLeft = "mfd_com_smoke_TL";
	topRight = "mfd_com_smoke_TR";
	bottomLeft = "mfd_com_smoke_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0,0,0};
	alpha = 0.5;
	enableParallax = 0;
	font = "RobotoCondensedLight";
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
			text = "￐ﾔ￐ﾫ￐ﾜ￐ﾞ￐ﾒ￐ﾐ￐ﾯ";
			scale = 1;
			sourceScale = 1;
			align = "center";
			pos[] = {{0.47,0},1};
			right[] = {{0.67,0},1};
			down[] = {{0.47,0.5},1};
		};
		class Bottom_text
		{
			type = "text";
			source = "static";
			text = "￐ﾗ￐ﾐ￐ﾒ￐ﾕ￐ﾡ￐ﾐ";
			scale = 1;
			sourceScale = 1;
			align = "center";
			pos[] = {{0.5,0.4},1};
			right[] = {{0.7,0.4},1};
			down[] = {{0.5,0.9},1};
		};
	};
};
class MFD_Commander_HMG
{
	topLeft = "MFD_7_TL";
	topRight = "MFD_7_TR";
	bottomLeft = "MFD_7_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {1,1,1};
	alpha = 0.5;
	enableParallax = 0;
	font = "EtelkaMonospacePro";
	turret[] = {0,0};
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
		class Crosshair
		{
			type = "line";
			width = 3.0;
			points[] = {{{0.5,0.423413},1},{{0.5,0.346429},1},{},{{0.5,0.577381},1},{{0.5,0.654365},1},{},{{0.55,0.500397},1},{{0.6,0.500397},1},{},{{0.4,0.500397},1},{{0.45,0.500397},1},{},{{0.3,0.346429},1},{{0.3,0.269444},1},{},{{0.3,0.269444},1},{{0.35,0.269444},1},{},{{0.7,0.346429},1},{{0.7,0.269444},1},{},{{0.65,0.269444},1},{{0.7,0.269444},1},{},{{0.7,0.654365},1},{{0.7,0.731349},1},{},{{0.65,0.731349},1},{{0.7,0.731349},1},{},{{0.3,0.654365},1},{{0.3,0.731349},1},{},{{0.3,0.731349},1},{{0.35,0.731349},1},{}};
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
			pos[] = {{0.83,0.25},1};
			right[] = {{0.88,0.25},1};
			down[] = {{0.83,0.33},1};
		};
		class Lased_Range_Background
		{
			color[] = {0.0,0.0,0.0};
			class Background
			{
				type = "polygon";
				points[] = {{{{0.43,0.81},1},{{0.57,0.81},1},{{0.57,0.87},1},{{0.43,0.87},1}}};
			};
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
			pos[] = {{0.494,0.8},1};
			right[] = {{0.544,0.8},1};
			down[] = {{0.494,0.88},1};
		};
	};
};
class MFD_Commander_Main_Armament_Ammo_Type
{
	topLeft = "mfd_com_TL";
	topRight = "mfd_com_TR";
	bottomLeft = "mfd_com_BL";
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
			pos[] = {{0.36,0.59},1};
			right[] = {{0.45,0.59},1};
			down[] = {{0.36,0.78},1};
		};
	};
};
class MFD_Commander_AmmoIndicator_Main_Armament
{
	topLeft = "mfd_com_TL";
	topRight = "mfd_com_TR";
	bottomLeft = "mfd_com_BL";
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
			pos[] = {{0.015,0.13},1};
			right[] = {{0.075,0.13},1};
			down[] = {{0.015,0.28},1};
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
			pos[] = {{0.17,0.13},1};
			right[] = {{0.23,0.13},1};
			down[] = {{0.17,0.28},1};
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
			pos[] = {{0.015,0.23},1};
			right[] = {{0.075,0.23},1};
			down[] = {{0.015,0.38},1};
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
			pos[] = {{0.17,0.23},1};
			right[] = {{0.23,0.23},1};
			down[] = {{0.17,0.38},1};
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
			pos[] = {{0.015,0.33},1};
			right[] = {{0.075,0.33},1};
			down[] = {{0.015,0.48},1};
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
			pos[] = {{0.17,0.33},1};
			right[] = {{0.23,0.33},1};
			down[] = {{0.17,0.48},1};
		};
	};
};
class MFD_Commander_Coax_Ammo
{
	topLeft = "mfd_com_ammo_count_TL";
	topRight = "mfd_com_ammo_count_TR";
	bottomLeft = "mfd_com_ammo_count_BL";
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
			align = "left";
			refreshRate = 0.1;
			pos[] = {{1.395,0.2},1};
			right[] = {{2.045,0.2},1};
			down[] = {{1.395,1},1};
		};
	};
};
class MFD_Commander_Coax_Magazines
{
	topLeft = "mfd_com_mag_count_TL";
	topRight = "mfd_com_mag_count_TR";
	bottomLeft = "mfd_com_mag_count_BL";
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
			align = "right";
			refreshRate = 0.1;
			pos[] = {{-1.15,0.11},1};
			right[] = {{-0.4,0.11},1};
			down[] = {{-1.15,0.81},1};
		};
	};
};
class MFD_Commander_Comm_Ammo_and_Mags
{
	topLeft = "mfd_com_TL";
	topRight = "mfd_com_TR";
	bottomLeft = "mfd_com_BL";
	borderLeft = 0;
	borderRight = 0;
	borderTop = 0;
	borderBottom = 0;
	color[] = {0.84,0.86,0.84};
	alpha = 0.5;
	enableParallax = 0;
	turret[] = {0,0};
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
			sourceIndex = 0;
			align = "center";
			refreshRate = 0.1;
			pos[] = {{0.92,0.19},1};
			right[] = {{0.98,0.19},1};
			down[] = {{0.92,0.34},1};
		};
	};
};
