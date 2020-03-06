#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sanhok_Environment_Dust_Ambient_01_BP1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Sanhok_Environment_Dust_Ambient_01_BP1.P_Sanhok_Environment_Dust_Ambient_01_BP1_C
// 0x0064 (0x0534 - 0x04D0)
class AP_Sanhok_Environment_Dust_Ambient_01_BP1_C : public ATslParticleEnvironment
{
public:
	struct FVector                                     SpawnBoxMax;                                              // 0x04D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpawnBoxMin;                                              // 0x04DC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SizeMax;                                                  // 0x04EC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SizeMin;                                                  // 0x04F8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MoteSpawnBoxMultiplier;                                   // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlphaScale;                                               // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x050C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MoteAlphaScale;                                           // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoteCount;                                                // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MoteColor;                                                // 0x0524(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass P_Sanhok_Environment_Dust_Ambient_01_BP1.P_Sanhok_Environment_Dust_Ambient_01_BP1_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
