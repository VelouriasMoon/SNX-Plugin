#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EventSettings

#include "Basic.hpp"

#include "BP_EventSettings_classes.hpp"
#include "BP_EventSettings_parameters.hpp"


namespace SDK
{

// Function BP_EventSettings.BP_EventSettings_C.ExecuteUbergraph_BP_EventSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventSettings_C::ExecuteUbergraph_BP_EventSettings(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "ExecuteUbergraph_BP_EventSettings");

	Params::BP_EventSettings_C_ExecuteUbergraph_BP_EventSettings Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventSettings.BP_EventSettings_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_EventSettings_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventSettings.BP_EventSettings_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventSettings_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "ReceiveTick");

	Params::BP_EventSettings_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventSettings.BP_EventSettings_C.StartEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSettings_C::StartEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "StartEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventSettings.BP_EventSettings_C.EndEvent
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSettings_C::EndEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "EndEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventSettings.BP_EventSettings_C.SetupDynamicToStatic
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSettings_C::SetupDynamicToStatic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "SetupDynamicToStatic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventSettings.BP_EventSettings_C.PrivateUpdate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeSeconds                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EventSettings_C::PrivateUpdate(float DeltaTimeSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "PrivateUpdate");

	Params::BP_EventSettings_C_PrivateUpdate Parms{};

	Parms.DeltaTimeSeconds = DeltaTimeSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EventSettings.BP_EventSettings_C.StoreCurrentPPS
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSettings_C::StoreCurrentPPS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "StoreCurrentPPS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventSettings.BP_EventSettings_C.StartStaticEventShadowRes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSettings_C::StartStaticEventShadowRes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "StartStaticEventShadowRes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EventSettings.BP_EventSettings_C.RestoreStaticEventShadowRes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EventSettings_C::RestoreStaticEventShadowRes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EventSettings_C", "RestoreStaticEventShadowRes");

	UObject::ProcessEvent(Func, nullptr);
}

}

