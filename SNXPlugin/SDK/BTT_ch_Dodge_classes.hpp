#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_ch_Dodge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TaskBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_ch_Dodge.BTT_ch_Dodge_C
// 0x0010 (0x00C0 - 0x00B0)
class UBTT_ch_Dodge_C final : public UTaskBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BTT_ch_Dodge_C;                     // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bPress;                                            // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSprint;                                           // 0x00B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E94[0x2];                                     // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Step;                                              // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTT_ch_Dodge(int32 EntryPoint);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void Exit(class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_ch_Dodge_C">();
	}
	static class UBTT_ch_Dodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_ch_Dodge_C>();
	}
};
static_assert(alignof(UBTT_ch_Dodge_C) == 0x000008, "Wrong alignment on UBTT_ch_Dodge_C");
static_assert(sizeof(UBTT_ch_Dodge_C) == 0x0000C0, "Wrong size on UBTT_ch_Dodge_C");
static_assert(offsetof(UBTT_ch_Dodge_C, UberGraphFrame_BTT_ch_Dodge_C) == 0x0000B0, "Member 'UBTT_ch_Dodge_C::UberGraphFrame_BTT_ch_Dodge_C' has a wrong offset!");
static_assert(offsetof(UBTT_ch_Dodge_C, bPress) == 0x0000B8, "Member 'UBTT_ch_Dodge_C::bPress' has a wrong offset!");
static_assert(offsetof(UBTT_ch_Dodge_C, bSprint) == 0x0000B9, "Member 'UBTT_ch_Dodge_C::bSprint' has a wrong offset!");
static_assert(offsetof(UBTT_ch_Dodge_C, Step) == 0x0000BC, "Member 'UBTT_ch_Dodge_C::Step' has a wrong offset!");

}

