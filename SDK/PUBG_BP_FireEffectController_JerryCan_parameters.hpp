#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_FireEffectController_JerryCan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslEffectController.TickDamageFields
struct ABP_FireEffectController_JerryCan_C_TickDamageFields_Params
{
};

// Function TslGame.TslEffectController.OnTakeDamage
struct ABP_FireEffectController_JerryCan_C_OnTakeDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslEffectController.EndEffect
struct ABP_FireEffectController_JerryCan_C_EndEffect_Params
{
};

// Function TslGame.TslEffectController.Client_ShowDebugString
struct ABP_FireEffectController_JerryCan_C_Client_ShowDebugString_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	struct FString                                     InText;                                                   // (Parm, ZeroConstructor)
	class AActor*                                      InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      InColor;                                                  // (Parm, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslEffectController.Client_ShowDebugSphere
struct ABP_FireEffectController_JerryCan_C_Client_ShowDebugSphere_Params
{
	struct FVector                                     InLocation;                                               // (Parm, IsPlainOldData)
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      InColor;                                                  // (Parm, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslEffectController.Client_ShowDebugLine
struct ABP_FireEffectController_JerryCan_C_Client_ShowDebugLine_Params
{
	struct FVector                                     InStart;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     InEnd;                                                    // (Parm, IsPlainOldData)
	struct FColor                                      InColor;                                                  // (Parm, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslEffectController.Client_ShowDebugCoordinateSystem
struct ABP_FireEffectController_JerryCan_C_Client_ShowDebugCoordinateSystem_Params
{
	struct FVector                                     InStart;                                                  // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FQuat                                       InQuat;                                                   // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              InTime;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InSize;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
