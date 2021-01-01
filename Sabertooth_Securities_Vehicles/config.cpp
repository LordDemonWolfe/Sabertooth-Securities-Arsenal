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
			"Sabertooth_Cobra"
		};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Armor",
			"OPTRE_FC_Core",
			"OPTRE_Core",
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
	class LMG_coax;
	class Mode_FullAuto;
	class BaseSoundModeType;

	class OPTRE_M247T_Coax: LMG_coax
	{
		displayName="M247T Coaxial Machine Gun";
		descriptionShort="Coax";
		magazines[]=
		{
			"OPTRE_100Rnd_762x51_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer"
		};
		muzzleEnd="konec hlavne2";
		muzzlePos="usti hlavne2";
		selectionFireAnim="zasleh2";
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"far"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\MG\data\sounds\M247_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",
							1.9952624,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.082000002;
			dispersion=0.001;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			soundBurst=0;
			burst=1;
			displayName="$STR_DN_MODE_FULLAUTO";
			textureType="fullAuto";
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far: medium
		{
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class GunParticles
		{
			class effect1
			{
				directionName="konec hlavne2";
				effectName="MachineGunCloud";
				positionName="usti hlavne2";
			};
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
		reloadTime=12;
		magazinereloadTime=9;
	};
};
class cfgMagazines
{
	class 30Rnd_120mm_APFSDS_shells;

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
	class B_T_AFV_Wheeled_01_up_cannon_F;
	class Turrets;
	class MainTurret;

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

	class Sabertooth_Cobra: B_T_AFV_Wheeled_01_up_cannon_F
	{
		dlc="Sabertooth Securities";
		author="A3 & Thomas";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="[Sabertooth] Cobra";
		editorCategory="Sabertooth";
		editorSubcategory="Sabertooth_Vehicles";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"STS_M98",
					"OPTRE_M247T_Coax"
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
