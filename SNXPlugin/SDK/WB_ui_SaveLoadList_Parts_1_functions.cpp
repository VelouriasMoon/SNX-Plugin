#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_SaveLoadList_Parts_1

#include "Basic.hpp"

#include "WB_ui_SaveLoadList_Parts_1_classes.hpp"
#include "WB_ui_SaveLoadList_Parts_1_parameters.hpp"


namespace SDK
{

// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_SaveLoadList_Parts_1_C::ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_SaveLoadList_Parts_1_C", "ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1");

	Params::WB_ui_SaveLoadList_Parts_1_C_ExecuteUbergraph_WB_ui_SaveLoadList_Parts_1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_SaveLoadList_Parts_1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_SaveLoadList_Parts_1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_SaveLoadList_Parts_1_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_SaveLoadList_Parts_1_C", "UpdateState");

	Params::WB_ui_SaveLoadList_Parts_1_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetScreenTexture
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   ImageType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       ImageData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_SaveLoadList_Parts_1_C::SetScreenTexture(int32 ImageType, class UTexture2D* ImageData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_SaveLoadList_Parts_1_C", "SetScreenTexture");

	Params::WB_ui_SaveLoadList_Parts_1_C_SetScreenTexture Parms{};

	Parms.ImageType = ImageType;
	Parms.ImageData = ImageData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetTitleFontOutLineColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESaveLoadListType                       DataType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ui_SaveLoadList_Parts_1_C::SetTitleFontOutLineColor(ESaveLoadListType DataType, class UTextBlock* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_SaveLoadList_Parts_1_C", "SetTitleFontOutLineColor");

	Params::WB_ui_SaveLoadList_Parts_1_C_SetTitleFontOutLineColor Parms{};

	Parms.DataType = DataType;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetDataFontOutLineColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESaveLoadListType                       DataType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ui_SaveLoadList_Parts_1_C::SetDataFontOutLineColor(ESaveLoadListType DataType, class UTextBlock* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_SaveLoadList_Parts_1_C", "SetDataFontOutLineColor");

	Params::WB_ui_SaveLoadList_Parts_1_C_SetDataFontOutLineColor Parms{};

	Parms.DataType = DataType;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetFontColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESaveLoadListClearType                  DataType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                       Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ui_SaveLoadList_Parts_1_C::SetFontColor(ESaveLoadListClearType DataType, class UTextBlock* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_SaveLoadList_Parts_1_C", "SetFontColor");

	Params::WB_ui_SaveLoadList_Parts_1_C_SetFontColor Parms{};

	Parms.DataType = DataType;
	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ui_SaveLoadList_Parts_1.WB_ui_SaveLoadList_Parts_1_C.SetLevelFontColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LevelMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ui_SaveLoadList_Parts_1_C::SetLevelFontColor(bool LevelMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_SaveLoadList_Parts_1_C", "SetLevelFontColor");

	Params::WB_ui_SaveLoadList_Parts_1_C_SetLevelFontColor Parms{};

	Parms.LevelMax = LevelMax;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

