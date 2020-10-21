#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_CameraMan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CameraMan.BP_CameraMan_C.Init_Moto
struct ABP_CameraMan_C_Init_Moto_Params
{
	class ATslWheeledVehicle*                          ParentRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraMan.BP_CameraMan_C.Init
struct ABP_CameraMan_C_Init_Params
{
	class ATslCharacter*                               ParentRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript
struct ABP_CameraMan_C_UserConstructionScript_Params
{
};

// Function BP_CameraMan.BP_CameraMan_C.ReceiveTick
struct ABP_CameraMan_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CameraMan.BP_CameraMan_C.ReceiveDestroyed
struct ABP_CameraMan_C_ReceiveDestroyed_Params
{
};

// Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan
struct ABP_CameraMan_C_ExecuteUbergraph_BP_CameraMan_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
