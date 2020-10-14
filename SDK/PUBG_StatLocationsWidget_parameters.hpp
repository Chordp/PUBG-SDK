#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_StatLocationsWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function StatLocationsWidget.StatLocationsWidget_C.ClearStatBoxes
struct UStatLocationsWidget_C_ClearStatBoxes_Params
{
};

// Function StatLocationsWidget.StatLocationsWidget_C.SetText
struct UStatLocationsWidget_C_SetText_Params
{
	TArray<struct FString>                             Stats;                                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatLocationsWidget.StatLocationsWidget_C.GetText
struct UStatLocationsWidget_C_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
