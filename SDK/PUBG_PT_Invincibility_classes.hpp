#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PT_Invincibility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PT_Invincibility.PT_Invincibility_C
// 0x0000 (0x0438 - 0x0438)
class APT_Invincibility_C : public ATslServerParticle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass PT_Invincibility.PT_Invincibility_C"));

		return ptr;
	}


	void StopParticleMulticast();
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
