#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CutinActor

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CutinActor.BPI_CutinActor_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CutinActor_C final : public IInterface
{
public:
	void IsCutinHidden(bool* Hidden);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CutinActor_C">();
	}
	static class IBPI_CutinActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CutinActor_C>();
	}
};
static_assert(alignof(IBPI_CutinActor_C) == 0x000008, "Wrong alignment on IBPI_CutinActor_C");
static_assert(sizeof(IBPI_CutinActor_C) == 0x000028, "Wrong size on IBPI_CutinActor_C");

}

