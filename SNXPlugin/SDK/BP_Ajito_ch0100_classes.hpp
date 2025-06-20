#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ajito_ch0100

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AjitoMember_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Ajito_ch0100.BP_Ajito_ch0100_C
// 0x0000 (0x05F0 - 0x05F0)
class ABP_Ajito_ch0100_C final : public ABP_AjitoMember_C
{
public:
	uint8                                         Pad_73FF[0x4];                                     // 0x05E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Ajito_ch0100_C;                  // 0x05E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Ajito_ch0100(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Ajito_ch0100_C">();
	}
	static class ABP_Ajito_ch0100_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Ajito_ch0100_C>();
	}
};
static_assert(alignof(ABP_Ajito_ch0100_C) == 0x000010, "Wrong alignment on ABP_Ajito_ch0100_C");
static_assert(sizeof(ABP_Ajito_ch0100_C) == 0x0005F0, "Wrong size on ABP_Ajito_ch0100_C");
static_assert(offsetof(ABP_Ajito_ch0100_C, UberGraphFrame_BP_Ajito_ch0100_C) == 0x0005E8, "Member 'ABP_Ajito_ch0100_C::UberGraphFrame_BP_Ajito_ch0100_C' has a wrong offset!");

}

