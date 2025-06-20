#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StealthWeakComponent

#include "Basic.hpp"

#include "StealthWeakComponent_classes.hpp"
#include "StealthWeakComponent_parameters.hpp"


namespace SDK
{

// Function StealthWeakComponent.StealthWeakComponent_C.ExecuteUbergraph_StealthWeakComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStealthWeakComponent_C::ExecuteUbergraph_StealthWeakComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StealthWeakComponent_C", "ExecuteUbergraph_StealthWeakComponent");

	Params::StealthWeakComponent_C_ExecuteUbergraph_StealthWeakComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StealthWeakComponent.StealthWeakComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStealthWeakComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StealthWeakComponent_C", "ReceiveEndPlay");

	Params::StealthWeakComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StealthWeakComponent.StealthWeakComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UStealthWeakComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StealthWeakComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StealthWeakComponent.StealthWeakComponent_C.CreateParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStealthWeakComponent_C::CreateParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StealthWeakComponent_C", "CreateParticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StealthWeakComponent.StealthWeakComponent_C.EndParticle
// (Public, BlueprintCallable, BlueprintEvent)

void UStealthWeakComponent_C::EndParticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StealthWeakComponent_C", "EndParticle");

	UObject::ProcessEvent(Func, nullptr);
}

}

