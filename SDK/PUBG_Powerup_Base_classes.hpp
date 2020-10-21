#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Powerup_Base.Powerup_Base_C
// 0x0044 (0x045C - 0x0418)
class APowerup_Base_C : public ATslPhysicsBody
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            SmallRadiusSphere;                                        // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslFPPShadowSupportComponent*               TslFPPShadowSupport;                                      // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Animation;                                                // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0448(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     LocalBaseVelocity;                                        // 0x0450(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Powerup_Base.Powerup_Base_C"));

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
