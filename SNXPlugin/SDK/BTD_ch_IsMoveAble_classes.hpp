#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTD_ch_IsMoveAble

#include "Basic.hpp"

#include "DecoratorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTD_ch_IsMoveAble.BTD_ch_IsMoveAble_C
// 0x0000 (0x00A0 - 0x00A0)
class UBTD_ch_IsMoveAble_C final : public UDecoratorBase_C
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTD_ch_IsMoveAble_C">();
	}
	static class UBTD_ch_IsMoveAble_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTD_ch_IsMoveAble_C>();
	}
};
static_assert(alignof(UBTD_ch_IsMoveAble_C) == 0x000008, "Wrong alignment on UBTD_ch_IsMoveAble_C");
static_assert(sizeof(UBTD_ch_IsMoveAble_C) == 0x0000A0, "Wrong size on UBTD_ch_IsMoveAble_C");

}

