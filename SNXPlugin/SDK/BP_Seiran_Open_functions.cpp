#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Seiran_Open

#include "Basic.hpp"

#include "BP_Seiran_Open_classes.hpp"
#include "BP_Seiran_Open_parameters.hpp"


namespace SDK
{

// Function BP_Seiran_Open.BP_Seiran_Open_C.ExecuteUbergraph_BP_Seiran_Open
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Seiran_Open_C::ExecuteUbergraph_BP_Seiran_Open(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Seiran_Open_C", "ExecuteUbergraph_BP_Seiran_Open");

	Params::BP_Seiran_Open_C_ExecuteUbergraph_BP_Seiran_Open Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Seiran_Open.BP_Seiran_Open_C.StartEvent
// (Event, Public, BlueprintEvent)

void ABP_Seiran_Open_C::StartEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Seiran_Open_C", "StartEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Seiran_Open.BP_Seiran_Open_C.EventLoadMessage
// (BlueprintCallable, BlueprintEvent)

void ABP_Seiran_Open_C::EventLoadMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Seiran_Open_C", "EventLoadMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Seiran_Open.BP_Seiran_Open_C.SubEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainEventLatentActor*            Latenter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Seiran_Open_C::SubEvent(class AMainEventLatentActor* Latenter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Seiran_Open_C", "SubEvent");

	Params::BP_Seiran_Open_C_SubEvent Parms{};

	Parms.Latenter = Latenter;

	UObject::ProcessEvent(Func, &Parms);
}

}

