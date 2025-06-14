#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ui_UV_Icon_sas_add

#include "Basic.hpp"

#include "BP_ui_UV_Icon_sas_add_classes.hpp"
#include "BP_ui_UV_Icon_sas_add_parameters.hpp"


namespace SDK
{

// Function BP_ui_UV_Icon_sas_add.BP_ui_UV_Icon_sas_add_C.UI_SetThumbnail_Icon_sas_add
// (Static, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UImage*                           Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ui_UV_Icon_sas_add_C::UI_SetThumbnail_Icon_sas_add(class UImage* Image, int32 ID, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_ui_UV_Icon_sas_add_C", "UI_SetThumbnail_Icon_sas_add");

	Params::BP_ui_UV_Icon_sas_add_C_UI_SetThumbnail_Icon_sas_add Parms{};

	Parms.Image = Image;
	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_ui_UV_Icon_sas_add.BP_ui_UV_Icon_sas_add_C.UI_GetId_Icon_sas_add
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// E_SASKindNative                         Sas                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ui_UV_Icon_sas_add_C::UI_GetId_Icon_sas_add(E_SASKindNative Sas, class UObject* __WorldContext, int32* ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_ui_UV_Icon_sas_add_C", "UI_GetId_Icon_sas_add");

	Params::BP_ui_UV_Icon_sas_add_C_UI_GetId_Icon_sas_add Parms{};

	Parms.Sas = Sas;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;
}


// Function BP_ui_UV_Icon_sas_add.BP_ui_UV_Icon_sas_add_C.UI_GetId_Icon_sas_status_add
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// E_SASKindNative                         Sas                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_SASIconStatus                         Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ui_UV_Icon_sas_add_C::UI_GetId_Icon_sas_status_add(E_SASKindNative Sas, E_SASIconStatus Status, class UObject* __WorldContext, int32* ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_ui_UV_Icon_sas_add_C", "UI_GetId_Icon_sas_status_add");

	Params::BP_ui_UV_Icon_sas_add_C_UI_GetId_Icon_sas_status_add Parms{};

	Parms.Sas = Sas;
	Parms.Status = Status;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;
}

}

