#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Baltic_WaterDecal04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Baltic_WaterDecal04.Baltic_WaterDecal04_C
// 0x0000 (0x0408 - 0x0408)
class ABaltic_WaterDecal04_C : public AWaterDecal_Template_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Baltic_WaterDecal04.Baltic_WaterDecal04_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
