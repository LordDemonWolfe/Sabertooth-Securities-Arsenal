class cfgPatches
{
	class Sabertooth_Securities_Vehicles
	{
		author="Thomas & Krevan";
		name="STS Mod";
		fileName="Sabertooth_Securities_Vehicles.pbo";
		units[]=
		{
			"Sabertooth_M12_APC",
			"Sabertooth_M12_LRV",
			"Sabertooth_M12_FAV",
			"Sabertooth_M813_TT",
			"Sabertooth_M12A1",
			"Sabertooth_M12G1",
			"Sabertooth_M914",
			"Sabertooth_M12R",
			"Sabertooth_Cobra",
			"Sabertooth_Falcon",
			"Sabertooth_CAS",
			"Sabertooth_Badger",
			"Sabertooth_M808B2",
			"Sabertooth_Hornet",
			"Sabertooth_Tarantula"
		};
		magazines[]=
		{
			"STS_25Rnd_ALIM_Gauss_Slugs"
		};
		ammo[]={};
			requiredVersion=0.1;
			requiredAddons[]=
			{
				"V_FZ_Armor",
				"OPTRE_FC_Core",
				"OPTRE_Core",
				"OPTRE_Weapons",
				"V_SO_Core",
				"A3_Weapons_F",
				"A3_Sounds_F",
				"A3_Sounds_F_Arsenal",
				"A3_Weapons_F_EPA",
				"A3Data",
				"A3_Data_F",
				"A3_Data_F_Mark",
				"OPAEX_Core",
				"Sabertooth_Securities_Units"
			};
			weapons[]={};
			};
		};
		class CfgEditorCategories
		{
			class Sabertooth
			{
				displayName="Sabertooth Security";
			};
		};
		class CfgEditorSubcategories
		{
			class Sabertooth_APC
			{
				displayName="APCs";
			};
			class Sabertooth_Tank
			{
				displayName="Tanks";
			};
			class Sabertooth_Jet
			{
				displayName="Jets";
			};
			class Sabertooth_Rotary
			{
				displayName="Rotary";
			};
			class Sabertooth_Car
			{
				displayName="Cars";
			};
			class Sabertooth_Anti_Air
			{
				displayName="Anti-Air";
			};
		};
		class cfgWeapons
		{
			class cannon_120mm;
			class Mode_FullAuto;
			class BaseSoundModeType;
			class OPTRE_M247T_Coax;
			class gatling_20mm;
			class MGun;
			class FullAuto;
			class missiles_ASRAAM;

			class STS_Argent_V_AA: missiles_ASRAAM
			{
				displayName="'Argent V' AA Missile Launcher";
				magazines[]=
				{
					"4Rnd_Titan_long_missiles"
				};
				reloadTime=8;
				weaponLockDelay=1.7;
				maxRange=9000;
			};

			class STS_230: gatling_20mm
			{
				displayName="M230 Autocannon";
				displayNameShort="50mm";
				magazines[]={"OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_APFSDS"};
				modes[]={"FullAuto","close","short","medium"};
				cursor="EmptyCursor";
				cursorAim="OPTRE_M231";
				shotFromTurret=1;
				selectionFireAnim="zasleh";
				class FullAuto: MGun
				{
					reloadTime = 0.18;
					dispersion = 0;
					minRange = 2;
					minRangeProbab = 0.3;
					midRange = 300;
					midRangeProbab = 0.7;
					maxRange = 800;
					maxRangeProbab = 0.05;
				};
				class close: FullAuto
				{
					burst = 3;
					aiRateOfFire = 0.5;
					aiRateOfFireDistance = 50;
					minRange = 10;
					minRangeProbab = 0.05;
					midRange = 20;
					midRangeProbab = 0.7;
					maxRange = 50;
					maxRangeProbab = 0.04;
					showToPlayer = 0;
				};
				class short: close
				{
					burst = 2;
					aiRateOfFire = 2;
					aiRateOfFireDistance = 300;
					minRange = 50;
					minRangeProbab = 0.05;
					midRange = 150;
					midRangeProbab = 0.7;
					maxRange = 300;
					maxRangeProbab = 0.04;
				};
				class medium: close
				{
					burst = 1;
					aiRateOfFire = 4;
					aiRateOfFireDistance = 600;
					minRange = 200;
					minRangeProbab = 0.05;
					midRange = 300;
					midRangeProbab = 0.7;
					maxRange = 500;
					maxRangeProbab = 0.1;
				};
			};

			class STS_247T: OPTRE_M247T_Coax
			{
				magazines[]=
				{
					"OPTRE_200Rnd_95x40_Box_Tracer"
				};
			};

			class STS_M98: cannon_120mm
			{
				displayName="M98 105mm Light Railgun";
				shotFromTurret=1;
				cursor="EmptyCursor";
				cursorAim="cannon";
				nameSound="cannon";
				autoFire=0;
				reloadSound[]={"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",31.622776,1,10};
				magazines[]=
				{
					"STS_25Rnd_ALIM_Gauss_Slugs"
				};
				class GunParticles
				{
					class effect1
					{
						positionName="konec hlavne";
						directionName="Usti hlavne";
						effectName="MachineGunCloud";
		      };
				};
				reloadTime=10;
				magazinereloadTime=9;
			};
		};
		class cfgMagazines
		{
			class 30Rnd_120mm_APFSDS_shells;
			class OPTRE_200Rnd_95x40_Box;

			class OPTRE_200Rnd_95x40_Box_Tracer: OPTRE_200Rnd_95x40_Box
			{
				dlc="OPTRE";
				displayname="200Rnd 9.5x40mm Box Magazine (Tracers)";
				displaynameshort="9.5x40mm Tracer";
				ammo="OPTRE_B_95x40_Tracer";
				picture="\OPTRE_Weapons\MG\icons\magazine.paa";
				descriptionshort="200 Round Box Magazine<br>9.5x40mm<br>Tracer";
				tracersEvery=1;
				lastRoundsTracer=200;
			};

			class STS_25Rnd_ALIM_Gauss_Slugs: 30Rnd_120mm_APFSDS_shells
			{
				dlc="Sabertooth Securities";
				scope=2;
				displayName="25Rnd ALIM Gauss Slugs";
				displayNameShort="105mm Slug";
				ammo="OPTRE_25x130mm_Slug";
				initSpeed=13680;
				count=25;
				muzzleImpulseFactor[]={0,0};
			};
		};
		class CfgVehicles
		{
			class VES_M12;
			class VES_M12_APC;
			class VES_M12_LRV;
			class VES_M813_TT;
			class VES_M12G1_LRV;
			class VES_M12A1_LRV;
			class OPTRE_M914_RV;
			class OPTRE_M12R_AA;
			class B_T_AFV_Wheeled_01_up_cannon_F;
			class Turrets;
			class MainTurret;
			class CommanderOptics;
			class Components;
			class SensorTemplateActiveRadar;
			class SensorTemplateDataLink;
			class CargoTurret;
			class VehicleSystemsTemplateLeftGunner;
			class VehicleSystemsTemplateRightGunner;
			class VES_UH144_A;
			class VES_VAF19;
			class VES_IFV76_A;
			class VES_M808B_MBT;
			class VES_AV14_AGM;
			class B_T_APC_Tracked_01_AA_F;

			class Sabertooth_Tarantula: B_T_APC_Tracked_01_AA_F
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] Tarantula";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Anti_Air";
				crew="Sabertooth_Crewman";
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Tarantula\STS_AA_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Tarantula\STS_MBT_Body_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Tarantula\STS_AA_co2.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Misc\STS_camonet_co.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Tarantula\STS_AA_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Tarantula\STS_MBT_Body_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Tarantula\STS_AA_co2.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Misc\STS_camonet_co.paa"
				};
			};

			class Sabertooth_Hornet: VES_AV14_AGM
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] AV-14 Hornet";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Rotary";
				crew="Sabertooth_Crewman";
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=12000;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Hornet\STS_Hornet_co.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Hornet\STS_Hornet_co.paa"
				};
			};

			class Sabertooth_M12R: OPTRE_M12R_AA
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] M12R Anti-Air Warthog";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Car";
				crew="Sabertooth_Crewman";
				ace_refuel_fuelCapacity=150;
				ace_refuel_hooks[]=
				{
					{-1.35,-0.60000002,-1.1}
				};
				enableRadio=1;
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=10500;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
				};
			};

			class Sabertooth_M808B2: VES_M808B_MBT
			{
				dlc="Sabertooth Security";
				author="Thomas & Vespade";
				displayName="[Sabertooth] M808B2 Air Defense System";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Anti_Air";
				crew="Sabertooth_Crewman";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				radarType=2;
				damageResistance=0.0099999998;
				crewVulnerable=0;
				crewExplosionProtection=1;
				armor=600;
				enginePower=1200;
				armorLights=1;
				armorStructural=5;
				minElev=-10;
				maxElev=80;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.60000002;
						material=-1;
						name="otocVez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.60000002;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="otocHlaven";
						visual="Hlaven";
						passThrough=0;
						minimalHit=0;
						explosionShielding=0.60000002;
						radius=0.25;
					};
					class HitHull
					{
						armor=4;
						material=-1;
						name="telo";
						visual="zbytek";
						passThrough=1;
						minimalHit=0.2;
						explosionShielding=0.2;
						radius=0.30000001;
					};
					class HitEngine
					{
						armor=2;
						material=-1;
						name="engine";
						passThrough=0.25;
						minimalHit=0.30000001;
						explosionShielding=0.2;
						radius=0.2;
					};
					class HitLTrack
					{
						armor=2;
						material=-1;
						name="pas_L";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.5;
						radius=0.75;
					};
					class HitRTrack
					{
						armor=2;
						material=-1;
						name="pas_P";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.5;
						radius=0.75;
					};
				};
				class Components: Components
				{
					class SensorsManagerComponent
					{
						class Components
						{
							class ActiveRadarSensorComponent: SensorTemplateActiveRadar
							{
								class AirTarget
								{
									minRange=9000;
									maxRange=9000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								class GroundTarget
								{
									minRange=6000;
									maxRange=6000;
									objectDistanceLimitCoef=-1;
									viewDistanceLimitCoef=-1;
								};
								typeRecognitionDistance=6000;
								angleRangeHorizontal=360;
								angleRangeVertical=100;
								aimDown=-45;
								maxTrackableSpeed=694.44397;
							};
							class DataLinkSensorComponent: SensorTemplateDataLink
							{
							};
						};
					};
				};
				class Turrets: Turrets
				{
					class CargoTurret1: CargoTurret
					{
						gunnerAction="passenger_inside_3";
						gunnerCompartments="Compartment2";
						memoryPointsGetInGunner="pos cargo1";
						memoryPointsGetInGunnerDir="pos cargo1 dir";
						memoryPointGunnerOptics="gunnerview";
						gunnerName="Passenger Gunner 1";
						proxyIndex=1;
						maxElev=15;
						minElev=-25;
						maxTurn=60;
						minTurn=-60;
						isPersonTurret=2;
						ejectDeadGunner=1;
						gunnerInAction="passenger_inside_3";
						startEngine=0;
						allowLauncherIn=1;
						allowLauncherOut=1;
					};
					class CargoTurret2: CargoTurret1
					{
						gunnerCompartments="Compartment2";
						memoryPointsGetInGunner="pos cargo2";
						memoryPointsGetInGunnerDir="pos cargo2 dir";
						gunnerName="Passenger Gunner 2";
						proxyIndex=2;
					};
					class CargoTurret3: CargoTurret1
					{
						proxyIndex=3;
						gunnerName="Passenger Gunner 3";
						gunnerCompartments="Compartment3";
						memoryPointsGetInGunner="pos cargo3";
						memoryPointsGetInGunnerDir="pos cargo3 dir";
					};
					class CargoTurret4: CargoTurret1
					{
						proxyIndex=4;
						gunnerName="Passenger Gunner 4";
						gunnerCompartments="Compartment3";
						memoryPointsGetInGunner="pos cargo4";
						memoryPointsGetInGunnerDir="pos cargo4 dir";
					};
					class CargoTurret5: CargoTurret1
					{
						proxyIndex=5;
						gunnerName="Passenger Gunner 5";
						gunnerCompartments="Compartment4";
						memoryPointsGetInGunner="pos cargo5";
						memoryPointsGetInGunnerDir="pos cargo6 dir";
					};
					class CargoTurret6: CargoTurret1
					{
						proxyIndex=6;
						gunnerName="Passenger Gunner 6";
						gunnerCompartments="Compartment4";
						memoryPointsGetInGunner="pos cargo6";
						memoryPointsGetInGunnerDir="pos cargo6 dir";
					};
					class CargoTurret7: CargoTurret1
					{
						proxyIndex=7;
						gunnerName="Passenger Gunner 7";
						gunnerCompartments="Compartment5";
						memoryPointsGetInGunner="pos cargo7";
						memoryPointsGetInGunnerDir="pos cargo7 dir";
					};
					class CargoTurret8: CargoTurret1
					{
						proxyIndex=8;
						gunnerName="Passenger Gunner 8";
						gunnerCompartments="Compartment5";
						memoryPointsGetInGunner="pos cargo8";
						memoryPointsGetInGunnerDir="pos cargo8 dir";
					};
					class MainTurret: MainTurret
					{
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
							{
								class Components: Components
								{
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={16000,8000,4000,2000};
										resource="RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
							{
								defaultDisplay="SensorDisplay";
								class Components: Components
								{
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={16000,8000,4000,2000};
										resource="RscCustomInfoSensors";
									};
								};
							};
						};
						weapons[]=
						{
							"autocannon_35mm",
							"STS_Argent_V_AA",
							"STS_247T"
						};
						magazines[]=
						{
							"680Rnd_35mm_AA_shells_Tracer_Red",
							"680Rnd_35mm_AA_shells_Tracer_Red",
							"680Rnd_35mm_AA_shells_Tracer_Red",
							"680Rnd_35mm_AA_shells_Tracer_Red",
							"680Rnd_35mm_AA_shells_Tracer_Red",
							"680Rnd_35mm_AA_shells_Tracer_Red",
							"680Rnd_35mm_AA_shells_Tracer_Red",
							"680Rnd_35mm_AA_shells_Tracer_Red",
							"4Rnd_Titan_long_missiles",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer"
						};
					};
				};
				hiddenSelections[]=
				{
					"Camo1",
					"Camo2",
					"Camo3",
					"Camo4",
					"Camo5",
					"Camo6"
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\SunDevil\STS_SunDevil_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\SunDevil\STS_Decals_ca.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\SunDevil\STS_SunDevil_co2.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\SunDevil\STS_SunDevil_co3.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\SunDevil\STS_SunDevil_co4.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\SunDevil\STS_SunDevil_co5.paa",
					"OPTRE_Vehicles\Scorpion\data\turret_blk_co.paa"
				};
			};

			class Sabertooth_Badger: VES_IFV76_A
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] IFV-76 HoneyBadger";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_APC";
				crew="Sabertooth_Crewman";
				armor=750;
				class Turrets: Turrets
				{
					class MainTurret: MainTurret
					{
						weapons[]=
						{
							"STS_230",
							"STS_247T"
						};
						magazines[]=
						{
							"OPTRE_100Rnd_50mm_HE",
							"OPTRE_100Rnd_50mm_HE",
							"OPTRE_100Rnd_50mm_HE",
							"OPTRE_100Rnd_50mm_APFSDS",
							"OPTRE_100Rnd_50mm_APFSDS",
							"OPTRE_100Rnd_50mm_APFSDS",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\HoneyBadger\V_IFV76_BLK_CO",
					"Sabertooth_Securities_Vehicles\data\Vehicles\HoneyBadger\V_IFV76_BLK_A_CO",
					"Sabertooth_Securities_Vehicles\data\Vehicles\HoneyBadger\V_IFV76_BLK_T_CO"
				};
			};

			class Sabertooth_CAS: VES_VAF19
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] F/A-74 LongFang";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Jet";
				crew="Sabertooth_Crewman";
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=12000;
				maxSpeed=1500;
				landingSpeed=290;
				stallSpeed=180;
				acceleration=300;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\LongFang\STS_CAS_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\LongFang\STS_CAS_co2.paa",
							"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca",
							"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co",
							"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co",
							"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co",
							"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co",
							"",
							"",
							""
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\LongFang\STS_CAS_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\LongFang\STS_CAS_co2.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co",
					"",
					"",
					""
				};
			};

			class Sabertooth_Falcon: VES_UH144_A
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] UH-144 Falcon (Armed)";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Rotary";
				crew="Sabertooth_Crewman";
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=12000;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Falcon\STS_Falcon_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Falcon\STS_Falcon_co2.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Falcon\STS_Falcon_co3.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Falcon\STS_Falcon_co4.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Falcon\STS_Falcon_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Falcon\STS_Falcon_co2.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Falcon\STS_Falcon_co3.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Falcon\STS_Falcon_co4.paa"
				};
			};

			class Sabertooth_M914: OPTRE_M914_RV
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] M914 Recovery Warthog";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Car";
				crew="Sabertooth_Crewman";
				ace_refuel_fuelCapacity=150;
				ace_refuel_hooks[]=
				{
					{-1.35,-0.60000002,-1.1}
				};
				enableRadio=1;
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=10500;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
				};
			};

			class Sabertooth_M12A1: VES_M12A1_LRV
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] M12A1 Rocket Warthog";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Car";
				crew="Sabertooth_Crewman";
				ace_refuel_fuelCapacity=150;
				ace_refuel_hooks[]=
				{
					{-1.35,-0.60000002,-1.1}
				};
				enableRadio=1;
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=10500;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
				};
			};

			class Sabertooth_M12G1: VES_M12G1_LRV
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] M12G1 Gauss Warthog";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Car";
				crew="Sabertooth_Crewman";
				ace_refuel_fuelCapacity=150;
				ace_refuel_hooks[]=
				{
					{-1.35,-0.60000002,-1.1}
				};
				enableRadio=1;
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=10500;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
				};
			};


			class Sabertooth_M813_TT: VES_M813_TT
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] M813 Transport Warthog";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Car";
				crew="Sabertooth_Crewman";
				ace_refuel_fuelCapacity=150;
				ace_refuel_hooks[]=
				{
					{-1.35,-0.60000002,-1.1}
				};
				enableRadio=1;
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=10500;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
				};
			};

			class Sabertooth_M12_LRV: VES_M12_LRV
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] M12 LRV Warthog";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Car";
				crew="Sabertooth_Crewman";
				ace_refuel_fuelCapacity=150;
				ace_refuel_hooks[]=
				{
					{-1.35,-0.60000002,-1.1}
				};
				enableRadio=1;
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=10500;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
				};
			};

			class Sabertooth_M12_APC: VES_M12_APC
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] M12 APC Warthog";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Car";
				crew="Sabertooth_Crewman";
				ace_refuel_fuelCapacity=150;
				ace_refuel_hooks[]=
				{
					{-1.35,-0.60000002,-1.1}
				};
				enableRadio=1;
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=10500;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
				};
			};

			class Sabertooth_Cobra: B_T_AFV_Wheeled_01_up_cannon_F
			{
				author="Thomas";
				dlc="Sabertooth Securities";
				displayName="[Sabertooth] Cobra";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_APC";
				crew="Sabertooth_Crewman";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"camo3",
					"camo4",
					"camo5",
					"CamoNet",
					"CamoSlat"
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Cobra_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Cobra_co2.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Wheels_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Extras_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Commander_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Misc\STS_camonet_co.paa",
					"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Extras_co.paa"
				};
				weapons[]=
				{
					"TruckHorn3"
				};
				class Turrets: Turrets
				{
					class MainTurret: MainTurret
					{
						class CommanderOptics: CommanderOptics
						{
							weapons[]=
							{
								"SmokeLauncher",
								"Laserdesignator_vehicle"
							};
							magazines[]=
							{
								"SmokeLauncherMag",
								"Laserbatteries"
							};
						};
						weapons[]=
						{
							"STS_M98",
							"STS_247T"
						};
						magazines[]=
						{
							"STS_25Rnd_ALIM_Gauss_Slugs",
							"STS_25Rnd_ALIM_Gauss_Slugs",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer",
							"OPTRE_200Rnd_95x40_Box_Tracer"
						};
					};
				};
				class TextureSources
				{
					class Army
					{
						displayName="Sabertooth";
						author="Thomas, OPCAN & A3";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Cobra_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Cobra_co2.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Wheels_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Extras_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Commander_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Misc\STS_camonet_co.paa",
							"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Extras_co.paa"
						};
					};
				};
			};
			class Sabertooth_M12_FAV: VES_M12
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] M12 FAV Warthog";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Car";
				crew="Sabertooth_Crewman";
				ace_refuel_fuelCapacity=150;
				ace_refuel_hooks[]=
				{
					{-1.35,-0.60000002,-1.1}
				};
				enableRadio=1;
				tf_hasLRradio=1;
				tf_isolatedAmount=0.40000001;
				tf_range=10500;
				class TextureSources
				{
					class tex_nml
					{
						displayName="Sabertooth";
						author="Thomas";
						textures[]=
						{
							"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa"
						};
					};
				};
				hiddenSelectionsTextures[]=
				{
					"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa"
				};
			};
		};
