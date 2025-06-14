#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_ch_MoveToPlayer

#include "Basic.hpp"

#include "BTT_ch_MoveToPlayer_classes.hpp"
#include "BTT_ch_MoveToPlayer_parameters.hpp"


namespace SDK
{

// Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.ExecuteUbergraph_BTT_ch_MoveToPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ch_MoveToPlayer_C::ExecuteUbergraph_BTT_ch_MoveToPlayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ch_MoveToPlayer_C", "ExecuteUbergraph_BTT_ch_MoveToPlayer");

	Params::BTT_ch_MoveToPlayer_C_ExecuteUbergraph_BTT_ch_MoveToPlayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ch_MoveToPlayer_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ch_MoveToPlayer_C", "ReceiveExecuteAI");

	Params::BTT_ch_MoveToPlayer_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ch_MoveToPlayer_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ch_MoveToPlayer_C", "ReceiveTickAI");

	Params::BTT_ch_MoveToPlayer_C_ReceiveTickAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.UpdateWalkSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ch_MoveToPlayer_C::UpdateWalkSpeed(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ch_MoveToPlayer_C", "UpdateWalkSpeed");

	Params::BTT_ch_MoveToPlayer_C_UpdateWalkSpeed Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.Exit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ch_MoveToPlayer_C::Exit(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ch_MoveToPlayer_C", "Exit");

	Params::BTT_ch_MoveToPlayer_C_Exit Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.InitializeWalkOrRun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ch_MoveToPlayer_C::InitializeWalkOrRun(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ch_MoveToPlayer_C", "InitializeWalkOrRun");

	Params::BTT_ch_MoveToPlayer_C_InitializeWalkOrRun Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.UpdateWalkOrRun
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ch_MoveToPlayer_C::UpdateWalkOrRun(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ch_MoveToPlayer_C", "UpdateWalkOrRun");

	Params::BTT_ch_MoveToPlayer_C_UpdateWalkOrRun Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.CalcRunSpeedRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   CurrentDistSq                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MinDistSq                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxDistSq                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SpeedScale                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ch_MoveToPlayer_C::CalcRunSpeedRate(float CurrentDistSq, float MinDistSq, float MaxDistSq, float* SpeedScale) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_ch_MoveToPlayer_C", "CalcRunSpeedRate");

	Params::BTT_ch_MoveToPlayer_C_CalcRunSpeedRate Parms{};

	Parms.CurrentDistSq = CurrentDistSq;
	Parms.MinDistSq = MinDistSq;
	Parms.MaxDistSq = MaxDistSq;

	UObject::ProcessEvent(Func, &Parms);

	if (SpeedScale != nullptr)
		*SpeedScale = Parms.SpeedScale;
}

}

