#pragma once
#include "ConfigSet.h"

/// Defines offsets for reading structs from league of legends memory
class Offsets {
	
public:
	Offsets();

	static int GameTime;

	static int ObjIndex;
	static int ObjTeam;
	static int ObjTargetRadius;
	static int ObjNetworkID;
	static int ObjPos;
	static int ObjVisibility;
	static int ObjSpawnCount;
	static int ObjHealth;
	static int ObjMana;
	static int ObjMaxMana;
	static int ObjArmor;
	static int ObjMagicRes;
	static int ObjBonusMagicRes;
	static int ObjBaseAtk;
	static int ObjBonusAtk;
	static int ObjMoveSpeed;
	static int ObjSpellBook;
	static int ObjName;
	static int ObjLvl;
	static int ObjExpiry;
	static int ObjCrit;
	static int ObjCritMulti;
	static int ObjAbilityPower;
	static int ObjBonusAbilityPower;
	static int ObjAtkSpeedMulti;
	static int ObjItemList;
	static int ObjSrcIndex;

	static int ItemListItem;
	static int ItemInfo;
	static int ItemInfoId;

	static int ViewProjMatrices;
	static int Renderer;
	static int RendererWidth;
	static int RendererHeight;

	static int SpellSlotRemainingCharge;
	static int SpellSlotLevel;
	static int SpellSlotRemainingRechargeCD;
	static int SpellSlotTime;
	static int SpellSlotCD;
	static int SpellSlotDamage;
	static int SpellSlotSpellInfo;
	static int SpellSlotRemainingCD;
	static int SpellInfoSpellData;
	static int SpellDataSpellName;

	static int HeroList;
	static int MinionList;
	static int TurretList;
	static int MissileMap;

	static int MissileMapCount;
	static int MissileMapRoot;
	static int MissileMapKey;
	static int MissileMapVal;
	static int MissileSrcIdx;
	static int MissileDestIdx;
	static int MissileStartPos;
	static int MissileEndPos;

	static int UnitComponentInfo;
	static int UnitProperties;
	static int UnitAttackRange;
	static int UnitBoundingRadius;
	static int UnitBaseAtkSpeed;
	static int UnitMaxAtkSpeed;


};