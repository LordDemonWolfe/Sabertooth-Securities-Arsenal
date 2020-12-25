class cfgPatches
{
	class Sabertooth_Securities_Vehicles
	{
		author="Thomas & Krevan";
		name="STS Mod";
		fileName="Sabertooth_Securities_Vehicles.pbo";
		units[]=
		{
			"Sabertooth_M12_APC"
		};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"3DEN",
			"V_FZ_Armor",
			"OPTRE_FC_Core",
			"OPTRE_Core",
			"V_SO_Core",
			"V_SO_Magazines",
			"V_SO_Weapons",
			"A3_Weapons_F",
			"A3_Sounds_F",
			"A3_Sounds_F_Arsenal",
			"A3_Weapons_F_EPA",
			"A3Data",
			"A3_Data_F",
			"OPTRE_Weapons",
			"OPTRE_Weapons_Shotgun",
			"OPTRE_Weapons_Rockets",
			"OPTRE_Weapons_Charges",
			"OPTRE_Weapons_AR",
			"A3_Data_F_Mark",
			"OPTRE_Weapons_SMG",
			"OPTRE_Weapons_Pistol",
			"OPAEX_Aircore",
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
class CfgVehicles
{
  class VES_M12_APC;

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
