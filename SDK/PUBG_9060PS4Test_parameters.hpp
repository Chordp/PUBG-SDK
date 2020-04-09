#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_9060PS4Test_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.UmgBaseWidget.UnBindFakeCursor
struct U9060PS4Test_C_UnBindFakeCursor_Params
{
};

// Function TslGame.UmgBaseWidget.SetFakeMouseMouseButtonUp
struct U9060PS4Test_C_SetFakeMouseMouseButtonUp_Params
{
	struct FVector2D                                   InCursorPositionInViewport;                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.SetFakeMouseMouseButtonDown
struct U9060PS4Test_C_SetFakeMouseMouseButtonDown_Params
{
	struct FVector2D                                   InCursorPositionInViewport;                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.RuntimeInitBP
struct U9060PS4Test_C_RuntimeInitBP_Params
{
};

// Function TslGame.UmgBaseWidget.OnFakeCursorY
struct U9060PS4Test_C_OnFakeCursorY_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.OnFakeCursorX
struct U9060PS4Test_C_OnFakeCursorX_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.OnFakeCursorUp
struct U9060PS4Test_C_OnFakeCursorUp_Params
{
};

// Function TslGame.UmgBaseWidget.OnFakeCursorDown
struct U9060PS4Test_C_OnFakeCursorDown_Params
{
};

// Function TslGame.UmgBaseWidget.IsMouseOn
struct U9060PS4Test_C_IsMouseOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.HandleMainPrepass
struct U9060PS4Test_C_HandleMainPrepass_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.CheckWantRequestRender
struct U9060PS4Test_C_CheckWantRequestRender_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.UmgBaseWidget.BindFakeCursor
struct U9060PS4Test_C_BindFakeCursor_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
