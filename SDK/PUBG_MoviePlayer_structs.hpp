#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                      = 0,
	MT_Looped                      = 1,
	MT_LoadingLoop                 = 2,
	MT_MAX                         = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
