#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KeyWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function KeyWidgetBP.KeyWidgetBP_C.PreConstruct
struct UKeyWidgetBP_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeyWidgetBP.KeyWidgetBP_C.ExecuteUbergraph_KeyWidgetBP
struct UKeyWidgetBP_C_ExecuteUbergraph_KeyWidgetBP_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
