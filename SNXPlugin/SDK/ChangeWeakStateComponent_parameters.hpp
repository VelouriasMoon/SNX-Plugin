#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChangeWeakStateComponent

#include "Basic.hpp"

#include "ST_emWeakMaterial_structs.hpp"
#include "Engine_structs.hpp"
#include "ST_emEnableWeakData_structs.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK::Params
{

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.ExecuteUbergraph_ChangeWeakStateComponent
// 0x0008 (0x0008 - 0x0000)
struct ChangeWeakStateComponent_C_ExecuteUbergraph_ChangeWeakStateComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeWeakStateComponent_C_ExecuteUbergraph_ChangeWeakStateComponent) == 0x000004, "Wrong alignment on ChangeWeakStateComponent_C_ExecuteUbergraph_ChangeWeakStateComponent");
static_assert(sizeof(ChangeWeakStateComponent_C_ExecuteUbergraph_ChangeWeakStateComponent) == 0x000008, "Wrong size on ChangeWeakStateComponent_C_ExecuteUbergraph_ChangeWeakStateComponent");
static_assert(offsetof(ChangeWeakStateComponent_C_ExecuteUbergraph_ChangeWeakStateComponent, EntryPoint) == 0x000000, "Member 'ChangeWeakStateComponent_C_ExecuteUbergraph_ChangeWeakStateComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_ExecuteUbergraph_ChangeWeakStateComponent, K2Node_Event_EndPlayReason) == 0x000004, "Member 'ChangeWeakStateComponent_C_ExecuteUbergraph_ChangeWeakStateComponent::K2Node_Event_EndPlayReason' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct ChangeWeakStateComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeWeakStateComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on ChangeWeakStateComponent_C_ReceiveEndPlay");
static_assert(sizeof(ChangeWeakStateComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on ChangeWeakStateComponent_C_ReceiveEndPlay");
static_assert(offsetof(ChangeWeakStateComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'ChangeWeakStateComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Enable Weak
// 0x00C8 (0x00C8 - 0x0000)
struct ChangeWeakStateComponent_C_Enable_Weak final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeakListNum;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNotChangeCollision;                               // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AD9[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_emWeakMaterial                     LWeakMaterialData;                                 // 0x0010(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LRemoveIndex;                                      // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LSetWeak;                                          // 0x0034(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ADA[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         LDummyWeakNoList;                                  // 0x0038(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                         LWeakNoList;                                       // 0x0048(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_emEnableWeakData                   EnableWeakData;                                    // 0x0058(0x0040)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         LMeshArray;                                        // 0x0098(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	class UDamagePartCollisionComponent*          LCollision;                                        // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                LCollisionList;                                    // 0x00B0(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	class ARSBattleEnemy_C*                       LOwnerEnemy;                                       // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeWeakStateComponent_C_Enable_Weak) == 0x000008, "Wrong alignment on ChangeWeakStateComponent_C_Enable_Weak");
static_assert(sizeof(ChangeWeakStateComponent_C_Enable_Weak) == 0x0000C8, "Wrong size on ChangeWeakStateComponent_C_Enable_Weak");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, bEnable) == 0x000000, "Member 'ChangeWeakStateComponent_C_Enable_Weak::bEnable' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, WeakListNum) == 0x000004, "Member 'ChangeWeakStateComponent_C_Enable_Weak::WeakListNum' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, bNotChangeCollision) == 0x000008, "Member 'ChangeWeakStateComponent_C_Enable_Weak::bNotChangeCollision' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, LWeakMaterialData) == 0x000010, "Member 'ChangeWeakStateComponent_C_Enable_Weak::LWeakMaterialData' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, LRemoveIndex) == 0x000030, "Member 'ChangeWeakStateComponent_C_Enable_Weak::LRemoveIndex' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, LSetWeak) == 0x000034, "Member 'ChangeWeakStateComponent_C_Enable_Weak::LSetWeak' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, LDummyWeakNoList) == 0x000038, "Member 'ChangeWeakStateComponent_C_Enable_Weak::LDummyWeakNoList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, LWeakNoList) == 0x000048, "Member 'ChangeWeakStateComponent_C_Enable_Weak::LWeakNoList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, EnableWeakData) == 0x000058, "Member 'ChangeWeakStateComponent_C_Enable_Weak::EnableWeakData' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, LMeshArray) == 0x000098, "Member 'ChangeWeakStateComponent_C_Enable_Weak::LMeshArray' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, LCollision) == 0x0000A8, "Member 'ChangeWeakStateComponent_C_Enable_Weak::LCollision' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, LCollisionList) == 0x0000B0, "Member 'ChangeWeakStateComponent_C_Enable_Weak::LCollisionList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_Weak, LOwnerEnemy) == 0x0000C0, "Member 'ChangeWeakStateComponent_C_Enable_Weak::LOwnerEnemy' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Initialize
// 0x00A8 (0x00A8 - 0x0000)
struct ChangeWeakStateComponent_C_Initialize final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ADB[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_emEnableWeakData                   CallFunc_Array_Get_Item;                           // 0x0018(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ADC[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEnemyEnableWeakData                   K2Node_MakeStruct_EnemyEnableWeakData;             // 0x0060(0x0040)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeWeakStateComponent_C_Initialize) == 0x000008, "Wrong alignment on ChangeWeakStateComponent_C_Initialize");
static_assert(sizeof(ChangeWeakStateComponent_C_Initialize) == 0x0000A8, "Wrong size on ChangeWeakStateComponent_C_Initialize");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'ChangeWeakStateComponent_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'ChangeWeakStateComponent_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ChangeWeakStateComponent_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'ChangeWeakStateComponent_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'ChangeWeakStateComponent_C_Initialize::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, CallFunc_Array_Get_Item) == 0x000018, "Member 'ChangeWeakStateComponent_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'ChangeWeakStateComponent_C_Initialize::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'ChangeWeakStateComponent_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, K2Node_MakeStruct_EnemyEnableWeakData) == 0x000060, "Member 'ChangeWeakStateComponent_C_Initialize::K2Node_MakeStruct_EnemyEnableWeakData' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Initialize, CallFunc_Array_Add_ReturnValue) == 0x0000A0, "Member 'ChangeWeakStateComponent_C_Initialize::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Update
// 0x0130 (0x0130 - 0x0000)
struct ChangeWeakStateComponent_C_Update final
{
public:
	float                                         DeltaSec;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LEmissiveMax;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LPointMax;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LStopEmissive;                                     // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ADD[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_emWeakMaterial                     LWorkEndWeakData;                                  // 0x0010(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FST_emWeakMaterial                     LWorkWeakMaterialData;                             // 0x0030(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FST_emWeakMaterial>             LEndWeakDataList;                                  // 0x0050(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                         LEndWeakStringList;                                // 0x0060(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         LLastIndex;                                        // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ADE[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LEndWeakIndexList;                                 // 0x0078(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<bool>                                  LEndWeakMaterialList;                              // 0x0088(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         LWorkEmissiveTimer;                                // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LPointRate;                                        // 0x009C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LEmissiveIndex;                                    // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LEmissiveRate;                                     // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LWorkString;                                       // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         LMeshes;                                           // 0x00B8(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class FString>                         LWeakEmissiveStringList;                           // 0x00C8(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<bool>                                  LFullInactiveList;                                 // 0x00D8(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         LArrayNum;                                         // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ADF[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_emEnableWeakData                   LEnableWeakData;                                   // 0x00F0(0x0040)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(ChangeWeakStateComponent_C_Update) == 0x000008, "Wrong alignment on ChangeWeakStateComponent_C_Update");
static_assert(sizeof(ChangeWeakStateComponent_C_Update) == 0x000130, "Wrong size on ChangeWeakStateComponent_C_Update");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, DeltaSec) == 0x000000, "Member 'ChangeWeakStateComponent_C_Update::DeltaSec' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LEmissiveMax) == 0x000004, "Member 'ChangeWeakStateComponent_C_Update::LEmissiveMax' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LPointMax) == 0x000008, "Member 'ChangeWeakStateComponent_C_Update::LPointMax' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LStopEmissive) == 0x00000C, "Member 'ChangeWeakStateComponent_C_Update::LStopEmissive' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LWorkEndWeakData) == 0x000010, "Member 'ChangeWeakStateComponent_C_Update::LWorkEndWeakData' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LWorkWeakMaterialData) == 0x000030, "Member 'ChangeWeakStateComponent_C_Update::LWorkWeakMaterialData' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LEndWeakDataList) == 0x000050, "Member 'ChangeWeakStateComponent_C_Update::LEndWeakDataList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LEndWeakStringList) == 0x000060, "Member 'ChangeWeakStateComponent_C_Update::LEndWeakStringList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LLastIndex) == 0x000070, "Member 'ChangeWeakStateComponent_C_Update::LLastIndex' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LEndWeakIndexList) == 0x000078, "Member 'ChangeWeakStateComponent_C_Update::LEndWeakIndexList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LEndWeakMaterialList) == 0x000088, "Member 'ChangeWeakStateComponent_C_Update::LEndWeakMaterialList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LWorkEmissiveTimer) == 0x000098, "Member 'ChangeWeakStateComponent_C_Update::LWorkEmissiveTimer' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LPointRate) == 0x00009C, "Member 'ChangeWeakStateComponent_C_Update::LPointRate' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LEmissiveIndex) == 0x0000A0, "Member 'ChangeWeakStateComponent_C_Update::LEmissiveIndex' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LEmissiveRate) == 0x0000A4, "Member 'ChangeWeakStateComponent_C_Update::LEmissiveRate' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LWorkString) == 0x0000A8, "Member 'ChangeWeakStateComponent_C_Update::LWorkString' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LMeshes) == 0x0000B8, "Member 'ChangeWeakStateComponent_C_Update::LMeshes' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LWeakEmissiveStringList) == 0x0000C8, "Member 'ChangeWeakStateComponent_C_Update::LWeakEmissiveStringList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LFullInactiveList) == 0x0000D8, "Member 'ChangeWeakStateComponent_C_Update::LFullInactiveList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LArrayNum) == 0x0000E8, "Member 'ChangeWeakStateComponent_C_Update::LArrayNum' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Update, LEnableWeakData) == 0x0000F0, "Member 'ChangeWeakStateComponent_C_Update::LEnableWeakData' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Enable All Weak
// 0x0001 (0x0001 - 0x0000)
struct ChangeWeakStateComponent_C_Enable_All_Weak final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeWeakStateComponent_C_Enable_All_Weak) == 0x000001, "Wrong alignment on ChangeWeakStateComponent_C_Enable_All_Weak");
static_assert(sizeof(ChangeWeakStateComponent_C_Enable_All_Weak) == 0x000001, "Wrong size on ChangeWeakStateComponent_C_Enable_All_Weak");
static_assert(offsetof(ChangeWeakStateComponent_C_Enable_All_Weak, bEnable) == 0x000000, "Member 'ChangeWeakStateComponent_C_Enable_All_Weak::bEnable' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Set Change Weak Material
// 0x0008 (0x0008 - 0x0000)
struct ChangeWeakStateComponent_C_Set_Change_Weak_Material final
{
public:
	bool                                          bChange;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE0[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeakListNum;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeWeakStateComponent_C_Set_Change_Weak_Material) == 0x000004, "Wrong alignment on ChangeWeakStateComponent_C_Set_Change_Weak_Material");
static_assert(sizeof(ChangeWeakStateComponent_C_Set_Change_Weak_Material) == 0x000008, "Wrong size on ChangeWeakStateComponent_C_Set_Change_Weak_Material");
static_assert(offsetof(ChangeWeakStateComponent_C_Set_Change_Weak_Material, bChange) == 0x000000, "Member 'ChangeWeakStateComponent_C_Set_Change_Weak_Material::bChange' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Set_Change_Weak_Material, WeakListNum) == 0x000004, "Member 'ChangeWeakStateComponent_C_Set_Change_Weak_Material::WeakListNum' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is Weak Full Inactive
// 0x0008 (0x0008 - 0x0000)
struct ChangeWeakStateComponent_C_Is_Weak_Full_Inactive final
{
public:
	int32                                         WeakListNum;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFullInactive;                                     // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LFullInactive;                                     // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWeakFullInactive_Native_ReturnValue;    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeWeakStateComponent_C_Is_Weak_Full_Inactive) == 0x000004, "Wrong alignment on ChangeWeakStateComponent_C_Is_Weak_Full_Inactive");
static_assert(sizeof(ChangeWeakStateComponent_C_Is_Weak_Full_Inactive) == 0x000008, "Wrong size on ChangeWeakStateComponent_C_Is_Weak_Full_Inactive");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Weak_Full_Inactive, WeakListNum) == 0x000000, "Member 'ChangeWeakStateComponent_C_Is_Weak_Full_Inactive::WeakListNum' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Weak_Full_Inactive, bFullInactive) == 0x000004, "Member 'ChangeWeakStateComponent_C_Is_Weak_Full_Inactive::bFullInactive' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Weak_Full_Inactive, LFullInactive) == 0x000005, "Member 'ChangeWeakStateComponent_C_Is_Weak_Full_Inactive::LFullInactive' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Weak_Full_Inactive, CallFunc_IsWeakFullInactive_Native_ReturnValue) == 0x000006, "Member 'ChangeWeakStateComponent_C_Is_Weak_Full_Inactive::CallFunc_IsWeakFullInactive_Native_ReturnValue' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Set Full Inactive Weak
// 0x0010 (0x0010 - 0x0000)
struct ChangeWeakStateComponent_C_Set_Full_Inactive_Weak final
{
public:
	bool                                          bFullInactive;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeakListNum;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrenelColorPower;                                  // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ColorMapValue;                                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChangeWeakStateComponent_C_Set_Full_Inactive_Weak) == 0x000004, "Wrong alignment on ChangeWeakStateComponent_C_Set_Full_Inactive_Weak");
static_assert(sizeof(ChangeWeakStateComponent_C_Set_Full_Inactive_Weak) == 0x000010, "Wrong size on ChangeWeakStateComponent_C_Set_Full_Inactive_Weak");
static_assert(offsetof(ChangeWeakStateComponent_C_Set_Full_Inactive_Weak, bFullInactive) == 0x000000, "Member 'ChangeWeakStateComponent_C_Set_Full_Inactive_Weak::bFullInactive' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Set_Full_Inactive_Weak, WeakListNum) == 0x000004, "Member 'ChangeWeakStateComponent_C_Set_Full_Inactive_Weak::WeakListNum' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Set_Full_Inactive_Weak, FrenelColorPower) == 0x000008, "Member 'ChangeWeakStateComponent_C_Set_Full_Inactive_Weak::FrenelColorPower' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Set_Full_Inactive_Weak, ColorMapValue) == 0x00000C, "Member 'ChangeWeakStateComponent_C_Set_Full_Inactive_Weak::ColorMapValue' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Get Full Inactive List
// 0x0020 (0x0020 - 0x0000)
struct ChangeWeakStateComponent_C_Get_Full_Inactive_List final
{
public:
	TArray<bool>                                  FullInactiveList;                                  // 0x0000(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	TArray<bool>                                  CallFunc_GetFullInactiveList_Native_ReturnValue;   // 0x0010(0x0010)(ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(ChangeWeakStateComponent_C_Get_Full_Inactive_List) == 0x000008, "Wrong alignment on ChangeWeakStateComponent_C_Get_Full_Inactive_List");
static_assert(sizeof(ChangeWeakStateComponent_C_Get_Full_Inactive_List) == 0x000020, "Wrong size on ChangeWeakStateComponent_C_Get_Full_Inactive_List");
static_assert(offsetof(ChangeWeakStateComponent_C_Get_Full_Inactive_List, FullInactiveList) == 0x000000, "Member 'ChangeWeakStateComponent_C_Get_Full_Inactive_List::FullInactiveList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Get_Full_Inactive_List, CallFunc_GetFullInactiveList_Native_ReturnValue) == 0x000010, "Member 'ChangeWeakStateComponent_C_Get_Full_Inactive_List::CallFunc_GetFullInactiveList_Native_ReturnValue' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is All Weak Full Inactive
// 0x0020 (0x0020 - 0x0000)
struct ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive final
{
public:
	bool                                          bAllWeakFullInactive;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  LList;                                             // 0x0008(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          LAllWeakFullInactive;                              // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAllWeakFullInactive_Native_ReturnValue; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive) == 0x000008, "Wrong alignment on ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive");
static_assert(sizeof(ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive) == 0x000020, "Wrong size on ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive, bAllWeakFullInactive) == 0x000000, "Member 'ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive::bAllWeakFullInactive' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive, LList) == 0x000008, "Member 'ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive::LList' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive, LAllWeakFullInactive) == 0x000018, "Member 'ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive::LAllWeakFullInactive' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive, CallFunc_IsAllWeakFullInactive_Native_ReturnValue) == 0x000019, "Member 'ChangeWeakStateComponent_C_Is_All_Weak_Full_Inactive::CallFunc_IsAllWeakFullInactive_Native_ReturnValue' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is Force Enable Weak
// 0x0002 (0x0002 - 0x0000)
struct ChangeWeakStateComponent_C_Is_Force_Enable_Weak final
{
public:
	bool                                          Param_bForceEnableWeak;                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsForceEnableWeak_Native_ReturnValue;     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeWeakStateComponent_C_Is_Force_Enable_Weak) == 0x000001, "Wrong alignment on ChangeWeakStateComponent_C_Is_Force_Enable_Weak");
static_assert(sizeof(ChangeWeakStateComponent_C_Is_Force_Enable_Weak) == 0x000002, "Wrong size on ChangeWeakStateComponent_C_Is_Force_Enable_Weak");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Force_Enable_Weak, Param_bForceEnableWeak) == 0x000000, "Member 'ChangeWeakStateComponent_C_Is_Force_Enable_Weak::Param_bForceEnableWeak' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Force_Enable_Weak, CallFunc_IsForceEnableWeak_Native_ReturnValue) == 0x000001, "Member 'ChangeWeakStateComponent_C_Is_Force_Enable_Weak::CallFunc_IsForceEnableWeak_Native_ReturnValue' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Set All Weak Full Inactive
// 0x0001 (0x0001 - 0x0000)
struct ChangeWeakStateComponent_C_Set_All_Weak_Full_Inactive final
{
public:
	bool                                          bFullInactive;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeWeakStateComponent_C_Set_All_Weak_Full_Inactive) == 0x000001, "Wrong alignment on ChangeWeakStateComponent_C_Set_All_Weak_Full_Inactive");
static_assert(sizeof(ChangeWeakStateComponent_C_Set_All_Weak_Full_Inactive) == 0x000001, "Wrong size on ChangeWeakStateComponent_C_Set_All_Weak_Full_Inactive");
static_assert(offsetof(ChangeWeakStateComponent_C_Set_All_Weak_Full_Inactive, bFullInactive) == 0x000000, "Member 'ChangeWeakStateComponent_C_Set_All_Weak_Full_Inactive::bFullInactive' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Add Weak Extend Time
// 0x0001 (0x0001 - 0x0000)
struct ChangeWeakStateComponent_C_Add_Weak_Extend_Time final
{
public:
	bool                                          LbSuccess;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeWeakStateComponent_C_Add_Weak_Extend_Time) == 0x000001, "Wrong alignment on ChangeWeakStateComponent_C_Add_Weak_Extend_Time");
static_assert(sizeof(ChangeWeakStateComponent_C_Add_Weak_Extend_Time) == 0x000001, "Wrong size on ChangeWeakStateComponent_C_Add_Weak_Extend_Time");
static_assert(offsetof(ChangeWeakStateComponent_C_Add_Weak_Extend_Time, LbSuccess) == 0x000000, "Member 'ChangeWeakStateComponent_C_Add_Weak_Extend_Time::LbSuccess' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.End Weak Extend Time
// 0x0001 (0x0001 - 0x0000)
struct ChangeWeakStateComponent_C_End_Weak_Extend_Time final
{
public:
	bool                                          LbSuccess;                                         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeWeakStateComponent_C_End_Weak_Extend_Time) == 0x000001, "Wrong alignment on ChangeWeakStateComponent_C_End_Weak_Extend_Time");
static_assert(sizeof(ChangeWeakStateComponent_C_End_Weak_Extend_Time) == 0x000001, "Wrong size on ChangeWeakStateComponent_C_End_Weak_Extend_Time");
static_assert(offsetof(ChangeWeakStateComponent_C_End_Weak_Extend_Time, LbSuccess) == 0x000000, "Member 'ChangeWeakStateComponent_C_End_Weak_Extend_Time::LbSuccess' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is Weak Extend Time
// 0x0003 (0x0003 - 0x0000)
struct ChangeWeakStateComponent_C_Is_Weak_Extend_Time final
{
public:
	bool                                          Param_bWeakExtendTime;                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LbSuccess;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsWeakExtendTime_Native_ReturnValue;      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeWeakStateComponent_C_Is_Weak_Extend_Time) == 0x000001, "Wrong alignment on ChangeWeakStateComponent_C_Is_Weak_Extend_Time");
static_assert(sizeof(ChangeWeakStateComponent_C_Is_Weak_Extend_Time) == 0x000003, "Wrong size on ChangeWeakStateComponent_C_Is_Weak_Extend_Time");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Weak_Extend_Time, Param_bWeakExtendTime) == 0x000000, "Member 'ChangeWeakStateComponent_C_Is_Weak_Extend_Time::Param_bWeakExtendTime' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Weak_Extend_Time, LbSuccess) == 0x000001, "Member 'ChangeWeakStateComponent_C_Is_Weak_Extend_Time::LbSuccess' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Weak_Extend_Time, CallFunc_IsWeakExtendTime_Native_ReturnValue) == 0x000002, "Member 'ChangeWeakStateComponent_C_Is_Weak_Extend_Time::CallFunc_IsWeakExtendTime_Native_ReturnValue' has a wrong offset!");

// Function ChangeWeakStateComponent.ChangeWeakStateComponent_C.Is Enable Weak Extend Time
// 0x0003 (0x0003 - 0x0000)
struct ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time final
{
public:
	bool                                          Param_bWeakExtendTime;                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LbSuccess;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnableWeakExtendTime_Native_ReturnValue; // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time) == 0x000001, "Wrong alignment on ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time");
static_assert(sizeof(ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time) == 0x000003, "Wrong size on ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time, Param_bWeakExtendTime) == 0x000000, "Member 'ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time::Param_bWeakExtendTime' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time, LbSuccess) == 0x000001, "Member 'ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time::LbSuccess' has a wrong offset!");
static_assert(offsetof(ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time, CallFunc_IsEnableWeakExtendTime_Native_ReturnValue) == 0x000002, "Member 'ChangeWeakStateComponent_C_Is_Enable_Weak_Extend_Time::CallFunc_IsEnableWeakExtendTime_Native_ReturnValue' has a wrong offset!");

}

