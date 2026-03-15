				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};