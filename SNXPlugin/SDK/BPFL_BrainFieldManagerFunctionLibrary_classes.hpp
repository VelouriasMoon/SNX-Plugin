#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_BrainFieldManagerFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_BrainFieldManagerFunctionLibrary.BPFL_BrainFieldManagerFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_BrainFieldManagerFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetBrainFieldManager(class UObject* __WorldContext, class ABP_BrainFieldManager_C** Manager);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_BrainFieldManagerFunctionLibrary_C">();
	}
	static class UBPFL_BrainFieldManagerFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_BrainFieldManagerFunctionLibrary_C>();
	}
};
static_assert(alignof(UBPFL_BrainFieldManagerFunctionLibrary_C) == 0x000008, "Wrong alignment on UBPFL_BrainFieldManagerFunctionLibrary_C");
static_assert(sizeof(UBPFL_BrainFieldManagerFunctionLibrary_C) == 0x000028, "Wrong size on UBPFL_BrainFieldManagerFunctionLibrary_C");

}

