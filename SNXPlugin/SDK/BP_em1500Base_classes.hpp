#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_em1500Base

#include "Basic.hpp"

#include "RSBattleEnemy_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_em1500Base.BP_em1500Base_C
// 0x0000 (0x2230 - 0x2230)
class ABP_em1500Base_C final : public ARSBattleEnemy_C
{
public:
	void BattleStart();
	void BattleEnd();
	void BattleClear();
	void EndBreakSmoke();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_em1500Base_C">();
	}
	static class ABP_em1500Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_em1500Base_C>();
	}
};
static_assert(alignof(ABP_em1500Base_C) == 0x000010, "Wrong alignment on ABP_em1500Base_C");
static_assert(sizeof(ABP_em1500Base_C) == 0x002230, "Wrong size on ABP_em1500Base_C");

}

