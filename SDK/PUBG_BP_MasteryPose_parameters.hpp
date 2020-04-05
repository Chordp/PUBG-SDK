#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_MasteryPose.BP_MasteryPose_C.ClearEffects
struct ABP_MasteryPose_C_ClearEffects_Params
{
};

// Function BP_MasteryPose.BP_MasteryPose_C.AttachObjects
struct ABP_MasteryPose_C_AttachObjects_Params
{
	class ACharacter**                                 LobbyCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MasteryPose.BP_MasteryPose_C.ShowPlayerCardEffects
struct ABP_MasteryPose_C_ShowPlayerCardEffects_Params
{
};

// Function BP_MasteryPose.BP_MasteryPose_C.ShowLobbyEffects
struct ABP_MasteryPose_C_ShowLobbyEffects_Params
{
};

// Function BP_MasteryPose.BP_MasteryPose_C.UserConstructionScript
struct ABP_MasteryPose_C_UserConstructionScript_Params
{
};

// Function BP_MasteryPose.BP_MasteryPose_C.ReceiveBeginPlay
struct ABP_MasteryPose_C_ReceiveBeginPlay_Params
{
};

// Function BP_MasteryPose.BP_MasteryPose_C.ReceiveDestroyed
struct ABP_MasteryPose_C_ReceiveDestroyed_Params
{
};

// Function BP_MasteryPose.BP_MasteryPose_C.AttachObjectsEvent
struct ABP_MasteryPose_C_AttachObjectsEvent_Params
{
	class ACharacter**                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MasteryPose.BP_MasteryPose_C.ClearEffectsEvent
struct ABP_MasteryPose_C_ClearEffectsEvent_Params
{
};

// Function BP_MasteryPose.BP_MasteryPose_C.ShowEffects
struct ABP_MasteryPose_C_ShowEffects_Params
{
};

// Function BP_MasteryPose.BP_MasteryPose_C.ExecuteUbergraph_BP_MasteryPose
struct ABP_MasteryPose_C_ExecuteUbergraph_BP_MasteryPose_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
