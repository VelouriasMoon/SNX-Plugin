#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_SequencerParticle

#include "Basic.hpp"

#include "BPI_SequencerParticle_classes.hpp"


namespace SDK
{

// Function BPI_SequencerParticle.BPI_SequencerParticle_C.ActiveWork
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SequencerParticle_C::ActiveWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SequencerParticle_C", "ActiveWork");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_SequencerParticle.BPI_SequencerParticle_C.ClearWork
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_SequencerParticle_C::ClearWork()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_SequencerParticle_C", "ClearWork");

	UObject::ProcessEvent(Func, nullptr);
}

}

