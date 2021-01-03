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
			"Sabertooth_Cobra"
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
			"OPAEX_Core"
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
	class B_T_AFV_Wheeled_01_cannon_F;
	class Turrets;
	class MainTurret;
	class CommanderOptics;

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
		hiddenSelectionsTextures[]=
		{
			"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa",
			"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co2.paa"
		};
	};

	class Sabertooth_Cobra: B_T_AFV_Wheeled_01_cannon_F
	{
		author="Thomas";
		dlc="Sabertooth Securities";
		displayName="[Sabertooth] Cobra";
		editorCategory="Sabertooth";
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
			"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Cobra_CO.paa",
			"Sabertooth_Securities_Vehicles\data\Vehicles\Cobra\STS_Cobra_CO2.paa",
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
		hiddenSelectionsTextures[]=
		{
			"Sabertooth_Securities_Vehicles\data\Vehicles\Warthog\STS_Warthog_co.paa"
		};
	};
};
