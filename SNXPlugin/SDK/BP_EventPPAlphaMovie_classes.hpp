#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventPPAlphaMovie

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_EventTypeSwitchBase_classes.hpp"
#include "CriWareRuntime_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EventPPAlphaMovie.BP_EventPPAlphaMovie_C
// 0x0090 (0x0300 - 0x0270)
class ABP_EventPPAlphaMovie_C final : public ABP_EventTypeSwitchBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_EventPPAlphaMovie_C;             // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Rate;                                              // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	bool                                          M_manaPreparing;                                   // 0x027C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          M_manaPrepared;                                    // 0x027D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509D[0x2];                                     // 0x027E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UManaSource*                            Sofdec2MovieSource;                                // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UManaTexture*                           Sofdec2MovieTexture;                               // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BlendMode;                                         // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_509E[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      AlphaMovieMaterialInstance;                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               AlphaMovieDynamicMI;                               // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                     PPV;                                               // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	TArray<class APostProcessVolume*>             FoundPPVs;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          RevU;                                              // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	bool                                          RevV;                                              // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	bool                                          M_movieAppiled;                                    // 0x02C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Seeked;                                            // 0x02C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509F[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      AlphaMovieMaterialInstanceOnUI_Mul;                // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      AlphaMovieMaterialInstanceOnUI_Add;                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               AlphaMovieDynamicMIOnUI_Add;                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               AlphaMovieDynamicMIOnUI_Mul;                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MovieManager_C*                     MovieManager;                                      // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URSManaComponent*                       ManaComp;                                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_movieManagerHasLoadedMovie;                      // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          WaitPlay;                                          // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          WaitPrepare;                                       // 0x02FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Loop;                                              // 0x02FB(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ChangedWidgetMaterial;                             // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_EventPPAlphaMovie(int32 EntryPoint);
	void LoopMovie();
	void Stop();
	void SetupMovieManagerProperties();
	void OnStatusChanged_manaComp_(EManaComponentStatus Status, class UManaComponent* ManaComponent);
	void EndPlayDynamicCutScene();
	void UpdateDynamicCutScene();
	void BeginPlayDynamicCutScene();
	void EndPlayStaticCutScene();
	void UpdateStaticCutScene();
	void BeginPlayStaticCutScene();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Seek(int32 FrameNumber);
	void Prepare();
	void Play();
	void Rewind();
	void Start();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void PlayAlphaMovie();
	void ClearPrepareFlags();
	void ApplyMovieSource(bool* Result);
	void SetMovieSource(class UManaSource* NewMovieSource);
	void PrepareAlphaMovie(bool* Succeeded);
	void SeekAlphaMovie(int32 SeekFrameNumber);
	void SetBlendModeMul();
	void SetBlendModeAdd();
	void SetBlendModeSub();
	void InvisibleForManner();
	void LoadMovieFromPath(const class FString& Path);
	void MovieManagerHasMovie(bool* Result);
	void MovieManagerLoadedMovie(bool* Result);
	void EditorStopMovie();
	void StopMovie();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EventPPAlphaMovie_C">();
	}
	static class ABP_EventPPAlphaMovie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EventPPAlphaMovie_C>();
	}
};
static_assert(alignof(ABP_EventPPAlphaMovie_C) == 0x000008, "Wrong alignment on ABP_EventPPAlphaMovie_C");
static_assert(sizeof(ABP_EventPPAlphaMovie_C) == 0x000300, "Wrong size on ABP_EventPPAlphaMovie_C");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, UberGraphFrame_BP_EventPPAlphaMovie_C) == 0x000270, "Member 'ABP_EventPPAlphaMovie_C::UberGraphFrame_BP_EventPPAlphaMovie_C' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, Rate) == 0x000278, "Member 'ABP_EventPPAlphaMovie_C::Rate' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, M_manaPreparing) == 0x00027C, "Member 'ABP_EventPPAlphaMovie_C::M_manaPreparing' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, M_manaPrepared) == 0x00027D, "Member 'ABP_EventPPAlphaMovie_C::M_manaPrepared' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, Sofdec2MovieSource) == 0x000280, "Member 'ABP_EventPPAlphaMovie_C::Sofdec2MovieSource' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, Sofdec2MovieTexture) == 0x000288, "Member 'ABP_EventPPAlphaMovie_C::Sofdec2MovieTexture' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, BlendMode) == 0x000290, "Member 'ABP_EventPPAlphaMovie_C::BlendMode' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, AlphaMovieMaterialInstance) == 0x000298, "Member 'ABP_EventPPAlphaMovie_C::AlphaMovieMaterialInstance' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, AlphaMovieDynamicMI) == 0x0002A0, "Member 'ABP_EventPPAlphaMovie_C::AlphaMovieDynamicMI' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, PPV) == 0x0002A8, "Member 'ABP_EventPPAlphaMovie_C::PPV' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, FoundPPVs) == 0x0002B0, "Member 'ABP_EventPPAlphaMovie_C::FoundPPVs' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, RevU) == 0x0002C0, "Member 'ABP_EventPPAlphaMovie_C::RevU' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, RevV) == 0x0002C1, "Member 'ABP_EventPPAlphaMovie_C::RevV' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, M_movieAppiled) == 0x0002C2, "Member 'ABP_EventPPAlphaMovie_C::M_movieAppiled' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, Seeked) == 0x0002C3, "Member 'ABP_EventPPAlphaMovie_C::Seeked' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, AlphaMovieMaterialInstanceOnUI_Mul) == 0x0002C8, "Member 'ABP_EventPPAlphaMovie_C::AlphaMovieMaterialInstanceOnUI_Mul' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, AlphaMovieMaterialInstanceOnUI_Add) == 0x0002D0, "Member 'ABP_EventPPAlphaMovie_C::AlphaMovieMaterialInstanceOnUI_Add' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, AlphaMovieDynamicMIOnUI_Add) == 0x0002D8, "Member 'ABP_EventPPAlphaMovie_C::AlphaMovieDynamicMIOnUI_Add' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, AlphaMovieDynamicMIOnUI_Mul) == 0x0002E0, "Member 'ABP_EventPPAlphaMovie_C::AlphaMovieDynamicMIOnUI_Mul' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, MovieManager) == 0x0002E8, "Member 'ABP_EventPPAlphaMovie_C::MovieManager' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, ManaComp) == 0x0002F0, "Member 'ABP_EventPPAlphaMovie_C::ManaComp' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, M_movieManagerHasLoadedMovie) == 0x0002F8, "Member 'ABP_EventPPAlphaMovie_C::M_movieManagerHasLoadedMovie' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, WaitPlay) == 0x0002F9, "Member 'ABP_EventPPAlphaMovie_C::WaitPlay' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, WaitPrepare) == 0x0002FA, "Member 'ABP_EventPPAlphaMovie_C::WaitPrepare' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, Loop) == 0x0002FB, "Member 'ABP_EventPPAlphaMovie_C::Loop' has a wrong offset!");
static_assert(offsetof(ABP_EventPPAlphaMovie_C, ChangedWidgetMaterial) == 0x0002FC, "Member 'ABP_EventPPAlphaMovie_C::ChangedWidgetMaterial' has a wrong offset!");

}

