#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Quest_Parts_1

#include "Basic.hpp"

#include "WB_ui_Quest_Parts_1_classes.hpp"
#include "WB_ui_Quest_Parts_1_parameters.hpp"


namespace SDK
{

// Function WB_ui_Quest_Parts_1.WB_ui_Quest_Parts_1_C.ExecuteUbergraph_WB_ui_Quest_Parts_1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Quest_Parts_1_C::ExecuteUbergraph_WB_ui_Quest_Parts_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Quest_Parts_1_C", "ExecuteUbergraph_WB_ui_Quest_Parts_1");

	Params::WB_ui_Quest_Parts_1_C_ExecuteUbergraph_WB_ui_Quest_Parts_1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Quest_Parts_1.WB_ui_Quest_Parts_1_C.SetClearGetterInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           StrTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsNew                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsGetReward                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ui_Quest_Parts_1_C::SetClearGetterInfo(const class FString& StrTitle, int32 Progress, bool IsNew, bool IsGetReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Quest_Parts_1_C", "SetClearGetterInfo");

	Params::WB_ui_Quest_Parts_1_C_SetClearGetterInfo Parms{};

	Parms.StrTitle = std::move(StrTitle);
	Parms.Progress = Progress;
	Parms.IsNew = IsNew;
	Parms.IsGetReward = IsGetReward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Quest_Parts_1.WB_ui_Quest_Parts_1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_Quest_Parts_1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Quest_Parts_1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Quest_Parts_1.WB_ui_Quest_Parts_1_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Quest_Parts_1_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Quest_Parts_1_C", "UpdateState");

	Params::WB_ui_Quest_Parts_1_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Quest_Parts_1.WB_ui_Quest_Parts_1_C.SetInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// EQuestDataType                          QuestType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Progress                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_ui_Quest_Parts_1_C::SetInfo(EQuestDataType QuestType, const class FName& ID, int32 Progress, int32 Param_Index, bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Quest_Parts_1_C", "SetInfo");

	Params::WB_ui_Quest_Parts_1_C_SetInfo Parms{};

	Parms.QuestType = QuestType;
	Parms.ID = ID;
	Parms.Progress = Progress;
	Parms.Param_Index = Param_Index;
	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

