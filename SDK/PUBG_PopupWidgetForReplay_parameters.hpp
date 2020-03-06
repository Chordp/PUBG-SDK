#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PopupWidgetForReplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Get_TextCancel_Text
struct UPopupWidgetForReplay_C_Get_TextCancel_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
struct UPopupWidgetForReplay_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
struct UPopupWidgetForReplay_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct
struct UPopupWidgetForReplay_C_Construct_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event
struct UPopupWidgetForReplay_C_Custom_Event_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct
struct UPopupWidgetForReplay_C_Destruct_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk
struct UPopupWidgetForReplay_C_XBoxOneOk_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup
struct UPopupWidgetForReplay_C_SetPopup_Params
{
	EPopupStyle*                                       PopupStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate*                            PressedDelegate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Tick
struct UPopupWidgetForReplay_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay
struct UPopupWidgetForReplay_C_ExecuteUbergraph_PopupWidgetForReplay_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature
struct UPopupWidgetForReplay_C_HideMyself__DelegateSignature_Params
{
};

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature
struct UPopupWidgetForReplay_C_ButtonClickDispatcher__DelegateSignature_Params
{
	EPopupButtonID                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
