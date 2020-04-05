#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_Bush_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasteryPose_Bush.BP_MasteryPose_Bush_C
<<<<<<< HEAD
// 0x0018 (0x0448 - 0x0430)
class ABP_MasteryPose_Bush_C : public ABP_MasteryPose_C
{
public:
	class UAsyncStaticMeshComponent*                   GrassMesh;                                                // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   BushMesh;                                                 // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
=======
// 0x0018 (0x0468 - 0x0450)
class ABP_MasteryPose_Bush_C : public ABP_MasteryPose_C
{
public:
	class UAsyncStaticMeshComponent*                   GrassMesh;                                                // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAsyncStaticMeshComponent*                   BushMesh;                                                 // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MasteryPose_Bush.BP_MasteryPose_Bush_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
