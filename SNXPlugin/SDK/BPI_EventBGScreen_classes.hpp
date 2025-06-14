#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_EventBGScreen

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_EventBGScreen.BPI_EventBGScreen_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_EventBGScreen_C final : public IInterface
{
public:
	void SetImage(class UTexture* Texture);
	void SetAlpha(float Alpha);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_EventBGScreen_C">();
	}
	static class IBPI_EventBGScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_EventBGScreen_C>();
	}
};
static_assert(alignof(IBPI_EventBGScreen_C) == 0x000008, "Wrong alignment on IBPI_EventBGScreen_C");
static_assert(sizeof(IBPI_EventBGScreen_C) == 0x000028, "Wrong size on IBPI_EventBGScreen_C");

}

