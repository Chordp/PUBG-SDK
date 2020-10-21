#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_AIItemMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_AIItemMenu.W_AIItemMenu_C.InitItemsData
struct UW_AIItemMenu_C_InitItemsData_Params
{
};

// Function W_AIItemMenu.W_AIItemMenu_C.InitAIList
struct UW_AIItemMenu_C_InitAIList_Params
{
};

// Function W_AIItemMenu.W_AIItemMenu_C.SetUseBtn
struct UW_AIItemMenu_C_SetUseBtn_Params
{
};

// Function W_AIItemMenu.W_AIItemMenu_C.OnKeyUp
struct UW_AIItemMenu_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_AIItemMenu.W_AIItemMenu_C.OnKeyDown
struct UW_AIItemMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function W_AIItemMenu.W_AIItemMenu_C.GiveItemToPlayer
struct UW_AIItemMenu_C_GiveItemToPlayer_Params
{
	struct FName                                       InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AIItemMenu.W_AIItemMenu_C.DoExit
struct UW_AIItemMenu_C_DoExit_Params
{
};

// Function W_AIItemMenu.W_AIItemMenu_C.Construct
struct UW_AIItemMenu_C_Construct_Params
{
};

// Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UW_AIItemMenu_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_AIItemMenu.W_AIItemMenu_C.Event Close
struct UW_AIItemMenu_C_Event_Close_Params
{
};

// Function W_AIItemMenu.W_AIItemMenu_C.CenterCursor
struct UW_AIItemMenu_C_CenterCursor_Params
{
	class APlayerController*                           InPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
struct UW_AIItemMenu_C_BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_AIItemMenu.W_AIItemMenu_C.Destruct
struct UW_AIItemMenu_C_Destruct_Params
{
};

// Function W_AIItemMenu.W_AIItemMenu_C.ExecuteUbergraph_W_AIItemMenu
struct UW_AIItemMenu_C_ExecuteUbergraph_W_AIItemMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
