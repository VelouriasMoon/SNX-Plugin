#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AiParamEnemy

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"


namespace SDK
{

// UserDefinedStruct AiParamEnemy.AiParamEnemy
// 0x00A0 (0x00A0 - 0x0000)
struct FAiParamEnemy final
{
public:
	EEnemyThinkActionType                         ThinkActionType_275_4D91E8174221C8D681B73A9BA48F76F8; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NeedRay_280_4BB263E74DD43BF25E4DBFA8C418D48E;      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D51[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Probability_196_FDEA211941BB44CF66D073867B4BBE0C;  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Probability2_245_F5B646AD49AC2D7332311AB8D1DFFBB9; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Range_197_BD510F8A49F3A560E6DAEDA6933A3FDA;        // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoRange_242_8B638B8E437600F0461B32AA0A1E6E94;      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Angle_198_3C6DE6EA4363370F4B1D6F9019B3FAC1;        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoAngle_250_F2864EB44E6219E7878FC88200106888;      // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CoolTime_199_B401FCBC4824FA7805FE69A54E625875;     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpeedScale_205_5E9E1ACA442720C5FC477EB7C1FF6B60;   // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Hp_227_10D9C5FC44129D78AF1F16BB77E917AC;           // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time_228_BE5850A649DE740B847A93900D0EF774;         // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value_218_FA982003417ABC11B0C9FCBB2D3BBD7B;        // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Another_Probability1_233_0695897E4D929F08C3819F979636A6E0; // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Another_Probability2_234_5BB909D14BB1EF2F0BDB14882F1840A2; // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Another_Probability3_235_F020FA144AE0FDCBC4F1719FF4A82222; // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Another_Probability4_255_3D67FC9348C8250625C8F08FCBBA33A7; // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Another_Probability5_256_D8A7AE704291F69A7BD80C8424BB50AB; // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Another_Value1_236_C90183804405C69A8D2174A2A8908B20; // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Another_Value2_237_3D70DA9441AC06A273A803BF84E6B454; // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Another_Value3_238_B1EC20F8493135EE19969787AB2EF32D; // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 NextProbabilities_261_6495029C428431A5D441EA8E72A24A9E; // 0x0050(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<float>                                 NextValues0_264_2FE7A80F4069A2F586D447B99A1A91C7;  // 0x0060(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<float>                                 NextValues1_266_1F731B984F462A393B9EBE8556F6A76E;  // 0x0070(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          IsBerserk_247_71DD46824898E9CAE3B6FDA368A60E07;    // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D52[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 UniqueConditions_271_91EC03D7483A0D148666829F0348383F; // 0x0088(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          IgnoreOutOfScreen_285_5E1023D34CF35BCC04FD0EA726654249; // 0x0098(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IgnoreRestrictAttackOther_284_486E39144425F7313B7378BBD9B3CA57; // 0x0099(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NotAddAttackingList_289_D220180A49DAE69BB36174A5ADFA0069; // 0x009A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NotBrainField_291_36464B3D405BCF79828B0BB18E6C2963; // 0x009B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FAiParamEnemy) == 0x000008, "Wrong alignment on FAiParamEnemy");
static_assert(sizeof(FAiParamEnemy) == 0x0000A0, "Wrong size on FAiParamEnemy");
static_assert(offsetof(FAiParamEnemy, ThinkActionType_275_4D91E8174221C8D681B73A9BA48F76F8) == 0x000000, "Member 'FAiParamEnemy::ThinkActionType_275_4D91E8174221C8D681B73A9BA48F76F8' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, NeedRay_280_4BB263E74DD43BF25E4DBFA8C418D48E) == 0x000001, "Member 'FAiParamEnemy::NeedRay_280_4BB263E74DD43BF25E4DBFA8C418D48E' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Probability_196_FDEA211941BB44CF66D073867B4BBE0C) == 0x000004, "Member 'FAiParamEnemy::Probability_196_FDEA211941BB44CF66D073867B4BBE0C' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Probability2_245_F5B646AD49AC2D7332311AB8D1DFFBB9) == 0x000008, "Member 'FAiParamEnemy::Probability2_245_F5B646AD49AC2D7332311AB8D1DFFBB9' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Range_197_BD510F8A49F3A560E6DAEDA6933A3FDA) == 0x00000C, "Member 'FAiParamEnemy::Range_197_BD510F8A49F3A560E6DAEDA6933A3FDA' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, NoRange_242_8B638B8E437600F0461B32AA0A1E6E94) == 0x000010, "Member 'FAiParamEnemy::NoRange_242_8B638B8E437600F0461B32AA0A1E6E94' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Angle_198_3C6DE6EA4363370F4B1D6F9019B3FAC1) == 0x000014, "Member 'FAiParamEnemy::Angle_198_3C6DE6EA4363370F4B1D6F9019B3FAC1' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, NoAngle_250_F2864EB44E6219E7878FC88200106888) == 0x000018, "Member 'FAiParamEnemy::NoAngle_250_F2864EB44E6219E7878FC88200106888' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, CoolTime_199_B401FCBC4824FA7805FE69A54E625875) == 0x00001C, "Member 'FAiParamEnemy::CoolTime_199_B401FCBC4824FA7805FE69A54E625875' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, SpeedScale_205_5E9E1ACA442720C5FC477EB7C1FF6B60) == 0x000020, "Member 'FAiParamEnemy::SpeedScale_205_5E9E1ACA442720C5FC477EB7C1FF6B60' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Hp_227_10D9C5FC44129D78AF1F16BB77E917AC) == 0x000024, "Member 'FAiParamEnemy::Hp_227_10D9C5FC44129D78AF1F16BB77E917AC' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Time_228_BE5850A649DE740B847A93900D0EF774) == 0x000028, "Member 'FAiParamEnemy::Time_228_BE5850A649DE740B847A93900D0EF774' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Value_218_FA982003417ABC11B0C9FCBB2D3BBD7B) == 0x00002C, "Member 'FAiParamEnemy::Value_218_FA982003417ABC11B0C9FCBB2D3BBD7B' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Another_Probability1_233_0695897E4D929F08C3819F979636A6E0) == 0x000030, "Member 'FAiParamEnemy::Another_Probability1_233_0695897E4D929F08C3819F979636A6E0' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Another_Probability2_234_5BB909D14BB1EF2F0BDB14882F1840A2) == 0x000034, "Member 'FAiParamEnemy::Another_Probability2_234_5BB909D14BB1EF2F0BDB14882F1840A2' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Another_Probability3_235_F020FA144AE0FDCBC4F1719FF4A82222) == 0x000038, "Member 'FAiParamEnemy::Another_Probability3_235_F020FA144AE0FDCBC4F1719FF4A82222' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Another_Probability4_255_3D67FC9348C8250625C8F08FCBBA33A7) == 0x00003C, "Member 'FAiParamEnemy::Another_Probability4_255_3D67FC9348C8250625C8F08FCBBA33A7' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Another_Probability5_256_D8A7AE704291F69A7BD80C8424BB50AB) == 0x000040, "Member 'FAiParamEnemy::Another_Probability5_256_D8A7AE704291F69A7BD80C8424BB50AB' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Another_Value1_236_C90183804405C69A8D2174A2A8908B20) == 0x000044, "Member 'FAiParamEnemy::Another_Value1_236_C90183804405C69A8D2174A2A8908B20' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Another_Value2_237_3D70DA9441AC06A273A803BF84E6B454) == 0x000048, "Member 'FAiParamEnemy::Another_Value2_237_3D70DA9441AC06A273A803BF84E6B454' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, Another_Value3_238_B1EC20F8493135EE19969787AB2EF32D) == 0x00004C, "Member 'FAiParamEnemy::Another_Value3_238_B1EC20F8493135EE19969787AB2EF32D' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, NextProbabilities_261_6495029C428431A5D441EA8E72A24A9E) == 0x000050, "Member 'FAiParamEnemy::NextProbabilities_261_6495029C428431A5D441EA8E72A24A9E' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, NextValues0_264_2FE7A80F4069A2F586D447B99A1A91C7) == 0x000060, "Member 'FAiParamEnemy::NextValues0_264_2FE7A80F4069A2F586D447B99A1A91C7' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, NextValues1_266_1F731B984F462A393B9EBE8556F6A76E) == 0x000070, "Member 'FAiParamEnemy::NextValues1_266_1F731B984F462A393B9EBE8556F6A76E' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, IsBerserk_247_71DD46824898E9CAE3B6FDA368A60E07) == 0x000080, "Member 'FAiParamEnemy::IsBerserk_247_71DD46824898E9CAE3B6FDA368A60E07' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, UniqueConditions_271_91EC03D7483A0D148666829F0348383F) == 0x000088, "Member 'FAiParamEnemy::UniqueConditions_271_91EC03D7483A0D148666829F0348383F' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, IgnoreOutOfScreen_285_5E1023D34CF35BCC04FD0EA726654249) == 0x000098, "Member 'FAiParamEnemy::IgnoreOutOfScreen_285_5E1023D34CF35BCC04FD0EA726654249' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, IgnoreRestrictAttackOther_284_486E39144425F7313B7378BBD9B3CA57) == 0x000099, "Member 'FAiParamEnemy::IgnoreRestrictAttackOther_284_486E39144425F7313B7378BBD9B3CA57' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, NotAddAttackingList_289_D220180A49DAE69BB36174A5ADFA0069) == 0x00009A, "Member 'FAiParamEnemy::NotAddAttackingList_289_D220180A49DAE69BB36174A5ADFA0069' has a wrong offset!");
static_assert(offsetof(FAiParamEnemy, NotBrainField_291_36464B3D405BCF79828B0BB18E6C2963) == 0x00009B, "Member 'FAiParamEnemy::NotBrainField_291_36464B3D405BCF79828B0BB18E6C2963' has a wrong offset!");

}

