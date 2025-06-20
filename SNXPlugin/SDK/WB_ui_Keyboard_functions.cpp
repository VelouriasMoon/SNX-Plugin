#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Keyboard

#include "Basic.hpp"

#include "WB_ui_Keyboard_classes.hpp"
#include "WB_ui_Keyboard_parameters.hpp"


namespace SDK
{

// Function WB_ui_Keyboard.WB_ui_Keyboard_C.ExecuteUbergraph_WB_ui_Keyboard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Keyboard_C::ExecuteUbergraph_WB_ui_Keyboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Keyboard_C", "ExecuteUbergraph_WB_ui_Keyboard");

	Params::WB_ui_Keyboard_C_ExecuteUbergraph_WB_ui_Keyboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Keyboard.WB_ui_Keyboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_Keyboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Keyboard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListUnFocus
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Keyboard_C::ListUnFocus(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Keyboard_C", "ListUnFocus");

	Params::WB_ui_Keyboard_C_ListUnFocus Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListFocus
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Keyboard_C::ListFocus(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Keyboard_C", "ListFocus");

	Params::WB_ui_Keyboard_C_ListFocus Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListUnFocusMouse
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IsMouseScroll                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Keyboard_C::ListUnFocusMouse(int32 IsMouseScroll, int32 Param_Index, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Keyboard_C", "ListUnFocusMouse");

	Params::WB_ui_Keyboard_C_ListUnFocusMouse Parms{};

	Parms.IsMouseScroll = IsMouseScroll;
	Parms.Param_Index = Param_Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListFocusMouse
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IsMouseScroll                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Keyboard_C::ListFocusMouse(int32 IsMouseScroll, int32 Param_Index, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Keyboard_C", "ListFocusMouse");

	Params::WB_ui_Keyboard_C_ListFocusMouse Parms{};

	Parms.IsMouseScroll = IsMouseScroll;
	Parms.Param_Index = Param_Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListUpdateElement
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Keyboard_C::ListUpdateElement(int32 Param_Index, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Keyboard_C", "ListUpdateElement");

	Params::WB_ui_Keyboard_C_ListUpdateElement Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Keyboard.WB_ui_Keyboard_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_Keyboard_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Keyboard_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Keyboard.WB_ui_Keyboard_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Keyboard_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Keyboard_C", "UpdateState");

	Params::WB_ui_Keyboard_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

