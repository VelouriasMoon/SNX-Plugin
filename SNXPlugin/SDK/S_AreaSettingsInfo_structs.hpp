#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_AreaSettingsInfo

#include "Basic.hpp"

#include "E_SceneType_structs.hpp"
#include "S_AreaInfoTweak_structs.hpp"
#include "E_LevelLoadStatus_structs.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_AreaSettingsInfo.S_AreaSettingsInfo
// 0x00A8 (0x00A8 - 0x0000)
struct FS_AreaSettingsInfo final
{
public:
	int32                                         LocationID_68_BB9E913545744980C85F85898489A6E2;    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AreaID_70_6E12812A452285A11C4D3E9DB7066E66;        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         VariationID_87_E291C77D419C5F9A8D681B8CED40EB39;   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AreaName_51_E51E2F0B496EBFDE5F3362849C7A9014;      // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_SceneType                                   SceneType_34_DBE4E58B490D7EC844354EABF2193F32;     // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerCameraPreset                           CameraPreset_108_2A8C22D644F01A0089A17B8615FCA8EB; // 0x0015(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBA[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SoundSetting_62_9647562F454F621CF70C2381300834F2;  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_LevelLoadStatus                             LoadStatus_37_92CD1C0A49B7530772E153BC604471E6;    // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBB[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   DefaultPlayerStart_65_E10F31AC43170C58331359B5EC3F2A38; // 0x0024(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4EBC[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           BGInfos_75_0D5E446442E9AA11404FDFAB3DC9669A;       // 0x0030(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                           NObjInfos_77_D8C89E9B4163FF04638792AA44D324EB;     // 0x0040(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                           EnemyInfos_79_1268D870488517FBC4B04BAD55DF3038;    // 0x0050(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                           EventInfos_81_B6B4A15C4ECD67D862279DA2401DBAF5;    // 0x0060(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                           NPCInfos_83_A4D3D32D4D0FBE630522F7A6DF15F2D1;      // 0x0070(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FName>                           ArrangePointInfos_91_BC90CA9D4CF53DA7A7299386ED3F96FA; // 0x0080(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FS_AreaInfoTweak>               AreaInfoTweaks_103_E807532E4636AC64182B7CB959938E8E; // 0x0090(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          IsNeedExport_105_35E2A608493FA5846F76E494BF3517EA; // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FS_AreaSettingsInfo) == 0x000008, "Wrong alignment on FS_AreaSettingsInfo");
static_assert(sizeof(FS_AreaSettingsInfo) == 0x0000A8, "Wrong size on FS_AreaSettingsInfo");
static_assert(offsetof(FS_AreaSettingsInfo, LocationID_68_BB9E913545744980C85F85898489A6E2) == 0x000000, "Member 'FS_AreaSettingsInfo::LocationID_68_BB9E913545744980C85F85898489A6E2' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, AreaID_70_6E12812A452285A11C4D3E9DB7066E66) == 0x000004, "Member 'FS_AreaSettingsInfo::AreaID_70_6E12812A452285A11C4D3E9DB7066E66' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, VariationID_87_E291C77D419C5F9A8D681B8CED40EB39) == 0x000008, "Member 'FS_AreaSettingsInfo::VariationID_87_E291C77D419C5F9A8D681B8CED40EB39' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, AreaName_51_E51E2F0B496EBFDE5F3362849C7A9014) == 0x00000C, "Member 'FS_AreaSettingsInfo::AreaName_51_E51E2F0B496EBFDE5F3362849C7A9014' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, SceneType_34_DBE4E58B490D7EC844354EABF2193F32) == 0x000014, "Member 'FS_AreaSettingsInfo::SceneType_34_DBE4E58B490D7EC844354EABF2193F32' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, CameraPreset_108_2A8C22D644F01A0089A17B8615FCA8EB) == 0x000015, "Member 'FS_AreaSettingsInfo::CameraPreset_108_2A8C22D644F01A0089A17B8615FCA8EB' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, SoundSetting_62_9647562F454F621CF70C2381300834F2) == 0x000018, "Member 'FS_AreaSettingsInfo::SoundSetting_62_9647562F454F621CF70C2381300834F2' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, LoadStatus_37_92CD1C0A49B7530772E153BC604471E6) == 0x000020, "Member 'FS_AreaSettingsInfo::LoadStatus_37_92CD1C0A49B7530772E153BC604471E6' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, DefaultPlayerStart_65_E10F31AC43170C58331359B5EC3F2A38) == 0x000024, "Member 'FS_AreaSettingsInfo::DefaultPlayerStart_65_E10F31AC43170C58331359B5EC3F2A38' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, BGInfos_75_0D5E446442E9AA11404FDFAB3DC9669A) == 0x000030, "Member 'FS_AreaSettingsInfo::BGInfos_75_0D5E446442E9AA11404FDFAB3DC9669A' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, NObjInfos_77_D8C89E9B4163FF04638792AA44D324EB) == 0x000040, "Member 'FS_AreaSettingsInfo::NObjInfos_77_D8C89E9B4163FF04638792AA44D324EB' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, EnemyInfos_79_1268D870488517FBC4B04BAD55DF3038) == 0x000050, "Member 'FS_AreaSettingsInfo::EnemyInfos_79_1268D870488517FBC4B04BAD55DF3038' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, EventInfos_81_B6B4A15C4ECD67D862279DA2401DBAF5) == 0x000060, "Member 'FS_AreaSettingsInfo::EventInfos_81_B6B4A15C4ECD67D862279DA2401DBAF5' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, NPCInfos_83_A4D3D32D4D0FBE630522F7A6DF15F2D1) == 0x000070, "Member 'FS_AreaSettingsInfo::NPCInfos_83_A4D3D32D4D0FBE630522F7A6DF15F2D1' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, ArrangePointInfos_91_BC90CA9D4CF53DA7A7299386ED3F96FA) == 0x000080, "Member 'FS_AreaSettingsInfo::ArrangePointInfos_91_BC90CA9D4CF53DA7A7299386ED3F96FA' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, AreaInfoTweaks_103_E807532E4636AC64182B7CB959938E8E) == 0x000090, "Member 'FS_AreaSettingsInfo::AreaInfoTweaks_103_E807532E4636AC64182B7CB959938E8E' has a wrong offset!");
static_assert(offsetof(FS_AreaSettingsInfo, IsNeedExport_105_35E2A608493FA5846F76E494BF3517EA) == 0x0000A0, "Member 'FS_AreaSettingsInfo::IsNeedExport_105_35E2A608493FA5846F76E494BF3517EA' has a wrong offset!");

}

