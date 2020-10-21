#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReviveToZombieParticle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslParticle.SetParticleParameter
struct AReviveToZombieParticle_C_SetParticleParameter_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bEnableRTPC;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleFinish
struct AReviveToZombieParticle_C_OnParticleFinish_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleCollide
struct AReviveToZombieParticle_C_OnParticleCollide_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslParticle.OnParameterUpdated
struct AReviveToZombieParticle_C_OnParameterUpdated_Params
{
};

// Function TslGame.TslParticle.GetWaterVolumeHeight
struct AReviveToZombieParticle_C_GetWaterVolumeHeight_Params
{
	bool                                               OutbIsInWater;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutWaterHeight;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TslGame.TslParticle.GetPhysicalSurfaceFromRay
struct AReviveToZombieParticle_C_GetPhysicalSurfaceFromRay_Params
{
	struct FVector                                     StartActorOffset;                                         // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     TraceRay;                                                 // (ConstParm, Parm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslParticle.GetParticleVectorParamter
struct AReviveToZombieParticle_C_GetParticleVectorParamter_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultValue;                                             // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslParticle.GetParticleParamterByName
struct AReviveToZombieParticle_C_GetParticleParamterByName_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DefaultValue;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslParticle.GetParticleParamter
struct AReviveToZombieParticle_C_GetParticleParamter_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	float                                              DefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale
struct AReviveToZombieParticle_C_GetEmitterGlobalSpawnRateScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TslGame.TslParticle.ForceSpawn
struct AReviveToZombieParticle_C_ForceSpawn_Params
{
	int                                                EmitterIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, IsPlainOldData)
};

// Function TslGame.TslParticle.AttachToParent
struct AReviveToZombieParticle_C_AttachToParent_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif