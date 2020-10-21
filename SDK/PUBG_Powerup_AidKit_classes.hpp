#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_AidKit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Powerup_AidKit.Powerup_AidKit_C
// 0x0014 (0x0470 - 0x045C)
class APowerup_AidKit_C : public APowerup_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	struct FTimerHandle                                Timer2Handle;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass Powerup_AidKit.Powerup_AidKit_C"));

		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void CustomEvent();
	void ExecuteUbergraph_Powerup_AidKit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
