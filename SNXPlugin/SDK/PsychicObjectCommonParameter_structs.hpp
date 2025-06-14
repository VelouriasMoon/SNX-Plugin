#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PsychicObjectCommonParameter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BattlePrototype_structs.hpp"


namespace SDK
{

// UserDefinedStruct PsychicObjectCommonParameter.PsychicObjectCommonParameter
// 0x0170 (0x0170 - 0x0000)
struct FPsychicObjectCommonParameter final
{
public:
	float                                         TickControl_ActiveDistance_173_87FDF7D34BE3488EEA2B8CA4C1ED4340; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TickControl_ActorPreFrame_174_B48787B44A8E6A33C96345B770E1AC8A; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TickControl_ChangePreFrame_183_41DE09FC45D5077EB313C7B6D8324CC2; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CaptureLimit_Enable_203_9D141D3648E107C6E3206A9A2A1C1531; // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41B2[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CaptureLimit_Distance_209_3A3316D245A3811AF8B1D4BEEE7F0F7E; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CaptureLimit_Count_210_53BF553246321C3E8DEDA195BB309B56; // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 Focus_DistanceList_40_15BAF8294BF458CA9E8FAEABC6A0FC76; // 0x0018(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<int32>                                 Focus_DistancePointList_125_43D69B8B48525B99BBFA17A0502AC1C2; // 0x0028(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<float>                                 Focus_AngleList_42_418CCED745D9D11395C0669362A9C3C3; // 0x0038(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<int32>                                 Focus_AnglePointList_126_4F8EFDAD4D0A55C554B9DE8BF6F6D342; // 0x0048(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         Focus_HeightMin_37_B87867F74D8B26B73ECB7AB5510BF17B; // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Focus_HeightMax_39_BDA5C2684747D831FBB5C4BD1B50B237; // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThrowSpeedEnemyRate_26_6FA07FCF4696C3BF6FE61CAC9CB9A45F; // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThrowHomingSpeedEnemyRate_63_8CD47A77418E06E9767918AA2A27400C; // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EPsychicObjectSizeType>                PsychicField_RequestSizeList_164_811A96294B399AB2CA5820AAC79312E9; // 0x0068(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         PsychicField_SpawnNumMin_168_A5455C07472CCC11F7B7E0A56762BFA9; // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PsychicField_SearchRadius_44_E98A8B744537699B0D4D4285BF66F391; // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PsychicField_CaptureTime_79_E5612C49405B6B4677B329925C2FD36F; // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PsychicField_CaptureDelayTimeMin_154_FF2444654C22764758CDFFAD417D3A15; // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PsychicField_CaptureDelayTimeMax_156_F878EB654D7CC862DE660B9E557C10D5; // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PsychicField_AttractTime_152_A5892D284C2DC098B17CFEA111EDD578; // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BrainField_SpawnObjectNum_108_74E382954E74ABD02A0B64BFF7774CC0; // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B3[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPsychicObjectSizeType>                BrainField_RequestSizeList_163_FED7A70F4AECEC7310A1D6904F75C47E; // 0x0098(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         BrainField_SpawnAngleMax_69_08D5428F407F576D84C147AC08B9AE2D; // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BrainField_SpawnAngleMin_67_266A3022418B15DE837002BD20C8611E; // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BrainField_SpawnDistanceMin_71_7D58CDDB4A980D2247AFDEB6AB722CF8; // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BrainField_SpawnDistanceMax_73_88B88F474D462B0C7562998FFF8BEDB4; // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BrainField_SpawnHeightMin_75_30C9B3014B88A8CEE8F7EA993EBE8C53; // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BrainField_SpawnHeightMax_77_1CC34F7649AFE2C63F8478960A2E2CB2; // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 BrainField_SwingObjNumLevelList_99_BFA7AC704B657DACAD2DA9B26B1D3504; // 0x00C0(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         BrainField_SwingCollisionOffset_107_93D9BFBF4F1820B0D966318CF995B262; // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BrainField_SwingCollisionEndOffset_194_4B797D13467D7BBE7D501086B16F14E9; // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 BrainField_SwingCollisionRadiusLevelList_130_8A12F1A24B96D0E68127EFA6F8E32163; // 0x00D8(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<float>                                 BrainField_SwingCollisionHalfHeightLevelList_131_A609D7534C5E261D811F34B0F04A7F87; // 0x00E8(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FVector>                        BrainField_SwingAttachOffsetLevelList_133_391E7B3740162AAFBB41D88BE4845457; // 0x00F8(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FVector                                BrainField_SwingAttachOffsetRandomMin_179_6B300F45471EFF1F33716185DCAAC2F2; // 0x0108(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BrainField_SwingAttachOffsetRandomMax_180_CD91ABBC4636F4812DCBE3ACCFB65E20; // 0x0114(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 BrainField_ThrowObjNumLevelList_101_339BCA5948B75740C4347E99A4DDACCD; // 0x0120(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<int32>                                 BrainField_DropObjNumLevelList_103_52419645402EC6CD133667991793BE88; // 0x0130(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         BrainField_DropLookAtRate_91_4E2F4DA547B38E9419549DBB06ED7981; // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41B4[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 BrainField_DropCollisionRadiusLevelList_134_150B5454450BA9B0CC37BABCD967E8A8; // 0x0148(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         Respawn_RestrictRadius_145_542A461342C908B3239ED4BA4AB6607E; // 0x0158(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Respawn_CheckInterval_146_09F6097743D5FC731EF33DB8E64542CD; // 0x015C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Respawn_TimeNormal_147_1F5FC4EE4BE1E43BB818838263429382; // 0x0160(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Respawn_TimeUnique_148_3E98346C4F8B0914B95C32899DBA9165; // 0x0164(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dither_CheckDistanceEnable_190_5149E91C4EDC25C6998B28B88151B8D8; // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41B5[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Dither_CheckDistanceApplyRadius_191_B1FEC1844186F1860C3202AAE7D701B0; // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FPsychicObjectCommonParameter) == 0x000008, "Wrong alignment on FPsychicObjectCommonParameter");
static_assert(sizeof(FPsychicObjectCommonParameter) == 0x000170, "Wrong size on FPsychicObjectCommonParameter");
static_assert(offsetof(FPsychicObjectCommonParameter, TickControl_ActiveDistance_173_87FDF7D34BE3488EEA2B8CA4C1ED4340) == 0x000000, "Member 'FPsychicObjectCommonParameter::TickControl_ActiveDistance_173_87FDF7D34BE3488EEA2B8CA4C1ED4340' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, TickControl_ActorPreFrame_174_B48787B44A8E6A33C96345B770E1AC8A) == 0x000004, "Member 'FPsychicObjectCommonParameter::TickControl_ActorPreFrame_174_B48787B44A8E6A33C96345B770E1AC8A' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, TickControl_ChangePreFrame_183_41DE09FC45D5077EB313C7B6D8324CC2) == 0x000008, "Member 'FPsychicObjectCommonParameter::TickControl_ChangePreFrame_183_41DE09FC45D5077EB313C7B6D8324CC2' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, CaptureLimit_Enable_203_9D141D3648E107C6E3206A9A2A1C1531) == 0x00000C, "Member 'FPsychicObjectCommonParameter::CaptureLimit_Enable_203_9D141D3648E107C6E3206A9A2A1C1531' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, CaptureLimit_Distance_209_3A3316D245A3811AF8B1D4BEEE7F0F7E) == 0x000010, "Member 'FPsychicObjectCommonParameter::CaptureLimit_Distance_209_3A3316D245A3811AF8B1D4BEEE7F0F7E' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, CaptureLimit_Count_210_53BF553246321C3E8DEDA195BB309B56) == 0x000014, "Member 'FPsychicObjectCommonParameter::CaptureLimit_Count_210_53BF553246321C3E8DEDA195BB309B56' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Focus_DistanceList_40_15BAF8294BF458CA9E8FAEABC6A0FC76) == 0x000018, "Member 'FPsychicObjectCommonParameter::Focus_DistanceList_40_15BAF8294BF458CA9E8FAEABC6A0FC76' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Focus_DistancePointList_125_43D69B8B48525B99BBFA17A0502AC1C2) == 0x000028, "Member 'FPsychicObjectCommonParameter::Focus_DistancePointList_125_43D69B8B48525B99BBFA17A0502AC1C2' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Focus_AngleList_42_418CCED745D9D11395C0669362A9C3C3) == 0x000038, "Member 'FPsychicObjectCommonParameter::Focus_AngleList_42_418CCED745D9D11395C0669362A9C3C3' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Focus_AnglePointList_126_4F8EFDAD4D0A55C554B9DE8BF6F6D342) == 0x000048, "Member 'FPsychicObjectCommonParameter::Focus_AnglePointList_126_4F8EFDAD4D0A55C554B9DE8BF6F6D342' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Focus_HeightMin_37_B87867F74D8B26B73ECB7AB5510BF17B) == 0x000058, "Member 'FPsychicObjectCommonParameter::Focus_HeightMin_37_B87867F74D8B26B73ECB7AB5510BF17B' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Focus_HeightMax_39_BDA5C2684747D831FBB5C4BD1B50B237) == 0x00005C, "Member 'FPsychicObjectCommonParameter::Focus_HeightMax_39_BDA5C2684747D831FBB5C4BD1B50B237' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, ThrowSpeedEnemyRate_26_6FA07FCF4696C3BF6FE61CAC9CB9A45F) == 0x000060, "Member 'FPsychicObjectCommonParameter::ThrowSpeedEnemyRate_26_6FA07FCF4696C3BF6FE61CAC9CB9A45F' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, ThrowHomingSpeedEnemyRate_63_8CD47A77418E06E9767918AA2A27400C) == 0x000064, "Member 'FPsychicObjectCommonParameter::ThrowHomingSpeedEnemyRate_63_8CD47A77418E06E9767918AA2A27400C' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, PsychicField_RequestSizeList_164_811A96294B399AB2CA5820AAC79312E9) == 0x000068, "Member 'FPsychicObjectCommonParameter::PsychicField_RequestSizeList_164_811A96294B399AB2CA5820AAC79312E9' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, PsychicField_SpawnNumMin_168_A5455C07472CCC11F7B7E0A56762BFA9) == 0x000078, "Member 'FPsychicObjectCommonParameter::PsychicField_SpawnNumMin_168_A5455C07472CCC11F7B7E0A56762BFA9' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, PsychicField_SearchRadius_44_E98A8B744537699B0D4D4285BF66F391) == 0x00007C, "Member 'FPsychicObjectCommonParameter::PsychicField_SearchRadius_44_E98A8B744537699B0D4D4285BF66F391' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, PsychicField_CaptureTime_79_E5612C49405B6B4677B329925C2FD36F) == 0x000080, "Member 'FPsychicObjectCommonParameter::PsychicField_CaptureTime_79_E5612C49405B6B4677B329925C2FD36F' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, PsychicField_CaptureDelayTimeMin_154_FF2444654C22764758CDFFAD417D3A15) == 0x000084, "Member 'FPsychicObjectCommonParameter::PsychicField_CaptureDelayTimeMin_154_FF2444654C22764758CDFFAD417D3A15' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, PsychicField_CaptureDelayTimeMax_156_F878EB654D7CC862DE660B9E557C10D5) == 0x000088, "Member 'FPsychicObjectCommonParameter::PsychicField_CaptureDelayTimeMax_156_F878EB654D7CC862DE660B9E557C10D5' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, PsychicField_AttractTime_152_A5892D284C2DC098B17CFEA111EDD578) == 0x00008C, "Member 'FPsychicObjectCommonParameter::PsychicField_AttractTime_152_A5892D284C2DC098B17CFEA111EDD578' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SpawnObjectNum_108_74E382954E74ABD02A0B64BFF7774CC0) == 0x000090, "Member 'FPsychicObjectCommonParameter::BrainField_SpawnObjectNum_108_74E382954E74ABD02A0B64BFF7774CC0' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_RequestSizeList_163_FED7A70F4AECEC7310A1D6904F75C47E) == 0x000098, "Member 'FPsychicObjectCommonParameter::BrainField_RequestSizeList_163_FED7A70F4AECEC7310A1D6904F75C47E' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SpawnAngleMax_69_08D5428F407F576D84C147AC08B9AE2D) == 0x0000A8, "Member 'FPsychicObjectCommonParameter::BrainField_SpawnAngleMax_69_08D5428F407F576D84C147AC08B9AE2D' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SpawnAngleMin_67_266A3022418B15DE837002BD20C8611E) == 0x0000AC, "Member 'FPsychicObjectCommonParameter::BrainField_SpawnAngleMin_67_266A3022418B15DE837002BD20C8611E' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SpawnDistanceMin_71_7D58CDDB4A980D2247AFDEB6AB722CF8) == 0x0000B0, "Member 'FPsychicObjectCommonParameter::BrainField_SpawnDistanceMin_71_7D58CDDB4A980D2247AFDEB6AB722CF8' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SpawnDistanceMax_73_88B88F474D462B0C7562998FFF8BEDB4) == 0x0000B4, "Member 'FPsychicObjectCommonParameter::BrainField_SpawnDistanceMax_73_88B88F474D462B0C7562998FFF8BEDB4' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SpawnHeightMin_75_30C9B3014B88A8CEE8F7EA993EBE8C53) == 0x0000B8, "Member 'FPsychicObjectCommonParameter::BrainField_SpawnHeightMin_75_30C9B3014B88A8CEE8F7EA993EBE8C53' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SpawnHeightMax_77_1CC34F7649AFE2C63F8478960A2E2CB2) == 0x0000BC, "Member 'FPsychicObjectCommonParameter::BrainField_SpawnHeightMax_77_1CC34F7649AFE2C63F8478960A2E2CB2' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SwingObjNumLevelList_99_BFA7AC704B657DACAD2DA9B26B1D3504) == 0x0000C0, "Member 'FPsychicObjectCommonParameter::BrainField_SwingObjNumLevelList_99_BFA7AC704B657DACAD2DA9B26B1D3504' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SwingCollisionOffset_107_93D9BFBF4F1820B0D966318CF995B262) == 0x0000D0, "Member 'FPsychicObjectCommonParameter::BrainField_SwingCollisionOffset_107_93D9BFBF4F1820B0D966318CF995B262' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SwingCollisionEndOffset_194_4B797D13467D7BBE7D501086B16F14E9) == 0x0000D4, "Member 'FPsychicObjectCommonParameter::BrainField_SwingCollisionEndOffset_194_4B797D13467D7BBE7D501086B16F14E9' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SwingCollisionRadiusLevelList_130_8A12F1A24B96D0E68127EFA6F8E32163) == 0x0000D8, "Member 'FPsychicObjectCommonParameter::BrainField_SwingCollisionRadiusLevelList_130_8A12F1A24B96D0E68127EFA6F8E32163' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SwingCollisionHalfHeightLevelList_131_A609D7534C5E261D811F34B0F04A7F87) == 0x0000E8, "Member 'FPsychicObjectCommonParameter::BrainField_SwingCollisionHalfHeightLevelList_131_A609D7534C5E261D811F34B0F04A7F87' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SwingAttachOffsetLevelList_133_391E7B3740162AAFBB41D88BE4845457) == 0x0000F8, "Member 'FPsychicObjectCommonParameter::BrainField_SwingAttachOffsetLevelList_133_391E7B3740162AAFBB41D88BE4845457' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SwingAttachOffsetRandomMin_179_6B300F45471EFF1F33716185DCAAC2F2) == 0x000108, "Member 'FPsychicObjectCommonParameter::BrainField_SwingAttachOffsetRandomMin_179_6B300F45471EFF1F33716185DCAAC2F2' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_SwingAttachOffsetRandomMax_180_CD91ABBC4636F4812DCBE3ACCFB65E20) == 0x000114, "Member 'FPsychicObjectCommonParameter::BrainField_SwingAttachOffsetRandomMax_180_CD91ABBC4636F4812DCBE3ACCFB65E20' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_ThrowObjNumLevelList_101_339BCA5948B75740C4347E99A4DDACCD) == 0x000120, "Member 'FPsychicObjectCommonParameter::BrainField_ThrowObjNumLevelList_101_339BCA5948B75740C4347E99A4DDACCD' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_DropObjNumLevelList_103_52419645402EC6CD133667991793BE88) == 0x000130, "Member 'FPsychicObjectCommonParameter::BrainField_DropObjNumLevelList_103_52419645402EC6CD133667991793BE88' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_DropLookAtRate_91_4E2F4DA547B38E9419549DBB06ED7981) == 0x000140, "Member 'FPsychicObjectCommonParameter::BrainField_DropLookAtRate_91_4E2F4DA547B38E9419549DBB06ED7981' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, BrainField_DropCollisionRadiusLevelList_134_150B5454450BA9B0CC37BABCD967E8A8) == 0x000148, "Member 'FPsychicObjectCommonParameter::BrainField_DropCollisionRadiusLevelList_134_150B5454450BA9B0CC37BABCD967E8A8' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Respawn_RestrictRadius_145_542A461342C908B3239ED4BA4AB6607E) == 0x000158, "Member 'FPsychicObjectCommonParameter::Respawn_RestrictRadius_145_542A461342C908B3239ED4BA4AB6607E' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Respawn_CheckInterval_146_09F6097743D5FC731EF33DB8E64542CD) == 0x00015C, "Member 'FPsychicObjectCommonParameter::Respawn_CheckInterval_146_09F6097743D5FC731EF33DB8E64542CD' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Respawn_TimeNormal_147_1F5FC4EE4BE1E43BB818838263429382) == 0x000160, "Member 'FPsychicObjectCommonParameter::Respawn_TimeNormal_147_1F5FC4EE4BE1E43BB818838263429382' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Respawn_TimeUnique_148_3E98346C4F8B0914B95C32899DBA9165) == 0x000164, "Member 'FPsychicObjectCommonParameter::Respawn_TimeUnique_148_3E98346C4F8B0914B95C32899DBA9165' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Dither_CheckDistanceEnable_190_5149E91C4EDC25C6998B28B88151B8D8) == 0x000168, "Member 'FPsychicObjectCommonParameter::Dither_CheckDistanceEnable_190_5149E91C4EDC25C6998B28B88151B8D8' has a wrong offset!");
static_assert(offsetof(FPsychicObjectCommonParameter, Dither_CheckDistanceApplyRadius_191_B1FEC1844186F1860C3202AAE7D701B0) == 0x00016C, "Member 'FPsychicObjectCommonParameter::Dither_CheckDistanceApplyRadius_191_B1FEC1844186F1860C3202AAE7D701B0' has a wrong offset!");

}

