#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_Flare_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.UserConstructionScript
struct ABP_MasteryPose_Flare_C_UserConstructionScript_Params
{
};

// Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.AttachObjects
struct ABP_MasteryPose_Flare_C_AttachObjects_Params
{
	class ACharacter**                                 LobbyCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MasteryPose_Flare.BP_MasteryPose_Flare_C.ExecuteUbergraph_BP_MasteryPose_Flare
struct ABP_MasteryPose_Flare_C_ExecuteUbergraph_BP_MasteryPose_Flare_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
