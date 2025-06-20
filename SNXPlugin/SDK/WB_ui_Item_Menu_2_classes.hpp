#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Item_Menu_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Item_Menu_2.WB_ui_Item_Menu_2_C
// 0x00B0 (0x0438 - 0x0388)
class UWB_ui_Item_Menu_2_C final : public UUIBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Change_2;                                          // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Change_1;                                          // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Full;                                              // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Full_in;                                           // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       R_decision;                                        // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       L_decision;                                        // 0x03B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Decision;                                          // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Out;                                               // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_none;                                      // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow_L;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_L_add;                                       // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_R;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_R_add;                                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Arrow_set;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_u;                                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_u_add;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge_1;                                           // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge_1_add;                                       // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          FlagFrameDraw;                                     // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WB_ui_Item_Menu_2(int32 EntryPoint);
	void OnInitialized();
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();
	void SetRecastPercent(float Percent);
	void SetFrameColor(class FName ItemId);
	void PlayFrameAnimation(int32 Param_Index, float Speed, bool IsLoop);
	void SetDrawFrame(bool IsDraw);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Item_Menu_2_C">();
	}
	static class UWB_ui_Item_Menu_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Item_Menu_2_C>();
	}
};
static_assert(alignof(UWB_ui_Item_Menu_2_C) == 0x000008, "Wrong alignment on UWB_ui_Item_Menu_2_C");
static_assert(sizeof(UWB_ui_Item_Menu_2_C) == 0x000438, "Wrong size on UWB_ui_Item_Menu_2_C");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, UberGraphFrame) == 0x000388, "Member 'UWB_ui_Item_Menu_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Change_2) == 0x000390, "Member 'UWB_ui_Item_Menu_2_C::Change_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Change_1) == 0x000398, "Member 'UWB_ui_Item_Menu_2_C::Change_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Full) == 0x0003A0, "Member 'UWB_ui_Item_Menu_2_C::Full' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Full_in) == 0x0003A8, "Member 'UWB_ui_Item_Menu_2_C::Full_in' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, R_decision) == 0x0003B0, "Member 'UWB_ui_Item_Menu_2_C::R_decision' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, L_decision) == 0x0003B8, "Member 'UWB_ui_Item_Menu_2_C::L_decision' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Decision) == 0x0003C0, "Member 'UWB_ui_Item_Menu_2_C::Decision' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Out) == 0x0003C8, "Member 'UWB_ui_Item_Menu_2_C::Out' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, In) == 0x0003D0, "Member 'UWB_ui_Item_Menu_2_C::In' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Default_none) == 0x0003D8, "Member 'UWB_ui_Item_Menu_2_C::Default_none' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Default) == 0x0003E0, "Member 'UWB_ui_Item_Menu_2_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Arrow_L) == 0x0003E8, "Member 'UWB_ui_Item_Menu_2_C::Arrow_L' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Arrow_L_add) == 0x0003F0, "Member 'UWB_ui_Item_Menu_2_C::Arrow_L_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Arrow_R) == 0x0003F8, "Member 'UWB_ui_Item_Menu_2_C::Arrow_R' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Arrow_R_add) == 0x000400, "Member 'UWB_ui_Item_Menu_2_C::Arrow_R_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Arrow_set) == 0x000408, "Member 'UWB_ui_Item_Menu_2_C::Arrow_set' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Arrow_u) == 0x000410, "Member 'UWB_ui_Item_Menu_2_C::Arrow_u' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Arrow_u_add) == 0x000418, "Member 'UWB_ui_Item_Menu_2_C::Arrow_u_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Gauge_1) == 0x000420, "Member 'UWB_ui_Item_Menu_2_C::Gauge_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, Gauge_1_add) == 0x000428, "Member 'UWB_ui_Item_Menu_2_C::Gauge_1_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_Menu_2_C, FlagFrameDraw) == 0x000430, "Member 'UWB_ui_Item_Menu_2_C::FlagFrameDraw' has a wrong offset!");

}

