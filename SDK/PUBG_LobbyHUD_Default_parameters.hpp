#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyHUD_Default_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyHUD_Default.LobbyHUD_Default_C.ChangeScene
struct ALobbyHUD_Default_C_ChangeScene_Params
{
	struct FString*                                    PoseId;                                                   // (Parm, ZeroConstructor)
};

// Function LobbyHUD_Default.LobbyHUD_Default_C.ShowPoseActor
struct ALobbyHUD_Default_C_ShowPoseActor_Params
{
	struct FString*                                    SourceString;                                             // (Parm, ZeroConstructor)
	TArray<struct FString>                             SkinIDs;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyHUD_Default.LobbyHUD_Default_C.DestroyPoseActor
struct ALobbyHUD_Default_C_DestroyPoseActor_Params
{
};

// Function LobbyHUD_Default.LobbyHUD_Default_C.UserConstructionScript
struct ALobbyHUD_Default_C_UserConstructionScript_Params
{
};

// Function LobbyHUD_Default.LobbyHUD_Default_C.HideMasteryPose
struct ALobbyHUD_Default_C_HideMasteryPose_Params
{
};

// Function LobbyHUD_Default.LobbyHUD_Default_C.ShowMasteryPose
struct ALobbyHUD_Default_C_ShowMasteryPose_Params
{
	struct FString*                                    PoseId;                                                   // (Parm, ZeroConstructor)
	TArray<struct FString>*                            ItemIDs;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LobbyHUD_Default.LobbyHUD_Default_C.ReceivePostBeginPlay
struct ALobbyHUD_Default_C_ReceivePostBeginPlay_Params
{
};

// Function LobbyHUD_Default.LobbyHUD_Default_C.ExecuteUbergraph_LobbyHUD_Default
struct ALobbyHUD_Default_C_ExecuteUbergraph_LobbyHUD_Default_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
