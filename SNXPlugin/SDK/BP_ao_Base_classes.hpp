#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ao_Base

#include "Basic.hpp"

#include "BP_ArrangeObjectStatic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ao_Base.BP_ao_Base_C
// 0x0000 (0x02C0 - 0x02C0)
class ABP_ao_Base_C : public ABP_ArrangeObjectStatic_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ao_Base_C">();
	}
	static class ABP_ao_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ao_Base_C>();
	}
};
static_assert(alignof(ABP_ao_Base_C) == 0x000008, "Wrong alignment on ABP_ao_Base_C");
static_assert(sizeof(ABP_ao_Base_C) == 0x0002C0, "Wrong size on ABP_ao_Base_C");

}

