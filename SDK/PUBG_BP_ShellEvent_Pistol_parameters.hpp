#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ShellEvent_Pistol_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShellEvent_Pistol.BP_ShellEvent_Pistol_C.RunEvent
struct UBP_ShellEvent_Pistol_C_RunEvent_Params
{
	struct FVector*                                    InCollideDirection;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    InHitLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    InHitNormal;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName*                                      InBoneName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWorld**                                     InWorld;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShellEvent_Pistol.BP_ShellEvent_Pistol_C.ExecuteUbergraph_BP_ShellEvent_Pistol
struct UBP_ShellEvent_Pistol_C_ExecuteUbergraph_BP_ShellEvent_Pistol_Params
{
	int*                                               EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
