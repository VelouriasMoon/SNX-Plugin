#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FEventCaptureFuncData

#include "Basic.hpp"

#include "BattlePrototype_structs.hpp"


namespace SDK
{

// UserDefinedStruct FEventCaptureFuncData.FEventCaptureFuncData
// 0x0028 (0x0028 - 0x0000)
struct FFEventCaptureFuncData final
{
public:
	bool                                          IsCalledFunc_13_0172C7664D2DEE5B01020796A2D60CDF;  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69C9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABPCaptureActor_C*                      CaptureActor_24_5C8A678F4C188A22E7F188B24489D179;  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                         Sequence_20_95AE2CE6453629B8A8BF78BD60A3629B;      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CaptureSequencePosition_19_34DE78B74E23EF861E9164B2F827265C; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSeamlessInGameCapture_27_55669F0147EFF02F46F25983F2FE7DFA; // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EEventCaptureRenderType                       RenderType_31_46B76A9F46F2CE2F92D945BB0112B035;    // 0x001D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69CA[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ToneMapCounterValue_34_D4AEFC4E459485322A11439461B9F716; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFEventCaptureFuncData) == 0x000008, "Wrong alignment on FFEventCaptureFuncData");
static_assert(sizeof(FFEventCaptureFuncData) == 0x000028, "Wrong size on FFEventCaptureFuncData");
static_assert(offsetof(FFEventCaptureFuncData, IsCalledFunc_13_0172C7664D2DEE5B01020796A2D60CDF) == 0x000000, "Member 'FFEventCaptureFuncData::IsCalledFunc_13_0172C7664D2DEE5B01020796A2D60CDF' has a wrong offset!");
static_assert(offsetof(FFEventCaptureFuncData, CaptureActor_24_5C8A678F4C188A22E7F188B24489D179) == 0x000008, "Member 'FFEventCaptureFuncData::CaptureActor_24_5C8A678F4C188A22E7F188B24489D179' has a wrong offset!");
static_assert(offsetof(FFEventCaptureFuncData, Sequence_20_95AE2CE6453629B8A8BF78BD60A3629B) == 0x000010, "Member 'FFEventCaptureFuncData::Sequence_20_95AE2CE6453629B8A8BF78BD60A3629B' has a wrong offset!");
static_assert(offsetof(FFEventCaptureFuncData, CaptureSequencePosition_19_34DE78B74E23EF861E9164B2F827265C) == 0x000018, "Member 'FFEventCaptureFuncData::CaptureSequencePosition_19_34DE78B74E23EF861E9164B2F827265C' has a wrong offset!");
static_assert(offsetof(FFEventCaptureFuncData, IsSeamlessInGameCapture_27_55669F0147EFF02F46F25983F2FE7DFA) == 0x00001C, "Member 'FFEventCaptureFuncData::IsSeamlessInGameCapture_27_55669F0147EFF02F46F25983F2FE7DFA' has a wrong offset!");
static_assert(offsetof(FFEventCaptureFuncData, RenderType_31_46B76A9F46F2CE2F92D945BB0112B035) == 0x00001D, "Member 'FFEventCaptureFuncData::RenderType_31_46B76A9F46F2CE2F92D945BB0112B035' has a wrong offset!");
static_assert(offsetof(FFEventCaptureFuncData, ToneMapCounterValue_34_D4AEFC4E459485322A11439461B9F716) == 0x000020, "Member 'FFEventCaptureFuncData::ToneMapCounterValue_34_D4AEFC4E459485322A11439461B9F716' has a wrong offset!");

}

