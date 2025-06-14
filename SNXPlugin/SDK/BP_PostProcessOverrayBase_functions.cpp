#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PostProcessOverrayBase

#include "Basic.hpp"

#include "BP_PostProcessOverrayBase_classes.hpp"
#include "BP_PostProcessOverrayBase_parameters.hpp"


namespace SDK
{

// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.ExecuteUbergraph_BP_PostProcessOverrayBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PostProcessOverrayBase_C::ExecuteUbergraph_BP_PostProcessOverrayBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "ExecuteUbergraph_BP_PostProcessOverrayBase");

	Params::BP_PostProcessOverrayBase_C_ExecuteUbergraph_BP_PostProcessOverrayBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.GetSystem
// (BlueprintCallable, BlueprintEvent)

void ABP_PostProcessOverrayBase_C::GetSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "GetSystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PostProcessOverrayBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "ReceiveEndPlay");

	Params::BP_PostProcessOverrayBase_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PostProcessOverrayBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PostProcessOverrayBase_C::BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::BP_PostProcessOverrayBase_C_BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PostProcessOverrayBase_C::BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BP_PostProcessOverrayBase_C_BndEvt__SmoothRadius_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PostProcessOverrayBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.AddSystem
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_PostProcessOverrayBase_C::AddSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "AddSystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.RemoveSystem
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_PostProcessOverrayBase_C::RemoveSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "RemoveSystem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.CalcRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          CameraVector                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CameraRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PostProcessOverrayBase_C::CalcRate(const struct FVector& CameraVector, const struct FRotator& CameraRotation, float* Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "CalcRate");

	Params::BP_PostProcessOverrayBase_C_CalcRate Parms{};

	Parms.CameraVector = std::move(CameraVector);
	Parms.CameraRotation = std::move(CameraRotation);

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.CalcLengthRate
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          CameraLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CameraRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PostProcessOverrayBase_C::CalcLengthRate(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float* Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "CalcLengthRate");

	Params::BP_PostProcessOverrayBase_C_CalcLengthRate Parms{};

	Parms.CameraLocation = std::move(CameraLocation);
	Parms.CameraRotation = std::move(CameraRotation);

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;
}


// Function BP_PostProcessOverrayBase.BP_PostProcessOverrayBase_C.CalcRotationRate
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          CameraLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         CameraRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PostProcessOverrayBase_C::CalcRotationRate(const struct FVector& CameraLocation, const struct FRotator& CameraRotation, float* Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PostProcessOverrayBase_C", "CalcRotationRate");

	Params::BP_PostProcessOverrayBase_C_CalcRotationRate Parms{};

	Parms.CameraLocation = std::move(CameraLocation);
	Parms.CameraRotation = std::move(CameraRotation);

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;
}

}

