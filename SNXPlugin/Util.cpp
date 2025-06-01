#include "Util.h"

void* Sig_FNameFromChar = sigScan(
	"\x40\x53\x48\x83\xEC\x30\x48\x89\x54\x24\x2A\x48\x8B\xD9",
	"xxxxxxxxxx?xxx");

void* Sig_TArrayResizeFName = sigScan(
	"\x48\x89\x5C\x24\x2A\x57\x48\x83\xEC\x20\x48\x63\xDA\x48\x8B\xF9\x85\xD2\x74\x2A\x48\x8B\xCB\x33\xD2\x48\xC1\xE1\x03\xE8\x2A\x2A\x2A\x2A\x48\xC1\xE8\x03\xB9\xFF\xFF\xFF\x7F\x3B\xD8\x0F\x4F\xC1\x8B\xD8\x3B\x5F\x2A\x74\x2A\x89\x5F\x2A\x48\x8B\x0F\x48\x85\xC9\x75\x2A\x85\xDB\x74\x2A\x48\x63\xD3\x45\x33\xC0\x48\xC1\xE2\x03\xE8\x2A\x2A\x2A\x2A\x48\x89\x07\x48\x8B\x5C\x24\x2A\x48\x83\xC4\x20\x5F\xC3",
	"xxxx?xxxxxxxxxxxxxx?xxxxxxxxxx????xxxxxxxxxxxxxxxxxx?x?xx?xxxxxxx?xxx?xxxxxxxxxxx????xxxxxxx?xxxxxx");

void* SigTArrayResize = sigScan(
	"\x48\x89\x5C\x24\x2A\x57\x48\x83\xEC\x20\x48\x63\xDA\x48\x8B\xF9\x85\xD2\x74\x2A\x48\x8B\xCB\x33\xD2\x48\x03\xC9",
	"xxxx?xxxxxxxxxxxxxx?xxxxxxxx");

FUNCTION_PTR(SDK::FName, __fastcall, FNameFromChar, Sig_FNameFromChar, SDK::FName _this, const char* Name, SDK::EFindName FindType);
FUNCTION_PTR(void, __fastcall, TArray_ResizeToFName, Sig_TArrayResizeFName, SDK::TArray<SDK::FName>* TargetArray, int Size);
FUNCTION_PTR(void, __fastcall, TArray_ResizeTo, SigTArrayResize, void* TargetArray, int Size);

namespace FNameHelper
{
	SDK::FName FNameFromString(const std::string str, SDK::EFindName FindType)
	{
		if (!Sig_FNameFromChar)
		{
			printf("[SignatureLog] could not find sig for FNameFromChar");
		}
		std::wstring wstr = std::wstring(str.begin(), str.end());
		SDK::FName fname = SDK::UKismetStringLibrary::Conv_StringToName(SDK::FString(wstr.c_str()));
		return fname;
	}

	SDK::FString FStringFromString(const std::string str)
	{
		return SDK::UKismetStringLibrary::Conv_NameToString(FNameFromString(str, SDK::EFindName::FNAME_Add));
	}
}

namespace TArrayHelper
{
	void ResizeTArray(SDK::TArray<SDK::FName>* TargetArray, int Size)
	{
		TArray_ResizeToFName(TargetArray, Size);
	}
	void ResizeTArray(void* TargetArray, int Size)
	{
		TArray_ResizeTo(TargetArray, Size);
	}
}

SDK::UObject* FindObjectByClass(const std::string& Name, SDK::UClass* uclass)
{
	for (int i = 0; i < SDK::UObject::GObjects->Num(); ++i)
	{
		SDK::UObject* Object = SDK::UObject::GObjects->GetByIndex(i);

		if (!Object)
			continue;
		if (!Object->IsA(uclass))
			continue;

		if (Object->GetName() == Name)
			return Object;
	}

	return nullptr;
}