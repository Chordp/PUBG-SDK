#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemButtonWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionItemButtonWidget.ShowPopupDialogEx
struct UBP_PcOptionItemButtonWidget_C_ShowPopupDialogEx_Params
{
};

// Function TslGame.TslGameOptionItemButtonWidget.OnPopupButtonPressedEvent
struct UBP_PcOptionItemButtonWidget_C_OnPopupButtonPressedEvent_Params
{
	EPopupButtonID                                     ButtonID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
