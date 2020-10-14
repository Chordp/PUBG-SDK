#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_FireEffectController_JerryCan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FireEffectController_JerryCan.BP_FireEffectController_JerryCan_C
// 0x0000 (0x05E0 - 0x05E0)
class ABP_FireEffectController_JerryCan_C : public ATslEffectController
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_FireEffectController_JerryCan.BP_FireEffectController_JerryCan_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
