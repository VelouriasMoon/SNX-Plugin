#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fade

#include "Basic.hpp"

#include "BP_Fade_classes.hpp"
#include "BP_Fade_parameters.hpp"


namespace SDK
{

// Function BP_Fade.BP_Fade_C.ED_StartFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Fade_C::ED_StartFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "ED_StartFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fade.BP_Fade_C.ED_CloseFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Fade_C::ED_CloseFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "ED_CloseFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fade.BP_Fade_C.ExecuteUbergraph_BP_Fade
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fade_C::ExecuteUbergraph_BP_Fade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "ExecuteUbergraph_BP_Fade");

	Params::BP_Fade_C_ExecuteUbergraph_BP_Fade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fade.BP_Fade_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Fade_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fade.BP_Fade_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fade_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "ReceiveTick");

	Params::BP_Fade_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fade.BP_Fade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Fade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Fade.BP_Fade_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Active                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Fade_C::IsActive(bool* Param_Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "IsActive");

	Params::BP_Fade_C_IsActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Active != nullptr)
		*Param_Active = Parms.Param_Active;
}


// Function BP_Fade.BP_Fade_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     FadeColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_FadeTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fade_C::Start(const struct FLinearColor& FadeColor, float Param_FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "Start");

	Params::BP_Fade_C_Start Parms{};

	Parms.FadeColor = std::move(FadeColor);
	Parms.Param_FadeTime = Param_FadeTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fade.BP_Fade_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     FadeColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_FadeTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fade_C::Close(const struct FLinearColor& FadeColor, float Param_FadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "Close");

	Params::BP_Fade_C_Close Parms{};

	Parms.FadeColor = std::move(FadeColor);
	Parms.Param_FadeTime = Param_FadeTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fade.BP_Fade_C.UpdateFadeTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fade_C::UpdateFadeTime(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "UpdateFadeTime");

	Params::BP_Fade_C_UpdateFadeTime Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Fade.BP_Fade_C.IsAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Active                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Fade_C::IsAnimation(bool* Param_Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Fade_C", "IsAnimation");

	Params::BP_Fade_C_IsAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Active != nullptr)
		*Param_Active = Parms.Param_Active;
}

}

