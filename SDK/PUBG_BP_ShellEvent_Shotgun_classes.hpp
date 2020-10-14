#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ShellEvent_Shotgun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShellEvent_Shotgun.BP_ShellEvent_Shotgun_C
// 0x0008 (0x0098 - 0x0090)
class UBP_ShellEvent_Shotgun_C : public UTslParticleModuleEventSendToGame
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0090(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ShellEvent_Shotgun.BP_ShellEvent_Shotgun_C"));

		return ptr;
	}


	void RunEvent(struct FVector* InCollideDirection, struct FVector* InHitLocation, struct FVector* InHitNormal, struct FName* InBoneName, class UWorld** InWorld, class AActor** InActor);
	void ExecuteUbergraph_BP_ShellEvent_Shotgun(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
