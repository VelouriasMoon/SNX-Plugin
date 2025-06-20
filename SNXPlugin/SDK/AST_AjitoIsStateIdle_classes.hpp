#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AST_AjitoIsStateIdle

#include "Basic.hpp"

#include "ActionSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AST_AjitoIsStateIdle.AST_AjitoIsStateIdle_C
// 0x0000 (0x0050 - 0x0050)
class UAST_AjitoIsStateIdle_C final : public UASTransition_BlueprintBase
{
public:
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AST_AjitoIsStateIdle_C">();
	}
	static class UAST_AjitoIsStateIdle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAST_AjitoIsStateIdle_C>();
	}
};
static_assert(alignof(UAST_AjitoIsStateIdle_C) == 0x000008, "Wrong alignment on UAST_AjitoIsStateIdle_C");
static_assert(sizeof(UAST_AjitoIsStateIdle_C) == 0x000050, "Wrong size on UAST_AjitoIsStateIdle_C");

}

