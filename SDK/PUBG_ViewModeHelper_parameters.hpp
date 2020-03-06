#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ViewModeHelper_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ViewModeHelper.ViewModeHelper_C.OnMouseDown
struct UViewModeHelper_C_OnMouseDown_Params
{
};

// Function ViewModeHelper.ViewModeHelper_C.OnMouseUp
struct UViewModeHelper_C_OnMouseUp_Params
{
};

// Function ViewModeHelper.ViewModeHelper_C.AddX
struct UViewModeHelper_C_AddX_Params
{
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ViewModeHelper.ViewModeHelper_C.AddY
struct UViewModeHelper_C_AddY_Params
{
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ViewModeHelper.ViewModeHelper_C.ViewModeZoomInOrOut
struct UViewModeHelper_C_ViewModeZoomInOrOut_Params
{
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ViewModeHelper.ViewModeHelper_C.ViewModeReset
struct UViewModeHelper_C_ViewModeReset_Params
{
};

// Function ViewModeHelper.ViewModeHelper_C.Construct
struct UViewModeHelper_C_Construct_Params
{
};

// Function ViewModeHelper.ViewModeHelper_C.ExecuteUbergraph_ViewModeHelper
struct UViewModeHelper_C_ExecuteUbergraph_ViewModeHelper_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
