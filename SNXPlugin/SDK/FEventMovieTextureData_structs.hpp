#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FEventMovieTextureData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FEventMovieTextureData.FEventMovieTextureData
// 0x0028 (0x0028 - 0x0000)
struct FFEventMovieTextureData final
{
public:
	TSoftObjectPtr<class UManaTexture>            MovieTexture_2_814033454B93D0523F6CE7B8154CE449;   // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FFEventMovieTextureData) == 0x000008, "Wrong alignment on FFEventMovieTextureData");
static_assert(sizeof(FFEventMovieTextureData) == 0x000028, "Wrong size on FFEventMovieTextureData");
static_assert(offsetof(FFEventMovieTextureData, MovieTexture_2_814033454B93D0523F6CE7B8154CE449) == 0x000000, "Member 'FFEventMovieTextureData::MovieTexture_2_814033454B93D0523F6CE7B8154CE449' has a wrong offset!");

}

