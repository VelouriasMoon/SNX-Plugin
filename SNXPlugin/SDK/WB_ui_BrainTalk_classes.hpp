#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_BrainTalk

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_BrainTalk.WB_ui_BrainTalk_C
// 0x0080 (0x04F8 - 0x0478)
class UWB_ui_BrainTalk_C final : public UUIBrainTalk
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0478(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Default_2;                                         // 0x0480(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x0488(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0490(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_none;                                      // 0x0498(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x04A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Face_b;                                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDImageBase*                          Icon_font;                                         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OP_Scale_Noise_2;                                  // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                OP_Scale_Text_grow_2;                              // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OP_Scale_Text_Set;                                 // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Semi_common_braintalk_1;                           // 0x04D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     FaceTextureList;                                   // 0x04D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector2D                              MessageSizeNormal;                                 // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              MessageSizeExpansion;                              // 0x04F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_BrainTalk(int32 EntryPoint);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();
	class UTexture* GetFaceTexture(int32 Param_Index);
	void PuaseBrainTalkVoice(bool IsPause);
	bool SetupTextSize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_BrainTalk_C">();
	}
	static class UWB_ui_BrainTalk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_BrainTalk_C>();
	}
};
static_assert(alignof(UWB_ui_BrainTalk_C) == 0x000008, "Wrong alignment on UWB_ui_BrainTalk_C");
static_assert(sizeof(UWB_ui_BrainTalk_C) == 0x0004F8, "Wrong size on UWB_ui_BrainTalk_C");
static_assert(offsetof(UWB_ui_BrainTalk_C, UberGraphFrame) == 0x000478, "Member 'UWB_ui_BrainTalk_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, Default_2) == 0x000480, "Member 'UWB_ui_BrainTalk_C::Default_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, Out) == 0x000488, "Member 'UWB_ui_BrainTalk_C::Out' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, In) == 0x000490, "Member 'UWB_ui_BrainTalk_C::In' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, Default_none) == 0x000498, "Member 'UWB_ui_BrainTalk_C::Default_none' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, Default) == 0x0004A0, "Member 'UWB_ui_BrainTalk_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, Face_b) == 0x0004A8, "Member 'UWB_ui_BrainTalk_C::Face_b' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, Icon_font) == 0x0004B0, "Member 'UWB_ui_BrainTalk_C::Icon_font' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, OP_Scale_Noise_2) == 0x0004B8, "Member 'UWB_ui_BrainTalk_C::OP_Scale_Noise_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, OP_Scale_Text_grow_2) == 0x0004C0, "Member 'UWB_ui_BrainTalk_C::OP_Scale_Text_grow_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, OP_Scale_Text_Set) == 0x0004C8, "Member 'UWB_ui_BrainTalk_C::OP_Scale_Text_Set' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, Semi_common_braintalk_1) == 0x0004D0, "Member 'UWB_ui_BrainTalk_C::Semi_common_braintalk_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, FaceTextureList) == 0x0004D8, "Member 'UWB_ui_BrainTalk_C::FaceTextureList' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, MessageSizeNormal) == 0x0004E8, "Member 'UWB_ui_BrainTalk_C::MessageSizeNormal' has a wrong offset!");
static_assert(offsetof(UWB_ui_BrainTalk_C, MessageSizeExpansion) == 0x0004F0, "Member 'UWB_ui_BrainTalk_C::MessageSizeExpansion' has a wrong offset!");

}

