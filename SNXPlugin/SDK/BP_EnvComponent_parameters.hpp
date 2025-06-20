#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EnvComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AcceleratorParam_structs.hpp"


namespace SDK::Params
{

// Function BP_EnvComponent.BP_EnvComponent_C.ExecuteUbergraph_BP_EnvComponent
// 0x0040 (0x0040 - 0x0000)
struct BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A33[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceleratorParam                      K2Node_Event_Parameter_1;                          // 0x0008(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A34[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Owner_1;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHologram_1;                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A35[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAcceleratorParam                      K2Node_Event_Parameter;                            // 0x0024(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Owner;                                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RemainTime;                           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHologram;                            // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent) == 0x000008, "Wrong alignment on BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent");
static_assert(sizeof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent) == 0x000040, "Wrong size on BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent");
static_assert(offsetof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent, EntryPoint) == 0x000000, "Member 'BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent, K2Node_Event_Parameter_1) == 0x000008, "Member 'BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent::K2Node_Event_Parameter_1' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent, K2Node_Event_Owner_1) == 0x000018, "Member 'BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent::K2Node_Event_Owner_1' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent, K2Node_Event_bHologram_1) == 0x000020, "Member 'BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent::K2Node_Event_bHologram_1' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent, K2Node_Event_Parameter) == 0x000024, "Member 'BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent::K2Node_Event_Parameter' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent, K2Node_Event_Owner) == 0x000030, "Member 'BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent::K2Node_Event_Owner' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent, K2Node_Event_RemainTime) == 0x000038, "Member 'BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent::K2Node_Event_RemainTime' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent, K2Node_Event_bHologram) == 0x00003C, "Member 'BP_EnvComponent_C_ExecuteUbergraph_BP_EnvComponent::K2Node_Event_bHologram' has a wrong offset!");

// Function BP_EnvComponent.BP_EnvComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_EnvComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnvComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_EnvComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_EnvComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_EnvComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_EnvComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_EnvComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_EnvComponent.BP_EnvComponent_C.OnAcceleratorEnd
// 0x0020 (0x0020 - 0x0000)
struct BP_EnvComponent_C_OnAcceleratorEnd final
{
public:
	struct FAcceleratorParam                      Parameter;                                         // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A36[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Owner;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RemainTime;                                        // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHologram;                                         // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnvComponent_C_OnAcceleratorEnd) == 0x000008, "Wrong alignment on BP_EnvComponent_C_OnAcceleratorEnd");
static_assert(sizeof(BP_EnvComponent_C_OnAcceleratorEnd) == 0x000020, "Wrong size on BP_EnvComponent_C_OnAcceleratorEnd");
static_assert(offsetof(BP_EnvComponent_C_OnAcceleratorEnd, Parameter) == 0x000000, "Member 'BP_EnvComponent_C_OnAcceleratorEnd::Parameter' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_OnAcceleratorEnd, Owner) == 0x000010, "Member 'BP_EnvComponent_C_OnAcceleratorEnd::Owner' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_OnAcceleratorEnd, RemainTime) == 0x000018, "Member 'BP_EnvComponent_C_OnAcceleratorEnd::RemainTime' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_OnAcceleratorEnd, bHologram) == 0x00001C, "Member 'BP_EnvComponent_C_OnAcceleratorEnd::bHologram' has a wrong offset!");

// Function BP_EnvComponent.BP_EnvComponent_C.OnAcceleratorStart
// 0x0020 (0x0020 - 0x0000)
struct BP_EnvComponent_C_OnAcceleratorStart final
{
public:
	struct FAcceleratorParam                      Parameter;                                         // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A37[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Owner;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHologram;                                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnvComponent_C_OnAcceleratorStart) == 0x000008, "Wrong alignment on BP_EnvComponent_C_OnAcceleratorStart");
static_assert(sizeof(BP_EnvComponent_C_OnAcceleratorStart) == 0x000020, "Wrong size on BP_EnvComponent_C_OnAcceleratorStart");
static_assert(offsetof(BP_EnvComponent_C_OnAcceleratorStart, Parameter) == 0x000000, "Member 'BP_EnvComponent_C_OnAcceleratorStart::Parameter' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_OnAcceleratorStart, Owner) == 0x000010, "Member 'BP_EnvComponent_C_OnAcceleratorStart::Owner' has a wrong offset!");
static_assert(offsetof(BP_EnvComponent_C_OnAcceleratorStart, bHologram) == 0x000018, "Member 'BP_EnvComponent_C_OnAcceleratorStart::bHologram' has a wrong offset!");

}

