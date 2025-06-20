#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_CaptureCineCameraActor

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_CaptureCineCameraActor.BPI_CaptureCineCameraActor_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_CaptureCineCameraActor_C final : public IInterface
{
public:
	void SetTickFlags(bool Enable);
	void GetSceneCaptureComponent2D(class USceneCaptureComponent2D** SceneCaptureComponent2D);
	void SetCutinBufferIndex(int32 Param_Index);
	void SetUseBloom(bool UseBloom);
	void AddPostProcessMaterial(class UMaterialInstanceDynamic* Mid);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_CaptureCineCameraActor_C">();
	}
	static class IBPI_CaptureCineCameraActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_CaptureCineCameraActor_C>();
	}
};
static_assert(alignof(IBPI_CaptureCineCameraActor_C) == 0x000008, "Wrong alignment on IBPI_CaptureCineCameraActor_C");
static_assert(sizeof(IBPI_CaptureCineCameraActor_C) == 0x000028, "Wrong size on IBPI_CaptureCineCameraActor_C");

}

