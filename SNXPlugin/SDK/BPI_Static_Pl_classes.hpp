#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Static_Pl

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Static_Pl.BPI_Static_Pl_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Static_Pl_C final : public IInterface
{
public:
	void SetTicks(bool Enabled);
	void PlayBoardAnimation(class UAnimMontage* AnimMontage, bool IsLoop);
	void IsAnimationPlay(bool* IsPlay);
	void IsAnimationPlayToggle(bool* PlayToggle);
	void IsPlayBeforeAnimation(bool* IsPlay);
	void StopBoadAnimation(bool* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Static_Pl_C">();
	}
	static class IBPI_Static_Pl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Static_Pl_C>();
	}
};
static_assert(alignof(IBPI_Static_Pl_C) == 0x000008, "Wrong alignment on IBPI_Static_Pl_C");
static_assert(sizeof(IBPI_Static_Pl_C) == 0x000028, "Wrong size on IBPI_Static_Pl_C");

}

