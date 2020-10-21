#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GamepadKeyGuidePopupWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GamepadKeyGuidePopupWidget.GamepadKeyGuidePopupWidget_C.SetPopup
struct UGamepadKeyGuidePopupWidget_C_SetPopup_Params
{
	EPopupStyle                                        PopupStyle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             PressedDelegate;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GamepadKeyGuidePopupWidget.GamepadKeyGuidePopupWidget_C.ExecuteUbergraph_GamepadKeyGuidePopupWidget
struct UGamepadKeyGuidePopupWidget_C_ExecuteUbergraph_GamepadKeyGuidePopupWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
