////////////////////////////////////////////////////////////////////
//DeRap: KlimaX_Doors\Data\T1Door\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Wed Sep 29 12:06:14 2021 : 'file' last modified on Sat Sep 11 19:34:09 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class KlimaX_T1Door
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Structures_Signs"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_KlimaX_T1Door: HouseNoDestruct
	{
		scope = 1;
		model = "KlimaX_Doors\Data\T1Door\KlimaX_T1Door.p3d";
		class Doors
		{
			class doorOpen
			{
				displayName = "Door1";
				component = "doorOpen";
				soundPos = "door1_action";
				animPeriod = 1.5;
				initPhase = 0.0;
				initOpened = 0;
				soundOpen = "doorMetalContainerOpen";
				soundClose = "doorMetalContainerClose";
				soundLocked = "doorMetalContainerRattle";
				soundOpenABit = "doorMetalContainerOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints = 2000;
						transferToGlobalCoef = 0;
					};
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 5;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 3;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
				};
			};
		};
	};
};