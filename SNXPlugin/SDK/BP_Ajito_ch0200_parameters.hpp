#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ajito_ch0200

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Ajito_ch0200.BP_Ajito_ch0200_C.SetWoodDamageParam
// 0x0038 (0x0038 - 0x0000)
struct BP_Ajito_ch0200_C_SetWoodDamageParam final
{
public:
	float                                         Param;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Num_Variable;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31EC[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31ED[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_om0691_C>         K2Node_DynamicCast_AsBPI_Om_0691;                  // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Ajito_ch0200_C_SetWoodDamageParam) == 0x000008, "Wrong alignment on BP_Ajito_ch0200_C_SetWoodDamageParam");
static_assert(sizeof(BP_Ajito_ch0200_C_SetWoodDamageParam) == 0x000038, "Wrong size on BP_Ajito_ch0200_C_SetWoodDamageParam");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, Param) == 0x000000, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::Param' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, Temp_int_Loop_Num_Variable) == 0x000008, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::Temp_int_Loop_Num_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, K2Node_DynamicCast_AsBPI_Om_0691) == 0x000020, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::K2Node_DynamicCast_AsBPI_Om_0691' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_SetWoodDamageParam, CallFunc_DoesImplementInterface_ReturnValue) == 0x000031, "Member 'BP_Ajito_ch0200_C_SetWoodDamageParam::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");

// Function BP_Ajito_ch0200.BP_Ajito_ch0200_C.WaterMove
// 0x0030 (0x0030 - 0x0000)
struct BP_Ajito_ch0200_C_WaterMove final
{
public:
	bool                                          On;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31EE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Num_Variable;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31EF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_om0716_C>         K2Node_DynamicCast_AsBPI_Om_0716;                  // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31F0[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ajito_ch0200_C_WaterMove) == 0x000008, "Wrong alignment on BP_Ajito_ch0200_C_WaterMove");
static_assert(sizeof(BP_Ajito_ch0200_C_WaterMove) == 0x000030, "Wrong size on BP_Ajito_ch0200_C_WaterMove");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, On) == 0x000000, "Member 'BP_Ajito_ch0200_C_WaterMove::On' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_Ajito_ch0200_C_WaterMove::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, Temp_int_Loop_Num_Variable) == 0x000008, "Member 'BP_Ajito_ch0200_C_WaterMove::Temp_int_Loop_Num_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_Ajito_ch0200_C_WaterMove::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_Ajito_ch0200_C_WaterMove::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, K2Node_DynamicCast_AsBPI_Om_0716) == 0x000018, "Member 'BP_Ajito_ch0200_C_WaterMove::K2Node_DynamicCast_AsBPI_Om_0716' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_Ajito_ch0200_C_WaterMove::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, CallFunc_DoesImplementInterface_ReturnValue) == 0x000029, "Member 'BP_Ajito_ch0200_C_WaterMove::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, CallFunc_Less_IntInt_ReturnValue) == 0x00002A, "Member 'BP_Ajito_ch0200_C_WaterMove::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterMove, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'BP_Ajito_ch0200_C_WaterMove::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_Ajito_ch0200.BP_Ajito_ch0200_C.WaterBreak
// 0x0028 (0x0028 - 0x0000)
struct BP_Ajito_ch0200_C_WaterBreak final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Num_Variable;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_om0716_C>         K2Node_DynamicCast_AsBPI_Om_0716;                  // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31F1[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Ajito_ch0200_C_WaterBreak) == 0x000008, "Wrong alignment on BP_Ajito_ch0200_C_WaterBreak");
static_assert(sizeof(BP_Ajito_ch0200_C_WaterBreak) == 0x000028, "Wrong size on BP_Ajito_ch0200_C_WaterBreak");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterBreak, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_Ajito_ch0200_C_WaterBreak::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterBreak, Temp_int_Loop_Num_Variable) == 0x000004, "Member 'BP_Ajito_ch0200_C_WaterBreak::Temp_int_Loop_Num_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterBreak, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_Ajito_ch0200_C_WaterBreak::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterBreak, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BP_Ajito_ch0200_C_WaterBreak::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterBreak, K2Node_DynamicCast_AsBPI_Om_0716) == 0x000010, "Member 'BP_Ajito_ch0200_C_WaterBreak::K2Node_DynamicCast_AsBPI_Om_0716' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterBreak, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Ajito_ch0200_C_WaterBreak::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterBreak, CallFunc_DoesImplementInterface_ReturnValue) == 0x000021, "Member 'BP_Ajito_ch0200_C_WaterBreak::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterBreak, CallFunc_Less_IntInt_ReturnValue) == 0x000022, "Member 'BP_Ajito_ch0200_C_WaterBreak::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Ajito_ch0200_C_WaterBreak, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_Ajito_ch0200_C_WaterBreak::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

