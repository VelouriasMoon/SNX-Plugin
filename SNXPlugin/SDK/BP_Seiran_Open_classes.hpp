#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Seiran_Open

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_MakeEventActorChild_classes.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Seiran_Open.BP_Seiran_Open_C
// 0x0008 (0x0490 - 0x0488)
class ABP_Seiran_Open_C final : public ABP_MakeEventActorChild_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Seiran_Open_C;                   // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_Seiran_Open(int32 EntryPoint);
	void StartEvent();
	void EventLoadMessage();
	void SubEvent(class AMainEventLatentActor* Latenter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Seiran_Open_C">();
	}
	static class ABP_Seiran_Open_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Seiran_Open_C>();
	}
};
static_assert(alignof(ABP_Seiran_Open_C) == 0x000008, "Wrong alignment on ABP_Seiran_Open_C");
static_assert(sizeof(ABP_Seiran_Open_C) == 0x000490, "Wrong size on ABP_Seiran_Open_C");
static_assert(offsetof(ABP_Seiran_Open_C, UberGraphFrame_BP_Seiran_Open_C) == 0x000488, "Member 'ABP_Seiran_Open_C::UberGraphFrame_BP_Seiran_Open_C' has a wrong offset!");

}

