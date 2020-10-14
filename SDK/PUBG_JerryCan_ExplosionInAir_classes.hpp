#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_JerryCan_ExplosionInAir_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass JerryCan_ExplosionInAir.JerryCan_ExplosionInAir_C
// 0x0000 (0x0C58 - 0x0C58)
class AJerryCan_ExplosionInAir_C : public ATslExplosionEffect
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass JerryCan_ExplosionInAir.JerryCan_ExplosionInAir_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
