#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MK3DPublisher.ECapurerMode
enum class ECapurerMode : uint8_t
{
	ECapturerNone                  = 0,
	ECapturerMovie                 = 1,
	ECapturerSound                 = 2,
	ECapurerMode_MAX               = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
