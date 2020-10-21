#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_MedkitBandageOnHand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Powerup_MedkitBandageOnHand.Powerup_MedkitBandageOnHand_C
// 0x0000 (0x045C - 0x045C)
class APowerup_MedkitBandageOnHand_C : public APowerup_Base_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Powerup_MedkitBandageOnHand.Powerup_MedkitBandageOnHand_C"));

		return ptr;
	}


	void CleanupTimers();
	void UserConstructionScript();
	void ReceiveDestroyed();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void PlayAnim(class ATslCharacter* Char_Ref);
	void Drop();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Powerup_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
