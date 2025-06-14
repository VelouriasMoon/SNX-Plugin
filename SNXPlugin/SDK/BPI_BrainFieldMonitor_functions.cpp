#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_BrainFieldMonitor

#include "Basic.hpp"

#include "BPI_BrainFieldMonitor_classes.hpp"
#include "BPI_BrainFieldMonitor_parameters.hpp"


namespace SDK
{

// Function BPI_BrainFieldMonitor.BPI_BrainFieldMonitor_C.SetMonitorActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           BrainFieldUser                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BrainFieldMonitor_C::SetMonitorActive(bool Activate, class AActor* BrainFieldUser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BrainFieldMonitor_C", "SetMonitorActive");

	Params::BPI_BrainFieldMonitor_C_SetMonitorActive Parms{};

	Parms.Activate = Activate;
	Parms.BrainFieldUser = BrainFieldUser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_BrainFieldMonitor.BPI_BrainFieldMonitor_C.SetUserPlayerID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerID                               PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_BrainFieldMonitor_C::SetUserPlayerID(EPlayerID PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_BrainFieldMonitor_C", "SetUserPlayerID");

	Params::BPI_BrainFieldMonitor_C_SetUserPlayerID Parms{};

	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);
}

}

