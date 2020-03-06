#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_Engine_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_MAX                        = 6
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	ENiagaraInputNodeUsage_MAX     = 4
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	ENiagaraSpriteFacingMode_MAX   = 3
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	ENiagaraSpriteAlignment_MAX    = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	SortNone                       = 0,
	SortViewDepth                  = 1,
	SortViewDistance               = 2,
	ENiagaraSortMode_MAX           = 3
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function                       = 0,
	Module                         = 1,
	SpawnScript                    = 2,
	SpawnScriptInterpolated        = 3,
	UpdateScript                   = 4,
	EffectScript                   = 5,
	ENiagaraScriptUsage_MAX        = 6
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4
};


// Enum Niagara.EScriptCompileIndices
enum class EScriptCompileIndices : uint8_t
{
	SpawnScript                    = 0,
	UpdateScript                   = 1,
	EventScript                    = 2,
	EScriptCompileIndices_MAX      = 3
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraTypeDefinition
// 0x0008
struct FNiagaraTypeDefinition
{
	class UStruct*                                     Struct;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraVariable
// 0x0030
struct FNiagaraVariable
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraTypeDefinition                      TypeDef;                                                  // 0x0018(0x0008) (Edit)
	TArray<unsigned char>                              VarData;                                                  // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// 0x0020
struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface*                       DataInterface;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// 0x0068
struct FNDIStaticMeshSectionFilter
{
	TArray<int>                                        AllowedMaterialSlots;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0010(0x0058) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// 0x0030
struct FNiagaraEmitterHandle
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, EditConst, IsPlainOldData)
	struct FName                                       IdName;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraEmitterProperties*                   Instance;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraParameterBinding
// 0x0030
struct FNiagaraParameterBinding
{
	struct FGuid                                       SourceParameterId;                                        // 0x0000(0x0010) (IsPlainOldData)
	struct FGuid                                       DestinationEmitterId;                                     // 0x0010(0x0010) (IsPlainOldData)
	struct FGuid                                       DestinationParameterId;                                   // 0x0020(0x0010) (IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterInternalVariableBinding
// 0x0030
struct FNiagaraEmitterInternalVariableBinding
{
	struct FGuid                                       SourceParameterId;                                        // 0x0000(0x0010) (IsPlainOldData)
	struct FGuid                                       DestinationEmitterId;                                     // 0x0010(0x0010) (IsPlainOldData)
	struct FString                                     DestinationEmitterVariableName;                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraParameters
// 0x0010
struct FNiagaraParameters
{
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x0010
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraDataSetType                                Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           ID;                                                       // 0x0000(0x0010) (Edit, EditConst)
	TArray<struct FNiagaraVariable>                    Variables;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// 0x0001
struct FNiagaraScriptDataUsageInfo
{
	bool                                               bReadsAttriubteData;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// 0x0030
struct FVMExternalFunctionBindingInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       OwnerId;                                                  // 0x0008(0x0010) (IsPlainOldData)
	TArray<bool>                                       InputParamLocations;                                      // 0x0018(0x0010) (ZeroConstructor)
	int                                                NumOutputs;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraStatScope
// 0x0020
struct FNiagaraStatScope
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0028
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventGenerator;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEmitter;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UNiagaraEventReceiverEmitterAction*>  EmitterActions;                                           // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0038
struct FNiagaraEventGeneratorProperties
{
	int                                                MaxEventsPerFrame;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
	struct FNiagaraDataSetProperties                   SetProps;                                                 // 0x0018(0x0020)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0028
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           // 0x0008(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          // 0x0018(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// 0x0028 (0x0050 - 0x0028)
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
	EScriptExecutionMode                               ExecutionMode;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	uint32_t                                           SpawnNumber;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxEventsPerFrame;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SourceEmitterID;                                          // 0x0034(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       SourceEventName;                                          // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEmitterBurst
// 0x0010
struct FNiagaraEmitterBurst
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeRange;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SpawnMinimum;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           SpawnMaximum;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraMatrix
// 0x0040
struct FNiagaraMatrix
{
	struct FVector4                                    Row0;                                                     // 0x0000(0x0010) (IsPlainOldData)
	struct FVector4                                    Row1;                                                     // 0x0010(0x0010) (IsPlainOldData)
	struct FVector4                                    Row2;                                                     // 0x0020(0x0010) (IsPlainOldData)
	struct FVector4                                    Row3;                                                     // 0x0030(0x0010) (IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStructInner
// 0x0018
struct FNiagaraTestStructInner
{
	struct FVector                                     InnerVector1;                                             // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     InnerVector2;                                             // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraTestStruct
// 0x0048
struct FNiagaraTestStruct
{
	struct FVector                                     Vector1;                                                  // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     Vector2;                                                  // 0x000C(0x000C) (IsPlainOldData)
	struct FNiagaraTestStructInner                     InnerStruct1;                                             // 0x0018(0x0018)
	struct FNiagaraTestStructInner                     InnerStruct2;                                             // 0x0030(0x0018)
};

// ScriptStruct Niagara.NiagaraNumeric
// 0x0001
struct FNiagaraNumeric
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraBool
// 0x0004
struct FNiagaraBool
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraInt32
// 0x0004
struct FNiagaraInt32
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFloat
// 0x0004
struct FNiagaraFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// 0x0040
struct FNiagaraFunctionSignature
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Inputs;                                                   // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraVariable>                    Outputs;                                                  // 0x0018(0x0010) (ZeroConstructor)
	struct FGuid                                       OwnerId;                                                  // 0x0028(0x0010) (IsPlainOldData)
	bool                                               bRequiresContext;                                         // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMemberFunction;                                          // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct Niagara.MeshTriCoordinate
// 0x0010
struct FMeshTriCoordinate
{
	int                                                Tri;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaryCoord;                                                // 0x0004(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// 0x002C
struct FNiagaraCollisionEventPayload
{
	struct FVector                                     CollisionPos;                                             // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     CollisionNormal;                                          // 0x000C(0x000C) (IsPlainOldData)
	int                                                PhysicalMaterialIndex;                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CollisionVelocity;                                        // 0x001C(0x000C) (IsPlainOldData)
	int                                                ParticleIndex;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
