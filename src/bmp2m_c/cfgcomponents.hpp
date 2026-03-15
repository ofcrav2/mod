	class Components : Components
	{
		class TransportPylonsComponent
		{
			UIPicture="\rhsafrf\addons\rhs_a2port_car\data\loadouts\RHS_BM21_EDEN_CA.paa";
			class pylons
			{
				class pylon1
				{
					hardpoints[]=
					{
						"RHS_HP_T15"
					};
					priority=1;
					maxweight=200;
					UIposition[]={0.12,0.1};
					bay=-1;
					attachment="rhs_mag_9m133m2_pylon";
					turret[]={0};
					hitpoint="HitTurret";
				};
				class pylon2: pylon1
				{
					priority=2;
					UIposition[]={0.12,0.14};
				};
				class pylon3: pylon1
				{
					priority=3;
					UIposition[]={0.12,0.18};
				};
				class pylon4: pylon1
				{
					priority=4;
					UIposition[]={0.12,0.22};
				};

			};
			class Bays
			{
				class MainBay
				{
					bayOpenTime=3;
					openBayWhenWeaponSelected=1.0;
					autoCloseWhenEmptyDelay=1;
				};
			};
			class Presets
			{
			};
		};//end of TransportPylonsComponent

	};