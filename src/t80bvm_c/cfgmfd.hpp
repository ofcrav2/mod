class MFD
{
	class MFD_Driver_Heading
	{
		topLeft = "MFD_1_TL";
		topRight = "MFD_1_TR";
		bottomLeft = "MFD_1_BL";
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
			color[] = {0.61,0.62,0};
			alpha = 1;
			condition = "on";
			class Driver_Heading
			{
				type = "text";
				source = "heading";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.5,0},1};
				right[] = {{1,0},1};
				down[] = {{0.5,0.81},1};
			};
		};
	};
	class MFD_Driver_Fire
	{
		topLeft = "MFD_2_TL";
		topRight = "MFD_2_TR";
		bottomLeft = "MFD_2_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {0.92,0.01,0};
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
			blinkingPattern[] = {1,1};
			blinkingStartsOn = 1;
			class Driver_Fire
			{
				type = "text";
				source = "static";
				text = "￐ﾟ￐ﾞ￐ﾖ￐ﾐ￐ﾠ";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.455,0.105},1};
				right[] = {{0.855,0.105},1};
				down[] = {{0.455,0.705},1};
			};
		};
	};
	class MFD_Driver_Heading_text
	{
		topLeft = "MFD_Driver_1_TL";
		topRight = "MFD_Driver_1_TR";
		bottomLeft = "MFD_Driver_1_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
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
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Driver_Heading
			{
				type = "text";
				source = "static";
				text = "￐ﾐ￐ﾗ￐ﾘ￐ﾜ￐ﾣ￐ﾢ";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.45,0.02},1};
				right[] = {{0.7,0.02},1};
				down[] = {{0.45,0.87},1};
			};
		};
	};
	class MFD_Driver_Heading_second
	{
		topLeft = "MFD_Driver_2_TL";
		topRight = "MFD_Driver_2_TR";
		bottomLeft = "MFD_Driver_2_BL";
		borderLeft = 0;
		borderRight = 0;
		borderTop = 0;
		borderBottom = 0;
		color[] = {1,1,1};
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
			color[] = {1,1,1};
			alpha = 1;
			condition = "1";
			class Driver_Heading
			{
				type = "text";
				source = "heading";
				sourceScale = 1;
				sourceLength = 3;
				scale = 1;
				align = "center";
				refreshRate = 0.1;
				pos[] = {{0.45,0},1};
				right[] = {{0.95,0},1};
				down[] = {{0.45,0.81},1};
			};
		};
	};
	
};
		