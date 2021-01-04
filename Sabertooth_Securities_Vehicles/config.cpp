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
			"Sabertooth_Cobra",
			"Sabertooth_Falcon",
			"Sabertooth_CAS"
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
				"Echo_Company_Armory"
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
			class Sabertooth_Vehicles
			{
				displayName="Vehicles";
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
				muzzlePos="Cannon_muzzleflash";
				muzzleEnd="Cannon_barrel_end";
				selectionFireAnim="Cannon_muzzleflash";
				autoFire=0;
				magazines[]=
				{
					"STS_25Rnd_ALIM_Gauss_Slugs"
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
			class B_T_AFV_Wheeled_01_up_cannon_F;
			class Turrets;
			class MainTurret;
			class CommanderOptics;
			class VES_UH144_A;
			class VES_VAF19;
			class VES_IFV76_A;

			class Sabertooth_Badger: VES_IFV76_A
			{
				dlc="Sabertooth Securities";
				author="Vespade & Thomas";
				scope=2;
				scopeCurator=2;
				forceInGarage=1;
				displayName="[Sabertooth] IFV-76 HoneyBadger";
				editorCategory="Sabertooth";
				editorSubcategory="Sabertooth_Vehicles";
				crew="VES_Rifleman_MA5B_MAR";
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="OPTRE_UNSC_Airforce_Soldier_Airman";
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="OPTRE_UNSC_Airforce_Soldier_Airman";
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="VES_Rifleman_MA5B_MAR";
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="VES_Rifleman_MA5B_MAR";
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="VES_Rifleman_MA5B_MAR";
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="VES_Rifleman_MA5B_MAR";
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="VES_Rifleman_MA5B_MAR";
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="VES_Rifleman_MA5B_MAR";
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="VES_Rifleman_Crew_WDL";
				scope=2;
				scopeCurator=2;
				scopeArsenal=2;
				forceInGarage=1;
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"camo3",
					"CamoNet",
					"CamoSlat"
				};
				hiddenSelectionsTextures[]=
				{
					"Echo_Company_Armory\data\Vehicles\Kobra\Echo_Kobra_co.paa",
					"Echo_Company_Armory\data\Vehicles\Kobra\Echo_Kobra_co2.paa",
					"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
					"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
					"a3\Armor_F\Data\cage_olive_CO.paa"
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
						displayName="Woodland";
						author="Barais, OPCAN & A3";
						textures[]=
						{
							"Echo_Company_Armory\data\Vehicles\Kobra\Echo_Kobra_co.paa",
							"Echo_Company_Armory\data\Vehicles\Kobra\Echo_Kobra_co2.paa",
							"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
							"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
							"a3\Armor_F\Data\cage_olive_CO.paa"
						};
					};
					class tex_snow
					{
						displayName="Snow";
						author="Barais, OPCAN & A3";
						textures[]=
						{
							"Echo_Company_Armory\data\Vehicles\Kobra\Echo_Kobra_SNW_co.paa",
							"Echo_Company_Armory\data\Vehicles\Kobra\Echo_Kobra_SNW_co2.paa",
							"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa",
							"Echo_Company_Armory\data\Vehicles\Misc\camonet_NATO_Snow_CO.paa",
							"Echo_Company_Armory\data\Vehicles\Misc\cage_snow_CO.paa"
						};
					};
					class tex_des
					{
						displayName="Desert";
						author="Barais, OPCAN & A3";
						textures[]=
						{
							"Echo_Company_Armory\data\Vehicles\Kobra\Echo_Kobra_DES_co.paa",
							"Echo_Company_Armory\data\Vehicles\Kobra\Echo_Kobra_DES_co2.paa",
							"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_CO.paa",
							"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
							"a3\Armor_F\Data\cage_sand_CO.paa"
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
				editorSubcategory="Sabertooth_Vehicles";
				crew="VES_Rifleman_MA5B_MAR";
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
