#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnemyDatatableAccessorComponent

#include "Basic.hpp"

#include "CharacterDatatableAccessorComponentBP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnemyDatatableAccessorComponent.EnemyDatatableAccessorComponent_C
// 0x0000 (0x00D0 - 0x00D0)
class UEnemyDatatableAccessorComponent_C final : public UCharacterDatatableAccessorComponentBP_C
{
public:
	struct FDamageCalcInfo GetDamageCalcInfo() const;
	struct FAttackCalcInfo GetAttackCalcInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnemyDatatableAccessorComponent_C">();
	}
	static class UEnemyDatatableAccessorComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnemyDatatableAccessorComponent_C>();
	}
};
static_assert(alignof(UEnemyDatatableAccessorComponent_C) == 0x000008, "Wrong alignment on UEnemyDatatableAccessorComponent_C");
static_assert(sizeof(UEnemyDatatableAccessorComponent_C) == 0x0000D0, "Wrong size on UEnemyDatatableAccessorComponent_C");

}

