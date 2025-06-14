#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MovieManager

#include "Basic.hpp"

#include "CriWareRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_MovieManager.BP_MovieManager_C.ExecuteUbergraph_BP_MovieManager
// 0x0098 (0x0098 - 0x0000)
struct BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3A6F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWB_CriMovie_C*                         CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UManaTexture*                           CallFunc_GetTexture_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FManaEventPointInfo                    K2Node_CustomEvent_EventPointInfo;                 // 0x0028(0x0028)()
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EManaComponentStatus                          K2Node_ComponentBoundEvent_Status;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A70[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UManaComponent*                         K2Node_ComponentBoundEvent_ManaComponent;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FManaEventPointInfo& EventPointInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_GetEventManager_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A71[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AEventManager*                          K2Node_DynamicCast_AsEvent_Manager;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager) == 0x000008, "Wrong alignment on BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager");
static_assert(sizeof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager) == 0x000098, "Wrong size on BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, EntryPoint) == 0x000000, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, CallFunc_Create_ReturnValue) == 0x000018, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, CallFunc_GetTexture_ReturnValue) == 0x000020, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::CallFunc_GetTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, K2Node_CustomEvent_EventPointInfo) == 0x000028, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::K2Node_CustomEvent_EventPointInfo' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000050, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, K2Node_ComponentBoundEvent_Status) == 0x000058, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::K2Node_ComponentBoundEvent_Status' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, K2Node_ComponentBoundEvent_ManaComponent) == 0x000060, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::K2Node_ComponentBoundEvent_ManaComponent' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, CallFunc_GetEventManager_ReturnValue) == 0x000078, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::CallFunc_GetEventManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, K2Node_DynamicCast_AsEvent_Manager) == 0x000088, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::K2Node_DynamicCast_AsEvent_Manager' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'BP_MovieManager_C_ExecuteUbergraph_BP_MovieManager::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_MovieManager_C_BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature final
{
public:
	EManaComponentStatus                          Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A72[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UManaComponent*                         ManaComponent;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MovieManager_C_BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature) == 0x000008, "Wrong alignment on BP_MovieManager_C_BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature");
