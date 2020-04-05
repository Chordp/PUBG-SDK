#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Sniper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GunImpact_Sniper.GunImpact_Sniper_C
// 0x0038 (0x0E00 - 0x0DC8)
class AGunImpact_Sniper_C : public ATslImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DC8(0x0008) (Transient, DuplicateTransient)
	float                                              Timeline_1_NewTrack_0_3256E19E4B5EBF48D6DFB3BAA0D89D10;   // 0x0DD0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_3256E19E4B5EBF48D6DFB3BAA0D89D10;   // 0x0DD4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0DD5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline;                                                 // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_1_AE490F534FF99A3F8568F89F27A77FB2;   // 0x0DE0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_AE490F534FF99A3F8568F89F27A77FB2;   // 0x0DE4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0DE5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline02;                                               // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalMaterial;                                            // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass GunImpact_Sniper.GunImpact_Sniper_C"));

		return ptr;
	}


	struct FDecalEffectDataSet GetAdjustedDecalEffectDataSet_BP();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void PreWakeUp_BP(struct FTransform* InitialTransform);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void AdjustDecalEffectDataSet_BP();
	void OnSplatterDecalCreated();
	void ExecuteUbergraph_GunImpact_Sniper(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
