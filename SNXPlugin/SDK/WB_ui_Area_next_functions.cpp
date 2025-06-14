#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WB_ui_Area_next

#include "Basic.hpp"

#include "WB_ui_Area_next_classes.hpp"
#include "WB_ui_Area_next_parameters.hpp"


namespace SDK
{

// Function WB_ui_Area_next.WB_ui_Area_next_C.ExecuteUbergraph_WB_ui_Area_next
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Area_next_C::ExecuteUbergraph_WB_ui_Area_next(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Area_next_C", "ExecuteUbergraph_WB_ui_Area_next");

	Params::WB_ui_Area_next_C_ExecuteUbergraph_WB_ui_Area_next Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Area_next.WB_ui_Area_next_C.UpdateState
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ui_Area_next_C::UpdateState(int32 State, int32 SubState, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Area_next_C", "UpdateState");

	Params::WB_ui_Area_next_C_UpdateState Parms{};

	Parms.State = State;
	Parms.SubState = SubState;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WB_ui_Area_next.WB_ui_Area_next_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWB_ui_Area_next_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Area_next_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WB_ui_Area_next.WB_ui_Area_next_C.Start
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LocationId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AreaId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PortalID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsWorldMap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ui_Area_next_C::Start(int32 LocationId, int32 AreaId, int32 PortalID, bool IsWorldMap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Area_next_C", "Start");

	Params::WB_ui_Area_next_C_Start Parms{};

	Parms.LocationId = LocationId;
	Parms.AreaId = AreaId;
	Parms.PortalID = PortalID;
	Parms.IsWorldMap = IsWorldMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WB_ui_Area_next.WB_ui_Area_next_C.End
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWB_ui_Area_next_C::End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_ui_Area_next_C", "End");

	Params::WB_ui_Area_next_C_End Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

