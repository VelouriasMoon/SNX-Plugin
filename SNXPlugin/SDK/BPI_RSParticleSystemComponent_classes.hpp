#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_RSParticleSystemComponent

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_RSParticleSystemComponent.BPI_RSParticleSystemComponent_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_RSParticleSystemComponent_C final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_RSParticleSystemComponent_C">();
	}
	static class IBPI_RSParticleSystemComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_RSParticleSystemComponent_C>();
	}
};
static_assert(alignof(IBPI_RSParticleSystemComponent_C) == 0x000008, "Wrong alignment on IBPI_RSParticleSystemComponent_C");
static_assert(sizeof(IBPI_RSParticleSystemComponent_C) == 0x000028, "Wrong size on IBPI_RSParticleSystemComponent_C");

}

