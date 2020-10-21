#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemSliderWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionItemSliderWidget.ResetAcceleration
struct UBP_PcOptionItemSliderWidget_C_ResetAcceleration_Params
{
};

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextCommitted
struct UBP_PcOptionItemSliderWidget_C_OnSliderValueTextCommitted_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextChanged
struct UBP_PcOptionItemSliderWidget_C_OnSliderValueTextChanged_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueChanged
struct UBP_PcOptionItemSliderWidget_C_OnSliderValueChanged_Params
{
	float                                              MappedValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentEnd
struct UBP_PcOptionItemSliderWidget_C_OnSliderAdjustmentEnd_Params
{
};

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentBegin
struct UBP_PcOptionItemSliderWidget_C_OnSliderAdjustmentBegin_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
