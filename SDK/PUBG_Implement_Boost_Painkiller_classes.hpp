#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Implement_Boost_Painkiller_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Implement_Boost_Painkiller.Implement_Boost_Painkiller_C
// 0x0000 (0x0048 - 0x0048)
class UImplement_Boost_Painkiller_C : public UCastableItemImplement_Boost
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Implement_Boost_Painkiller.Implement_Boost_Painkiller_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
