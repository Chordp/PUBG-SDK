#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlatoonCarePackageDropIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlatoonCarePackageDropIndicator.PlatoonCarePackageDropIndicator_C.BP_UpdateIconType
struct UPlatoonCarePackageDropIndicator_C_BP_UpdateIconType_Params
{
	EPlatoonCarePackageType*                           Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatoonCarePackageDropIndicator.PlatoonCarePackageDropIndicator_C.BP_UpdateIconImage
struct UPlatoonCarePackageDropIndicator_C_BP_UpdateIconImage_Params
{
	EPlatoonSupportRequestEventType*                   IconType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatoonCarePackageDropIndicator.PlatoonCarePackageDropIndicator_C.ExecuteUbergraph_PlatoonCarePackageDropIndicator
struct UPlatoonCarePackageDropIndicator_C_ExecuteUbergraph_PlatoonCarePackageDropIndicator_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
