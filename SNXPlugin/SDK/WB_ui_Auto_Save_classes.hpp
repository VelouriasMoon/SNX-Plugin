#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Auto_Save

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Auto_Save.WB_ui_Auto_Save_C
// 0x0080 (0x0410 - 0x0390)
class UWB_ui_Auto_Save_C final : public UUIAutoSaving
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Out;                                               // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_none;                                      // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Ghost;                                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Auto_Save_1;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Auto_Save_2;                                  // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Auto_Save_add;                                // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1_add;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_2_add;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_3_add;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_AutoSave_1;                                   // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Triangle_Loading;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SavingTimer;                                       // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta;                                             // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Auto_Save(int32 EntryPoint);
	void UpdateState(int32 State, int32 SubState, float DeltaSeconds);
	void Construct();
	void StateNone(int32 SubState);
	void StateOpen(int32 SubState);
	void StateLoop(int32 SubState);
	void StateClose(int32 SubState);
	void UpdateSaveingMaterial();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Auto_Save_C">();
	}
	static class UWB_ui_Auto_Save_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Auto_Save_C>();
	}
};
static_assert(alignof(UWB_ui_Auto_Save_C) == 0x000008, "Wrong alignment on UWB_ui_Auto_Save_C");
static_assert(sizeof(UWB_ui_Auto_Save_C) == 0x000410, "Wrong size on UWB_ui_Auto_Save_C");
static_assert(offsetof(UWB_ui_Auto_Save_C, UberGraphFrame) == 0x000390, "Member 'UWB_ui_Auto_Save_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Out) == 0x000398, "Member 'UWB_ui_Auto_Save_C::Out' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, In) == 0x0003A0, "Member 'UWB_ui_Auto_Save_C::In' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Default_none) == 0x0003A8, "Member 'UWB_ui_Auto_Save_C::Default_none' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Default) == 0x0003B0, "Member 'UWB_ui_Auto_Save_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Ghost) == 0x0003B8, "Member 'UWB_ui_Auto_Save_C::Ghost' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Icon_Auto_Save_1) == 0x0003C0, "Member 'UWB_ui_Auto_Save_C::Icon_Auto_Save_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Icon_Auto_Save_2) == 0x0003C8, "Member 'UWB_ui_Auto_Save_C::Icon_Auto_Save_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Icon_Auto_Save_add) == 0x0003D0, "Member 'UWB_ui_Auto_Save_C::Icon_Auto_Save_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Line_1_add) == 0x0003D8, "Member 'UWB_ui_Auto_Save_C::Line_1_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Line_2_add) == 0x0003E0, "Member 'UWB_ui_Auto_Save_C::Line_2_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Line_3_add) == 0x0003E8, "Member 'UWB_ui_Auto_Save_C::Line_3_add' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, RetainerBox_0) == 0x0003F0, "Member 'UWB_ui_Auto_Save_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Text_AutoSave_1) == 0x0003F8, "Member 'UWB_ui_Auto_Save_C::Text_AutoSave_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Triangle_Loading) == 0x000400, "Member 'UWB_ui_Auto_Save_C::Triangle_Loading' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, SavingTimer) == 0x000408, "Member 'UWB_ui_Auto_Save_C::SavingTimer' has a wrong offset!");
static_assert(offsetof(UWB_ui_Auto_Save_C, Delta) == 0x00040C, "Member 'UWB_ui_Auto_Save_C::Delta' has a wrong offset!");

}

