#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DebugInfoCanvasWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DebugInfoCanvasWidget.DebugInfoCanvasWidget_C.OnPrepass
struct UDebugInfoCanvasWidget_C_OnPrepass_Params
{
	class UWidget**                                    BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DebugInfoCanvasWidget.DebugInfoCanvasWidget_C.GetDebugText
struct UDebugInfoCanvasWidget_C_GetDebugText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
