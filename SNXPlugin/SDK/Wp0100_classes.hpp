#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wp0100

#include "Basic.hpp"

#include "BP_WeaponBase_ch0100_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass wp0100.wp0100_C
// 0x0000 (0x0440 - 0x0440)
class AWp0100_C final : public ABP_WeaponBase_ch0100_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"wp0100_C">();
	}
	static class AWp0100_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWp0100_C>();
	}
};
static_assert(alignof(AWp0100_C) == 0x000008, "Wrong alignment on AWp0100_C");
static_assert(sizeof(AWp0100_C) == 0x000440, "Wrong size on AWp0100_C");

}

