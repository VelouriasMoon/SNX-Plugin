#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ui_UV_Number_1

#include "Basic.hpp"

#include "BP_ui_UV_Number_1_classes.hpp"
#include "BP_ui_UV_Number_1_parameters.hpp"


namespace SDK
{

// Function BP_ui_UV_Number_1.BP_ui_UV_Number_1_C.UI_SetThumbnail_Number_1
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContext                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ui_UV_Number_1_C::UI_SetThumbnail_Number_1(class UObject* WorldContext, class UImage* Image, int32 Param_Index, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_ui_UV_Number_1_C", "UI_SetThumbnail_Number_1");

	Params::BP_ui_UV_Number_1_C_UI_SetThumbnail_Number_1 Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Image = Image;
	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

