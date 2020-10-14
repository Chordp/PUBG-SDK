#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_JerryCan_CastableImplement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_JerryCan_CastableImplement.BP_JerryCan_CastableImplement_C
// 0x0000 (0x0090 - 0x0090)
class UBP_JerryCan_CastableImplement_C : public UCastableItemImplement_JerryCan
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_JerryCan_CastableImplement.BP_JerryCan_CastableImplement_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
