#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_FlareHandCover_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C
// 0x0038 (0x0488 - 0x0450)
class ABP_MasteryPose_FlareHandCover_C : public ABP_MasteryPose_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Plane;                                                    // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight1;                                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      FlareMesh;                                                // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MasteryPose_FlareHandCover.BP_MasteryPose_FlareHandCover_C"));

		return ptr;
	}


	void UserConstructionScript();
	void AttachObjects(class ACharacter** LobbyCharacter);
	void ExecuteUbergraph_BP_MasteryPose_FlareHandCover(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
