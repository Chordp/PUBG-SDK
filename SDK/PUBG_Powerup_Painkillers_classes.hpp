#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_Painkillers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Powerup_Painkillers.Powerup_Painkillers_C
// 0x0014 (0x0470 - 0x045C)
class APowerup_Painkillers_C : public APowerup_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                Timer2Handle;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Powerup_Painkillers.Powerup_Painkillers_C"));

		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CustomEvent();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Powerup_Painkillers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
