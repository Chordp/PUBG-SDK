#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_BulletCamActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BulletCamActor.BP_BulletCamActor_C.Init
struct ABP_BulletCamActor_C_Init_Params
{
	class ATslWeapon_Trajectory*                       NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BulletCamActor.BP_BulletCamActor_C.UserConstructionScript
struct ABP_BulletCamActor_C_UserConstructionScript_Params
{
};

// Function BP_BulletCamActor.BP_BulletCamActor_C.ReceiveTick
struct ABP_BulletCamActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BulletCamActor.BP_BulletCamActor_C.ExecuteUbergraph_BP_BulletCamActor
struct ABP_BulletCamActor_C_ExecuteUbergraph_BP_BulletCamActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
