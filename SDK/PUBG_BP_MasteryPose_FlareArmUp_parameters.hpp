#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_FlareArmUp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.UserConstructionScript
struct ABP_MasteryPose_FlareArmUp_C_UserConstructionScript_Params
{
};

// Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.AttachObjects
struct ABP_MasteryPose_FlareArmUp_C_AttachObjects_Params
{
	class ACharacter**                                 LobbyCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MasteryPose_FlareArmUp.BP_MasteryPose_FlareArmUp_C.ExecuteUbergraph_BP_MasteryPose_FlareArmUp
struct ABP_MasteryPose_FlareArmUp_C_ExecuteUbergraph_BP_MasteryPose_FlareArmUp_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
