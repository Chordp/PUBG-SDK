#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Sniper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GunImpact_Sniper.GunImpact_Sniper_C
// 0x0008 (0x0DF0 - 0x0DE8)
class AGunImpact_Sniper_C : public ATslImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DE8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass GunImpact_Sniper.GunImpact_Sniper_C"));

		return ptr;
	}


	struct FDecalEffectDataSet GetAdjustedDecalEffectDataSet_BP();
	void UserConstructionScript();
	void PreWakeUp_BP(struct FTransform* InitialTransform);
	void AdjustDecalEffectDataSet_BP();
	void ExecuteUbergraph_GunImpact_Sniper(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
