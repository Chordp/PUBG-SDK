#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_PanDeflect_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasteryPose_PanDeflect.BP_MasteryPose_PanDeflect_C
// 0x0060 (0x04B0 - 0x0450)
class ABP_MasteryPose_PanDeflect_C : public ABP_MasteryPose_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	class UAsyncStaticMeshComponent*                   AsyncStaticMesh3;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   AsyncStaticMesh2;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   PlayerCardPanEffects;                                     // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   AsyncStaticMesh;                                          // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMasterySkinnableProp*                       Pan;                                                      // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLightEyes;                                            // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         PlayerCardBulletLight;                                    // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         BulletLight;                                              // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         LobbySpotLight;                                           // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MasteryPose_PanDeflect.BP_MasteryPose_PanDeflect_C"));

		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasteryPose_PanDeflect(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
