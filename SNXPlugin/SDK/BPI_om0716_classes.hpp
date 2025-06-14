#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_om0716

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_om0716.BPI_om0716_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_om0716_C final : public IInterface
{
public:
	void I_WaterMove(bool Move);
	void I_WaterBreak();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_om0716_C">();
	}
	static class IBPI_om0716_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_om0716_C>();
	}
};
static_assert(alignof(IBPI_om0716_C) == 0x000008, "Wrong alignment on IBPI_om0716_C");
static_assert(sizeof(IBPI_om0716_C) == 0x000028, "Wrong size on IBPI_om0716_C");

}

