#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x0C68 - 0x0C68)
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


	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
