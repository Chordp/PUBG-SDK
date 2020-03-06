#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PopupWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PopupWidget.PopupWidget_C.OnGamepadButtonVisibilityPrepass
struct UPopupWidget_C_OnGamepadButtonVisibilityPrepass_Params
{
	class UWidget**                                    BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupWidget.PopupWidget_C.SetPopup
struct UPopupWidget_C_SetPopup_Params
{
	EPopupStyle*                                       PopupStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate*                            PressedDelegate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PopupWidget.PopupWidget_C.Construct
struct UPopupWidget_C_Construct_Params
{
};

// Function PopupWidget.PopupWidget_C.Destruct
struct UPopupWidget_C_Destruct_Params
{
};

// Function PopupWidget.PopupWidget_C.CustomEvent
struct UPopupWidget_C_CustomEvent_Params
{
};

// Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget
struct UPopupWidget_C_ExecuteUbergraph_PopupWidget_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
