#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MakeEventActorChild

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_MakeEventActorBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MakeEventActorChild.BP_MakeEventActorChild_C
// 0x0010 (0x0488 - 0x0478)
class ABP_MakeEventActorChild_C : public ABP_MakeEventActorBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MakeEventActorChild_C;           // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EHelpTutorial                                 TipsID_TeamKizunaLvUp;                             // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHelpTutorial                                 TipsID_TeamKizunaLv4;                              // 0x0481(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MakeEventActorChild(int32 EntryPoint);
	void SubEvent(class AMainEventLatentActor* Latenter);
	void EventDispTeamKizunaTips();
	void EventUnloadMessage();
	void EventLoadMessage();
	void FrameToSecond(int32 Frame, float* Second);
	void SetActionIconAjito(const class FString& CharaID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MakeEventActorChild_C">();
	}
	static class ABP_MakeEventActorChild_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MakeEventActorChild_C>();
	}
};
static_assert(alignof(ABP_MakeEventActorChild_C) == 0x000008, "Wrong alignment on ABP_MakeEventActorChild_C");
static_assert(sizeof(ABP_MakeEventActorChild_C) == 0x000488, "Wrong size on ABP_MakeEventActorChild_C");
static_assert(offsetof(ABP_MakeEventActorChild_C, UberGraphFrame_BP_MakeEventActorChild_C) == 0x000478, "Member 'ABP_MakeEventActorChild_C::UberGraphFrame_BP_MakeEventActorChild_C' has a wrong offset!");
static_assert(offsetof(ABP_MakeEventActorChild_C, TipsID_TeamKizunaLvUp) == 0x000480, "Member 'ABP_MakeEventActorChild_C::TipsID_TeamKizunaLvUp' has a wrong offset!");
static_assert(offsetof(ABP_MakeEventActorChild_C, TipsID_TeamKizunaLv4) == 0x000481, "Member 'ABP_MakeEventActorChild_C::TipsID_TeamKizunaLv4' has a wrong offset!");

}

