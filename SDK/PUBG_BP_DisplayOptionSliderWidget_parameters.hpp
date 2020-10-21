#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_DisplayOptionSliderWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DisplayOptionSliderWidget.BP_DisplayOptionSliderWidget_C.Tick
struct UBP_DisplayOptionSliderWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DisplayOptionSliderWidget.BP_DisplayOptionSliderWidget_C.ExecuteUbergraph_BP_DisplayOptionSliderWidget
struct UBP_DisplayOptionSliderWidget_C_ExecuteUbergraph_BP_DisplayOptionSliderWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
