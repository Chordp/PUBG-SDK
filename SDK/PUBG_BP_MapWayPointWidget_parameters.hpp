#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MapWayPointWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MapWayPointWidget.BP_MapWayPointWidget_C.PreConstruct
struct UBP_MapWayPointWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MapWayPointWidget.BP_MapWayPointWidget_C.ExecuteUbergraph_BP_MapWayPointWidget
struct UBP_MapWayPointWidget_C_ExecuteUbergraph_BP_MapWayPointWidget_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
