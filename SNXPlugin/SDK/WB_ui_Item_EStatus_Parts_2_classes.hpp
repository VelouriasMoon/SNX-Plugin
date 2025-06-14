#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Item_EStatus_Parts_2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BattlePrototype_structs.hpp"
#include "BattlePrototype_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WB_ui_Item_EStatus_Parts_2.WB_ui_Item_EStatus_Parts_2_C
// 0x0070 (0x0458 - 0x03E8)
class UWB_ui_Item_EStatus_Parts_2_C final : public UUIItemPartyStatusIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Unselect_max;                                      // 0x03F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default_max;                                       // 0x03F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Unselect;                                          // 0x0400(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Default;                                           // 0x0408(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizonFlipbookWidget*                 Arrow_1;                                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizonFlipbookWidget*                 Arrow_2;                                           // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Bond_Set;                                          // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Face_a_3;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame_Bond;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_done;                                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_E;                                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_skin;                                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UREDTextBlock*                          Text_Item_info_bond_1num;                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WB_ui_Item_EStatus_Parts_2(int32 EntryPoint);
	void SetEquipOrLoveIcon(EEquipOrLoveIcon Type);
	void SetFaceIcon(EPlayerID CharacterId);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WB_ui_Item_EStatus_Parts_2_C">();
	}
	static class UWB_ui_Item_EStatus_Parts_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWB_ui_Item_EStatus_Parts_2_C>();
	}
};
static_assert(alignof(UWB_ui_Item_EStatus_Parts_2_C) == 0x000008, "Wrong alignment on UWB_ui_Item_EStatus_Parts_2_C");
static_assert(sizeof(UWB_ui_Item_EStatus_Parts_2_C) == 0x000458, "Wrong size on UWB_ui_Item_EStatus_Parts_2_C");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, UberGraphFrame) == 0x0003E8, "Member 'UWB_ui_Item_EStatus_Parts_2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Unselect_max) == 0x0003F0, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Unselect_max' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Default_max) == 0x0003F8, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Default_max' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Unselect) == 0x000400, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Unselect' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Default) == 0x000408, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Default' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Arrow_1) == 0x000410, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Arrow_1' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Arrow_2) == 0x000418, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Arrow_2' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Bond_Set) == 0x000420, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Bond_Set' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Face_a_3) == 0x000428, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Face_a_3' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Frame_Bond) == 0x000430, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Frame_Bond' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Icon_done) == 0x000438, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Icon_done' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Icon_E) == 0x000440, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Icon_E' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Icon_skin) == 0x000448, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Icon_skin' has a wrong offset!");
static_assert(offsetof(UWB_ui_Item_EStatus_Parts_2_C, Text_Item_info_bond_1num) == 0x000450, "Member 'UWB_ui_Item_EStatus_Parts_2_C::Text_Item_info_bond_1num' has a wrong offset!");

}

