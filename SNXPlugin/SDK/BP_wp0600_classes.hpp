#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_wp0600

#include "Basic.hpp"

#include "BP_WeaponBase_ch0600_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_wp0600.BP_wp0600_C
// 0x0000 (0x0410 - 0x0410)
class ABP_wp0600_C final : public ABP_WeaponBase_ch0600_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_wp0600_C">();
	}
	static class ABP_wp0600_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_wp0600_C>();
	}
};
static_assert(alignof(ABP_wp0600_C) == 0x000008, "Wrong alignment on ABP_wp0600_C");
static_assert(sizeof(ABP_wp0600_C) == 0x000410, "Wrong size on ABP_wp0600_C");

}

