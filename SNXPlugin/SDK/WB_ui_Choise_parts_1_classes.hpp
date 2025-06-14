#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Choise_parts_1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Choise_parts_1.WB_ui_Choise_parts_1_C
// 0x0070 (0x03F8 - 0x0388)
class UWB_ui_Choise_parts_1_C final : public UUIBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Decision;                                          // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_out;                                        // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select_in;                                         // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Select;                                            // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_none;                                      // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x03B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Cursor_1;                                          // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cursor_2;                                          // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cursor_3;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cursor_4_add;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_choice_text_2;                                // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Text_grow;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          FocusFlag;                                         // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DecideFlag;                                        // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DecideAnimationFlag;                               // 0x03F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_ui_Choise_parts_1(int32 EntryPoint);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void OnInitialized();
	void Construct();
	void StateNone(int32 SubState);
	void StateLoopUnFocus(int32 SubState);
	void StateLoopFocus(int32 SubState);
	void SetText(const class FText& Text);
	void Set_Choice_Focus(bool IsFocus);
	void Decide();
	void IsDecideAnimation(bool* IsAnimation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Choise_parts_1_C">();
	}
	static class UWB_ui_Choise_parts_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Choise_parts_1_C>();
	}
};
static_assert(alignof(UWB_ui_Choise_parts_1_C) == 0x000008, "Wrong alignment on UWB_ui_Choise_parts_1_C");
static_assert(sizeof(UWB_ui_Choise_parts_1_C) == 0x0003F8, "Wrong size on UWB_ui_Choise_parts_1_C");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, UberGraphFrame) == 0x000388, "Member 'UWB_ui_Choise_parts_1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Decision) == 0x000390, "Member 'UWB_ui_Choise_parts_1_C::Decision' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Select_out) == 0x000398, "Member 'UWB_ui_Choise_parts_1_C::Select_out' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Select_in) == 0x0003A0, "Member 'UWB_ui_Choise_parts_1_C::Select_in' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Select) == 0x0003A8, "Member 'UWB_ui_Choise_parts_1_C::Select' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Default_none) == 0x0003B0, "Member 'UWB_ui_Choise_parts_1_C::Default_none' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Default) == 0x0003B8, "Member 'UWB_ui_Choise_parts_1_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Cursor_1) == 0x0003C0, "Member 'UWB_ui_Choise_parts_1_C::Cursor_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Cursor_2) == 0x0003C8, "Member 'UWB_ui_Choise_parts_1_C::Cursor_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Cursor_3) == 0x0003D0, "Member 'UWB_ui_Choise_parts_1_C::Cursor_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Cursor_4_add) == 0x0003D8, "Member 'UWB_ui_Choise_parts_1_C::Cursor_4_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Text_choice_text_2) == 0x0003E0, "Member 'UWB_ui_Choise_parts_1_C::Text_choice_text_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, Text_grow) == 0x0003E8, "Member 'UWB_ui_Choise_parts_1_C::Text_grow' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, FocusFlag) == 0x0003F0, "Member 'UWB_ui_Choise_parts_1_C::FocusFlag' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, DecideFlag) == 0x0003F1, "Member 'UWB_ui_Choise_parts_1_C::DecideFlag' has a wrong offset!");
static_assert(offsetof(UWB_ui_Choise_parts_1_C, DecideAnimationFlag) == 0x0003F2, "Member 'UWB_ui_Choise_parts_1_C::DecideAnimationFlag' has a wrong offset!");

}

