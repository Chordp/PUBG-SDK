#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ShellEvent_Rifle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShellEvent_Rifle.BP_ShellEvent_Rifle_C
// 0x0008 (0x0080 - 0x0078)
class UBP_ShellEvent_Rifle_C : public UTslParticleModuleEventSendToGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ShellEvent_Rifle.BP_ShellEvent_Rifle_C"));

		return ptr;
	}


	void RunEvent(struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName, class UWorld** InWorld, class AActor** InActor);
	void ExecuteUbergraph_BP_ShellEvent_Rifle(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
