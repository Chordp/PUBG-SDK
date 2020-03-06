#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_TslBaseLobbySceneTravel_FadeInOut_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C
// 0x0042 (0x04D2 - 0x0490)
class ABP_TslBaseLobbySceneTravel_FadeInOut_C : public ATslBaseLobbySceneTravel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOut_NewTrack_1_8B04B86146E56AB9DBD19681161BF2DF;      // 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeOut__Direction_8B04B86146E56AB9DBD19681161BF2DF;      // 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeOut;                                                  // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeIn_NewTrack_0_DC1B4FDE4D7381B0DD0E4589AFE5ADF5;       // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeIn__Direction_DC1B4FDE4D7381B0DD0E4589AFE5ADF5;       // 0x04B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeIn;                                                   // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInOut_Value_B2D7FECA48EE8B02C48CD780AAAEC96C;         // 0x04C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeInOut__Direction_B2D7FECA48EE8B02C48CD780AAAEC96C;    // 0x04C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeInOut;                                                // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStatFadeOut;                                             // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFinishFadeIn;                                            // 0x04D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_FadeInOut.BP_TslBaseLobbySceneTravel_FadeInOut_C"));

		return ptr;
	}


	void UserConstructionScript();
	void FadeInOut__FinishedFunc();
	void FadeInOut__UpdateFunc();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void OnStartTravel();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_TslBaseLobbySceneTravel_FadeInOut(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
