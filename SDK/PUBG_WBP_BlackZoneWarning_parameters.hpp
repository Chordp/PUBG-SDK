#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WBP_BlackZoneWarning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_BlackZoneWarning.WBP_BlackZoneWarning_C.PlayWarning
struct UWBP_BlackZoneWarning_C_PlayWarning_Params
{
};

// Function WBP_BlackZoneWarning.WBP_BlackZoneWarning_C.Play Full Warning
struct UWBP_BlackZoneWarning_C_Play_Full_Warning_Params
{
};

// Function WBP_BlackZoneWarning.WBP_BlackZoneWarning_C.ExecuteUbergraph_WBP_BlackZoneWarning
struct UWBP_BlackZoneWarning_C_ExecuteUbergraph_WBP_BlackZoneWarning_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
