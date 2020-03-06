#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MasteryPoseScene.MasteryPoseScene
// 0x0090
struct FMasteryPoseScene
{
	class UAnimSequence*                               PlayerPose_14_680F16F24620F93F5BE08482E4B331B7;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  SurvivalPageTransform_28_E1AEFE1A4C1AF0311D9296932584D6CD;// 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FString                                     SurvivalPageScene_32_2ABD8C7C4E1D741795EAF682098530DC;    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      PoseAsset_39_39BCBF6D4675AACDF881B18FB8699A6A;            // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
	struct FTransform                                  PlayerCardTransform_29_2E4AAD5846444AF931B52F8BEF3C7786;  // 0x0060(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
