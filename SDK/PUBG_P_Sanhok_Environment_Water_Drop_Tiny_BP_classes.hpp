#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Sanhok_Environment_Water_Drop_Tiny_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Sanhok_Environment_Water_Drop_Tiny_BP.P_Sanhok_Environment_Water_Drop_Tiny_BP_C
// 0x0008 (0x04C0 - 0x04B8)
class AP_Sanhok_Environment_Water_Drop_Tiny_BP_C : public ATslParticleEnvironment
{
public:
	float                                              SpawnRateMin;                                             // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpawnRateMax;                                             // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass P_Sanhok_Environment_Water_Drop_Tiny_BP.P_Sanhok_Environment_Water_Drop_Tiny_BP_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
