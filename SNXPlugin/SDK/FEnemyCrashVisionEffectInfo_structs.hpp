#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FEnemyCrashVisionEffectInfo

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct FEnemyCrashVisionEffectInfo.FEnemyCrashVisionEffectInfo
// 0x0040 (0x0040 - 0x0000)
struct FFEnemyCrashVisionEffectInfo final
{
public:
	class FName                                   AttachBoneName_5_B9808ECC4DF8B1CD467240B1AE65CCF5; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C5[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Offset_8_E77D26634588C77E34872F9C1203391C;         // 0x0010(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FFEnemyCrashVisionEffectInfo) == 0x000010, "Wrong alignment on FFEnemyCrashVisionEffectInfo");
static_assert(sizeof(FFEnemyCrashVisionEffectInfo) == 0x000040, "Wrong size on FFEnemyCrashVisionEffectInfo");
static_assert(offsetof(FFEnemyCrashVisionEffectInfo, AttachBoneName_5_B9808ECC4DF8B1CD467240B1AE65CCF5) == 0x000000, "Member 'FFEnemyCrashVisionEffectInfo::AttachBoneName_5_B9808ECC4DF8B1CD467240B1AE65CCF5' has a wrong offset!");
static_assert(offsetof(FFEnemyCrashVisionEffectInfo, Offset_8_E77D26634588C77E34872F9C1203391C) == 0x000010, "Member 'FFEnemyCrashVisionEffectInfo::Offset_8_E77D26634588C77E34872F9C1203391C' has a wrong offset!");

}

