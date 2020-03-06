#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_Drinks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasteryPose_Drinks.BP_MasteryPose_Drinks_C
// 0x0060 (0x04B0 - 0x0450)
class ABP_MasteryPose_Drinks_C : public ABP_MasteryPose_C
{
public:
	class UAsyncStaticMeshComponent*                   Can_inside3;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Can_inside2;                                              // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Can_inside1;                                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   FridgeMesh;                                               // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   DrinkMesh;                                                // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Can5;                                                     // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Can4;                                                     // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Can3;                                                     // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Can2;                                                     // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   Can1;                                                     // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   BinMesh;                                                  // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MasteryPose_Drinks.BP_MasteryPose_Drinks_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
