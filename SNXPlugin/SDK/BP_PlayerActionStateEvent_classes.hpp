#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerActionStateEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerActionStateBase_classes.hpp"
#include "EPlayerTalkTurnType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerActionStateEvent.BP_PlayerActionStateEvent_C
// 0x0010 (0x00F8 - 0x00E8)
class UBP_PlayerActionStateEvent_C final : public UBP_PlayerActionStateBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_PlayerActionStateEvent_C;        // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bTurnAnim;                                         // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_PlayerActionStateEvent(int32 EntryPoint);
	void UnbindTalkTurn();
	void BindTalkTurn();
	int32 Enter(int32 Param);
	void OnTalkTurn(float Angle);
	int32 Update();
	int32 Exit(int32 NextStateIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerActionStateEvent_C">();
	}
	static class UBP_PlayerActionStateEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerActionStateEvent_C>();
	}
};
static_assert(alignof(UBP_PlayerActionStateEvent_C) == 0x000008, "Wrong alignment on UBP_PlayerActionStateEvent_C");
static_assert(sizeof(UBP_PlayerActionStateEvent_C) == 0x0000F8, "Wrong size on UBP_PlayerActionStateEvent_C");
static_assert(offsetof(UBP_PlayerActionStateEvent_C, UberGraphFrame_BP_PlayerActionStateEvent_C) == 0x0000E8, "Member 'UBP_PlayerActionStateEvent_C::UberGraphFrame_BP_PlayerActionStateEvent_C' has a wrong offset!");
static_assert(offsetof(UBP_PlayerActionStateEvent_C, bTurnAnim) == 0x0000F0, "Member 'UBP_PlayerActionStateEvent_C::bTurnAnim' has a wrong offset!");

}

