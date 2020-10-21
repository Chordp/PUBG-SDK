#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_OutPlayArea2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function M_OutPlayArea2.M_OutPlayArea2_C.UserConstructionScript
struct AM_OutPlayArea2_C_UserConstructionScript_Params
{
};

// Function M_OutPlayArea2.M_OutPlayArea2_C.OnSetEffectParameter
struct AM_OutPlayArea2_C_OnSetEffectParameter_Params
{
	struct FString                                     ParameterName;                                            // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function M_OutPlayArea2.M_OutPlayArea2_C.ExecuteUbergraph_M_OutPlayArea2
struct AM_OutPlayArea2_C_ExecuteUbergraph_M_OutPlayArea2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
