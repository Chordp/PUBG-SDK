#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CompetitiveManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CompetitiveManager.CompetitiveManager_C
// 0x0000 (0x0560 - 0x0560)
class ACompetitiveManager_C : public ACompetitiveManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass CompetitiveManager.CompetitiveManager_C"));

		return ptr;
	}


	void UpdateSmokeParticleColor(const struct FString& Title);
	void ApplySmokeColorHelper(const struct FVector& ColorVector, class UTexture* Tex);
	void ApplySmokeColor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
