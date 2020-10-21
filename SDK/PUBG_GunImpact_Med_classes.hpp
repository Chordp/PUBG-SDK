#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Med_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GunImpact_Med.GunImpact_Med_C
// 0x0008 (0x0E00 - 0x0DF8)
class AGunImpact_Med_C : public ATslImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DF8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass GunImpact_Med.GunImpact_Med_C"));

		return ptr;
	}


	struct FDecalEffectDataSet GetAdjustedDecalEffectDataSet_BP();
	void UserConstructionScript();
	void PreWakeUp_BP(const struct FTransform& InitialTransform);
	void WakeUp_BP(const struct FTransform& InitialTransform);
	void ReceiveBeginPlay();
	void AdjustDecalEffectDataSet_BP();
	void ExecuteUbergraph_GunImpact_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
