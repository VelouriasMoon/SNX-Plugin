#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FacialAnim

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "EPlayerFacialAnim_structs.hpp"
#include "FPlayerFacialData_structs.hpp"
#include "Engine_structs.hpp"
#include "CriWareRuntime_structs.hpp"


namespace SDK::Params
{

// Function BP_FacialAnim.BP_FacialAnim_C.ExecuteUbergraph_BP_FacialAnim
// 0x0040 (0x0040 - 0x0000)
struct BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85E0[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85E1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EAtomComponentStatus                          CallFunc_GetStatus_ReturnValue;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85E2[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_EventManager_C*                     CallFunc_GetEventManager_EventManager;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85E3[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim) == 0x000008, "Wrong alignment on BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim");
static_assert(sizeof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim) == 0x000040, "Wrong size on BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, EntryPoint) == 0x000000, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, K2Node_DynamicCast_AsCharacter) == 0x000018, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, CallFunc_IsValid_ReturnValue_2) == 0x000021, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, CallFunc_GetStatus_ReturnValue) == 0x000022, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::CallFunc_GetStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, K2Node_SwitchEnum_CmpSuccess) == 0x000023, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, CallFunc_GetEventManager_EventManager) == 0x000028, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::CallFunc_GetEventManager_EventManager' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, CallFunc_Less_FloatFloat_ReturnValue) == 0x000030, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, CallFunc_Add_FloatFloat_ReturnValue) == 0x000034, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim, K2Node_Event_EndPlayReason) == 0x000039, "Member 'BP_FacialAnim_C_ExecuteUbergraph_BP_FacialAnim::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_FacialAnim_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FacialAnim_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_FacialAnim_C_ReceiveEndPlay");
static_assert(sizeof(BP_FacialAnim_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_FacialAnim_C_ReceiveEndPlay");
static_assert(offsetof(BP_FacialAnim_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_FacialAnim_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_FacialAnim_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FacialAnim_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_FacialAnim_C_ReceiveTick");
static_assert(sizeof(BP_FacialAnim_C_ReceiveTick) == 0x000004, "Wrong size on BP_FacialAnim_C_ReceiveTick");
static_assert(offsetof(BP_FacialAnim_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_FacialAnim_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.PlayFacialAnim
// 0x0040 (0x0040 - 0x0000)
struct BP_FacialAnim_C_PlayFacialAnim final
{
public:
	EPlayerFacialAnim                             InAnim;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTalk;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85E4[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InClaimantName;                                    // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerFacialAnim                             LPlayAnimType;                                     // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85E5[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerInterface_C> K2Node_DynamicCast_AsBPI_Player_Interface;         // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsExecTalkEvent_bTalk;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85E6[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_PlayerAIInterface_C> K2Node_DynamicCast_AsBPI_Player_AIInterface;       // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerStatusAI_bResult;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FacialAnim_C_PlayFacialAnim) == 0x000008, "Wrong alignment on BP_FacialAnim_C_PlayFacialAnim");
static_assert(sizeof(BP_FacialAnim_C_PlayFacialAnim) == 0x000040, "Wrong size on BP_FacialAnim_C_PlayFacialAnim");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, InAnim) == 0x000000, "Member 'BP_FacialAnim_C_PlayFacialAnim::InAnim' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, bTalk) == 0x000001, "Member 'BP_FacialAnim_C_PlayFacialAnim::bTalk' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, InClaimantName) == 0x000004, "Member 'BP_FacialAnim_C_PlayFacialAnim::InClaimantName' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, LPlayAnimType) == 0x00000C, "Member 'BP_FacialAnim_C_PlayFacialAnim::LPlayAnimType' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000D, "Member 'BP_FacialAnim_C_PlayFacialAnim::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00000E, "Member 'BP_FacialAnim_C_PlayFacialAnim::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, K2Node_DynamicCast_AsBPI_Player_Interface) == 0x000010, "Member 'BP_FacialAnim_C_PlayFacialAnim::K2Node_DynamicCast_AsBPI_Player_Interface' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_FacialAnim_C_PlayFacialAnim::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, CallFunc_IsExecTalkEvent_bTalk) == 0x000021, "Member 'BP_FacialAnim_C_PlayFacialAnim::CallFunc_IsExecTalkEvent_bTalk' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, K2Node_DynamicCast_AsBPI_Player_AIInterface) == 0x000028, "Member 'BP_FacialAnim_C_PlayFacialAnim::K2Node_DynamicCast_AsBPI_Player_AIInterface' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'BP_FacialAnim_C_PlayFacialAnim::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayFacialAnim, CallFunc_IsPlayerStatusAI_bResult) == 0x000039, "Member 'BP_FacialAnim_C_PlayFacialAnim::CallFunc_IsPlayerStatusAI_bResult' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.StopFacialAnim
// 0x000C (0x000C - 0x0000)
struct BP_FacialAnim_C_StopFacialAnim final
{
public:
	class FName                                   InClaimantName;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInDefault;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FacialAnim_C_StopFacialAnim) == 0x000004, "Wrong alignment on BP_FacialAnim_C_StopFacialAnim");
static_assert(sizeof(BP_FacialAnim_C_StopFacialAnim) == 0x00000C, "Wrong size on BP_FacialAnim_C_StopFacialAnim");
static_assert(offsetof(BP_FacialAnim_C_StopFacialAnim, InClaimantName) == 0x000000, "Member 'BP_FacialAnim_C_StopFacialAnim::InClaimantName' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_StopFacialAnim, bInDefault) == 0x000008, "Member 'BP_FacialAnim_C_StopFacialAnim::bInDefault' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_StopFacialAnim, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000009, "Member 'BP_FacialAnim_C_StopFacialAnim::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.PlayMontage
// 0x0170 (0x0170 - 0x0000)
struct BP_FacialAnim_C_PlayMontage final
{
public:
	EPlayerFacialAnim                             FacialAnim;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTalk;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85E7[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           LMontage;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFPlayerFacialData                     LData;                                             // 0x0010(0x0088)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerFacialAnim                             Temp_byte_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85E8[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           Temp_object_Variable;                              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85E9[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           K2Node_Select_Default;                             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85EA[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85EB[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFPlayerFacialData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x00D8(0x0088)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85EC[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PlayAnimMontage_ReturnValue;              // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FacialAnim_C_PlayMontage) == 0x000008, "Wrong alignment on BP_FacialAnim_C_PlayMontage");
static_assert(sizeof(BP_FacialAnim_C_PlayMontage) == 0x000170, "Wrong size on BP_FacialAnim_C_PlayMontage");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, FacialAnim) == 0x000000, "Member 'BP_FacialAnim_C_PlayMontage::FacialAnim' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, bTalk) == 0x000001, "Member 'BP_FacialAnim_C_PlayMontage::bTalk' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, LMontage) == 0x000008, "Member 'BP_FacialAnim_C_PlayMontage::LMontage' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, LData) == 0x000010, "Member 'BP_FacialAnim_C_PlayMontage::LData' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, Temp_name_Variable) == 0x000098, "Member 'BP_FacialAnim_C_PlayMontage::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, Temp_byte_Variable) == 0x0000A0, "Member 'BP_FacialAnim_C_PlayMontage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, Temp_object_Variable) == 0x0000A8, "Member 'BP_FacialAnim_C_PlayMontage::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, Temp_name_Variable_1) == 0x0000B0, "Member 'BP_FacialAnim_C_PlayMontage::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'BP_FacialAnim_C_PlayMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, CallFunc_IsValid_ReturnValue_1) == 0x0000B9, "Member 'BP_FacialAnim_C_PlayMontage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, K2Node_Select_Default) == 0x0000C0, "Member 'BP_FacialAnim_C_PlayMontage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, Temp_bool_Variable) == 0x0000C8, "Member 'BP_FacialAnim_C_PlayMontage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, K2Node_Select_Default_1) == 0x0000CC, "Member 'BP_FacialAnim_C_PlayMontage::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, CallFunc_IsValid_ReturnValue_2) == 0x0000D4, "Member 'BP_FacialAnim_C_PlayMontage::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000D8, "Member 'BP_FacialAnim_C_PlayMontage::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000160, "Member 'BP_FacialAnim_C_PlayMontage::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, CallFunc_PlayAnimMontage_ReturnValue) == 0x000164, "Member 'BP_FacialAnim_C_PlayMontage::CallFunc_PlayAnimMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayMontage, CallFunc_IsValid_ReturnValue_3) == 0x000168, "Member 'BP_FacialAnim_C_PlayMontage::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.SetBattleFlag
// 0x0002 (0x0002 - 0x0000)
struct BP_FacialAnim_C_SetBattleFlag final
{
public:
	bool                                          bBattle;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FacialAnim_C_SetBattleFlag) == 0x000001, "Wrong alignment on BP_FacialAnim_C_SetBattleFlag");
static_assert(sizeof(BP_FacialAnim_C_SetBattleFlag) == 0x000002, "Wrong size on BP_FacialAnim_C_SetBattleFlag");
static_assert(offsetof(BP_FacialAnim_C_SetBattleFlag, bBattle) == 0x000000, "Member 'BP_FacialAnim_C_SetBattleFlag::bBattle' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_SetBattleFlag, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000001, "Member 'BP_FacialAnim_C_SetBattleFlag::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.StopFacialAnimForce
// 0x0003 (0x0003 - 0x0000)
struct BP_FacialAnim_C_StopFacialAnimForce final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FacialAnim_C_StopFacialAnimForce) == 0x000001, "Wrong alignment on BP_FacialAnim_C_StopFacialAnimForce");
static_assert(sizeof(BP_FacialAnim_C_StopFacialAnimForce) == 0x000003, "Wrong size on BP_FacialAnim_C_StopFacialAnimForce");
static_assert(offsetof(BP_FacialAnim_C_StopFacialAnimForce, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_FacialAnim_C_StopFacialAnimForce::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_StopFacialAnimForce, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'BP_FacialAnim_C_StopFacialAnimForce::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_StopFacialAnimForce, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'BP_FacialAnim_C_StopFacialAnimForce::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.DefaultFacialAnim
// 0x0004 (0x0004 - 0x0000)
struct BP_FacialAnim_C_DefaultFacialAnim final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPlayerFacialAnim                             Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerFacialAnim                             Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerFacialAnim                             K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FacialAnim_C_DefaultFacialAnim) == 0x000001, "Wrong alignment on BP_FacialAnim_C_DefaultFacialAnim");
static_assert(sizeof(BP_FacialAnim_C_DefaultFacialAnim) == 0x000004, "Wrong size on BP_FacialAnim_C_DefaultFacialAnim");
static_assert(offsetof(BP_FacialAnim_C_DefaultFacialAnim, Temp_bool_Variable) == 0x000000, "Member 'BP_FacialAnim_C_DefaultFacialAnim::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_DefaultFacialAnim, Temp_byte_Variable) == 0x000001, "Member 'BP_FacialAnim_C_DefaultFacialAnim::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_DefaultFacialAnim, Temp_byte_Variable_1) == 0x000002, "Member 'BP_FacialAnim_C_DefaultFacialAnim::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_DefaultFacialAnim, K2Node_Select_Default) == 0x000003, "Member 'BP_FacialAnim_C_DefaultFacialAnim::K2Node_Select_Default' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.PlayPlayerBattleVoiceFacialAnim
// 0x0010 (0x0010 - 0x0000)
struct BP_FacialAnim_C_PlayPlayerBattleVoiceFacialAnim final
{
public:
	class URSAtomComponentBase*                   InAtomComponent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerFacialAnim                             InFacialAnim;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FacialAnim_C_PlayPlayerBattleVoiceFacialAnim) == 0x000008, "Wrong alignment on BP_FacialAnim_C_PlayPlayerBattleVoiceFacialAnim");
