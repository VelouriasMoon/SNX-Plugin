#pragma once
#include "pch.h"
#include "SDK.hpp"
#include "Signature.h"

namespace FNameHelper
{
	SDK::FName FNameFromString(const std::string str, SDK::EFindName FindType = SDK::FNAME_Add);
	SDK::FString FStringFromString(const std::string str);
}

namespace TArrayHelper
{
	void ResizeTArray(SDK::TArray<SDK::FName>* TargetArray, int Size);
}
