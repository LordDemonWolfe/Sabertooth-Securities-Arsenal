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
		displayName="6Rnd ALIM Gauss Slugs";
		displayNameShort="25x130mm Slug";
		ammo="OPTRE_25x130mm_Slug";
		initSpeed=13680;
		count=25;
		muzzleImpulseFactor[]={0,0};
	};
};
class CfgVehicles
{
  class VES_M12_APC;
	class B_T_AFV_Wheeled_01_up_cannon_F;
	class Turrets;
	class MainTurret;

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
					"STS_M98"
				};
				magazines[]=
				{
					"STS_25Rnd_ALIM_Gauss_Slugs"
				};
			};
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
	};
};
