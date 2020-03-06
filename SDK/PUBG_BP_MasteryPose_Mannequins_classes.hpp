#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_Mannequins_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasteryPose_Mannequins.BP_MasteryPose_Mannequins_C
// 0x0048 (0x0498 - 0x0450)
class ABP_MasteryPose_Mannequins_C : public ABP_MasteryPose_C
{
public:
	class UAsyncStaticMeshComponent*                   PlayerCardMannequin2;                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   PlayerCardMannequin1;                                     // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   MannequinMesh_Back2;                                      // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   MannequinMesh_Back1;                                      // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   MannequinMesh_Front2;                                     // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   MannequinMesh_Front1;                                     // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LobbySpotLight;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MasteryPose_Mannequins.BP_MasteryPose_Mannequins_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
