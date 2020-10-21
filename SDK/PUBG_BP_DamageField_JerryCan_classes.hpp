#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_DamageField_JerryCan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DamageField_JerryCan.BP_DamageField_JerryCan_C
// 0x0000 (0x04A8 - 0x04A8)
class ABP_DamageField_JerryCan_C : public ATslDamageField
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_DamageField_JerryCan.BP_DamageField_JerryCan_C"));

		return ptr;
	}


	void OnFieldDestroyed(class AActor* DestroyedActor);
	void OnCollision(const struct FSimpleCollisionEvent& Event);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
