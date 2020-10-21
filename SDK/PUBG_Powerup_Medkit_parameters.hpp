#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_Medkit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Powerup_Base.Powerup_Base_C.CleanupTimers
struct APowerup_Medkit_C_CleanupTimers_Params
{
};

// Function Powerup_Base.Powerup_Base_C.UserConstructionScript
struct APowerup_Medkit_C_UserConstructionScript_Params
{
};

// Function Powerup_Base.Powerup_Base_C.ReceiveDestroyed
struct APowerup_Medkit_C_ReceiveDestroyed_Params
{
};

// Function Powerup_Base.Powerup_Base_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct APowerup_Medkit_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Powerup_Base.Powerup_Base_C.PlayAnim
struct APowerup_Medkit_C_PlayAnim_Params
{
	class ATslCharacter*                               Char_Ref;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Powerup_Base.Powerup_Base_C.Drop
struct APowerup_Medkit_C_Drop_Params
{
};

// Function Powerup_Base.Powerup_Base_C.ReceiveBeginPlay
struct APowerup_Medkit_C_ReceiveBeginPlay_Params
{
};

// Function Powerup_Base.Powerup_Base_C.ExecuteUbergraph_Powerup_Base
struct APowerup_Medkit_C_ExecuteUbergraph_Powerup_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
