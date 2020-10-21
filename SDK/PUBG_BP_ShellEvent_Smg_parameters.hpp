#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ShellEvent_Smg_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ShellEvent_Smg.BP_ShellEvent_SMG_C.RunEvent
struct UBP_ShellEvent_SMG_C_RunEvent_Params
{
	struct FVector                                     InCollideDirection;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InHitLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InHitNormal;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       InBoneName;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UWorld*                                      InWorld;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ShellEvent_Smg.BP_ShellEvent_SMG_C.ExecuteUbergraph_BP_ShellEvent_SMG
struct UBP_ShellEvent_SMG_C_ExecuteUbergraph_BP_ShellEvent_SMG_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
