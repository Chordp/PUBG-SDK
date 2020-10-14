#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GamepadHelpInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GamepadHelpInterface.GamepadHelpInterface_C.GetGamePadHelpWidgetClass
struct UGamepadHelpInterface_C_GetGamePadHelpWidgetClass_Params
{
	class UClass*                                      GuideClass;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
