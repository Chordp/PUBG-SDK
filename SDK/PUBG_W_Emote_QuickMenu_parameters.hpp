#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_Emote_QuickMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer
struct UW_Emote_QuickMenu_C_ShowContainer_Params
{
	class UCanvasPanel*                                InCP;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown
struct UW_Emote_QuickMenu_C_PopulateDown_Params
{
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu
struct UW_Emote_QuickMenu_C_ShowQuickMenu_Params
{
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu
struct UW_Emote_QuickMenu_C_HideQuickMenu_Params
{
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity
struct UW_Emote_QuickMenu_C_RecalcOpacity_Params
{
	int                                                Col;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TooltipEmoteName;                                         // (Parm)
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer
struct UW_Emote_QuickMenu_C_PopulateContainer_Params
{
	float                                              ColOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RowOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxWidgetCount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinEmoteIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxEmoteIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                CP_Ref;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ButtonLC;                                                 // (Parm, IsPlainOldData)
	struct FVector2D                                   InAnchorMin;                                              // (Parm, IsPlainOldData)
	struct FVector2D                                   InAnchorMax;                                              // (Parm, IsPlainOldData)
	struct FVector2D                                   InAlignment;                                              // (Parm, IsPlainOldData)
	bool                                               bSwitchXY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct
struct UW_Emote_QuickMenu_C_Construct_Params
{
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature
struct UW_Emote_QuickMenu_C_BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave
struct UW_Emote_QuickMenu_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
struct UW_Emote_QuickMenu_C_BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close
struct UW_Emote_QuickMenu_C_Menu_Close_Params
{
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature
struct UW_Emote_QuickMenu_C_BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu
struct UW_Emote_QuickMenu_C_ExecuteUbergraph_W_Emote_QuickMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
