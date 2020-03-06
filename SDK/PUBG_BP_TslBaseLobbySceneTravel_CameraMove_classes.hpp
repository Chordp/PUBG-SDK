#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_TslBaseLobbySceneTravel_CameraMove_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_CameraMove.BP_TslBaseLobbySceneTravel_CameraMove_C
// 0x0020 (0x04B0 - 0x0490)
class ABP_TslBaseLobbySceneTravel_CameraMove_C : public ATslBaseLobbySceneTravel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CameraMove_Value_5540DD1349359D05D9E53CACA6BBFA89;        // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraMove__Direction_5540DD1349359D05D9E53CACA6BBFA89;   // 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraMove;                                               // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_CameraMove.BP_TslBaseLobbySceneTravel_CameraMove_C"));

		return ptr;
	}


	void UserConstructionScript();
	void CameraMove__FinishedFunc();
	void CameraMove__UpdateFunc();
	void OnStartTravel();
	void ExecuteUbergraph_BP_TslBaseLobbySceneTravel_CameraMove(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
