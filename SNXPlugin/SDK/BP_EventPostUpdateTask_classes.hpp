#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventPostUpdateTask

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventPostUpdateTask.BP_EventPostUpdateTask_C
// 0x0040 (0x0270 - 0x0230)
class ABP_EventPostUpdateTask_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsQueryPreSkinFacialNormalUpdate;                  // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9332[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMeshComponent*>         PreSkinFacialNormalUpdateMeshes;                   // 0x0248(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<struct FArrayOfInt>                    PreSkinFacialNormalSlots;                          // 0x0258(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsUpdatePostProcessMaterial;                       // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EventPostUpdateTask(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void QueryPreSkinFacialNormalUpdate(TArray<class AActor*>& SkeletalMeshActors);
	void UpdatePreSkinFacialNormal();
	void QueryUpdatePostProcessMaterial();
	void Activate(bool Active);
	void UpdatePostProcessMateiral();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventPostUpdateTask_C">();
	}
	static class ABP_EventPostUpdateTask_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventPostUpdateTask_C>();
	}
};
static_assert(alignof(ABP_EventPostUpdateTask_C) == 0x000008, "Wrong alignment on ABP_EventPostUpdateTask_C");
static_assert(sizeof(ABP_EventPostUpdateTask_C) == 0x000270, "Wrong size on ABP_EventPostUpdateTask_C");
static_assert(offsetof(ABP_EventPostUpdateTask_C, UberGraphFrame) == 0x000230, "Member 'ABP_EventPostUpdateTask_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_EventPostUpdateTask_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_EventPostUpdateTask_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_EventPostUpdateTask_C, IsQueryPreSkinFacialNormalUpdate) == 0x000240, "Member 'ABP_EventPostUpdateTask_C::IsQueryPreSkinFacialNormalUpdate' has a wrong offset!");
static_assert(offsetof(ABP_EventPostUpdateTask_C, PreSkinFacialNormalUpdateMeshes) == 0x000248, "Member 'ABP_EventPostUpdateTask_C::PreSkinFacialNormalUpdateMeshes' has a wrong offset!");
static_assert(offsetof(ABP_EventPostUpdateTask_C, PreSkinFacialNormalSlots) == 0x000258, "Member 'ABP_EventPostUpdateTask_C::PreSkinFacialNormalSlots' has a wrong offset!");
static_assert(offsetof(ABP_EventPostUpdateTask_C, IsUpdatePostProcessMaterial) == 0x000268, "Member 'ABP_EventPostUpdateTask_C::IsUpdatePostProcessMaterial' has a wrong offset!");

}

