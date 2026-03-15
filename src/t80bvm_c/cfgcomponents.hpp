		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				    class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=10;
						angleRangeVertical=10;
						maxTrackableSpeed=100;
						aimDown=0;
						animDirection="mainTurret";
					};
					class ManSensorComponent: SensorTemplateMan
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=10;
						angleRangeVertical=10;
						maxTrackableSpeed=50;
						aimDown=0;
						animDirection="mainTurret";
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};