#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Niagara_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Niagara.NiagaraComponent.SetRenderingEnabled
struct UNiagaraComponent_SetRenderingEnabled_Params
{
<<<<<<< HEAD
	bool*                                              bInRenderingEnabled;                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bInRenderingEnabled;                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
struct UNiagaraComponent_SetNiagaraVariableVec4_Params
{
<<<<<<< HEAD
	struct FString*                                    InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector4*                                   InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
=======
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector4                                    InValue;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
struct UNiagaraComponent_SetNiagaraVariableVec3_Params
{
<<<<<<< HEAD
	struct FString*                                    InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector*                                    InValue;                                                  // (Parm, IsPlainOldData)
=======
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector                                     InValue;                                                  // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
struct UNiagaraComponent_SetNiagaraVariableVec2_Params
{
<<<<<<< HEAD
	struct FString*                                    InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector2D*                                  InValue;                                                  // (Parm, IsPlainOldData)
=======
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	struct FVector2D                                   InValue;                                                  // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
struct UNiagaraComponent_SetNiagaraVariableFloat_Params
{
<<<<<<< HEAD
	struct FString*                                    InVariableName;                                           // (Parm, ZeroConstructor)
	float*                                             InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
struct UNiagaraComponent_SetNiagaraVariableBool_Params
{
<<<<<<< HEAD
	struct FString*                                    InVariableName;                                           // (Parm, ZeroConstructor)
	bool*                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	bool                                               InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Niagara.NiagaraComponent.SetNiagaraStaticMeshDataInterfaceActor
struct UNiagaraComponent_SetNiagaraStaticMeshDataInterfaceActor_Params
{
<<<<<<< HEAD
	struct FString*                                    InVariableName;                                           // (Parm, ZeroConstructor)
	class AActor**                                     InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     InVariableName;                                           // (Parm, ZeroConstructor)
	class AActor*                                      InSource;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Niagara.NiagaraComponent.SetNiagaraEmitterSpawnRate
struct UNiagaraComponent_SetNiagaraEmitterSpawnRate_Params
{
<<<<<<< HEAD
	struct FString*                                    InEmitterName;                                            // (Parm, ZeroConstructor)
	float*                                             InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     InEmitterName;                                            // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Niagara.NiagaraComponent.ResetEffect
struct UNiagaraComponent_ResetEffect_Params
{
};

// Function Niagara.NiagaraComponent.ReinitializeEffect
struct UNiagaraComponent_ReinitializeEffect_Params
{
};

// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
struct UNiagaraFunctionLibrary_SpawnEffectAttached_Params
{
<<<<<<< HEAD
	class UNiagaraEffect**                             EffectTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UNiagaraEffect*                              EffectTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UNiagaraComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
struct UNiagaraFunctionLibrary_SpawnEffectAtLocation_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraEffect**                             EffectTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, IsPlainOldData)
	bool*                                              bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UNiagaraEffect*                              EffectTemplate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UNiagaraComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
