#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MovieManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CriWareRuntime_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MovieManager.BP_MovieManager_C
// 0x0068 (0x0300 - 0x0298)
class ABP_MovieManager_C final : public ARSMovieManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URSManaComponent*                       RSManaComponent;                                   // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWB_CriMovie_C*                         WB_Movie;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MovieMaterialInstance;                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EManaComponentStatus                          IsPlay;                                            // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A6C[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFinishMovie;                                     // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IndividualFlag;                                    // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A6D[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 WBImageData;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLoop;                                             // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A6E[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               WidgetMaterial;                                    // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MovieViewUp;                                       // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnFinishMovie__DelegateSignature();
	void ExecuteUbergraph_BP_MovieManager(int32 EntryPoint);
	void OnEndCutScene();
	void BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature(EManaComponentStatus Status, class UManaComponent* ManaComponent);
	void EventPoint(const struct FManaEventPointInfo& EventPointInfo);
	void ReceiveBeginPlay();
	void Play_Movie();
	void StopMovie();
	void SetMovieTexture(class UManaTexture* MovieTexture);
	void PrepareMovie();
	void IsPlaying(bool* Param_IsPlaying);
	void IsPreparing(bool* Param_IsPreparing);
	void IsReady(bool* Param_IsReady);
	void IsStop(bool* Param_IsStop);
	void SetLoop(bool Param_SetLoop);
	void IsLoop(bool* Param_IsLoop);
	bool SetMovieImageTexture(class UImage* Image);
	bool SetMoviePrepareSetting();
	bool SetIndividualSetting(bool Flag);
	void SetMovieTextureAndPrepare(class UManaTexture* MovieTexture);
	void SetWidgetMaterial(class UMaterialInterface* Material);
	void ResetWidgetMaterial();
	void ResetManaComponent();
	void OnFinishMovie_(EManaComponentStatus Stat, class UManaComponent* Mana);
	bool ResetManaComponentOtherNative();
	void SetMovieAlphaRate(float AlphaRate);

	EManaComponentStatus GetStatusNative() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MovieManager_C">();
	}
	static class ABP_MovieManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MovieManager_C>();
	}
};
static_assert(alignof(ABP_MovieManager_C) == 0x000008, "Wrong alignment on ABP_MovieManager_C");
static_assert(sizeof(ABP_MovieManager_C) == 0x000300, "Wrong size on ABP_MovieManager_C");
static_assert(offsetof(ABP_MovieManager_C, UberGraphFrame) == 0x000298, "Member 'ABP_MovieManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, DefaultSceneRoot) == 0x0002A0, "Member 'ABP_MovieManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, RSManaComponent) == 0x0002A8, "Member 'ABP_MovieManager_C::RSManaComponent' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, WB_Movie) == 0x0002B0, "Member 'ABP_MovieManager_C::WB_Movie' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, MovieMaterialInstance) == 0x0002B8, "Member 'ABP_MovieManager_C::MovieMaterialInstance' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, IsPlay) == 0x0002C0, "Member 'ABP_MovieManager_C::IsPlay' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, OnFinishMovie) == 0x0002C8, "Member 'ABP_MovieManager_C::OnFinishMovie' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, IndividualFlag) == 0x0002D8, "Member 'ABP_MovieManager_C::IndividualFlag' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, WBImageData) == 0x0002E0, "Member 'ABP_MovieManager_C::WBImageData' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, bLoop) == 0x0002E8, "Member 'ABP_MovieManager_C::bLoop' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, WidgetMaterial) == 0x0002F0, "Member 'ABP_MovieManager_C::WidgetMaterial' has a wrong offset!");
static_assert(offsetof(ABP_MovieManager_C, MovieViewUp) == 0x0002F8, "Member 'ABP_MovieManager_C::MovieViewUp' has a wrong offset!");

}

