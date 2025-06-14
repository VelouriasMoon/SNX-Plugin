#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_SASUtility

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPFL_SASUtility.BPFL_SASUtility_C
// 0x0000 (0x0028 - 0x0028)
class UBPFL_SASUtility_C final : public UBlueprintFunctionLibrary
{
public:
	static void SetupPrimitiveAccelarateFilter(class UPrimitiveComponent* Primitive, bool Enable, bool WithRenderFlag, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPFL_SASUtility_C">();
	}
	static class UBPFL_SASUtility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPFL_SASUtility_C>();
	}
};
static_assert(alignof(UBPFL_SASUtility_C) == 0x000008, "Wrong alignment on UBPFL_SASUtility_C");
static_assert(sizeof(UBPFL_SASUtility_C) == 0x000028, "Wrong size on UBPFL_SASUtility_C");

}

