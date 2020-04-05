#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Console_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Console_Icon.BP_Console_Icon_C.PreConstruct
struct UBP_Console_Icon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Console_Icon.BP_Console_Icon_C.Construct
struct UBP_Console_Icon_C_Construct_Params
{
};

// Function BP_Console_Icon.BP_Console_Icon_C.ExecuteUbergraph_BP_Console_Icon
struct UBP_Console_Icon_C_ExecuteUbergraph_BP_Console_Icon_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
