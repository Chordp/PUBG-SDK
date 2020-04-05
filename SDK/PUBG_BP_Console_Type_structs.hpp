#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// UserDefinedEnum BP_Console_Type.BP_Console_Type
enum class EBP_Console_Type : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	NewEnumerator3                 = 3,
	BP_Console_MAX                 = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