static_assert(sizeof(BP_MovieManager_C_BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature) == 0x000010, "Wrong size on BP_MovieManager_C_BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature");
static_assert(offsetof(BP_MovieManager_C_BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature, Status) == 0x000000, "Member 'BP_MovieManager_C_BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature::Status' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature, ManaComponent) == 0x000008, "Member 'BP_MovieManager_C_BndEvt__RSManaComponent_K2Node_ComponentBoundEvent_0_OnStatusChanged__DelegateSignature::ManaComponent' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.EventPoint
// 0x0028 (0x0028 - 0x0000)
struct BP_MovieManager_C_EventPoint final
{
public:
	struct FManaEventPointInfo                    EventPointInfo;                                    // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_MovieManager_C_EventPoint) == 0x000008, "Wrong alignment on BP_MovieManager_C_EventPoint");
static_assert(sizeof(BP_MovieManager_C_EventPoint) == 0x000028, "Wrong size on BP_MovieManager_C_EventPoint");
static_assert(offsetof(BP_MovieManager_C_EventPoint, EventPointInfo) == 0x000000, "Member 'BP_MovieManager_C_EventPoint::EventPointInfo' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.Play Movie
// 0x0010 (0x0010 - 0x0000)
struct BP_MovieManager_C_Play_Movie final
{
public:
	class ABP_SoundManager_C*                     CallFunc_GetSoundManager_SoundManager;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Get_Movie_Volume_Volume;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MovieManager_C_Play_Movie) == 0x000008, "Wrong alignment on BP_MovieManager_C_Play_Movie");
static_assert(sizeof(BP_MovieManager_C_Play_Movie) == 0x000010, "Wrong size on BP_MovieManager_C_Play_Movie");
static_assert(offsetof(BP_MovieManager_C_Play_Movie, CallFunc_GetSoundManager_SoundManager) == 0x000000, "Member 'BP_MovieManager_C_Play_Movie::CallFunc_GetSoundManager_SoundManager' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_Play_Movie, CallFunc_Get_Movie_Volume_Volume) == 0x000008, "Member 'BP_MovieManager_C_Play_Movie::CallFunc_Get_Movie_Volume_Volume' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.SetMovieTexture
// 0x0018 (0x0018 - 0x0000)
struct BP_MovieManager_C_SetMovieTexture final
{
public:
	class UManaTexture*                           MovieTexture;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UManaTexture*                           CallFunc_GetTexture_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_SetMovieTexture) == 0x000008, "Wrong alignment on BP_MovieManager_C_SetMovieTexture");
static_assert(sizeof(BP_MovieManager_C_SetMovieTexture) == 0x000018, "Wrong size on BP_MovieManager_C_SetMovieTexture");
static_assert(offsetof(BP_MovieManager_C_SetMovieTexture, MovieTexture) == 0x000000, "Member 'BP_MovieManager_C_SetMovieTexture::MovieTexture' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetMovieTexture, CallFunc_GetTexture_ReturnValue) == 0x000008, "Member 'BP_MovieManager_C_SetMovieTexture::CallFunc_GetTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetMovieTexture, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_MovieManager_C_SetMovieTexture::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.IsPlaying
// 0x0003 (0x0003 - 0x0000)
struct BP_MovieManager_C_IsPlaying final
{
public:
	bool                                          Param_IsPlaying;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          _isPlaying;                                        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlaying_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_IsPlaying) == 0x000001, "Wrong alignment on BP_MovieManager_C_IsPlaying");
static_assert(sizeof(BP_MovieManager_C_IsPlaying) == 0x000003, "Wrong size on BP_MovieManager_C_IsPlaying");
static_assert(offsetof(BP_MovieManager_C_IsPlaying, Param_IsPlaying) == 0x000000, "Member 'BP_MovieManager_C_IsPlaying::Param_IsPlaying' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_IsPlaying, _isPlaying) == 0x000001, "Member 'BP_MovieManager_C_IsPlaying::_isPlaying' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_IsPlaying, CallFunc_IsPlaying_ReturnValue) == 0x000002, "Member 'BP_MovieManager_C_IsPlaying::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.IsPreparing
// 0x0002 (0x0002 - 0x0000)
struct BP_MovieManager_C_IsPreparing final
{
public:
	bool                                          Param_IsPreparing;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPreparing_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_IsPreparing) == 0x000001, "Wrong alignment on BP_MovieManager_C_IsPreparing");
static_assert(sizeof(BP_MovieManager_C_IsPreparing) == 0x000002, "Wrong size on BP_MovieManager_C_IsPreparing");
static_assert(offsetof(BP_MovieManager_C_IsPreparing, Param_IsPreparing) == 0x000000, "Member 'BP_MovieManager_C_IsPreparing::Param_IsPreparing' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_IsPreparing, CallFunc_IsPreparing_ReturnValue) == 0x000001, "Member 'BP_MovieManager_C_IsPreparing::CallFunc_IsPreparing_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.IsReady
// 0x0002 (0x0002 - 0x0000)
struct BP_MovieManager_C_IsReady final
{
public:
	bool                                          Param_IsReady;                                     // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReady_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_IsReady) == 0x000001, "Wrong alignment on BP_MovieManager_C_IsReady");
static_assert(sizeof(BP_MovieManager_C_IsReady) == 0x000002, "Wrong size on BP_MovieManager_C_IsReady");
static_assert(offsetof(BP_MovieManager_C_IsReady, Param_IsReady) == 0x000000, "Member 'BP_MovieManager_C_IsReady::Param_IsReady' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_IsReady, CallFunc_IsReady_ReturnValue) == 0x000001, "Member 'BP_MovieManager_C_IsReady::CallFunc_IsReady_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.IsStop
// 0x0004 (0x0004 - 0x0000)
struct BP_MovieManager_C_IsStop final
{
public:
	bool                                          Param_IsStop;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          _isStop;                                           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EManaComponentStatus                          CallFunc_GetStatus_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_IsStop) == 0x000001, "Wrong alignment on BP_MovieManager_C_IsStop");
static_assert(sizeof(BP_MovieManager_C_IsStop) == 0x000004, "Wrong size on BP_MovieManager_C_IsStop");
static_assert(offsetof(BP_MovieManager_C_IsStop, Param_IsStop) == 0x000000, "Member 'BP_MovieManager_C_IsStop::Param_IsStop' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_IsStop, _isStop) == 0x000001, "Member 'BP_MovieManager_C_IsStop::_isStop' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_IsStop, CallFunc_GetStatus_ReturnValue) == 0x000002, "Member 'BP_MovieManager_C_IsStop::CallFunc_GetStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_IsStop, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'BP_MovieManager_C_IsStop::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.SetLoop
// 0x0001 (0x0001 - 0x0000)
struct BP_MovieManager_C_SetLoop final
{
public:
	bool                                          Param_SetLoop;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_SetLoop) == 0x000001, "Wrong alignment on BP_MovieManager_C_SetLoop");
static_assert(sizeof(BP_MovieManager_C_SetLoop) == 0x000001, "Wrong size on BP_MovieManager_C_SetLoop");
static_assert(offsetof(BP_MovieManager_C_SetLoop, Param_SetLoop) == 0x000000, "Member 'BP_MovieManager_C_SetLoop::Param_SetLoop' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.IsLoop
// 0x0001 (0x0001 - 0x0000)
struct BP_MovieManager_C_IsLoop final
{
public:
	bool                                          Param_IsLoop;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_IsLoop) == 0x000001, "Wrong alignment on BP_MovieManager_C_IsLoop");
static_assert(sizeof(BP_MovieManager_C_IsLoop) == 0x000001, "Wrong size on BP_MovieManager_C_IsLoop");
static_assert(offsetof(BP_MovieManager_C_IsLoop, Param_IsLoop) == 0x000000, "Member 'BP_MovieManager_C_IsLoop::Param_IsLoop' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.SetMovieImageTexture
// 0x0010 (0x0010 - 0x0000)
struct BP_MovieManager_C_SetMovieImageTexture final
{
public:
	class UImage*                                 Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetMovieImageTexture_ReturnValue;         // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_SetMovieImageTexture) == 0x000008, "Wrong alignment on BP_MovieManager_C_SetMovieImageTexture");
static_assert(sizeof(BP_MovieManager_C_SetMovieImageTexture) == 0x000010, "Wrong size on BP_MovieManager_C_SetMovieImageTexture");
static_assert(offsetof(BP_MovieManager_C_SetMovieImageTexture, Image) == 0x000000, "Member 'BP_MovieManager_C_SetMovieImageTexture::Image' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetMovieImageTexture, ReturnValue) == 0x000008, "Member 'BP_MovieManager_C_SetMovieImageTexture::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetMovieImageTexture, CallFunc_SetMovieImageTexture_ReturnValue) == 0x000009, "Member 'BP_MovieManager_C_SetMovieImageTexture::CallFunc_SetMovieImageTexture_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.SetMoviePrepareSetting
// 0x0018 (0x0018 - 0x0000)
struct BP_MovieManager_C_SetMoviePrepareSetting final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A73[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UManaTexture*                           CallFunc_GetManaTextureNative_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetMoviePrepareSetting_ReturnValue;       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_SetMoviePrepareSetting) == 0x000008, "Wrong alignment on BP_MovieManager_C_SetMoviePrepareSetting");
static_assert(sizeof(BP_MovieManager_C_SetMoviePrepareSetting) == 0x000018, "Wrong size on BP_MovieManager_C_SetMoviePrepareSetting");
static_assert(offsetof(BP_MovieManager_C_SetMoviePrepareSetting, ReturnValue) == 0x000000, "Member 'BP_MovieManager_C_SetMoviePrepareSetting::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetMoviePrepareSetting, CallFunc_GetManaTextureNative_ReturnValue) == 0x000008, "Member 'BP_MovieManager_C_SetMoviePrepareSetting::CallFunc_GetManaTextureNative_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetMoviePrepareSetting, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_MovieManager_C_SetMoviePrepareSetting::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetMoviePrepareSetting, CallFunc_SetMoviePrepareSetting_ReturnValue) == 0x000011, "Member 'BP_MovieManager_C_SetMoviePrepareSetting::CallFunc_SetMoviePrepareSetting_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.SetIndividualSetting
// 0x0003 (0x0003 - 0x0000)
struct BP_MovieManager_C_SetIndividualSetting final
{
public:
	bool                                          Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetIndividualSetting_ReturnValue;         // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_SetIndividualSetting) == 0x000001, "Wrong alignment on BP_MovieManager_C_SetIndividualSetting");
static_assert(sizeof(BP_MovieManager_C_SetIndividualSetting) == 0x000003, "Wrong size on BP_MovieManager_C_SetIndividualSetting");
static_assert(offsetof(BP_MovieManager_C_SetIndividualSetting, Flag) == 0x000000, "Member 'BP_MovieManager_C_SetIndividualSetting::Flag' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetIndividualSetting, ReturnValue) == 0x000001, "Member 'BP_MovieManager_C_SetIndividualSetting::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetIndividualSetting, CallFunc_SetIndividualSetting_ReturnValue) == 0x000002, "Member 'BP_MovieManager_C_SetIndividualSetting::CallFunc_SetIndividualSetting_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.SetMovieTextureAndPrepare
// 0x0010 (0x0010 - 0x0000)
struct BP_MovieManager_C_SetMovieTextureAndPrepare final
{
public:
	class UManaTexture*                           MovieTexture;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UManaTexture*                           CallFunc_GetTexture_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MovieManager_C_SetMovieTextureAndPrepare) == 0x000008, "Wrong alignment on BP_MovieManager_C_SetMovieTextureAndPrepare");
static_assert(sizeof(BP_MovieManager_C_SetMovieTextureAndPrepare) == 0x000010, "Wrong size on BP_MovieManager_C_SetMovieTextureAndPrepare");
static_assert(offsetof(BP_MovieManager_C_SetMovieTextureAndPrepare, MovieTexture) == 0x000000, "Member 'BP_MovieManager_C_SetMovieTextureAndPrepare::MovieTexture' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetMovieTextureAndPrepare, CallFunc_GetTexture_ReturnValue) == 0x000008, "Member 'BP_MovieManager_C_SetMovieTextureAndPrepare::CallFunc_GetTexture_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.SetWidgetMaterial
// 0x0010 (0x0010 - 0x0000)
struct BP_MovieManager_C_SetWidgetMaterial final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_SetWidgetMaterial) == 0x000008, "Wrong alignment on BP_MovieManager_C_SetWidgetMaterial");
static_assert(sizeof(BP_MovieManager_C_SetWidgetMaterial) == 0x000010, "Wrong size on BP_MovieManager_C_SetWidgetMaterial");
static_assert(offsetof(BP_MovieManager_C_SetWidgetMaterial, Material) == 0x000000, "Member 'BP_MovieManager_C_SetWidgetMaterial::Material' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetWidgetMaterial, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_MovieManager_C_SetWidgetMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.ResetWidgetMaterial
// 0x0001 (0x0001 - 0x0000)
struct BP_MovieManager_C_ResetWidgetMaterial final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_ResetWidgetMaterial) == 0x000001, "Wrong alignment on BP_MovieManager_C_ResetWidgetMaterial");
static_assert(sizeof(BP_MovieManager_C_ResetWidgetMaterial) == 0x000001, "Wrong size on BP_MovieManager_C_ResetWidgetMaterial");
static_assert(offsetof(BP_MovieManager_C_ResetWidgetMaterial, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_MovieManager_C_ResetWidgetMaterial::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.ResetManaComponent
// 0x0070 (0x0070 - 0x0000)
struct BP_MovieManager_C_ResetManaComponent final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A74[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UManaMovie*                             CallFunc_GetSource_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A75[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	TDelegate<void(EManaComponentStatus Status, class UManaComponent* ManaComponent)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class URSManaComponent*                       CallFunc_AddComponent_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_ResetManaComponent) == 0x000010, "Wrong alignment on BP_MovieManager_C_ResetManaComponent");
static_assert(sizeof(BP_MovieManager_C_ResetManaComponent) == 0x000070, "Wrong size on BP_MovieManager_C_ResetManaComponent");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponent, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_MovieManager_C_ResetManaComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponent, CallFunc_GetSource_ReturnValue) == 0x000008, "Member 'BP_MovieManager_C_ResetManaComponent::CallFunc_GetSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponent, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'BP_MovieManager_C_ResetManaComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponent, Temp_struct_Variable) == 0x000020, "Member 'BP_MovieManager_C_ResetManaComponent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'BP_MovieManager_C_ResetManaComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponent, CallFunc_AddComponent_ReturnValue) == 0x000060, "Member 'BP_MovieManager_C_ResetManaComponent::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponent, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'BP_MovieManager_C_ResetManaComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.OnFinishMovie_
// 0x0018 (0x0018 - 0x0000)
struct BP_MovieManager_C_OnFinishMovie_ final
{
public:
	EManaComponentStatus                          Stat;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A76[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UManaComponent*                         Mana;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isLoop_isLoop;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLooping_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_OnFinishMovie_) == 0x000008, "Wrong alignment on BP_MovieManager_C_OnFinishMovie_");
static_assert(sizeof(BP_MovieManager_C_OnFinishMovie_) == 0x000018, "Wrong size on BP_MovieManager_C_OnFinishMovie_");
static_assert(offsetof(BP_MovieManager_C_OnFinishMovie_, Stat) == 0x000000, "Member 'BP_MovieManager_C_OnFinishMovie_::Stat' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_OnFinishMovie_, Mana) == 0x000008, "Member 'BP_MovieManager_C_OnFinishMovie_::Mana' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_OnFinishMovie_, CallFunc_isLoop_isLoop) == 0x000010, "Member 'BP_MovieManager_C_OnFinishMovie_::CallFunc_isLoop_isLoop' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_OnFinishMovie_, CallFunc_IsLooping_ReturnValue) == 0x000011, "Member 'BP_MovieManager_C_OnFinishMovie_::CallFunc_IsLooping_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_OnFinishMovie_, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'BP_MovieManager_C_OnFinishMovie_::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_OnFinishMovie_, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000013, "Member 'BP_MovieManager_C_OnFinishMovie_::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.ResetManaComponentOtherNative
// 0x0018 (0x0018 - 0x0000)
struct BP_MovieManager_C_ResetManaComponentOtherNative final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A77[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UManaMovie*                             CallFunc_GetSource_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ResetManaComponentOtherNative_ReturnValue; // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_ResetManaComponentOtherNative) == 0x000008, "Wrong alignment on BP_MovieManager_C_ResetManaComponentOtherNative");
static_assert(sizeof(BP_MovieManager_C_ResetManaComponentOtherNative) == 0x000018, "Wrong size on BP_MovieManager_C_ResetManaComponentOtherNative");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponentOtherNative, ReturnValue) == 0x000000, "Member 'BP_MovieManager_C_ResetManaComponentOtherNative::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponentOtherNative, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_MovieManager_C_ResetManaComponentOtherNative::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponentOtherNative, CallFunc_GetSource_ReturnValue) == 0x000008, "Member 'BP_MovieManager_C_ResetManaComponentOtherNative::CallFunc_GetSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponentOtherNative, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'BP_MovieManager_C_ResetManaComponentOtherNative::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_ResetManaComponentOtherNative, CallFunc_ResetManaComponentOtherNative_ReturnValue) == 0x000011, "Member 'BP_MovieManager_C_ResetManaComponentOtherNative::CallFunc_ResetManaComponentOtherNative_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.SetMovieAlphaRate
// 0x0008 (0x0008 - 0x0000)
struct BP_MovieManager_C_SetMovieAlphaRate final
{
public:
	float                                         AlphaRate;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MovieManager_C_SetMovieAlphaRate) == 0x000004, "Wrong alignment on BP_MovieManager_C_SetMovieAlphaRate");
static_assert(sizeof(BP_MovieManager_C_SetMovieAlphaRate) == 0x000008, "Wrong size on BP_MovieManager_C_SetMovieAlphaRate");
static_assert(offsetof(BP_MovieManager_C_SetMovieAlphaRate, AlphaRate) == 0x000000, "Member 'BP_MovieManager_C_SetMovieAlphaRate::AlphaRate' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_SetMovieAlphaRate, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_MovieManager_C_SetMovieAlphaRate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_MovieManager.BP_MovieManager_C.GetStatusNative
// 0x0002 (0x0002 - 0x0000)
struct BP_MovieManager_C_GetStatusNative final
{
public:
	EManaComponentStatus                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EManaComponentStatus                          CallFunc_GetStatusNative_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MovieManager_C_GetStatusNative) == 0x000001, "Wrong alignment on BP_MovieManager_C_GetStatusNative");
static_assert(sizeof(BP_MovieManager_C_GetStatusNative) == 0x000002, "Wrong size on BP_MovieManager_C_GetStatusNative");
static_assert(offsetof(BP_MovieManager_C_GetStatusNative, ReturnValue) == 0x000000, "Member 'BP_MovieManager_C_GetStatusNative::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MovieManager_C_GetStatusNative, CallFunc_GetStatusNative_ReturnValue) == 0x000001, "Member 'BP_MovieManager_C_GetStatusNative::CallFunc_GetStatusNative_ReturnValue' has a wrong offset!");

}

