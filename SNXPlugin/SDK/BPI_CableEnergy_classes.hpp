#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CableEnergy

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CableEnergy.BPI_CableEnergy_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CableEnergy_C final : public IInterface
{
public:
	void SetEnegyCableDissolve(float Dissolve, float ParentDissolve);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CableEnergy_C">();
	}
	static class IBPI_CableEnergy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CableEnergy_C>();
	}
};
static_assert(alignof(IBPI_CableEnergy_C) == 0x000008, "Wrong alignment on IBPI_CableEnergy_C");
static_assert(sizeof(IBPI_CableEnergy_C) == 0x000028, "Wrong size on IBPI_CableEnergy_C");

}

