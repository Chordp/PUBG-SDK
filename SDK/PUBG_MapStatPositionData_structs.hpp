#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_MapStatRawData_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MapStatPositionData.MapStatPositionData
// 0x0038
struct FMapStatPositionData
{
	int                                                WorldIndexX_26_E4EA437B435AC01A4392AFA89818B06F;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WorldIndexY_27_941B901240E6C56400BA92BDF73F1AAC;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraCenter_28_179F8E4E451F4DE0CB8DA3BCE7C62409;         // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          CameraTransforms_19_644B33EF4A303A7E926395AC9280C0FD;     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMapStatRawData>                     MapStatRawDatas_18_77CED96A4F8E18D8DFADCA954BBCE41A;      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
