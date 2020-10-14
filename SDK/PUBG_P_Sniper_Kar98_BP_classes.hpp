#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sniper_Kar98_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Sniper_Kar98_BP.P_Sniper_Kar98_BP_C
// 0x0000 (0x04B0 - 0x04B0)
class AP_Sniper_Kar98_BP_C : public ATslParticle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass P_Sniper_Kar98_BP.P_Sniper_Kar98_BP_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
