#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SingleStatText_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SingleStatText.SingleStatText_C.SetDesiredWidth
struct USingleStatText_C_SetDesiredWidth_Params
{
	float*                                             InMinDesiredWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SingleStatText.SingleStatText_C.SetBackgroundColor
struct USingleStatText_C_SetBackgroundColor_Params
{
	bool*                                              IsEven;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SingleStatText.SingleStatText_C.SetText
struct USingleStatText_C_SetText_Params
{
	struct FText*                                      Text;                                                     // (Parm)
};

// Function SingleStatText.SingleStatText_C.GetText
struct USingleStatText_C_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
