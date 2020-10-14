#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sanhok_Environment_Dust_Sand_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Sanhok_Environment_Dust_Sand_BP.P_Sanhok_Environment_Dust_Sand_BP_C
// 0x0034 (0x0504 - 0x04D0)
class AP_Sanhok_Environment_Dust_Sand_BP_C : public ATslParticleEnvironment
{
public:
	struct FVector                                     SpawnBoxMax;                                              // 0x04D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpawnBoxMin;                                              // 0x04DC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SizeMax;                                                  // 0x04EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SizeMin;                                                  // 0x04F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass P_Sanhok_Environment_Dust_Sand_BP.P_Sanhok_Environment_Dust_Sand_BP_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
