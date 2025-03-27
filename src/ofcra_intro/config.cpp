class CfgPatches {
	class ofcra_intro {
		author[] = {"Liquid, edited by Ziki_CZ, and wombat"};
		units[] = {};
		weapons[] = {};
		requiredVersion[] = {};
		requiredAddons[] = {"A3_Data_F_Tank_Loadorder"};
	};
};
/*extern*/ class RscPictureKeepAspect;
/*extern*/ class RscStandardDisplay;
/*extern*/ class RscControlsGroup;

class RscDisplayStart: RscStandardDisplay {

	class controls {

		class LoadingStart: RscControlsGroup {

			class controls {

				class Logo: RscPictureKeepAspect {
					onLoad = "(_this select 0) ctrlsettext '\ofcra_intro\ofcralogo.paa';";
				};
			};
		};
	};
};

class RscDisplayLoadMission: RscStandardDisplay {

	class controls {

		class LoadingStart: RscControlsGroup {

			class controls {

				class Logo: RscPictureKeepAspect {
					onLoad = "(_this select 0) ctrlsettext '\ofcra_intro\ofcralogo.paa';";
				};
			};
		};
	};
};

class RscDisplayNotFreeze: RscStandardDisplay {

	class controls {

		class LoadingStart: RscControlsGroup {

			class controls {

				class Logo: RscPictureKeepAspect {
					onLoad = "(_this select 0) ctrlsettext '\ofcra_intro\ofcralogo.paa';";
				};
			};
		};
	};
};
/*extern*/ class RscActivePicture;

class RscDisplayMain: RscStandardDisplay {

	class Controls {

		class Logo: RscActivePicture {
			tooltip = "$STR_ConnectToOFCRA";
			text = "\ofcra_intro\ofcralogo2.paa";
			onButtonClick = "connectToServer ['79.137.98.57', 2402, 'ofcra'];";
		};

		class LogoApex: Logo {
			text = "\ofcra_intro\ofcralogo2.paa";
			onButtonClick = "connectToServer ['79.137.98.57', 2402, 'ofcra'];";
		};
	};
};
