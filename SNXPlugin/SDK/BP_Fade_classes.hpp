#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Fade.BP_Fade_C
// 0x0080 (0x02B0 - 0x0230)
class ABP_Fade_C final : public ARSActorSystemBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            FadeWidget;                                        // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ZOrder;                                            // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4E30[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ED_StartFinish;                                    // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ED_CloseFinish;                                    // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Active;                                            // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E31[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FadeTimeLength;                                    // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeTime;                                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeTimeVector;                                    // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Animation;                                         // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E32[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   WidgetAsset;                                       // 0x0288(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ED_StartFinish__DelegateSignature();
	void ED_CloseFinish__DelegateSignature();
	void ExecuteUbergraph_BP_Fade(int32 EntryPoint);
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void IsActive(bool* Param_Active);
	void Start(const struct FLinearColor& FadeColor, float Param_FadeTime);
	void Close(const struct FLinearColor& FadeColor, float Param_FadeTime);
	void UpdateFadeTime(float DeltaSeconds);
	void IsAnimation(bool* Param_Active);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fade_C">();
	}
	static class ABP_Fade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Fade_C>();
	}
};
static_assert(alignof(ABP_Fade_C) == 0x000008, "Wrong alignment on ABP_Fade_C");
static_assert(sizeof(ABP_Fade_C) == 0x0002B0, "Wrong size on ABP_Fade_C");
static_assert(offsetof(ABP_Fade_C, UberGraphFrame) == 0x000230, "Member 'ABP_Fade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_Fade_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, FadeWidget) == 0x000240, "Member 'ABP_Fade_C::FadeWidget' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, ZOrder) == 0x000248, "Member 'ABP_Fade_C::ZOrder' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, ED_StartFinish) == 0x000250, "Member 'ABP_Fade_C::ED_StartFinish' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, ED_CloseFinish) == 0x000260, "Member 'ABP_Fade_C::ED_CloseFinish' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, Active) == 0x000270, "Member 'ABP_Fade_C::Active' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, FadeTimeLength) == 0x000274, "Member 'ABP_Fade_C::FadeTimeLength' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, FadeTime) == 0x000278, "Member 'ABP_Fade_C::FadeTime' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, FadeTimeVector) == 0x00027C, "Member 'ABP_Fade_C::FadeTimeVector' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, Animation) == 0x000280, "Member 'ABP_Fade_C::Animation' has a wrong offset!");
static_assert(offsetof(ABP_Fade_C, WidgetAsset) == 0x000288, "Member 'ABP_Fade_C::WidgetAsset' has a wrong offset!");

}

