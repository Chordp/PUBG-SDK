#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ReplayRegion.ReplayRegion
// 0x0018
struct FReplayRegion
{
	class UButton*                                     Button_4_6B55DD284142A651D22E90B0FD62B2D7;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     RegionName_5_C59E8B084F9842AFBC031888955335C3;            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
