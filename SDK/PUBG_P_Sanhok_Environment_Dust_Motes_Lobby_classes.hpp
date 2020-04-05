#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sanhok_Environment_Dust_Motes_Lobby_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Sanhok_Environment_Dust_Motes_Lobby.P_Sanhok_Environment_Dust_Motes_Lobby_C
// 0x0038 (0x04E8 - 0x04B0)
class AP_Sanhok_Environment_Dust_Motes_Lobby_C : public ATslParticleEnvironment
{
public:
	struct FVector                                     SpawnBoxMax;                                              // 0x04B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpawnBoxMin;                                              // 0x04BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SpawnRate;                                                // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SizeMax;                                                  // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SizeMin;                                                  // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlphaScale;                                               // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x04D8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass P_Sanhok_Environment_Dust_Motes_Lobby.P_Sanhok_Environment_Dust_Motes_Lobby_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
