#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_SprintBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_SprintBar.W_SprintBar_C.Tick
struct UW_SprintBar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_SprintBar.W_SprintBar_C.Construct
struct UW_SprintBar_C_Construct_Params
{
};

// Function W_SprintBar.W_SprintBar_C.ExecuteUbergraph_W_SprintBar
struct UW_SprintBar_C_ExecuteUbergraph_W_SprintBar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
