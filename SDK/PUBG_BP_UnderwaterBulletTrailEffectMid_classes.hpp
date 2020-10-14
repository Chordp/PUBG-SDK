#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_UnderwaterBulletTrailEffectMid_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_UnderwaterBulletTrailEffectMid.BP_UnderwaterBulletTrailEffectMid_C
// 0x0000 (0x04D0 - 0x04D0)
class ABP_UnderwaterBulletTrailEffectMid_C : public ATslParticleBulletTrail
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_UnderwaterBulletTrailEffectMid.BP_UnderwaterBulletTrailEffectMid_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