static_assert(sizeof(BP_FacialAnim_C_PlayPlayerBattleVoiceFacialAnim) == 0x000010, "Wrong size on BP_FacialAnim_C_PlayPlayerBattleVoiceFacialAnim");
static_assert(offsetof(BP_FacialAnim_C_PlayPlayerBattleVoiceFacialAnim, InAtomComponent) == 0x000000, "Member 'BP_FacialAnim_C_PlayPlayerBattleVoiceFacialAnim::InAtomComponent' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayPlayerBattleVoiceFacialAnim, InFacialAnim) == 0x000008, "Member 'BP_FacialAnim_C_PlayPlayerBattleVoiceFacialAnim::InFacialAnim' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.PlayEventFacial
// 0x0018 (0x0018 - 0x0000)
struct BP_FacialAnim_C_PlayEventFacial final
{
public:
	EPlayerFacialAnim                             InFacialAnim;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85ED[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URSAtomComponentBase*                   InAtomComponent;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInRipSync;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_FacialAnim_C_PlayEventFacial) == 0x000008, "Wrong alignment on BP_FacialAnim_C_PlayEventFacial");
static_assert(sizeof(BP_FacialAnim_C_PlayEventFacial) == 0x000018, "Wrong size on BP_FacialAnim_C_PlayEventFacial");
static_assert(offsetof(BP_FacialAnim_C_PlayEventFacial, InFacialAnim) == 0x000000, "Member 'BP_FacialAnim_C_PlayEventFacial::InFacialAnim' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayEventFacial, InAtomComponent) == 0x000008, "Member 'BP_FacialAnim_C_PlayEventFacial::InAtomComponent' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayEventFacial, bInRipSync) == 0x000010, "Member 'BP_FacialAnim_C_PlayEventFacial::bInRipSync' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_PlayEventFacial, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_FacialAnim_C_PlayEventFacial::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_FacialAnim.BP_FacialAnim_C.SetPhotoMode
// 0x0060 (0x0060 - 0x0000)
struct BP_FacialAnim_C_SetPhotoMode final
{
public:
	bool                                          bPhotoMode;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsComponentTickEnabled_ReturnValue;       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85EE[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85EF[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PhotoModePlayerFacialManager_C*     CallFunc_FinishSpawningActor_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FacialAnim_C_SetPhotoMode) == 0x000010, "Wrong alignment on BP_FacialAnim_C_SetPhotoMode");
static_assert(sizeof(BP_FacialAnim_C_SetPhotoMode) == 0x000060, "Wrong size on BP_FacialAnim_C_SetPhotoMode");
static_assert(offsetof(BP_FacialAnim_C_SetPhotoMode, bPhotoMode) == 0x000000, "Member 'BP_FacialAnim_C_SetPhotoMode::bPhotoMode' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_SetPhotoMode, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_FacialAnim_C_SetPhotoMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_SetPhotoMode, CallFunc_IsComponentTickEnabled_ReturnValue) == 0x000002, "Member 'BP_FacialAnim_C_SetPhotoMode::CallFunc_IsComponentTickEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_SetPhotoMode, CallFunc_IsValid_ReturnValue_1) == 0x000003, "Member 'BP_FacialAnim_C_SetPhotoMode::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_SetPhotoMode, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'BP_FacialAnim_C_SetPhotoMode::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_SetPhotoMode, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'BP_FacialAnim_C_SetPhotoMode::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_SetPhotoMode, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000048, "Member 'BP_FacialAnim_C_SetPhotoMode::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FacialAnim_C_SetPhotoMode, CallFunc_FinishSpawningActor_ReturnValue) == 0x000050, "Member 'BP_FacialAnim_C_SetPhotoMode::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

