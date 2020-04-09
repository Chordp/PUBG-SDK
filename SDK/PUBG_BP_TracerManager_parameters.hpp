#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_TracerManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslTracerManager.Multi_AddInstance
struct ABP_TracerManager_C_Multi_AddInstance_Params
{
	struct FTracerSimulationServerData                 InTracerData;                                             // (ConstParm, Parm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
