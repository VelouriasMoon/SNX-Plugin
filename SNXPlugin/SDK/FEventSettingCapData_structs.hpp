#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FEventSettingCapData

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"


namespace SDK
{

// UserDefinedStruct FEventSettingCapData.FEventSettingCapData
// 0x0078 (0x0078 - 0x0000)
struct FFEventSettingCapData final
{
public:
	int32                                         BoadMeshIndex_3_FA2CB7BB480B4C23BFC3FCB1C784E341;  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CapturePresetName_28_5E2A0DC2455B7BB7BB690A82BC1819FC; // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharaAnimationName_29_32979BF74F662B0886AB03A503383C00; // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharaFaceAnimationName_30_991B046648E1E937A8DB0E849088BD3A; // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NpcMeshTableID_19_640873CD494BE360102A82BB40FE51E4; // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NpcMaterialTableID_20_1D4BC0904FBDFF7CD26307ABB1D1096C; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LightPresetName_31_2BDA17CC4396E1EBCCE88F83FC3771A7; // 0x0024(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4168[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequence*                         CaptureSequence_32_420D46C04CC8D37280E06B92C5F1BA83; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureSequencePosition_33_E78AB7C648D99850D4099C8DB9D8637F; // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TextureRowName_34_44D5107F484B359DD33DF3BCC04BD6DC; // 0x003C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStaticPlType                                 StaticPlType_35_FACE4FBD4108CBD8319D3E8DD9F9E512;  // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4169[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   MovieTextureRowName_36_F6E2E4DA44326B276F3F0480D12B3C9D; // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUseSaveTexture_37_DBE5492C4A8CF1EBEE28BF90A159448E; // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsSeamlessInGameCapture_40_F60E8DDB4667E901F8EF7AB7D85AD9FA; // 0x0051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsNoStaticPlSetting_41_B9A2E7D249DCD9843A112B9AD1B4A4D2; // 0x0052(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsHiddenPlFrameEffect_43_CCF68E3B409D2BBD10B4E79224D9C204; // 0x0053(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class FName                                   CharaEyePresetName_53_DC54D0E54041ABCBFE5C379E7450797C; // 0x0054(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyeXAxisThreshold_52_055F18FA48471769D4079590CA0144BB; // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EyeYAxisThreshold_51_BC04714746AA715ECE41E6B4B7ECF325; // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharaPartsDTRowName_62_F1EB605940AB6EEA9FBA7FAF59F42D53; // 0x0064(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEventCaptureRenderType                       RenderType_60_5126604D42B4EB78EA657698B8180E1E;    // 0x006C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_416A[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ToneMapCounterValue_65_1D5F1D89493C0745D410AA84FE9C8D99; // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFEventSettingCapData) == 0x000008, "Wrong alignment on FFEventSettingCapData");
static_assert(sizeof(FFEventSettingCapData) == 0x000078, "Wrong size on FFEventSettingCapData");
static_assert(offsetof(FFEventSettingCapData, BoadMeshIndex_3_FA2CB7BB480B4C23BFC3FCB1C784E341) == 0x000000, "Member 'FFEventSettingCapData::BoadMeshIndex_3_FA2CB7BB480B4C23BFC3FCB1C784E341' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, CapturePresetName_28_5E2A0DC2455B7BB7BB690A82BC1819FC) == 0x000004, "Member 'FFEventSettingCapData::CapturePresetName_28_5E2A0DC2455B7BB7BB690A82BC1819FC' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, CharaAnimationName_29_32979BF74F662B0886AB03A503383C00) == 0x00000C, "Member 'FFEventSettingCapData::CharaAnimationName_29_32979BF74F662B0886AB03A503383C00' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, CharaFaceAnimationName_30_991B046648E1E937A8DB0E849088BD3A) == 0x000014, "Member 'FFEventSettingCapData::CharaFaceAnimationName_30_991B046648E1E937A8DB0E849088BD3A' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, NpcMeshTableID_19_640873CD494BE360102A82BB40FE51E4) == 0x00001C, "Member 'FFEventSettingCapData::NpcMeshTableID_19_640873CD494BE360102A82BB40FE51E4' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, NpcMaterialTableID_20_1D4BC0904FBDFF7CD26307ABB1D1096C) == 0x000020, "Member 'FFEventSettingCapData::NpcMaterialTableID_20_1D4BC0904FBDFF7CD26307ABB1D1096C' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, LightPresetName_31_2BDA17CC4396E1EBCCE88F83FC3771A7) == 0x000024, "Member 'FFEventSettingCapData::LightPresetName_31_2BDA17CC4396E1EBCCE88F83FC3771A7' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, CaptureSequence_32_420D46C04CC8D37280E06B92C5F1BA83) == 0x000030, "Member 'FFEventSettingCapData::CaptureSequence_32_420D46C04CC8D37280E06B92C5F1BA83' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, CaptureSequencePosition_33_E78AB7C648D99850D4099C8DB9D8637F) == 0x000038, "Member 'FFEventSettingCapData::CaptureSequencePosition_33_E78AB7C648D99850D4099C8DB9D8637F' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, TextureRowName_34_44D5107F484B359DD33DF3BCC04BD6DC) == 0x00003C, "Member 'FFEventSettingCapData::TextureRowName_34_44D5107F484B359DD33DF3BCC04BD6DC' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, StaticPlType_35_FACE4FBD4108CBD8319D3E8DD9F9E512) == 0x000044, "Member 'FFEventSettingCapData::StaticPlType_35_FACE4FBD4108CBD8319D3E8DD9F9E512' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, MovieTextureRowName_36_F6E2E4DA44326B276F3F0480D12B3C9D) == 0x000048, "Member 'FFEventSettingCapData::MovieTextureRowName_36_F6E2E4DA44326B276F3F0480D12B3C9D' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, IsUseSaveTexture_37_DBE5492C4A8CF1EBEE28BF90A159448E) == 0x000050, "Member 'FFEventSettingCapData::IsUseSaveTexture_37_DBE5492C4A8CF1EBEE28BF90A159448E' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, IsSeamlessInGameCapture_40_F60E8DDB4667E901F8EF7AB7D85AD9FA) == 0x000051, "Member 'FFEventSettingCapData::IsSeamlessInGameCapture_40_F60E8DDB4667E901F8EF7AB7D85AD9FA' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, IsNoStaticPlSetting_41_B9A2E7D249DCD9843A112B9AD1B4A4D2) == 0x000052, "Member 'FFEventSettingCapData::IsNoStaticPlSetting_41_B9A2E7D249DCD9843A112B9AD1B4A4D2' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, IsHiddenPlFrameEffect_43_CCF68E3B409D2BBD10B4E79224D9C204) == 0x000053, "Member 'FFEventSettingCapData::IsHiddenPlFrameEffect_43_CCF68E3B409D2BBD10B4E79224D9C204' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, CharaEyePresetName_53_DC54D0E54041ABCBFE5C379E7450797C) == 0x000054, "Member 'FFEventSettingCapData::CharaEyePresetName_53_DC54D0E54041ABCBFE5C379E7450797C' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, EyeXAxisThreshold_52_055F18FA48471769D4079590CA0144BB) == 0x00005C, "Member 'FFEventSettingCapData::EyeXAxisThreshold_52_055F18FA48471769D4079590CA0144BB' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, EyeYAxisThreshold_51_BC04714746AA715ECE41E6B4B7ECF325) == 0x000060, "Member 'FFEventSettingCapData::EyeYAxisThreshold_51_BC04714746AA715ECE41E6B4B7ECF325' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, CharaPartsDTRowName_62_F1EB605940AB6EEA9FBA7FAF59F42D53) == 0x000064, "Member 'FFEventSettingCapData::CharaPartsDTRowName_62_F1EB605940AB6EEA9FBA7FAF59F42D53' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, RenderType_60_5126604D42B4EB78EA657698B8180E1E) == 0x00006C, "Member 'FFEventSettingCapData::RenderType_60_5126604D42B4EB78EA657698B8180E1E' has a wrong offset!");
static_assert(offsetof(FFEventSettingCapData, ToneMapCounterValue_65_1D5F1D89493C0745D410AA84FE9C8D99) == 0x000070, "Member 'FFEventSettingCapData::ToneMapCounterValue_65_1D5F1D89493C0745D410AA84FE9C8D99' has a wrong offset!");

}

