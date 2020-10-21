#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KeyGuideTabWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslTabSelectorWidget.UpdateIndexTo
struct UKeyGuideTabWidget_C_UpdateIndexTo_Params
{
	int                                                NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslTabSelectorWidget.RotateRight
struct UKeyGuideTabWidget_C_RotateRight_Params
{
};

// Function TslGame.TslTabSelectorWidget.RotateLeft
struct UKeyGuideTabWidget_C_RotateLeft_Params
{
};

// Function TslGame.TslTabSelectorWidget.ResetSelector
struct UKeyGuideTabWidget_C_ResetSelector_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
