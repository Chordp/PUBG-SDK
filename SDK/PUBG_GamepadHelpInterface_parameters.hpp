#pragma once

// PUBG (7.1.6.5) SDK

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
