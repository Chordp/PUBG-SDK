#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Pt_Immortal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pt_Immortal.Pt_Immortal_C
// 0x0000 (0x0438 - 0x0438)
class APt_Immortal_C : public ATslServerParticle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Pt_Immortal.Pt_Immortal_C"));

		return ptr;
	}


	void StopParticleMulticast();
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
