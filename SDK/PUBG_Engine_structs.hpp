#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Basic.hpp"
#include "PUBG_PacketHandler_classes.hpp"
#include "PUBG_CoreUObject_classes.hpp"
#include "PUBG_InputCore_classes.hpp"
#include "PUBG_SlateCore_classes.hpp"
#include "PUBG_Slate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neuter                         = 2,
	ETextGender_MAX                = 3
};


// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	Int                            = 0,
	UInt                           = 1,
	Float                          = 2,
	Double                         = 3,
	Text                           = 4,
	Gender                         = 5,
	EFormatArgumentType_MAX        = 6
};


// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	Destroyed                      = 0,
	LevelTransition                = 1,
	EndPlayInEditor                = 2,
	RemovedFromWorld               = 3,
	Quit                           = 4,
	EEndPlayReason_MAX             = 5
};


// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	Cleared                        = 0,
	NewPath                        = 1,
	UpdatedDueToGoalMoved          = 2,
	UpdatedDueToNavigationChanged  = 3,
	Invalidated                    = 4,
	RePathFailed                   = 5,
	MetaPathUpdate                 = 6,
	Custom                         = 7,
	ENavPathEvent_MAX              = 8
};


// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	Native                         = 0,
	SimpleConstructionScript       = 1,
	UserConstructionScript         = 2,
	Instance                       = 3,
	EComponentCreationMethod_MAX   = 4
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom                         = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	UseGlobalPhysicsSetting        = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	OneShot                        = 0,
	OneShot_Reverse                = 1,
	Loop_Reset                     = 2,
	PingPong                       = 3,
	EInterpToBehaviourType_MAX     = 4
};


// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};


// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	ENetworkFailure_MAX            = 11
};


// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	NoLevel                        = 0,
	LoadMapFailure                 = 1,
	InvalidURL                     = 2,
	PackageMissing                 = 3,
	PackageVersion                 = 4,
	NoDownload                     = 5,
	TravelFailure                  = 6,
	CheatCommands                  = 7,
	PendingNetGameCreateFailure    = 8,
	CloudSaveFailure               = 9,
	ServerTravelFailure            = 10,
	ClientTravelFailure            = 11,
	ETravelFailure_MAX             = 12
};


// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	Unknown                        = 0,
	Portrait                       = 1,
	PortraitUpsideDown             = 2,
	LandscapeLeft                  = 3,
	LandscapeRight                 = 4,
	FaceUp                         = 5,
	FaceDown                       = 6,
	EScreenOrientation_MAX         = 7
};


// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4
};


// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3
};


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	Quit                           = 0,
	Background                     = 1,
	EQuitPreference_MAX            = 2
};


// Enum Engine.EIndoorOutdoorMask
enum class EIndoorOutdoorMask : uint8_t
{
	IOM_NONE                       = 0,
	IOM_INDOOR                     = 1,
	IOM_OUTDOOR                    = 2,
	IOM_BOTH                       = 3,
	IOM_MAX                        = 4
};


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined                      = 0,
	AlwaysSpawn                    = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding           = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};


// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	Frame1                         = 0,
	Frame2                         = 1,
	EConstraintFrame_MAX           = 2
};


// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	Invalid                        = 0,
	Bone                           = 1,
	Socket                         = 2,
	EComponentSocketType_MAX       = 3
};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	Static                         = 0,
	Stationary                     = 1,
	Movable                        = 2,
	EComponentMobility_MAX         = 3
};


// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64
};


// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4
};


// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ByteComponents                 = 0,
	ShortComponents                = 1,
	ERotatorQuantization_MAX       = 2
};


// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	RoundWholeNumber               = 0,
	RoundOneDecimal                = 1,
	RoundTwoDecimals               = 2,
	EVectorQuantization_MAX        = 3
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4
};


// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	Disabled                       = 0,
	Player0                        = 1,
	Player1                        = 2,
	Player2                        = 3,
	Player3                        = 4,
	Player4                        = 5,
	Player5                        = 6,
	Player6                        = 7,
	Player7                        = 8,
	EAutoReceiveInput_MAX          = 9
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORN_MAX                       = 5,
	ENetDormancy_MAX               = 6
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	ShiftBucket0                   = 0,
	ShiftBucket1                   = 1,
	ShiftBucket2                   = 2,
	ShiftBucket3                   = 3,
	ShiftBucket4                   = 4,
	ShiftBucket5                   = 5,
	ShiftBucketMax                 = 6,
	EUpdateRateShiftBucket_MAX     = 7
};


// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2
};


// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4
};


// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3
};


// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.EInputConsumeOptions
enum class EInputConsumeOptions : uint8_t
{
	ICO_ConsumeAll                 = 0,
	ICO_ConsumeBoundKeys           = 1,
	ICO_ConsumeNone                = 2,
	ICO_MAX                        = 3
};


// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.EPhysicsSceneType
enum class EPhysicsSceneType : uint8_t
{
	PST_Sync                       = 0,
	PST_Cloth                      = 1,
	PST_Async                      = 2,
	PST_MAX                        = 3
};


// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3
};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33
};


// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	Disabled                       = 0,
	Linear                         = 1,
	Exponential                    = 2,
	Replay                         = 3,
	RotationOnly                   = 4,
	ENetworkSmoothingMode_MAX      = 5
};


// Enum Engine.EStanceMode
enum class EStanceMode : uint8_t
{
	STANCE_None                    = 0,
	STANCE_Stand                   = 1,
	STANCE_Crouch                  = 2,
	STANCE_Prone                   = 3,
	STANCE_MAX                     = 4
};


// Enum Engine.ETriangleSortAxis
enum class ETriangleSortAxis : uint8_t
{
	TSA_X_Axis                     = 0,
	TSA_Y_Axis                     = 1,
	TSA_Z_Axis                     = 2,
	TSA_MAX                        = 3
};


// Enum Engine.ETriangleSortOption
enum class ETriangleSortOption : uint8_t
{
	TRISORT_None                   = 0,
	TRISORT_CenterRadialDistance   = 1,
	TRISORT_Random                 = 2,
	TRISORT_MergeContiguous        = 3,
	TRISORT_Custom                 = 4,
	TRISORT_CustomLeftRight        = 5,
	TRISORT_MAX                    = 6
};


// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4
};


// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_MAX                = 8
};


// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_MAX                        = 10
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	SceneDepth                     = 0,
	DistanceField                  = 1,
	HeightBuffer                   = 2,
	EParticleCollisionMode_MAX     = 3
};


// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3
};


// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 2,
	Force16BitsPerChannel          = 3,
	EGBufferFormat_MAX             = 4
};


// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3
};


// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_BRO_SuperSampling          = 8,
	SCS_BRO_Masked                 = 9,
	SCS_MAX                        = 10
};


// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	SortByDistance                 = 0,
	SortByProjectedZ               = 1,
	SortAlongAxis                  = 2,
	ETranslucentSortPolicy_MAX     = 3
};


// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2
};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6
};


// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3
};


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_MAX                      = 6
};


// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2
};


// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3
};


// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2
};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4
};


// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	EDetachmentRule_MAX            = 2
};


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3
};


// Enum Engine.EActorMetricsType
enum class EActorMetricsType : uint8_t
{
	METRICS_VERTS                  = 0,
	METRICS_TRIS                   = 1,
	METRICS_SECTIONS               = 2,
	METRICS_MAX                    = 3
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4
};


// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2
};


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	None                           = 0,
	LogicalNegateBool              = 1,
	Dereference                    = 2,
	EPostCopyOperation_MAX         = 3
};


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	NeverAsPin                     = 0,
	PinHiddenByDefault             = 1,
	PinShownByDefault              = 2,
	AlwaysAsPin                    = 3,
	EPinHidingMode_MAX             = 4
};


// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	Float                          = 0,
	Bool                           = 1,
	Curve                          = 2,
	EAnimAlphaInputType_MAX        = 3
};


// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EM_Standard                    = 0,
	EM_Freeze                      = 1,
	EM_DelayedFreeze               = 2,
	EM_MAX                         = 3
};


// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EDS_SourcePose                 = 0,
	EDS_DestinationPose            = 1,
	EDS_MAX                        = 2
};


// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	CABM_Linear                    = 0,
	CABM_Cubic                     = 1,
	CABM_MAX                       = 2
};


// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EVertexPaintAxis_MAX           = 3
};


// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow               = 0,
	Sphere                         = 1,
	Line                           = 2,
	OnScreenMessage                = 3,
	CoordinateSystem               = 4,
	EDrawDebugItemType_MAX         = 5
};


// Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	CoM                            = 0,
	CustomSphere                   = 1,
	InnerSphere                    = 2,
	OuterSphere                    = 3,
	AnimPhysCollisionType_MAX      = 4
};


// Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	AnimPhysTwistAxis_MAX          = 3
};


// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	Overlay                        = 0,
	VerticalBox                    = 1,
	EWindowTitleBarMode_MAX        = 2
};


// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2
};


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	WorldSpace                     = 0,
	ComponentSpace                 = 1,
	EBoneSpaces_MAX                = 2
};


// Enum Engine.EMeshComponentUpdateFlag
enum class EMeshComponentUpdateFlag : uint8_t
{
	AlwaysTickPoseAndRefreshBones  = 0,
	AlwaysTickPose                 = 1,
	OnlyTickPoseWhenRendered       = 2,
	EMeshComponentUpdateFlag_MAX   = 3
};


// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2
};


// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic  = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	AnimationBlueprint             = 0,
	AnimationSingleNode            = 1,
	AnimationCustomMode            = 2,
	EAnimationMode_MAX             = 3
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones            = 0,
	SkipAllBones                   = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineMeshAxis_MAX            = 3
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	Local                          = 0,
	World                          = 1,
	ESplineCoordinateSpace_MAX     = 2
};


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	Linear                         = 0,
	Curve                          = 1,
	Constant                       = 2,
	CurveClamped                   = 3,
	CurveCustomTangent             = 4,
	ESplinePointType_MAX           = 5
};


// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4
};


// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3
};


// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	CapturedScene                  = 0,
	SpecifiedCubemap               = 1,
	EReflectionSourceType_MAX      = 2
};


// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_MAX                       = 3
};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};


// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	Directional                    = 0,
	Point                          = 1,
	EWindSourceType_MAX            = 2
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	ETimelineDirection_MAX         = 2
};


// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2
};


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations                  = 0,
	HighestWeightedAnimation       = 1,
	None                           = 2,
	ENotifyTriggerMode_MAX         = 3
};


// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3
};


// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	TLT_StandardBlend              = 0,
	TLT_Custom                     = 1,
	TLT_MAX                        = 2
};


// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	TBM_Linear                     = 0,
	TBM_Cubic                      = 1,
	TBM_MAX                        = 2
};


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2
};


// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	AttributeCurve                 = 0,
	MaterialCurve                  = 1,
	MorphTargetCurve               = 2,
	MaxAnimCurveType               = 3,
	EAnimCurveType_MAX             = 4
};


// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown                        = 0,
	NeverCook                      = 1,
	DevelopmentCook                = 2,
	AlwaysCook                     = 3,
	EPrimaryAssetCookRule_MAX      = 4
};


// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	Disabled                       = 0,
	Dependency                     = 1,
	ExplicitlyEnabled              = 2,
	EBlueprintNativizationFlag_MAX = 3
};


// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	Default                        = 0,
	Development                    = 1,
	FinalRelease                   = 2,
	EBlueprintCompileMode_MAX      = 3
};


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};


// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6
};


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound                       = 0,
	RowNotFound                    = 1,
	EEvaluateCurveTableResult_MAX  = 2
};


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	Singular                       = 0,
	Plural                         = 1,
	EGrammaticalNumber_MAX         = 2
};


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	Neuter                         = 0,
	Masculine                      = 1,
	Feminine                       = 2,
	Mixed                          = 3,
	EGrammaticalGender_MAX         = 4
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace                     = 0,
	TraceFullPath                  = 1,
	OnlyTraceWhileAscending        = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};


// Enum Engine.EHMDWornState
enum class EHMDWornState : uint8_t
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EHMDWornState_MAX              = 3
};


// Enum Engine.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	Floor                          = 0,
	Eye                            = 1,
	EHMDTrackingOrigin_MAX         = 2
};


// Enum Engine.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	Orientation                    = 0,
	Position                       = 1,
	OrientationAndPosition         = 2,
	EOrientPositionSelector_MAX    = 3
};


// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	QuatInterp                     = 0,
	EulerInterp                    = 1,
	DualQuatInterp                 = 2,
	ELerpInterpolationMode_MAX     = 3
};


// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	SinusoidalIn                   = 2,
	SinusoidalOut                  = 3,
	SinusoidalInOut                = 4,
	EaseIn                         = 5,
	EaseOut                        = 6,
	EaseInOut                      = 7,
	ExpoIn                         = 8,
	ExpoOut                        = 9,
	ExpoInOut                      = 10,
	CircularIn                     = 11,
	CircularOut                    = 12,
	CircularInOut                  = 13,
	EEasingFunc_MAX                = 14
};


// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_Max                        = 24,
	VMI_Unknown                    = 25
};


// Enum Engine.EDemoFailure
enum class EDemoFailure : uint8_t
{
	None                           = 0,
	PlayCommand                    = 1,
	PlayNoWorld                    = 2,
	PlayPIE                        = 3,
	PlayCreateDemoDriver           = 4,
	Connect                        = 5,
	ConnectNoWorld                 = 6,
	ConnectNoGameInstance          = 7,
	ConnectInitBase                = 8,
	ConnectStreamingReady          = 9,
	ConnectDemoNotFound            = 10,
	ConnectCorrupt                 = 11,
	ConnectSpecificCorrupt         = 12,
	ConnectPostNoWorld             = 13,
	ConnectLoadMap                 = 14,
	TickDispatchStreamer           = 15,
	TickDispatchFileAr             = 16,
	ConditionallyReadFrame         = 17,
	ConditionallyReadFrameFileAr   = 18,
	ConditionallyReadFrameStreamer = 19,
	ConditionallyReadFrameTimeChecksum = 20,
	ConditionallyReadFrameFileAr2  = 21,
	ConditionallyReadFrameExternalData = 22,
	ConditionallyReadFramePacket   = 23,
	ConditionallyProcessPacket     = 24,
	DownloadHeader                 = 25,
	DownloadHeaderDemoNotFound     = 26,
	DownloadHeaderCorrupt          = 27,
	DownloadHeaderSpecificCorrupt  = 28,
	DownloadHeaderLevelNamesAndTimes = 29,
	CheckpointReady                = 30,
	CheckpointArchiveEmpty         = 31,
	CheckpointReadFrame            = 32,
	CheckpointReadFrameFileAr      = 33,
	CheckpointReadFrameStreamer    = 34,
	CheckpointReadFrameTimeChecksum = 35,
	CheckpointReadFrameFileAr2     = 36,
	CheckpointReadFrameExternalData = 37,
	CheckpointReadFramePacket      = 38,
	CheckpointProcessPacket        = 39,
	RecCommand                     = 40,
	RecNoReplays                   = 41,
	RecNoWorld                     = 42,
	RecPIE                         = 43,
	RecAlreadyPlay                 = 44,
	RecCreateDemoDriver            = 45,
	Listen                         = 46,
	ListenInitBase                 = 47,
	ListenNoWorldSettings          = 48,
	ListenWriteHeader              = 49,
	ListenStreamingReady           = 50,
	TickFlushStreamer              = 51,
	TickFlushFileAr                = 52,
	SeamlessTravelWriteHeader      = 53,
	EDemoFailure_MAX               = 54
};


// Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	NotLagging                     = 0,
	Lagging                        = 1,
	ENetworkLagState_MAX           = 2
};


// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	EMouseLockMode_MAX             = 3
};


// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	NoCapture                      = 0,
	CapturePermanently             = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown         = 3,
	CaptureDuringRightMouseDown    = 4,
	EMouseCaptureMode_MAX          = 5
};


// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	DevelopmentOnly                = 2,
	ENodeEnabledState_MAX          = 3
};


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	NoPins                         = 0,
	Shown                          = 1,
	Hidden                         = 2,
	ENodeAdvancedPins_MAX          = 3
};


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	FullTitle                      = 0,
	ListView                       = 1,
	EditableTitle                  = 2,
	MenuTitle                      = 3,
	MAX_TitleTypes                 = 4,
	ENodeTitleType_MAX             = 5
};


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};


// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2
};


// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4
};


// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.ESimplygonMaterialChannel
enum class ESimplygonMaterialChannel : uint8_t
{
	SG_MATERIAL_CHANNEL_AMBIENT    = 0,
	SG_MATERIAL_CHANNEL_DIFFUSE    = 1,
	SG_MATERIAL_CHANNEL_SPECULAR   = 2,
	SG_MATERIAL_CHANNEL_OPACITY    = 3,
	SG_MATERIAL_CHANNEL_EMISSIVE   = 4,
	SG_MATERIAL_CHANNEL_NORMALS    = 5,
	SG_MATERIAL_CHANNEL_DISPLACEMENT = 6,
	SG_MATERIAL_CHANNEL_BASECOLOR  = 7,
	SG_MATERIAL_CHANNEL_ROUGHNESS  = 8,
	SG_MATERIAL_CHANNEL_METALLIC   = 9,
	SG_MATERIAL_CHANNEL_AO         = 10,
	SG_MATERIAL_CHANNEL_SUBSURFACE = 11,
	SG_MATERIAL_CHANNEL_OPACITYMASK = 12,
	SG_MATERIAL_CHANNEL_MAX        = 13
};


// Enum Engine.ESimplygonTextureResolution
enum class ESimplygonTextureResolution : uint8_t
{
	TextureResolution              = 0,
	TextureResolution01            = 1,
	TextureResolution02            = 2,
	TextureResolution03            = 3,
	TextureResolution04            = 4,
	TextureResolution05            = 5,
	TextureResolution06            = 6,
	TextureResolution07            = 7,
	TextureResolution_MAX          = 8
};


// Enum Engine.ESimplygonColorChannels
enum class ESimplygonColorChannels : uint8_t
{
	RGBA                           = 0,
	RGB                            = 1,
	L                              = 2,
	ESimplygonColorChannels_MAX    = 3
};


// Enum Engine.ESimplygonTextureSamplingQuality
enum class ESimplygonTextureSamplingQuality : uint8_t
{
	Poor                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	ESimplygonTextureSamplingQuality_MAX = 4
};


// Enum Engine.ESimplygonCasterType
enum class ESimplygonCasterType : uint8_t
{
	None                           = 0,
	Color                          = 1,
	Normals                        = 2,
	Opacity                        = 3,
	ESimplygonCasterType_MAX       = 4
};


// Enum Engine.ESimplygonTextureStrech
enum class ESimplygonTextureStrech : uint8_t
{
	None                           = 0,
	VerySmall                      = 1,
	Small                          = 2,
	Medium                         = 3,
	Large                          = 4,
	VeryLarge                      = 5,
	ESimplygonTextureStrech_MAX    = 6
};


// Enum Engine.EMaterialLODType
enum class EMaterialLODType : uint8_t
{
	Off                            = 0,
	BakeTexture                    = 1,
	BakeVertexColor                = 2,
	Replace                        = 3,
	EMaterialLODType_MAX           = 4
};


// Enum Engine.ESimplygonLODType
enum class ESimplygonLODType : uint8_t
{
	Reduction                      = 0,
	Remeshing                      = 1,
	ESimplygonLODType_MAX          = 2
};


// Enum Engine.EOptimizationMetric
enum class EOptimizationMetric : uint8_t
{
	TrianglePercentage             = 0,
	OnScreenSize                   = 1,
	MaxDeviation                   = 2,
	EOptimizationMetric_MAX        = 3
};


// Enum Engine.EMaterialProxySmaplingQuality
enum class EMaterialProxySmaplingQuality : uint8_t
{
	Poor                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EMaterialProxySmaplingQuality_MAX = 4
};


// Enum Engine.EUVStrech
enum class EUVStrech : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	VeryLarge                      = 3,
	EUVStrech_MAX                  = 4
};


// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};


// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4
};


// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	MeshMergeType_Default          = 0,
	MeshMergeType_MergeActor       = 1,
	MeshMergeType_MAX              = 2
};


// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4
};


// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	AngleWeighted                  = 0,
	AreaWeighted                   = 1,
	EqualWeighted                  = 2,
	EProxyNormalComputationMethod_MAX = 3
};


// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	ELandscapeCullingPrecision_MAX = 3
};


// Enum Engine.EPhysXAggregationMode
enum class EPhysXAggregationMode : uint8_t
{
	NoCollision                    = 0,
	BlockAllWithComplexAsSimple    = 1,
	EPhysXAggregationMode_MAX      = 2
};


// Enum Engine.EChartAggregationMode
enum class EChartAggregationMode : uint8_t
{
	TextureSize                    = 0,
	SurfaceArea                    = 1,
	PixelDensity                   = 2,
	UVSize                         = 3,
	EChartAggregationMode_MAX      = 4
};


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles                      = 0,
	Vertices                       = 1,
	Any                            = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	Off                            = 0,
	Lowest                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	Highest                        = 5,
	EMeshFeatureImportance_MAX     = 6
};


// Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3
};


// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6
};


// Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};


// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_MAX                         = 4
};


// Enum Engine.EHBAOBlurRadius
enum class EHBAOBlurRadius : uint8_t
{
	AOBR_BlurRadius0               = 0,
	AOBR_BlurRadius4               = 1,
	AOBR_BlurRadius8               = 2,
	AOBR_MAX                       = 3
};


// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2
};


// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2
};


// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};


// Enum Engine.EIndoorLightVolumeShape
enum class EIndoorLightVolumeShape : uint8_t
{
	ILVS_Cube                      = 0,
	ILVS_Sphere                    = 1,
	ILVS_MAX                       = 2
};


// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ENavigationQueryResult_MAX     = 4
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringModeConfig_MAX = 3
};


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	Default                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringMode_MAX      = 3
};


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
	ENavigationOptionFlag_MAX      = 4
};


// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Normal                      = 9,
	MP_WorldPositionOffset         = 10,
	MP_WorldDisplacement           = 11,
	MP_TessellationMultiplier      = 12,
	MP_SubsurfaceColor             = 13,
	MP_SubsurfaceProfile           = 14,
	MP_CustomData0                 = 15,
	MP_CustomData1                 = 16,
	MP_AmbientOcclusion            = 17,
	MP_Refraction                  = 18,
	MP_CustomizedUVs0              = 19,
	MP_CustomizedUVs1              = 20,
	MP_CustomizedUVs2              = 21,
	MP_CustomizedUVs3              = 22,
	MP_CustomizedUVs4              = 23,
	MP_CustomizedUVs5              = 24,
	MP_CustomizedUVs6              = 25,
	MP_CustomizedUVs7              = 26,
	MP_PixelDepthOffset            = 27,
	MP_MaterialAttributes          = 28,
	MP_CustomOutput                = 29,
	MP_MAX                         = 30
};


// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimPlaySpace_MAX       = 3
};


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ECameraProjectionMode_MAX      = 2
};


// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	CAS_LeftStick                  = 0,
	CAS_RightStick                 = 1,
	CAS_MAX                        = 2
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};


// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4
};


// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4
};


// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};


// Enum Engine.EDynamicActorScene
enum class EDynamicActorScene : uint8_t
{
	Default                        = 0,
	UseSyncScene                   = 1,
	UseAsyncScene                  = 2,
	EDynamicActorScene_MAX         = 3
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	None                           = 6,
	EDOFMode_MAX                   = 7
};


// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERSM_Default                   = 0,
	ERSM                           = 1,
	ERSM01                         = 2,
	ERSM02                         = 3,
	ERSM03                         = 4,
	ERSM04                         = 5,
	ERSM05                         = 6,
	ERSM06                         = 7,
	ERSM07                         = 8,
	ERSM08                         = 9,
	ERSM_MAX                       = 10
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4
};


// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3
};


// Enum Engine.EMaterialClipVolumeImportance
enum class EMaterialClipVolumeImportance : uint8_t
{
	MCVI_Low                       = 0,
	MCVI_Medium                    = 1,
	MCVI_High                      = 2,
	MCVI_Critical                  = 3,
	MCVI_MAX                       = 4
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_MAX                         = 6
};


// Enum Engine.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4
};


// Enum Engine.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3
};


// Enum Engine.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	TotalCost                      = 0,
	HeuristicOnly                  = 1,
	RealCostOnly                   = 2,
	ENavCostDisplay_MAX            = 3
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};


// Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_MAX                       = 8
};


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	Proportional                   = 2,
	EAnimLinkMethod_MAX            = 3
};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	Custom                         = 6,
	EAxisOption_MAX                = 7
};


// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	EAnimInterpolationType_MAX     = 2
};


// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	MaxWeight                      = 0,
	NormalizeByWeight              = 1,
	BlendByWeight                  = 2,
	ECurveBlendOption_MAX          = 3
};


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	NoFiltering                    = 0,
	LOD                            = 1,
	ENotifyFilterType_MAX          = 2
};


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	Queued                         = 0,
	BranchingPoint                 = 1,
	EMontageNotifyTickType_MAX     = 2
};


// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3
};


// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4
};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};


// Enum Engine.ESkeletalMeshLODType
enum class ESkeletalMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	ESkeletalMeshLODType_MAX       = 2
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_ScreenSize                = 2,
	SMOT_MAX                       = 3
};


// Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4
};


// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	NoRootMotionExtraction         = 0,
	IgnoreRootMotion               = 1,
	RootMotionFromEverything       = 2,
	RootMotionFromMontagesOnly     = 3,
	ERootMotionMode_MAX            = 4
};


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	RefPose                        = 0,
	AnimFirstFrame                 = 1,
	Zero                           = 2,
	ERootMotionRootLock_MAX        = 3
};


// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	EAnimGroupRole_MAX             = 4
};


// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity                    = 1,
	ClampVelocity                  = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};


// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	UseSensitiveLiftoffCheck       = 0,
	DisablePartialEndTick          = 1,
	ERootMotionSourceSettingsFlags_MAX = 2
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared                       = 0,
	Finished                       = 1,
	MarkedForRemoval               = 2,
	ERootMotionSourceStatusFlags_MAX = 3
};


// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	ERootMotionAccumulateMode_MAX  = 2
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation                      = 0,
	Skeleton                       = 1,
	AnimationScaled                = 2,
	AnimationRelative              = 3,
	EBoneTranslationRetargetingMode_MAX = 4
};


// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	HermiteCubic                   = 2,
	Sinusoidal                     = 3,
	QuadraticInOut                 = 4,
	CubicInOut                     = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	Custom                         = 14,
	EAlphaBlendOption_MAX          = 15
};


// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	RCT_Float                      = 0,
	RCT_Vector                     = 1,
	RCT_Transform                  = 2,
	RCT_MAX                        = 3
};


// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_DriveMorphTarget_DEPRECATED = 0,
	AACF_DriveAttribute_DEPRECATED = 1,
	AACF_Editable                  = 2,
	AACF_DriveMaterial_DEPRECATED  = 3,
	AACF_Metadata                  = 4,
	AACF_DriveTrack                = 5,
	AACF_Disabled                  = 6,
	AACF_MAX                       = 7
};


// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3
};


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	Begin                          = 0,
	End                            = 1,
	EAnimNotifyEventType_MAX       = 2
};


// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	SLERP                          = 0,
	TwistAndSwing                  = 1,
	EAngularDriveMode_MAX          = 2
};


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	Sphere                         = 0,
	Capsule                        = 1,
	Box                            = 2,
	Cone                           = 3,
	EAttenuationShape_MAX          = 4
};


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	Linear                         = 0,
	Logarithmic                    = 1,
	Inverse                        = 2,
	LogReverse                     = 3,
	NaturalSound                   = 4,
	Custom                         = 5,
	EAttenuationDistanceModel_MAX  = 6
};


// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2
};


// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode                    = 0,
	GameMode                       = 1,
	EditorMode                     = 2,
	SimulationMode                 = 3,
	PIEMode                        = 4,
	FNavigationSystemRunMode_MAX   = 5
};


// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	BodyCollision_Enabled          = 0,
	BodyCollision_Disabled         = 1,
	BodyCollision_MAX              = 2
};


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3
};


// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4
};


// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	Average                        = 0,
	Min                            = 1,
	Multiply                       = 2,
	Max                            = 3,
	EFrictionCombineMode_MAX       = 4
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	Invalid                        = 4,
	ESettingsLockedAxis_MAX        = 5
};


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	Full3D                         = 0,
	YZPlane                        = 1,
	XZPlane                        = 2,
	XYPlane                        = 3,
	ESettingsDOF_MAX               = 4
};


// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_MAX                        = 2
};


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	None                           = 0,
	OpaqueOnly                     = 1,
	OpaqueAndMasked                = 2,
	Auto                           = 3,
	EEarlyZPass_MAX                = 4
};


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledOnDemand                = 2,
	EnabledWithStencil             = 3,
	ECustomDepthStencil_MAX        = 4
};


// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	EMobileMSAASampleCount_MAX     = 4
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	ECompositingSampleCount_MAX    = 4
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	NoClear                        = 0,
	HardwareClear                  = 1,
	QuadAtMaxZ                     = 2,
	EClearSceneOptions_MAX         = 3
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	ShortestSide                   = 0,
	LongestSide                    = 1,
	Horizontal                     = 2,
	Vertical                       = 3,
	Custom                         = 4,
	EUIScalingRule_MAX             = 5
};


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	Always                         = 0,
	NonPointer                     = 1,
	NavigationOnly                 = 2,
	Never                          = 3,
	ERenderFocusRule_MAX           = 4
};


// Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};


// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6
};


// Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5
};


// Enum Engine.EBackgroundTask
enum class EBackgroundTask : uint8_t
{
	BT_ShaderCompile               = 0,
	BT_RenderGrassMap              = 1,
	BT_BuildLighting               = 2,
	BT_MAX                         = 3
};


// Enum Engine.EConsoleType
enum class EConsoleType : uint8_t
{
	CONSOLE_Any                    = 0,
	CONSOLE_Mobile                 = 1,
	CONSOLE_MAX                    = 2
};


// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	TT_None                        = 0,
	TT_Paused                      = 1,
	TT_Loading                     = 2,
	TT_Saving                      = 3,
	TT_Connecting                  = 4,
	TT_Precaching                  = 5,
	TT_WaitingToConnect            = 6,
	TT_MAX                         = 7
};


// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	Offline                        = 0,
	Runtime                        = 1,
	EFontCacheType_MAX             = 2
};


// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	Fullscreen                     = 0,
	WindowedFullscreen             = 1,
	Windowed                       = 2,
	EWindowMode_MAX                = 3
};


// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3
};


// Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3
};


// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4
};


// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_StaticBool       = 6,
	FunctionInput_MaterialAttributes = 7,
	FunctionInput_MAX              = 8
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates                    = 0,
	OffsetFraction                 = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModel               = 22,
	PPI_AmbientOcclusion           = 23,
	PPI_CustomStencil              = 24,
	PPI_StoredBaseColor            = 25,
	PPI_StoredSpecular             = 26,
	PPI_ScreenCopy                 = 27,
	PPI_SceneStencil               = 28,
	PPI_MAX                        = 29
};


// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2
};


// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7
};


// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5
};


// Enum Engine.ETextureChannel
enum class ETextureChannel : uint8_t
{
	R                              = 0,
	G                              = 1,
	B                              = 2,
	A                              = 3,
	ETextureChannel_MAX            = 4
};


// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4
};


// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6
};


// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_MAX                       = 7
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_Full                       = 1,
	WPT_ExcludeAllShaderOffsets    = 2,
	WPT_FullNoOffsets              = 3,
	WPT_CameraRelative             = 4,
	WPT_CameraRelativeNoOffsets    = 5,
	WPT_MAX                        = 6
};


// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8
};


// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_Volumetric_DistanceFunction = 11,
	DBM_MAX                        = 12
};


// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto                           = 0,
	Complete                       = 1,
	DisableTick                    = 2,
	DisableTickAndKill             = 3,
	Num                            = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};


// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	Num                            = 4,
	EParticleSignificanceLevel_MAX = 5
};


// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3
};


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2
};


// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6
};


// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};


// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2
};


// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	None                           = 0,
	FlipUV                         = 1,
	FlipUOnly                      = 2,
	FlipVOnly                      = 3,
	RandomFlipUV                   = 4,
	RandomFlipUOnly                = 5,
	RandomFlipVOnly                = 6,
	RandomFlipUVIndependent        = 7,
	EParticleUVFlipMode_MAX        = 8
};


// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	Line                           = 0,
	Dash                           = 1,
	EReporterLineStyle_MAX         = 2
};


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	Outside                        = 0,
	Inside                         = 1,
	ELegendPosition_MAX            = 2
};


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	Lines                          = 0,
	Filled                         = 1,
	EGraphDataStyle_MAX            = 2
};


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	Lines                          = 0,
	Notches                        = 1,
	Grid                           = 2,
	EGraphAxisStyle_MAX            = 3
};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	EConstraintTransform_MAX       = 2
};


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	Orientation                    = 0,
	Translation                    = 1,
	Max                            = 2,
	EControlConstraint_MAX         = 3
};


// Enum Engine.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	Point                          = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	AnisotropicPoint               = 3,
	AnisotropicLinear              = 4,
	ETextureSamplerFilter_MAX      = 5
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	None                           = 0,
	PadToPowerOfTwo                = 1,
	PadToSquarePowerOfTwo          = 2,
	ETexturePowerOfTwoSetting_MAX  = 3
};


// Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_MAX                       = 20
};


// Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Landscape         = 12,
	TEXTUREGROUP_LandscapeNormalMap = 13,
	TEXTUREGROUP_LandscapeSpecular = 14,
	TEXTUREGROUP_Cinematic         = 15,
	TEXTUREGROUP_Effects           = 16,
	TEXTUREGROUP_EffectsNotFiltered = 17,
	TEXTUREGROUP_Skybox            = 18,
	TEXTUREGROUP_UI                = 19,
	TEXTUREGROUP_Lightmap          = 20,
	TEXTUREGROUP_RenderTarget      = 21,
	TEXTUREGROUP_MobileFlattened   = 22,
	TEXTUREGROUP_ProcBuilding_Face = 23,
	TEXTUREGROUP_ProcBuilding_LightMap = 24,
	TEXTUREGROUP_Shadowmap         = 25,
	TEXTUREGROUP_ColorLookupTable  = 26,
	TEXTUREGROUP_Terrain_Heightmap = 27,
	TEXTUREGROUP_Terrain_Weightmap = 28,
	TEXTUREGROUP_Bokeh             = 29,
	TEXTUREGROUP_IESLightProfile   = 30,
	TEXTUREGROUP_Pixels2D          = 31,
	TEXTUREGROUP_HierarchicalLOD   = 32,
	TEXTUREGROUP_MAX               = 33
};


// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_MAX                        = 8
};


// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3
};


// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5
};


// Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};


// Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew                     = 0,
	StopOldest                     = 1,
	StopFarthestThenPreventNew     = 2,
	StopFarthestThenOldest         = 3,
	StopLowestPriority             = 4,
	StopQuietest                   = 5,
	StopLowestPriorityThenPreventNew = 6,
	EMaxConcurrentResolutionRule_MAX = 7
};


// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25
};


// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3
};


// Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3
};


// Enum Engine.EStaticMeshLODType
enum class EStaticMeshLODType : uint8_t
{
	Reduction                      = 0,
	Proxy                          = 1,
	EStaticMeshLODType_MAX         = 2
};


// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2
};


// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7
};


// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.RepMovement
// 0x0034
struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                           // 0x0000(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x000C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0018(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0024(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      bSimulatedPhysicSleep : 1;                                // 0x0030(0x0001) (Transient)
	unsigned char                                      bRepPhysics : 1;                                          // 0x0030(0x0001) (Transient)
	EVectorQuantization                                LocationQuantizationLevel;                                // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EVectorQuantization                                VelocityQuantizationLevel;                                // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ERotatorQuantization                               RotationQuantizationLevel;                                // 0x0033(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepAttachment
// 0x0040
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      LocationOffset;                                           // 0x0008(0x000C)
	struct FVector_NetQuantize100                      RelativeScale3D;                                          // 0x0014(0x000C)
	struct FRotator                                    RotationOffset;                                           // 0x0020(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachComponent;                                          // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Engine.TickFunction
// 0x0050
struct FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETickingGroup>                         EndTickGroup;                                             // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	unsigned char                                      bTickEvenWhenPaused : 1;                                  // 0x000C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                         // 0x000C(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                                // 0x000C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                          // 0x000C(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x33];                                      // 0x000D(0x0033) MISSED OFFSET
	float                                              TickInterval;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.HitResult
// 0x0088
struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bStartPenetrating : 1;                                    // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x000C(0x000C)
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x0018(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0024(0x000C)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0030(0x000C)
	struct FVector_NetQuantize                         TraceStart;                                               // 0x003C(0x000C)
	struct FVector_NetQuantize                         TraceEnd;                                                 // 0x0048(0x000C)
	float                                              PenetrationDepth;                                         // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Item;                                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                             // 0x005C(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0064(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x006C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FaceIndex;                                                // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EventGraphCallOffset;                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x0018
struct FBlueprintComponentChangedPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStruct*                                     PropertyScope;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x0050
struct FBlueprintCookedComponentInstancingData
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                                      // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0018(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0010
struct FSoundConcurrencySettings
{
	int                                                MaxCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLimitToOwner : 1;                                        // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TEnumAsByte<EMaxConcurrentResolutionRule>          ResolutionRule;                                           // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              VolumeScale;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// 0x0010
struct FSoundSubmixSendInfo
{
	float                                              SendLevel;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USoundSubmix*                                SoundSubmix;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SubtitleCue
// 0x0020
struct FSubtitleCue
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LocalizedSubtitle
// 0x0028
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FSubtitleCue>                        Subtitles;                                                // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bMature : 1;                                              // 0x0020(0x0001)
	unsigned char                                      bManualWordWrap : 1;                                      // 0x0020(0x0001)
	unsigned char                                      bSingleLine : 1;                                          // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MemberName;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0010(0x0010) (IsPlainOldData)
};

// ScriptStruct Engine.LightingChannels
// 0x0003
struct FLightingChannels
{
	bool                                               bChannel0;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bChannel1;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bChannel2;                                                // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<ECollisionResponse>                    WorldStatic;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    WorldDynamic;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Pawn;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Visibility;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Camera;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    PhysicsBody;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Vehicle;                                                  // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Destructible;                                             // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel1;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel2;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel3;                                      // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel4;                                      // 0x000B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel5;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    EngineTraceChannel6;                                      // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel1;                                        // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel2;                                        // 0x000F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel3;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel4;                                        // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel5;                                        // 0x0012(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel6;                                        // 0x0013(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel7;                                        // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel8;                                        // 0x0015(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel9;                                        // 0x0016(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel10;                                       // 0x0017(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel11;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel12;                                       // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel13;                                       // 0x001A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel14;                                       // 0x001B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel15;                                       // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel16;                                       // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel17;                                       // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    GameTraceChannel18;                                       // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ResponseChannel
// 0x0010
struct FResponseChannel
{
	struct FName                                       Channel;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    Response;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                                       // 0x0000(0x0020) (Transient)
	TArray<struct FResponseChannel>                    ResponseArray;                                            // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0010
struct FWalkableSlopeOverride
{
	TEnumAsByte<EWalkableSlopeBehavior>                WalkableSlopeBehavior;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WalkableSlopeAngle;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BodyInstance
// 0x0240
struct FBodyInstance
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
	struct FCollisionResponseContainer                 ResponseToChannels;                                       // 0x0014(0x0020) (Deprecated)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FName                                       CollisionProfileName;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCollisionResponse                          CollisionResponses;                                       // 0x0040(0x0030) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0070(0x0004) MISSED OFFSET
	unsigned char                                      bUseCCD : 1;                                              // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                            // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSimulatePhysics : 1;                                     // 0x0074(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseComplexForSimulation : 1;                             // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideMass : 1;                                        // 0x0074(0x0001) (Edit)
	unsigned char                                      bEnableGravity : 1;                                       // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAutoWeld : 1;                                            // 0x0074(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStartAwake : 1;                                          // 0x0074(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateWakeEvents : 1;                                  // 0x0075(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                          // 0x0075(0x0001)
	unsigned char                                      bLockTranslation : 1;                                     // 0x0075(0x0001) (Edit)
	unsigned char                                      bLockRotation : 1;                                        // 0x0075(0x0001) (Edit)
	unsigned char                                      bLockXTranslation : 1;                                    // 0x0075(0x0001) (Edit)
	unsigned char                                      bLockYTranslation : 1;                                    // 0x0075(0x0001) (Edit)
	unsigned char                                      bLockZTranslation : 1;                                    // 0x0075(0x0001) (Edit)
	unsigned char                                      bLockXRotation : 1;                                       // 0x0075(0x0001) (Edit)
	unsigned char                                      bLockYRotation : 1;                                       // 0x0076(0x0001) (Edit)
	unsigned char                                      bLockZRotation : 1;                                       // 0x0076(0x0001) (Edit)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                          // 0x0076(0x0001) (Edit)
	unsigned char                                      UnknownData03 : 4;                                        // 0x0076(0x0001)
	unsigned char                                      bUseAsyncScene : 1;                                       // 0x0076(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;                    // 0x0077(0x0001) (Edit)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;                     // 0x0077(0x0001) (Edit)
	float                                              MaxDepenetrationVelocity;                                 // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x007C(0x0008) MISSED OFFSET
	float                                              MassInKgOverride;                                         // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearDamping;                                            // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CustomDOFPlaneNormal;                                     // 0x0090(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     COMNudge;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
	float                                              MassScale;                                                // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x14];                                      // 0x00BC(0x0014) MISSED OFFSET
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x00D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterialOverride;                                     // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularVelocity;                                       // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CustomSleepThresholdMultiplier;                           // 0x00EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StabilizationThresholdMultiplier;                         // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PositionSolverIterationCount;                             // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2C];                                      // 0x00FC(0x002C) MISSED OFFSET
	uint64_t                                           RigidActorSyncId;                                         // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           RigidActorAsyncId;                                        // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                VelocitySolverIterationCount;                             // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0xF8];                                      // 0x013C(0x00F8) MISSED OFFSET
	ESleepFamily                                       SleepFamily;                                              // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDOFMode>                              DOFMode;                                                  // 0x0235(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0236(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                               // 0x0237(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.OverlapInfo
// 0x0090
struct FOverlapInfo
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FPackedNormal                               Normal;                                                   // 0x000C(0x0004)
	struct FColor                                      Color;                                                    // 0x0010(0x0004) (IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x00B0
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	TArray<struct FPaintedVertex>                      PaintedVertices;                                          // 0x0020(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0030(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x000C
struct FStreamingTextureBuildInfo
{
	uint32_t                                           PackedRelativeBox;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TextureLevelIndex;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShadowIndirectOnly : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveLightFalloffExponent;                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveLightExplicitInfluenceRadius;                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0014
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      bCastShadowAsMasked : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveBoost;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExportResolutionScale;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                          // 0x0010(0x0001)
	unsigned char                                      bOverrideEmissiveBoost : 1;                               // 0x0010(0x0001)
	unsigned char                                      bOverrideDiffuseBoost : 1;                                // 0x0010(0x0001)
	unsigned char                                      bOverrideExportResolutionScale : 1;                       // 0x0010(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.MaterialTextureInfo
// 0x0010
struct FMaterialTextureInfo
{
	float                                              SamplingScale;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UVChannelIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FontParameterValue
// 0x0028
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFont*                                       FontValue;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FontPage;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0014(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ScalarParameterValue
// 0x0020
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParameterValue;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x000C(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ParameterValue;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0010(0x0010) (IsPlainOldData)
};

// ScriptStruct Engine.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ParameterValue;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x0018(0x0010) (IsPlainOldData)
};

// ScriptStruct Engine.MaterialClipVolumeTypeMask
// 0x0004
struct FMaterialClipVolumeTypeMask
{
	unsigned char                                      bWaterSurface : 1;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWaterFX : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWeather : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bEnvironment : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bVegetationSmall : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bVegetationMedium : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bVegetationLarge : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bVegetationHuge : 1;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSmokeGrenade : 1;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSmoke : 1;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bExplosion : 1;                                           // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bMolotov : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bFire : 1;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSparks : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bDebris : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bWeaponFX : 1;                                            // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bVehicleFX : 1;                                           // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOther : 1;                                               // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0024
struct FMaterialInstanceBasePropertyOverrides
{
	bool                                               bOverride_OpacityMaskClipValue;                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_BlendMode;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_ShadingModel;                                   // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_PrepassMasked;                                  // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_DitheredLODTransition;                          // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_TwoSided;                                       // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              OpacityMaskClipValue;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialShadingModel>                 ShadingModel;                                             // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	unsigned char                                      PrepassMasked : 1;                                        // 0x0010(0x0001) (Edit)
	unsigned char                                      TwoSided : 1;                                             // 0x0010(0x0001) (Edit)
	unsigned char                                      DitheredLODTransition : 1;                                // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	bool                                               bOverride_bApplyMaterialClipVolumes;                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_MaterialClipVolumeTypes;                        // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverride_MaterialClipVolumeImportance;                   // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	unsigned char                                      bApplyMaterialClipVolumes : 1;                            // 0x0018(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FMaterialClipVolumeTypeMask                 MaterialClipVolumeTypes;                                  // 0x001C(0x0004) (Edit)
	TEnumAsByte<EMaterialClipVolumeImportance>         MaterialClipVolumeImportance;                             // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ExpressionOutput
// 0x0028
struct FExpressionOutput
{
	struct FString                                     OutputName;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                Mask;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskR;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskG;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskB;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskA;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TextureLODGroup
// 0x0038
struct FTextureLODGroup
{
	TEnumAsByte<ETextureGroup>                         Group;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
	int                                                LODBias;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	int                                                NumStreamedMips;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                MinLODSize;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxLODSize;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       MinMagFilter;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MipFilter;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTTrackBase
// 0x0010
struct FTTTrackBase
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsExternalCurve;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.TTEventTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTEventTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveKeys;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTFloatTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTFloatTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveFloat;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTVectorTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTVectorTrack : public FTTTrackBase
{
	class UCurveVector*                                CurveVector;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTLinearColorTrack : public FTTTrackBase
{
	class UCurveLinearColor*                           CurveLinearColor;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     DataValue;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.TouchInputControl
// 0x0068
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image2;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // 0x0010(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   VisualSize;                                               // 0x0018(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ThumbSize;                                                // 0x0020(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   InteractionSize;                                          // 0x0028(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   InputScale;                                               // 0x0030(0x0008) (Edit, IsPlainOldData)
	struct FKey                                        MainInputKey;                                             // 0x0038(0x0018) (Edit)
	struct FKey                                        AltInputKey;                                              // 0x0050(0x0018) (Edit)
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAnimMontage*                                LinkedMontage;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SegmentIndex;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       LinkMethod;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimLinkMethod>                       CachedLinkMethod;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              SegmentBeginTime;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SegmentLength;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinkValue;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LinkedSequence;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                              // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTriggerTimeOffset;                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerWeightThreshold;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NotifyName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimNotify*                                 Notify;                                                   // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimNotifyState*                            NotifyStateClass;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FAnimLinkableElement                        EndLink;                                                  // 0x0060(0x0030)
	bool                                               bConvertedFromBranchingPoint;                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMontageNotifyTickType>                MontageTickType;                                          // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              NotifyTriggerChance;                                      // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENotifyFilterType>                     NotifyFilterType;                                         // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                NotifyFilterLOD;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnDedicatedServer;                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                TrackIndex;                                               // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PoseSnapshot
// 0x0038
struct FPoseSnapshot
{
	TArray<struct FTransform>                          LocalTransforms;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               BoneNames;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       SkeletalMeshName;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SnapshotName;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0018
struct FMarkerSyncAnimPosition
{
	struct FName                                       PreviousMarkerName;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NextMarkerName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PositionBetweenMarkers;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SelectionIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GameNameRedirect
// 0x0010
struct FGameNameRedirect
{
	struct FName                                       OldGameName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewGameName;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                                       // 0x0000(0x0004) (ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FColor                                      Out;                                                      // 0x0004(0x0004) (Config, GlobalConfig, IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	struct FString                                     StatName;                                                 // 0x0000(0x0010) (ZeroConstructor, Config, GlobalConfig)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                                 // 0x0010(0x0010) (ZeroConstructor, Config, GlobalConfig)
	unsigned char                                      DisableBlend : 1;                                         // 0x0020(0x0001) (Config, GlobalConfig)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x001C
struct FRigidBodyErrorCorrection
{
	float                                              LinearDeltaThresholdSq;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinearInterpAlpha;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LinearRecipFixTime;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngularDeltaThreshold;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngularInterpAlpha;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngularRecipFixTime;                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BodySpeedThresholdSq;                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StructRedirect
// 0x0010
struct FStructRedirect
{
	struct FName                                       OldStructName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewStructName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     NewPluginName;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DriverClassNameFallback;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FString                                     Comment;                                                  // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ClassRedirect
// 0x0040
struct FClassRedirect
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OldClassName;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OldSubobjName;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewSubobjName;                                            // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassClass;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewClassPackage;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               InstanceOnly;                                             // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0030
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (IsPlainOldData)
	bool                                               bServerHasBaseComponent;                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bServerHasVelocity;                                       // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0001
struct FRootMotionSourceSettings
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x0100
struct alignas(8) FRootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
	bool                                               bHasAdditiveSources;                                      // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasOverrideSources;                                      // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	struct FVector_NetQuantize10                       LastPreAdditiveVelocity;                                  // 0x00EC(0x000C)
	bool                                               bIsAdditiveVelocityApplied;                               // 0x00F8(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FRootMotionSourceSettings                   LastAccumulatedSettings;                                  // 0x00F9(0x0001)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	bool                                               bHasRootMotion;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RootMotionTransform;                                      // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0160
struct FRepRootMotionMontage
{
	bool                                               bIsActive;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                                 // 0x0014(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         MovementBase;                                             // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MovementBaseBoneName;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativePosition;                                        // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeRotation;                                        // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FRootMotionSourceGroup                      AuthoritativeRootMotion;                                  // 0x0048(0x0100)
	struct FVector_NetQuantize10                       Acceleration;                                             // 0x0148(0x000C)
	struct FVector_NetQuantize10                       LinearVelocity;                                           // 0x0154(0x000C)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0168
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FRepRootMotionMontage                       RootMotion;                                               // 0x0008(0x0160)
};

// ScriptStruct Engine.MovementProperties
// 0x0004
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanJump : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanWalk : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanSwim : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCanFly : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.NavAgentProperties
// 0x001C (0x0020 - 0x0004)
struct FNavAgentProperties : public FMovementProperties
{
	float                                              AgentRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentStepHeight;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NavWalkingSearchHeightScale;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      PreferredNavData;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FindFloorResult
// 0x0098
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bWalkableFloor : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      bLineTrace : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FloorDist;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              LineDist;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0010(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup1 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup2 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup3 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup4 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup5 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup6 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup7 : 1;                                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup8 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup9 : 1;                                              // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup10 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup11 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup12 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup13 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup14 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup15 : 1;                                             // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup16 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup17 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup18 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup19 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup20 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup21 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup22 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup23 : 1;                                             // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup24 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup25 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup26 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup27 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup28 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup29 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup30 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGroup31 : 1;                                             // 0x0003(0x0001) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PostProcessOutlineSettings
// 0x001C
struct FPostProcessOutlineSettings
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNoiseTexture;                                         // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bXRay;                                                    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomStencilValue;                                       // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     Object;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.PostProcessSettings
// 0x0570
struct FPostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_WhiteTint : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturation : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrast : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGamma : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGain : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffset : 1;                                // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationShadows : 1;                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastShadows : 1;                       // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaShadows : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainShadows : 1;                           // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetShadows : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationMidtones : 1;                    // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastMidtones : 1;                      // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaMidtones : 1;                         // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainMidtones : 1;                          // 0x0001(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetMidtones : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationHighlights : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastHighlights : 1;                    // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaHighlights : 1;                       // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGainHighlights : 1;                        // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetHighlights : 1;                      // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionShadowsMax : 1;                  // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionHighlightsMin : 1;               // 0x0002(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmSaturation : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                        // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;                      // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;                       // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmContrast : 1;                               // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                           // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmHealAmount : 1;                             // 0x0003(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmToeAmount : 1;                              // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTint : 1;                             // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                        // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;                       // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmSlope : 1;                                  // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmToe : 1;                                    // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmShoulder : 1;                               // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmBlackClip : 1;                              // 0x0004(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                              // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SceneColorTint : 1;                             // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;                       // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                         // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;                    // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomMethod : 1;                                // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomIntensity : 1;                             // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomThreshold : 1;                             // 0x0005(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Tint : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Size : 1;                                 // 0x0006(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Tint : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Size : 1;                                 // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomSizeScale : 1;                             // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionTexture : 1;                    // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionSize : 1;                       // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionCenterUV : 1;                   // 0x0007(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilter : 1;                  // 0x0008(0x0001) (Deprecated)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMin : 1;               // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMax : 1;               // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionPreFilterMult : 1;              // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomConvolutionBufferScale : 1;                // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;                     // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                          // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMask : 1;                              // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurIntensity : 1;                           // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurScopeInnerEdge : 1;                      // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurScopeOutterEdge : 1;                     // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurDepthBlackPoint : 1;                     // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurDepthWhitePoint : 1;                     // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurDepthGamma : 1;                          // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_bTslBlurUseBranching : 1;                       // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurReticleBrightSceneVisibilityStartLuminance : 1;// 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurReticleBrightSceneVisibilityFadeSpeed : 1;// 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier : 1;// 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_TslBlurReticleBrightSceneVisibilityReticleOpacity : 1;// 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                         // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;                     // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;                    // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;                  // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;                  // 0x000A(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                        // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;                      // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBias : 1;                           // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMin : 1;                            // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMax : 1;                            // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                         // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTint : 1;                              // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTints : 1;                             // 0x000B(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                         // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                        // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                         // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_VignetteIntensity : 1;                          // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_GrainIntensity : 1;                             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_GrainJitter : 1;                                // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;                  // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;                     // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;               // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;                 // 0x000D(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_HBAOPowerExponent : 1;                          // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HBAORadius : 1;                                 // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HBAOBias : 1;                                   // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HBAODetailAO : 1;                               // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HBAOBlurRadius : 1;                             // 0x000D(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HBAOBlurSharpness : 1;                          // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HBAOMaxViewDepth : 1;                           // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_HBAODepthSharpness : 1;                         // 0x000E(0x0001) (BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;                   // 0x000E(0x0001) (Deprecated)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;                 // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;                      // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;                       // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;                    // 0x000E(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;                   // 0x000F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;                   // 0x000F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;               // 0x000F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVIntensity : 1;                               // 0x000F(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;           // 0x000F(0x0001) (Edit)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;              // 0x000F(0x0001) (Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;                // 0x000F(0x0001) (Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;               // 0x000F(0x0001) (Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;               // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;              // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverride_LPVSize : 1;                                    // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;             // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;                // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;                      // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                        // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;              // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVFadeRange : 1;                               // 0x0011(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionFadeRange : 1;           // 0x0011(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingColor : 1;                      // 0x0011(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;                  // 0x0011(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;                      // 0x0011(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                            // 0x0011(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;                  // 0x0011(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                          // 0x0011(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldScopeSize : 1;                      // 0x0012(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSensorWidth : 1;                    // 0x0012(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;                // 0x0012(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;                // 0x0012(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;                    // 0x0012(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;           // 0x0012(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;            // 0x0012(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                          // 0x0012(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;                   // 0x0013(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;                   // 0x0013(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;                    // 0x0013(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                         // 0x0013(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MobileHQGaussian : 1;                           // 0x0013(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;                     // 0x0013(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;                      // 0x0013(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;                 // 0x0013(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;                  // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;               // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldVignetteSize : 1;                   // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                           // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurMax : 1;                              // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;                    // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenPercentage : 1;                           // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;             // 0x0014(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;               // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;          // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;        // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_OutlineSettings : 1;                            // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_OutlineMaskTexture : 1;                         // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_OutlineMaskTextureScale : 1;                    // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverride_OutlineMaskTextureScrollSpeed : 1;              // 0x0015(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              WhiteTemp;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WhiteTint;                                                // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    ColorSaturation;                                          // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorContrast;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGamma;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGain;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorOffset;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorSaturationShadows;                                   // 0x0070(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorContrastShadows;                                     // 0x0080(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGammaShadows;                                        // 0x0090(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGainShadows;                                         // 0x00A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorOffsetShadows;                                       // 0x00B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ColorCorrectionShadowsMax;                                // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET
	struct FVector4                                    ColorSaturationMidtones;                                  // 0x00D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorContrastMidtones;                                    // 0x00E0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGammaMidtones;                                       // 0x00F0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGainMidtones;                                        // 0x0100(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorOffsetMidtones;                                      // 0x0110(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorSaturationHighlights;                                // 0x0120(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorContrastHighlights;                                  // 0x0130(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGammaHighlights;                                     // 0x0140(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorGainHighlights;                                      // 0x0150(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector4                                    ColorOffsetHighlights;                                    // 0x0160(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ColorCorrectionHighlightsMin;                             // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSlope;                                                // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToe;                                                  // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShoulder;                                             // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmBlackClip;                                            // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmWhiteClip;                                            // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                           // 0x0188(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                FilmShadowTint;                                           // 0x0198(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FilmShadowTintBlend;                                      // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmShadowTintAmount;                                     // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmSaturation;                                           // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerRed;                                      // 0x01B4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerGreen;                                    // 0x01C4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerBlue;                                     // 0x01D4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FilmContrast;                                             // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmToeAmount;                                            // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmHealAmount;                                           // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FilmDynamicRange;                                         // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SceneColorTint;                                           // 0x01F4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SceneFringeIntensity;                                     // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBloomMethod>                          BloomMethod;                                              // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0209(0x0003) MISSED OFFSET
	float                                              BloomIntensity;                                           // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomThreshold;                                           // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomSizeScale;                                           // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom1Size;                                               // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom2Size;                                               // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom3Size;                                               // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom4Size;                                               // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom5Size;                                               // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bloom6Size;                                               // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Bloom1Tint;                                               // 0x0230(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom2Tint;                                               // 0x0240(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom3Tint;                                               // 0x0250(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom4Tint;                                               // 0x0260(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom5Tint;                                               // 0x0270(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Bloom6Tint;                                               // 0x0280(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	class UTexture2D*                                  BloomConvolutionTexture;                                  // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionSize;                                     // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BloomConvolutionCenterUV;                                 // 0x029C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloomConvolutionPreFilter;                                // 0x02A4(0x000C) (Deprecated, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMin;                             // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMax;                             // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionPreFilterMult;                            // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomConvolutionBufferScale;                              // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    BloomDirtMask;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloomDirtMaskIntensity;                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BloomDirtMaskTint;                                        // 0x02CC(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TslBlurIntensity;                                         // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TslBlurScopeInnerEdge;                                    // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TslBlurScopeOutterEdge;                                   // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TslBlurReticleBrightSceneVisibilityStartLuminance;        // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TslBlurReticleBrightSceneVisibilityFadeSpeed;             // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TslBlurReticleBrightSceneVisibilityReticleLuminanceMultiplier;// 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TslBlurReticleBrightSceneVisibilityReticleOpacity;        // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TslBlurDepthBlackPoint;                                   // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TslBlurDepthWhitePoint;                                   // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TslBlurDepthGamma;                                        // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTslBlurUseBranching;                                     // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	struct FLinearColor                                AmbientCubemapTint;                                       // 0x0308(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AmbientCubemapIntensity;                                  // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x031C(0x0004) MISSED OFFSET
	class UTextureCube*                                AmbientCubemap;                                           // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAutoExposureMethod>                   AutoExposureMethod;                                       // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              AutoExposureLowPercent;                                   // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureHighPercent;                                  // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMinBrightness;                                // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureMaxBrightness;                                // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedUp;                                      // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureSpeedDown;                                    // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoExposureBias;                                         // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMin;                                          // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HistogramLogMax;                                          // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareIntensity;                                       // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTint;                                            // 0x0354(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LensFlareBokehSize;                                       // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensFlareThreshold;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class UTexture*                                    LensFlareBokehShape;                                      // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensFlareTints[0x8];                                      // 0x0378(0x0010) (Edit, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainJitter;                                              // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrainIntensity;                                           // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HBAOPowerExponent;                                        // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HBAORadius;                                               // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HBAOBias;                                                 // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HBAODetailAO;                                             // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHBAOBlurRadius>                       HBAOBlurRadius;                                           // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	float                                              HBAOBlurSharpness;                                        // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HBAOMaxViewDepth;                                         // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HBAODepthSharpness;                                       // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionIntensity;                                // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionStaticFraction;                           // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionRadius;                                   // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                           // 0x0430(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	float                                              AmbientOcclusionFadeDistance;                             // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionFadeRadius;                               // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionDistance;                                 // 0x043C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AmbientOcclusionPower;                                    // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionBias;                                     // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionQuality;                                  // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipBlend;                                 // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipScale;                                 // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientOcclusionMipThreshold;                             // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IndirectLightingColor;                                    // 0x0458(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              IndirectLightingIntensity;                                // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ColorGradingIntensity;                                    // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ColorGradingLUT;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDepthOfFieldMethod>                   DepthOfFieldMethod;                                       // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	unsigned char                                      bMobileHQGaussian : 1;                                    // 0x047C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData10[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	float                                              DepthOfFieldFstop;                                        // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSensorWidth;                                  // 0x0484(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                                // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurAmount;                              // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldDepthBlurRadius;                              // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                                  // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearTransitionRegion;                         // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarTransitionRegion;                          // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldScale;                                        // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldMaxBokehSize;                                 // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                                 // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                                  // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    DepthOfFieldBokehShape;                                   // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldOcclusion;                                    // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldColorThreshold;                               // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSizeThreshold;                                // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldSkyFocusDistance;                             // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthOfFieldVignetteSize;                                 // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurAmount;                                         // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurMax;                                            // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBlurPerObjectSize;                                  // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVIntensity;                                             // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVVplInjectionBias;                                      // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSize;                                                  // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                           // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                              // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                                    // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                            // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                         // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                            // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                              // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                             // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                             // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                            // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionIntensity;                           // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionQuality;                             // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSpaceReflectionMaxRoughness;                        // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVFadeRange;                                             // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPVDirectionalOcclusionFadeRange;                         // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScreenPercentage;                                         // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class UTexture2D*                                  OutlineMaskTexture;                                       // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutlineMaskTextureScale;                                  // 0x0530(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   OutlineMaskTextureScrollSpeed;                            // 0x0538(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FPostProcessOutlineSettings>         OutlineSettings;                                          // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FWeightedBlendables                         WeightedBlendables;                                       // 0x0550(0x0010) (Edit)
	TArray<class UObject*>                             Blendables;                                               // 0x0560(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct Engine.MinimalViewInfo
// 0x05C0
struct FMinimalViewInfo
{
	float                                              PostProcessBlendWeight;                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              FOV;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0010(0x0570) (BlueprintVisible)
	struct FVector2D                                   OffCenterProjectionOffset;                                // 0x0580(0x0008) (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData)
	float                                              OrthoWidth;                                               // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                                // 0x058C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                                // 0x058C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0590(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x059C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OrthoFarClipPlane;                                        // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AspectRatio;                                              // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrthoNearClipPlane;                                       // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x05B4(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.TViewTarget
// 0x05E0
struct FTViewTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x05C0) (Edit, BlueprintVisible)
	class APlayerState*                                PlayerState;                                              // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05D8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x05D0
struct FCameraCacheEntry
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x05C0)
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0017 (0x0018 - 0x0001)
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.NavDataConfig
// 0x0030 (0x0050 - 0x0020)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                                     // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     DefaultQueryExtent;                                       // 0x002C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UClass*                                      NavigationDataClass;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FStringClassReference                       NavigationDataClassName;                                  // 0x0040(0x0010) (Config)
};

// ScriptStruct Engine.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                AreaID;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Enabled;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSysParam
// 0x0080
struct FParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleSysParamType>                 ParamType;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_Low;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Vector_Low;                                               // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.SplineCurves
// 0x0060
struct FSplineCurves
{
	struct FInterpCurveVector                          Position;                                                 // 0x0000(0x0018)
	struct FInterpCurveQuat                            Rotation;                                                 // 0x0018(0x0018)
	struct FInterpCurveVector                          Scale;                                                    // 0x0030(0x0018)
	struct FInterpCurveFloat                           ReparamTable;                                             // 0x0048(0x0018)
};

// ScriptStruct Engine.SplinePoint
// 0x0044
struct FSplinePoint
{
	float                                              InputKey;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0004(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0034(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<ESplinePointType>                      Type;                                                     // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (Edit, IsPlainOldData)
	struct FVector2D                                   LightmapUVBias;                                           // 0x0040(0x0008) (Deprecated, IsPlainOldData)
	struct FVector2D                                   ShadowmapUVBias;                                          // 0x0048(0x0008) (Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.KeyHandleMap
// 0x0050
struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0058
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FKeyHandleMap                               KeyHandlesToIndices;                                      // 0x0008(0x0050) (Transient)
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              Time;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangentWeight;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangentWeight;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RichCurve
// 0x0018 (0x0070 - 0x0058)
struct FRichCurve : public FIndexedCurve
{
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                        // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                       // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              DefaultValue;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FRichCurveKey>                       Keys;                                                     // 0x0060(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0078
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                          // 0x0000(0x0070)
	class UCurveFloat*                                 ExternalCurve;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BaseAttenuationSettings
// 0x00A8
struct FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EAttenuationDistanceModel                          DistanceAlgorithm;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                                   // 0x0010(0x0078) (Edit, BlueprintVisible)
	TEnumAsByte<EAttenuationShape>                     AttenuationShape;                                         // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              dBAttenuationAtMax;                                       // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AttenuationShapeExtents;                                  // 0x0090(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ConeOffset;                                               // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FalloffDistance;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundAttenuationSettings
// 0x0088 (0x0130 - 0x00A8)
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                           // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSpatialize : 1;                                          // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAttenuateWithLPF : 1;                                    // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableListenerFocus : 1;                                 // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableOcclusion : 1;                                     // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseComplexCollisionForOcclusion : 1;                     // 0x00A8(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	TEnumAsByte<ESoundDistanceCalc>                    DistanceType;                                             // 0x00AC(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              OmniRadius;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StereoSpread;                                             // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESoundSpatializationAlgorithm>         SpatializationAlgorithm;                                  // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	class USpatializationPluginSourceSettingsBase*     SpatializationPluginSettings;                             // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusMin;                                                // 0x00C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              RadiusMax;                                                // 0x00CC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              LPFRadiusMin;                                             // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFRadiusMax;                                             // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFFrequencyAtMin;                                        // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LPFFrequencyAtMax;                                        // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusAzimuth;                                             // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusAzimuth;                                          // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusDistanceScale;                                       // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusDistanceScale;                                    // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusPriorityScale;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusPriorityScale;                                    // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusVolumeAttenuation;                                   // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonFocusVolumeAttenuation;                                // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OcclusionTraceChannel;                                    // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              OcclusionLowPassFilterFrequency;                          // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionVolumeAttenuation;                               // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionInterpolationTime;                               // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UOcclusionPluginSourceSettingsBase*          OcclusionPluginSettings;                                  // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UReverbPluginSourceSettingsBase*             ReverbPluginSettings;                                     // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbWetLevelMin;                                        // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbWetLevelMax;                                        // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbDistanceMin;                                        // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReverbDistanceMax;                                        // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatParam;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BoolParam;                                                // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                IntParam;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  SoundWaveParam;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FogHeightDensityPair2
// 0x0008
struct FFogHeightDensityPair2
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// 0x0000 (0x00A8 - 0x00A8)
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{

};

// ScriptStruct Engine.GrassBoxVolumeData
// 0x0024
struct FGrassBoxVolumeData
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x0018(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct Engine.SplineParams
// 0x0038
struct FSplineParams
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x000C(0x000C) (Edit, IsPlainOldData)
	float                                              StartRoll;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x001C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x0028(0x000C) (Edit, IsPlainOldData)
	float                                              EndRoll;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InstancedSplineDecalInstanceData
// 0x0080
struct FInstancedSplineDecalInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (Edit, IsPlainOldData)
	struct FSplineParams                               SplineParams;                                             // 0x0040(0x0038) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShadowExponent;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAreaShadowsForStationaryLight;                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GridShadowSplitSettings
// 0x0008
struct FGridShadowSplitSettings
{
	float                                              CellSize;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ConstraintBaseParams
// 0x0014
struct FConstraintBaseParams
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Restitution;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ContactDistance;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSoftConstraint : 1;                                      // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearConstraint
// 0x0008 (0x001C - 0x0014)
struct FLinearConstraint : public FConstraintBaseParams
{
	float                                              Limit;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               XMotion;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               YMotion;                                                  // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELinearConstraintMotion>               ZMotion;                                                  // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ConeConstraint
// 0x000C (0x0020 - 0x0014)
struct FConeConstraint : public FConstraintBaseParams
{
	float                                              Swing1LimitDegrees;                                       // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Swing2LimitDegrees;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              Swing1Motion;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              Swing2Motion;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.TwistConstraint
// 0x0008 (0x001C - 0x0014)
struct FTwistConstraint : public FConstraintBaseParams
{
	float                                              TwistLimitDegrees;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAngularConstraintMotion>              TwistMotion;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintDrive
// 0x0010
struct FConstraintDrive
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxForce;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x000C(0x0001) (Edit)
	unsigned char                                      bEnableVelocityDrive : 1;                                 // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LinearDriveConstraint
// 0x004C
struct FLinearDriveConstraint
{
	struct FVector                                     PositionTarget;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     VelocityTarget;                                           // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FConstraintDrive                            XDrive;                                                   // 0x0018(0x0010) (Edit)
	struct FConstraintDrive                            YDrive;                                                   // 0x0028(0x0010) (Edit)
	struct FConstraintDrive                            ZDrive;                                                   // 0x0038(0x0010) (Edit)
	unsigned char                                      bEnablePositionDrive : 1;                                 // 0x0048(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AngularDriveConstraint
// 0x004C
struct FAngularDriveConstraint
{
	struct FConstraintDrive                            TwistDrive;                                               // 0x0000(0x0010) (Edit)
	struct FConstraintDrive                            SwingDrive;                                               // 0x0010(0x0010) (Edit)
	struct FConstraintDrive                            SlerpDrive;                                               // 0x0020(0x0010) (Edit)
	struct FRotator                                    OrientationTarget;                                        // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AngularVelocityTarget;                                    // 0x003C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EAngularDriveMode>                     AngularDriveMode;                                         // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x0104
struct FConstraintProfileProperties
{
	float                                              ProjectionLinearTolerance;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ProjectionAngularTolerance;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearBreakThreshold;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularBreakThreshold;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearConstraint                           LinearLimit;                                              // 0x0010(0x001C) (Edit)
	struct FConeConstraint                             ConeLimit;                                                // 0x002C(0x0020) (Edit)
	struct FTwistConstraint                            TwistLimit;                                               // 0x004C(0x001C) (Edit)
	struct FLinearDriveConstraint                      LinearDrive;                                              // 0x0068(0x004C) (Edit)
	struct FAngularDriveConstraint                     AngularDrive;                                             // 0x00B4(0x004C) (Edit)
	unsigned char                                      bDisableCollision : 1;                                    // 0x0100(0x0001) (Edit)
	unsigned char                                      bEnableProjection : 1;                                    // 0x0100(0x0001) (Edit)
	unsigned char                                      bAngularBreakable : 1;                                    // 0x0100(0x0001) (Edit)
	unsigned char                                      bLinearBreakable : 1;                                     // 0x0100(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintInstance
// 0x01F0
struct FConstraintInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FName                                       JointName;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ConstraintBone1;                                          // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ConstraintBone2;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Pos1;                                                     // 0x0030(0x000C) (IsPlainOldData)
	struct FVector                                     PriAxis1;                                                 // 0x003C(0x000C) (IsPlainOldData)
	struct FVector                                     SecAxis1;                                                 // 0x0048(0x000C) (IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x0054(0x000C) (IsPlainOldData)
	struct FVector                                     PriAxis2;                                                 // 0x0060(0x000C) (IsPlainOldData)
	struct FVector                                     SecAxis2;                                                 // 0x006C(0x000C) (IsPlainOldData)
	struct FRotator                                    AngularRotationOffset;                                    // 0x0078(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      bScaleLinearLimits : 1;                                   // 0x0084(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0085(0x0007) MISSED OFFSET
	struct FConstraintProfileProperties                ProfileInstance;                                          // 0x008C(0x0104) (Edit)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0190(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.ConcreteCollisionSourceData
// 0x0018
struct FConcreteCollisionSourceData
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<uint16_t>                                   InstanceIndices;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DistanceToOpacityCurve;                                   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSizeIsInScreenSpace : 1;                                 // 0x0010(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              BaseSizeX;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseSizeY;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceToSizeCurve;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0020
struct FSkelMeshComponentLODInfo
{
	TArray<bool>                                       HiddenMaterials;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// 0x0028
struct FSkelMeshSkinWeightInfo
{
	int                                                Bones[0x8];                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Weights[0x8];                                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0018
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSavedLooping : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSavedPlaying : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              SavedPosition;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SavedPlayRate;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StartScale;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              StartRoll;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StartOffset;                                              // 0x0024(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   EndScale;                                                 // 0x0044(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EndRoll;                                                  // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EndOffset;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Engine.SplineInstanceData
// 0x0058
struct FSplineInstanceData
{
	struct FSplineMeshParams                           SplineMeshParams;                                         // 0x0000(0x0058) (Edit)
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0038
struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFallDownLength;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavLinkDirection>                     Direction;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	float                                              SnapRadius;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SnapHeight;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0018(0x0004) (Edit)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x001C(0x0001)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x001D(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	unsigned char                                      bUseSnapHeight : 1;                                       // 0x0020(0x0001) (Edit)
	unsigned char                                      bSnapToCheapestArea : 1;                                  // 0x0020(0x0001) (Edit)
	unsigned char                                      bCustomFlag0 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag1 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag2 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag3 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag4 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag5 : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bCustomFlag6 : 1;                                         // 0x0021(0x0001)
	unsigned char                                      bCustomFlag7 : 1;                                         // 0x0021(0x0001)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0050 - 0x0038)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                     // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WithinClass;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0018
struct FTimelineEventEntry
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FScriptDelegate                             EventFunc;                                                // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0070
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       VectorPropertyName;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             VectorProperty;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0070
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FloatPropertyName;                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFloatProperty*                              FloatProperty;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0070
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                               // 0x0008(0x0010) (ZeroConstructor, InstancedReference)
	struct FName                                       TrackName;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LinearColorPropertyName;                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             LinearColorProperty;                                      // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x00E0
struct FTimeline
{
	TEnumAsByte<ETimelineLengthMode>                   LengthMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Length;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x0008(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0008(0x0001)
	unsigned char                                      bPlaying : 1;                                             // 0x0008(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FTimelineEventEntry>                 Events;                                                   // 0x0018(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                            // 0x0028(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                             // 0x0038(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                                       // 0x0048(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                                   // 0x0058(0x0010) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelineFinishedFunc;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0078(0x0048) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                        // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                                    // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UProperty*                                   DirectionProperty;                                        // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SmartName
// 0x0010
struct FSmartName
{
	struct FName                                       DisplayName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveBase
// 0x0020
struct FAnimCurveBase
{
	struct FName                                       LastObservedName;                                         // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSmartName                                  Name;                                                     // 0x0008(0x0010)
	int                                                CurveTypeFlags;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FloatCurve
// 0x0070 (0x0090 - 0x0020)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                               // 0x0020(0x0070)
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                              // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartPos;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              AnimStartTime;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimEndTime;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoopingCount;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimSyncMarker
// 0x0010
struct FAnimSyncMarker
{
	struct FName                                       MarkerName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BoneReference
// 0x0018
struct FBoneReference
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0020
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0018) (Edit)
	float                                              InterpolationSpeedPerSec;                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFilterInterpolationType>              InterpolationType;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SampleValue;                                              // 0x0008(0x000C) (Edit, IsPlainOldData)
	float                                              RateScale;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weights[0x3];                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Min;                                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GridNum;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PoseData
// 0x0030
struct FPoseData
{
	TArray<struct FTransform>                          LocalSpacePose;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<bool>                                       LocalSpacePoseMask;                                       // 0x0010(0x0010) (ZeroConstructor)
	TArray<float>                                      CurveData;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PoseDataContainer
// 0x0090
struct FPoseDataContainer
{
	TArray<struct FSmartName>                          PoseNames;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FPoseData>                           Poses;                                                    // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FName>                               Tracks;                                                   // 0x0020(0x0010) (ZeroConstructor)
	TMap<struct FName, int>                            TrackMap;                                                 // 0x0030(0x0050) (ZeroConstructor, Transient)
	TArray<struct FAnimCurveBase>                      Curves;                                                   // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0020
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CustomResultNodeIndex;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransitionIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDesiredTransitionReturnValue;                            // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticRemainingTimeRule;                              // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<int>                                        PoseEvaluatorLinks;                                       // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BakedAnimationState
// 0x0048
struct FBakedAnimationState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBakedStateExitTransition>           Transitions;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAConduit;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                EntryRuleNodeIndex;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PlayerNodeIndices;                                        // 0x0030(0x0010) (ZeroConstructor)
	bool                                               bAlwaysResetOnEntry;                                      // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0038 (0x0040 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NextState;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CrossfadeDuration;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InterruptNotify;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendMode;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETransitionLogicType>                  LogicType;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InitialState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBakedAnimationState>                States;                                                   // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                              // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AssetMapping
// 0x0010
struct FAssetMapping
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             TargetAsset;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0018
struct FEditorMapPerformanceTestDefinition
{
	struct FStringAssetReference                       PerformanceTestmap;                                       // 0x0000(0x0010) (Edit, Config)
	int                                                TestTimer;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FilePath
// 0x0010
struct FFilePath
{
	struct FString                                     FilePath;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                                  // 0x0000(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Normal;                                                   // 0x0020(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                               // 0x0040(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                                       // 0x0060(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                           // 0x0080(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                                // 0x00A0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                             // 0x00C0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Animation;                                                // 0x00E0(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             Sound;                                                    // 0x0100(0x0020) (Edit, Config)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                            // 0x0120(0x0020) (Edit, Config)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                                      // 0x0140(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                           // 0x0000(0x0010) (Edit, Config)
	struct FFilePath                                   MaterialAsset;                                            // 0x0010(0x0010) (Edit, Config)
	struct FFilePath                                   ParticleSystemAsset;                                      // 0x0020(0x0010) (Edit, Config)
	struct FFilePath                                   SkeletalMeshAsset;                                        // 0x0030(0x0010) (Edit, Config)
	struct FFilePath                                   StaticMeshAsset;                                          // 0x0040(0x0010) (Edit, Config)
	struct FFilePath                                   TextureAsset;                                             // 0x0050(0x0010) (Edit, Config)
};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	struct FString                                     path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                                 // 0x0000(0x0010) (Edit)
	struct FString                                     NewProjectNameOverride;                                   // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x01F0
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                                   // 0x0000(0x0010) (Edit)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                           // 0x0010(0x0150) (Edit)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                               // 0x0160(0x0060) (Edit)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                                       // 0x01C0(0x0020) (Edit)
	struct FFilePath                                   SourceControlMaterial;                                    // 0x01E0(0x0010) (Edit)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                                     // 0x0000(0x0010) (Edit)
	struct FFilePath                                   DefaultDiffuseTexture;                                    // 0x0010(0x0010) (Edit)
	struct FFilePath                                   DefaultNormalTexture;                                     // 0x0020(0x0010) (Edit)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0000(0x0010) (Edit)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0030
struct FBlueprintEditorPromotionSettings
{
	struct FFilePath                                   FirstMeshPath;                                            // 0x0000(0x0010) (Edit)
	struct FFilePath                                   SecondMeshPath;                                           // 0x0010(0x0010) (Edit)
	struct FFilePath                                   DefaultParticleAsset;                                     // 0x0020(0x0010) (Edit)
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FFilePath                                   ExecutablePath;                                           // 0x0010(0x0010) (Edit, Config)
	struct FString                                     CommandLineOptions;                                       // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WorkingDirectory;                                         // 0x0030(0x0010) (Edit, Config)
	struct FString                                     ScriptExtension;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              ScriptDirectory;                                          // 0x0050(0x0010) (Edit, Config)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                           // 0x0000(0x0010) (Edit, Config)
	struct FString                                     ExportFileExtension;                                      // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bSkipExport;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                          // 0x0000(0x0010) (Edit, Config)
	struct FString                                     DeviceID;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FBoneNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                ParentIndex;                                              // 0x0008(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EBoneTranslationRetargetingMode>       TranslationRetargetingMode;                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.VirtualBone
// 0x0018
struct FVirtualBone
{
	struct FName                                       SourceBoneName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetBoneName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       VirtualBoneName;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                                      // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        MeshToSkeletonTable;                                      // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SlotNames;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0020
struct FBlendProfileBoneEntry
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0018) (Edit)
	float                                              BlendScale;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (IsPlainOldData)
};

// ScriptStruct Engine.TableRowBase
// 0x0008
struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0060
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionEnabled>                     CollisionEnabled;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FName                                       ObjectTypeName;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     HelpMessage;                                              // 0x0028(0x0010) (ZeroConstructor)
	bool                                               bCanModify;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0039(0x0027) MISSED OFFSET
};

// ScriptStruct Engine.CustomChannelSetup
// 0x0018
struct FCustomChannelSetup
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    DefaultResponse;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTraceType;                                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bStaticObject;                                            // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                          // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       NewName;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.UserActivity
// 0x0018
struct FUserActivity
{
	struct FString                                     ActionName;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	int                                                Linkage;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                UUID;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ExecutionFunction;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     CallbackTarget;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TimerHandle
// 0x0008
struct FTimerHandle
{
	uint64_t                                           Handle;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                                  // 0x0000(0x0010) (ZeroConstructor, Transient)
	float                                              MaxSamples;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAdjustMinMax;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UDialogueVoice*>                      Targets;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.PredictProjectilePathParams
// 0x0130
struct FPredictProjectilePathParams
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bTraceWithCollision;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ProjectileRadius;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimTime;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceWithChannel;                                        // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceWithProfile;                                        // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xAA];                                      // 0x0026(0x00AA) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	struct FName                                       TraceProfile;                                             // 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SimFrequency;                                             // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZ;                                         // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragForce;                                                // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MaxSpeedOverTimeCurve;                                    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              DrawDebugTime;                                            // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0121(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathPointData
// 0x001C
struct FPredictProjectilePathPointData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.PredictProjectilePathResult
// 0x00B8
struct FPredictProjectilePathResult
{
	TArray<struct FPredictProjectilePathPointData>     PathData;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FPredictProjectilePathPointData             LastTraceDestination;                                     // 0x0010(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0030(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.VectorSpringState
// 0x0018
struct FVectorSpringState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.FloatSpringState
// 0x0008
struct FFloatSpringState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              BlendFunction;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLockOutgoing : 1;                                        // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// 0x0010
struct FUpdateLevelVisibilityLevelInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVisible : 1;                                           // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// 0x0010
struct FUpdateLevelStreamingLevelStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LODIndex;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNewShouldBeLoaded : 1;                                   // 0x000C(0x0001)
	unsigned char                                      bNewShouldBeVisible : 1;                                  // 0x000C(0x0001)
	unsigned char                                      bNewShouldBlockOnLoad : 1;                                // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SrcActorOffset;                                           // 0x0008(0x000C) (IsPlainOldData)
	struct FVector                                     SrcActorDesiredOffset;                                    // 0x0014(0x000C) (IsPlainOldData)
	struct FString                                     DebugText;                                                // 0x0020(0x0010) (ZeroConstructor)
	float                                              TimeRemaining;                                            // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Duration;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      TextColor;                                                // 0x0038(0x0004) (IsPlainOldData)
	unsigned char                                      bAbsoluteLocation : 1;                                    // 0x003C(0x0001)
	unsigned char                                      bKeepAttachedToActor : 1;                                 // 0x003C(0x0001)
	unsigned char                                      bDrawShadow : 1;                                          // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     OrigActorLocation;                                        // 0x0040(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FontScale;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphTerminalType
// 0x0030
struct FEdGraphTerminalType
{
	struct FString                                     TerminalCategory;                                         // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     TerminalSubCategory;                                      // 0x0010(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      TerminalSubCategoryObject;                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bTerminalIsConst;                                         // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTerminalIsWeakPointer;                                   // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinType
// 0x0080
struct FEdGraphPinType
{
	struct FString                                     PinCategory;                                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     PinSubCategory;                                           // 0x0010(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                                     // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                            // 0x0028(0x0020)
	struct FEdGraphTerminalType                        PinValueType;                                             // 0x0048(0x0030)
	bool                                               bIsMap;                                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsSet;                                                   // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsArray;                                                 // 0x007A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsReference;                                             // 0x007B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsConst;                                                 // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsWeakPointer;                                           // 0x007D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x007E(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.ReverbSettings
// 0x0018
struct FReverbSettings
{
	unsigned char                                      bApplyReverb : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TEnumAsByte<EReverbPreset>                         ReverbType;                                               // 0x0004(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UReverbEffect*                               ReverbEffect;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned char                                      bIsWorldSettings : 1;                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ExteriorVolume;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorTime;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPF;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExteriorLPFTime;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorVolume;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorTime;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPF;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InteriorLPFTime;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CullDistance;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TravelCostOverride;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EnteringCostOverride;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsExcluded : 1;                                          // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideTravelCost : 1;                                  // 0x0010(0x0001) (Edit)
	unsigned char                                      bOverrideEnteringCost : 1;                                // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag1 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag2 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag3 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag4 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag5 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag6 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag7 : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bNavFlag8 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag9 : 1;                                            // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag10 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag11 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag12 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag13 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag14 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      bNavFlag15 : 1;                                           // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInitialOscillatorOffset>              InitialOffset;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                                    // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Yaw;                                                      // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Roll;                                                     // 0x0018(0x000C) (Edit)
};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                        // 0x0000(0x000C) (Edit)
	struct FFOscillator                                Y;                                                        // 0x000C(0x000C) (Edit)
	struct FFOscillator                                Z;                                                        // 0x0018(0x000C) (Edit)
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0080
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsLeftSmall : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightLarge : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectsRightSmall : 1;                                   // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0008(0x0078) (Edit)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x0044
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumIndirectLightingBounces;                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingQuality;                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectLightingSmoothness;                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      EnvironmentColor;                                         // 0x0010(0x0004) (Edit, IsPlainOldData)
	float                                              EnvironmentIntensity;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EmissiveBoost;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DiffuseBoost;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseAmbientOcclusion : 1;                                 // 0x0020(0x0001) (Edit)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;                // 0x0020(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              DirectIlluminationOcclusionFraction;                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IndirectIlluminationOcclusionFraction;                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionExponent;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOcclusionDistance;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                            // 0x0038(0x0001) (Edit)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                           // 0x0038(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              VolumeLightSamplePlacementScale;                          // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCompressLightmaps : 1;                                   // 0x0040(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.NetViewer
// 0x0030
struct FNetViewer
{
	class UNetConnection*                              Connection;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      InViewer;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ViewTarget;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewLocation;                                             // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     ViewDir;                                                  // 0x0024(0x000C) (IsPlainOldData)
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	float                                              Timestamp;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0068 - 0x0038)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                                // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftEnd;                                                  // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightStart;                                               // 0x0050(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightEnd;                                                 // 0x005C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                        // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x0014
struct FMeshUVChannelInfo
{
	bool                                               bInitialized;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideDensities;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              LocalUVDensities[0x4];                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0030
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnableShadowCasting;                                     // 0x0008(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bRecomputeTangent;                                        // 0x0009(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FName                                       MaterialSlotName;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0018(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.TriangleSortSettings
// 0x0010
struct FTriangleSortSettings
{
	TEnumAsByte<ETriangleSortOption>                   TriangleSorting;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETriangleSortAxis>                     CustomLeftRightAxis;                                      // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FName                                       CustomLeftRightBoneName;                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SimplygonChannelCastingSettings
// 0x0010
struct FSimplygonChannelCastingSettings
{
	TEnumAsByte<ESimplygonMaterialChannel>             MaterialChannel;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonCasterType>                  Caster;                                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonColorChannels>               ColorChannels;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BitsPerChannel;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSRGB;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeVertexColors;                                        // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipBackfacingNormals;                                   // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTangentSpaceNormals;                                  // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipGreenChannel;                                        // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.OutputMaterialInfo
// 0x0058
struct FOutputMaterialInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.SimplygonMaterialLODSettings
// 0x0080
struct FSimplygonMaterialLODSettings
{
	bool                                               bActive;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialLODType>                      MaterialLODType;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAutomaticSizes;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureResolution>           TextureWidth;                                             // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureResolution>           TextureHeight;                                            // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureSamplingQuality>      SamplingQuality;                                          // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                GutterSpace;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimplygonTextureStrech>               TextureStrech;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReuseExistingCharts;                                     // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	TArray<struct FSimplygonChannelCastingSettings>    ChannelsToCast;                                           // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bBakeVertexData;                                          // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeActorData;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowMultiMaterial;                                      // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreferTwoSideMaterials;                                  // 0x0023(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseVertexWeights;                                        // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FOutputMaterialInfo                         OutputMaterialInfo;                                       // 0x0028(0x0058)
};

// ScriptStruct Engine.MaterialProxySettings
// 0x009C
struct FMaterialProxySettings
{
	struct FIntPoint                                   TextureSize;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ETextureSizingType>                    TextureSizingType;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              GutterSpace;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMaterialProxySmaplingQuality                      SamplingQuality;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EUVStrech                                          UVStrech;                                                 // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSplitProxyMaterialBasedOnType;                           // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseTangentSpace;                                         // 0x0013(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalMap;                                               // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMetallicMap;                                             // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	float                                              MetallicConstant;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRoughnessMap;                                            // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              RoughnessConstant;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecularMap;                                             // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              SpecularConstant;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEmissiveMap;                                             // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpacityMap;                                              // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
	float                                              OpacityConstant;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAmbientOcclusionMap;                                     // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              AOConstant;                                               // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AmbientOcclusionConstant;                                 // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOpacityMaskMap;                                          // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              OpacityMaskConstant;                                      // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   DiffuseTextureSize;                                       // 0x0048(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   NormalTextureSize;                                        // 0x0050(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   MetallicTextureSize;                                      // 0x0058(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   RoughnessTextureSize;                                     // 0x0060(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   SpecularTextureSize;                                      // 0x0068(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   EmissiveTextureSize;                                      // 0x0070(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   OpacityTextureSize;                                       // 0x0078(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   AmbientOcclusionTextureSize;                              // 0x0080(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FIntPoint                                   OpacityMaskTextureSize;                                   // 0x0088(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EMaterialMergeType>                    MaterialMergeType;                                        // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBlendMode>                            BlendMode;                                                // 0x0091(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	int                                                BakingTextureSizeRatioOutdoor;                            // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BakingTextureSizeRatioIndoor;                             // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x0188
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<ESkeletalMeshTerminationCriterion>     TerminationCriterion;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationType>         ReductionMethod;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NumOfVertPercentage;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumOfTriangles;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxNumOfVerts;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeImportance;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ScreenSize;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SilhouetteImportance;                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   TextureImportance;                                        // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   ShadingImportance;                                        // 0x002E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkeletalMeshOptimizationImportance>   SkinningImportance;                                       // 0x002F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BoneReductionRatio;                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxBonesPerVertex;                                        // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTransferMorphTarget;                                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnforceBoneBoundaries;                                   // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLockEdges;                                               // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	TArray<struct FBoneReference>                      BonesToRemove;                                            // 0x0040(0x0010) (ZeroConstructor, Deprecated)
	int                                                BaseLOD;                                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LODChainLastIndex;                                        // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseVertexWeights;                                        // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseVertexWeightsForMaterial;                             // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSimplifyMaterials;                                       // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x005B(0x0005) MISSED OFFSET
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      // 0x0060(0x0080) (Deprecated)
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x00E0(0x009C)
	bool                                               bForceRebuild;                                            // 0x017C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	class UAnimSequence*                               BakePose;                                                 // 0x0180(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Engine.SimplygonRemeshingSettings
// 0x00A8
struct FSimplygonRemeshingSettings
{
	bool                                               bActive;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ScreenSize;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              HardAngleThreshold;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MergeDistance;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseClippingPlane;                                        // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              ClippingLevel;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaneNegativeHalfspace;                                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMassiveLOD;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAggregateLOD;                                         // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      // 0x0028(0x0080) (Edit)
};

// ScriptStruct Engine.MeshProxySettings
// 0x00FC
struct FMeshProxySettings
{
	int                                                ScreenSize;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverrideVoxelSize : 1;                                   // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              VoxelSize;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x000C(0x009C) (Edit)
	int                                                TextureWidth;                                             // 0x00A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TextureHeight;                                            // 0x00AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportNormalMap;                                         // 0x00B0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportMetallicMap;                                       // 0x00B1(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportRoughnessMap;                                      // 0x00B2(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportSpecularMap;                                       // 0x00B3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bCalculateCorrectLODModel;                                // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	float                                              OverrideDistanceForLevelLOD;                              // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MergeDistance;                                            // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleRatioForIndoor;                                      // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      UnresolvedGeometryColor;                                  // 0x00C4(0x0004) (Edit, IsPlainOldData)
	bool                                               bOverrideTransferDistance;                                // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              MaxRayCastDist;                                           // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHardAngleThreshold;                                   // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bComputeLightMapResolution;                               // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	float                                              HardAngleThreshold;                                       // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProxyNormalComputationMethod>         NormalCalculationMethod;                                  // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                LightMapResolution;                                       // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeVertexData;                                          // 0x00E1(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUseLandscapeCulling;                                     // 0x00E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCullingPrecision>            LandscapeCullingPrecision;                                // 0x00E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowAdjacency;                                          // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDistanceField;                                      // 0x00E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReuseMeshLightmapUVs;                                    // 0x00E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateCollision;                                         // 0x00E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowVertexColors;                                       // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateLightmapUVs;                                     // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAssignLODGroup;                                          // 0x00EA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x00EB(0x0001) MISSED OFFSET
	int                                                LODGroupIndex;                                            // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAggregateMeshes;                                         // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData)
	EChartAggregationMode                              AggregatorMode;                                           // 0x00F1(0x0001) (ZeroConstructor, IsPlainOldData)
	EPhysXAggregationMode                              PhysXAggregationMode;                                     // 0x00F2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomHemisphere;                                     // 0x00F3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              MergeBoldness;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTriangleSize;                                          // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GroupedSkeletalOptimizationSettings
// 0x0290
struct FGroupedSkeletalOptimizationSettings
{
	bool                                               bAutoComputeLODDistance;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESkeletalMeshLODType                               LevelOfDetailType;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0008(0x0188) (Edit)
	struct FMeshProxySettings                          ProxySettings;                                            // 0x0190(0x00FC) (Edit)
	bool                                               bForceLODRebuild;                                         // 0x028C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x0540
struct FSkeletalMeshLODInfo
{
	float                                              ScreenSize;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODHysteresis;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        LODMaterialMap;                                           // 0x0008(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<bool>                                       bEnableShadowCasting;                                     // 0x0018(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                                     // 0x0028(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      bHasBeenSimplified : 1;                                   // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                        // 0x0040(0x0188) (Edit)
	TArray<struct FBoneReference>                      BonesToPrioritize;                                        // 0x01C8(0x0010) (Edit, ZeroConstructor)
	float                                              WeightOfPrioritization;                                   // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                        // 0x01E0(0x00A8) (Deprecated)
	struct FGroupedSkeletalOptimizationSettings        OptimizationSettings;                                     // 0x0288(0x0290) (Edit)
	TArray<struct FName>                               RemovedBones;                                             // 0x0518(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SourceImportFilename;                                     // 0x0528(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      bHasPerLODVertexColors : 1;                               // 0x0538(0x0001)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// 0x0050
struct FClothPhysicsProperties_Legacy
{
	float                                              VerticalResistance;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HorizontalResistance;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BendResistance;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShearResistance;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Friction;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherStiffness;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TetherLimit;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Drag;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StiffnessFrequency;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MassScale;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InertiaBlend;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionThickness;                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionSquashScale;                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionStiffness;                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SolverFrequency;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberCompression;                                         // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberExpansion;                                           // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FiberResistance;                                          // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// 0x0078
struct FClothingAssetData_Legacy
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ApexFileName;                                             // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bClothPropertiesChanged;                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FClothPhysicsProperties_Legacy              PhysicsProperties;                                        // 0x001C(0x0050) (IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x006C(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bPositionIsRelative;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x000D(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.AlphaBlend
// 0x0038
struct FAlphaBlend
{
	EAlphaBlendOption                                  BlendOption;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0014(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncData
// 0x0020
struct FMarkerSyncData
{
	TArray<struct FAnimSyncMarker>                     AuthoredSyncMarkers;                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FName                                       NextSectionName;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMetaData*>                       MetaData;                                                 // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimTrack                                  AnimTrack;                                                // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // 0x0038(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TriggerTimeOffset;                                        // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TriggerTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotifyEventType>                  NotifyEventType;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalAnimationData
// 0x0028
struct FPhysicalAnimationData
{
	struct FName                                       BodyName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsLocalSimulation : 1;                                   // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              OrientationStrength;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityStrength;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PositionStrength;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityStrength;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLinearForce;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngularForce;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FogHeightDensityPair
// 0x0008
struct FFogHeightDensityPair
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DecayHeight;                                              // 0x0004(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxScatteringOrder;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexWidth;                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TransmittanceTexHeight;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexWidth;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IrradianceTexHeight;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterAltitudeSampleNum;                               // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuNum;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterMuSNum;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InscatterNuNum;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x0010
struct FDrawToRenderTargetContext
{
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.FormatArgumentData
// 0x0040
struct FFormatArgumentData
{
	struct FString                                     ArgumentName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TEnumAsByte<EFormatArgumentType>                   ArgumentValueType;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       ArgumentValue;                                            // 0x0018(0x0018) (Edit, BlueprintVisible, DisableEditOnTemplate)
	int                                                ArgumentValueInt;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ArgumentValueFloat;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	ETextGender                                        ArgumentValueGender;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.LevelCollection
// 0x0080
struct FLevelCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AGameStateBase*                              GameState;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDemoNetDriver*                              DemoNetDriver;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULevel*                                      PersistentLevel;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty Engine.LevelCollection.Levels
	unsigned char                                      UnknownData02[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DynamicGenerateTargetNavigation
// 0x0014
struct FDynamicGenerateTargetNavigation
{
	struct FVector                                     TargetLocation;                                           // 0x0000(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              GenerateRadiusMin;                                        // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GenerateRadiusMax;                                        // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KShapeElem
// 0x0020
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0050 (0x0070 - 0x0020)
struct FKSphereElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                                       // 0x0020(0x0040) (Deprecated, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x0060(0x000C) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KBoxElem
// 0x0080 (0x00A0 - 0x0020)
struct FKBoxElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                                       // 0x0020(0x0040) (Deprecated, IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x0060(0x0010) (Deprecated, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x0070(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x007C(0x000C) (Edit, IsPlainOldData)
	float                                              X;                                                        // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.KSphylElem
// 0x0070 (0x0090 - 0x0020)
struct FKSphylElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                                       // 0x0020(0x0040) (Deprecated, IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x0060(0x0010) (Deprecated, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x0070(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x007C(0x000C) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x0090 - 0x0020)
struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                               // 0x0020(0x0010) (ZeroConstructor)
	struct FBox                                        ElemBox;                                                  // 0x0030(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0050(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x0048
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                              // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKBoxElem>                           BoxElems;                                                 // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKSphylElem>                         SphylElems;                                               // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FKConvexElem>                        ConvexElems;                                              // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CircleElement2D
// 0x000C
struct FCircleElement2D
{
	struct FVector2D                                   Center;                                                   // 0x0000(0x0008) (Edit, EditConst, IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.BoxElement2D
// 0x0014
struct FBoxElement2D
{
	struct FVector2D                                   Center;                                                   // 0x0000(0x0008) (Edit, EditConst, IsPlainOldData)
	float                                              Width;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Height;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Angle;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.ConvexElement2D
// 0x0010
struct FConvexElement2D
{
	TArray<struct FVector2D>                           VertexData;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AggregateGeometry2D
// 0x0030
struct FAggregateGeometry2D
{
	TArray<struct FCircleElement2D>                    CircleElements;                                           // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FBoxElement2D>                       BoxElements;                                              // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FConvexElement2D>                    ConvexElements;                                           // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x0030
struct FPhysicalAnimationProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FPhysicalAnimationData                      PhysicalAnimationData;                                    // 0x0008(0x0028) (Edit)
};

// ScriptStruct Engine.BranchFilter
// 0x0010
struct FBranchFilter
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BlendDepth;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BuilderPoly
// 0x0028
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                            // 0x0000(0x0010) (ZeroConstructor)
	int                                                Direction;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       ItemName;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PolyFlags;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   V0_UV;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                V0_Color;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   V1_Pos;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   V1_UV;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                V1_Color;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   V2_Pos;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   V2_UV;                                                    // 0x0048(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                V2_Color;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Engine.NamedCurveValue
// 0x0010
struct FNamedCurveValue
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x0020
struct FPreviewMeshCollectionEntry
{
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                             // 0x0000(0x0020) (Edit)
};

// ScriptStruct Engine.PrimaryAssetRules
// 0x0010
struct FPrimaryAssetRules
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyRecursively;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                ChunkId;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EPrimaryAssetCookRule                              CookRule;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	struct FVector2D                                   UVScale;                                                  // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   UVOffset;                                                 // 0x0008(0x0008) (Edit, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0010(0x000C) (Edit, IsPlainOldData)
	float                                              UAngle;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InteriorElementIndex;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	bool                                               bIsSupportChunk;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotFracture;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotDamage;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotCrumble;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// 0x0080
struct FPrimaryAssetTypeInfo
{
	struct FName                                       PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            AssetBaseClass;                                           // 0x0008(0x0020) (Edit)
	class UClass*                                      AssetBaseClassLoaded;                                     // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasBlueprintClasses;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEditorOnly;                                            // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	TArray<struct FDirectoryPath>                      Directories;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringAssetReference>               SpecificAssets;                                           // 0x0048(0x0010) (Edit, ZeroConstructor)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0058(0x0010) (Edit)
	TArray<struct FString>                             AssetScanPaths;                                           // 0x0068(0x0010) (ZeroConstructor, Transient)
	bool                                               bIsDynamicAsset;                                          // 0x0078(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                NumberOfAssets;                                           // 0x007C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// 0x0020
struct FPrimaryAssetRulesOverride
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // 0x0000(0x0010) (Edit)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x0010(0x0010) (Edit)
};

// ScriptStruct Engine.AssetManagerRedirect
// 0x0020
struct FAssetManagerRedirect
{
	struct FString                                     Old;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     New;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0020
struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit)
	int                                                MaxChannels;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x0010
struct FPhysicalSurfaceName
{
	TEnumAsByte<EPhysicalSurface>                      Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.HardwareCursorReference
// 0x0010
struct FHardwareCursorReference
{
	struct FName                                       CursorPath;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HotSpot;                                                  // 0x0008(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0038
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                                  // 0x0000(0x0018) (Edit)
	class USoundWave*                                  SoundWave;                                                // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LocalizationKeyFormat;                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	class UDialogueSoundWaveProxy*                     Proxy;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       DelegatePropertyName;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bExecuteWhenPaused : 1;                                   // 0x0000(0x0001)
	unsigned char                                      bOverrideParentBinding : 1;                               // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x001C (0x0020 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       InputActionName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       InputAxisName;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionNameToBind;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0024 (0x0028 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FKey                                        AxisKey;                                                  // 0x0008(0x0018)
	struct FName                                       FunctionNameToBind;                                       // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0034 (0x0038 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FInputChord                                 InputChord;                                               // 0x0008(0x0020)
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExtendedReflectionSharedCubemap
// 0x0030
struct FExtendedReflectionSharedCubemap
{
	int                                                CubemapSize;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UTextureCube*                                SourceCube;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FGuid                                       SourceId;                                                 // 0x0010(0x0010) (IsPlainOldData)
	TArray<unsigned char>                              UncompressedFullHDR;                                      // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableAntialiasing : 1;                                  // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableBold : 1;                                          // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableItalic : 1;                                        // 0x0014(0x0001) (Edit)
	unsigned char                                      bEnableUnderline : 1;                                     // 0x0014(0x0001) (Edit)
	unsigned char                                      bAlphaOnly : 1;                                           // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TEnumAsByte<EFontImportCharacterSet>               CharacterSet;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Chars;                                                    // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FString                                     UnicodeRange;                                             // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFilePath;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FString                                     CharsFileWildcard;                                        // 0x0050(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCreatePrintableOnly : 1;                                 // 0x0060(0x0001) (Edit)
	unsigned char                                      bIncludeASCIIRange : 1;                                   // 0x0060(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                ForegroundColor;                                          // 0x0064(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      bEnableDropShadow : 1;                                    // 0x0074(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                TexturePageWidth;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TexturePageMaxHeight;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                XPadding;                                                 // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                YPadding;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxTop;                                             // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxBottom;                                          // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxRight;                                           // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExtendBoxLeft;                                            // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableLegacyMode : 1;                                    // 0x0098(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	int                                                Kerning;                                                  // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                               // 0x00A0(0x0001) (Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	int                                                DistanceFieldScaleFactor;                                 // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFieldScanRadiusScale;                             // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartV;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                USize;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VSize;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureIndex;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x00F0
struct FHapticFeedbackDetails_Curve
{
	struct FRuntimeFloatCurve                          Frequency;                                                // 0x0000(0x0078) (Edit)
	struct FRuntimeFloatCurve                          Amplitude;                                                // 0x0078(0x0078) (Edit)
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	class UClass*                                      OwnerClass;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SCSVariableName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AssociatedGuid;                                           // 0x0010(0x0010) (IsPlainOldData)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0080
struct FComponentOverrideRecord
{
	class UClass*                                      ComponentClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTemplate;                                        // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FComponentKey                               ComponentKey;                                             // 0x0010(0x0020)
	struct FBlueprintCookedComponentInstancingData     CookedComponentInstancingData;                            // 0x0030(0x0050)
};

// ScriptStruct Engine.KeyBind
// 0x0030
struct FKeyBind
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Config)
	struct FString                                     Command;                                                  // 0x0018(0x0010) (ZeroConstructor, Config)
	unsigned char                                      Control : 1;                                              // 0x0028(0x0001) (Config)
	unsigned char                                      Shift : 1;                                                // 0x0028(0x0001) (Config)
	unsigned char                                      Alt : 1;                                                  // 0x0028(0x0001) (Config)
	unsigned char                                      Cmd : 1;                                                  // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreCtrl : 1;                                          // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreShift : 1;                                         // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreAlt : 1;                                           // 0x0028(0x0001) (Config)
	unsigned char                                      bIgnoreCmd : 1;                                           // 0x0028(0x0001) (Config)
	unsigned char                                      bDisabled : 1;                                            // 0x0029(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisProperties
// 0x0020
struct FInputAxisProperties
{
	float                                              DEADZONE;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterDeadZone;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Sensitivity;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Exponent;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInvert : 1;                                              // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UCurveFloat*                                 MultiplierAxisValueCurve;                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0028
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FInputAxisProperties                        AxisProperties;                                           // 0x0008(0x0020) (Edit)
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0028
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      bShift : 1;                                               // 0x0020(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                                // 0x0020(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlt : 1;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bCmd : 1;                                                 // 0x0020(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0028
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // 0x0008(0x0018) (Edit)
	float                                              Scale;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      CurveColor;                                               // 0x0008(0x0004) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CurveName;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                bHideCurve;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bColorCurve;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bFloatingPointColorCurve;                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                bClamp;                                                   // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampLow;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClampHigh;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FCurveEdEntry>                       Curves;                                                   // 0x0010(0x0010) (ZeroConstructor)
	float                                              ViewStartInput;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndInput;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewStartOutput;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ViewEndOutput;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Value : 1;                                                // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0018
struct FDirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetCamGroup;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShotNumber;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EventTrackKey
// 0x0010
struct FEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EventName;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	float                                              StartTime;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimStartOffset;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimEndOffset;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x001C(0x0001)
	unsigned char                                      bReverse : 1;                                             // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupPoint
// 0x0010
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ClipIDNumber;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrackToggleAction>                    ToggleAction;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound;                                                    // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisibilityTrackAction>                Action;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVisibilityTrackCondition>             ActiveCondition;                                          // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ElementIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ExpressionInput
// 0x0038
struct FExpressionInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     InputName;                                                // 0x0008(0x0010) (ZeroConstructor)
	int                                                Mask;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskR;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskG;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskB;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskA;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       ExpressionName;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0008 (0x0040 - 0x0038)
struct FMaterialAttributesInput : public FExpressionInput
{
	int                                                PropertyConnectedBitmask;                                 // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CustomInput
// 0x0048
struct FCustomInput
{
	struct FString                                     InputName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FExpressionInput                            Input;                                                    // 0x0010(0x0038)
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0050
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionInputId;                                        // 0x0008(0x0010) (IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0018(0x0038)
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0040
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                         // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGuid                                       ExpressionOutputId;                                       // 0x0008(0x0010) (IsPlainOldData)
	struct FExpressionOutput                           Output;                                                   // 0x0018(0x0028)
};

// ScriptStruct Engine.TerrainLayer
// 0x00F0
struct FTerrainLayer
{
	struct FString                                     LayerName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FExpressionInput                            Weight;                                                   // 0x0010(0x0038)
	struct FExpressionInput                            UV;                                                       // 0x0048(0x0038)
	struct FExpressionInput                            DiffuseTexture;                                           // 0x0080(0x0038)
	struct FExpressionInput                            NormalTexture;                                            // 0x00B8(0x0038)
};

// ScriptStruct Engine.TerrainLayerDesert
// 0x0128
struct FTerrainLayerDesert
{
	struct FString                                     LayerName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FExpressionInput                            Weight;                                                   // 0x0010(0x0038)
	struct FExpressionInput                            UV;                                                       // 0x0048(0x0038)
	struct FExpressionInput                            DiffuseTexture;                                           // 0x0080(0x0038)
	struct FExpressionInput                            NormalTexture;                                            // 0x00B8(0x0038)
	struct FExpressionInput                            Specular;                                                 // 0x00F0(0x0038)
};

// ScriptStruct Engine.MaterialInput
// 0x0038
struct FMaterialInput
{
	int                                                OutputIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     InputName;                                                // 0x0008(0x0010) (ZeroConstructor)
	int                                                Mask;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskR;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskG;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskB;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaskA;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       ExpressionName;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ColorMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FColor                                      Constant;                                                 // 0x003C(0x0004) (IsPlainOldData)
};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Constant;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorMaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FVector                                     Constant;                                                 // 0x003C(0x000C) (IsPlainOldData)
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                          // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              ConstantX;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ConstantY;                                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (IsPlainOldData)
	class UMaterialFunction*                           Function;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                                  // 0x0000(0x0010) (IsPlainOldData)
	class UMaterialParameterCollection*                ParameterCollection;                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (IsPlainOldData)
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0008 (0x0020 - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                             // 0x0018(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct Engine.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Extent;                                                   // 0x000C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// 0x0030
struct FRollbackNetStartupActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UObject*                                     Archetype;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
	class ULevel*                                      Level;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NodeMap
// 0x0040
struct FNodeMap
{
	struct FName                                       TargetNodeName;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  SourceToTargetTransform;                                  // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct Engine.DistributionLookupTable
// 0x0028
struct FDistributionLookupTable
{
	unsigned char                                      Op;                                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryCount;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EntryStride;                                              // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubEntryStride;                                           // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeBias;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      Values;                                                   // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      LockFlag;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.RawDistribution
// 0x0028
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028)
};

// ScriptStruct Engine.RawDistributionVector
// 0x0028 (0x0050 - 0x0028)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     MinValueVec;                                              // 0x0030(0x000C) (IsPlainOldData)
	struct FVector                                     MaxValueVec;                                              // 0x003C(0x000C) (IsPlainOldData)
	class UDistributionVector*                         Distribution;                                             // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDistributionFloat*                          Distribution;                                             // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData)
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bScale : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bLock : 1;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGetSeedFromInstance : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bInstanceSeedIsIndex : 1;                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                           // 0x0008(0x0001) (Edit)
	unsigned char                                      bRandomlySelectSeedArray : 1;                             // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	TArray<int>                                        RandomSeeds;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<EParticleEventType>                    Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ParticleFrequency;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      FirstTimeOnly : 1;                                        // 0x000C(0x0001) (Edit)
	unsigned char                                      LastTimeOnly : 1;                                         // 0x000C(0x0001) (Edit)
	unsigned char                                      UseReflectedImpactVector : 1;                             // 0x000C(0x0001) (Edit)
	unsigned char                                      bUseOrbitOffset : 1;                                      // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FName                                       CustomName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                         // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0018
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0008(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bProcessDuringUpdate : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0050
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      bUseEmitterTime : 1;                                      // 0x0008(0x0001) (Edit)
	unsigned char                                      bSpawnTimeOnly : 1;                                       // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TEnumAsByte<EEmitterDynamicParameterValue>         ValueMethod;                                              // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	unsigned char                                      bScaleVelocityByParamValue : 1;                           // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FRawDistributionFloat                       ParamValue;                                               // 0x0018(0x0038) (Edit)
};

// ScriptStruct Engine.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CountLow;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	struct FRotator                                    MinInitialRotation;                                       // 0x0040(0x000C) (IsPlainOldData)
	struct FRotator                                    MaxInitialRotation;                                       // 0x004C(0x000C) (IsPlainOldData)
	struct FRotator                                    RotationRate;                                             // 0x0058(0x000C) (IsPlainOldData)
	float                                              Intensity;                                                // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Tightness;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreComponentTransform : 1;                            // 0x006C(0x0001)
	unsigned char                                      bTileX : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileY : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bTileZ : 1;                                               // 0x006C(0x0001)
	unsigned char                                      bUseFixDT : 1;                                            // 0x006C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.FloatDistribution
// 0x0028
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x02C0
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawn*                        SpawnModule;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UParticleModule*>                     SpawnModules;                                             // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                         // 0x0030(0x0070)
	struct FFloatDistribution                          VectorFieldScale;                                         // 0x00A0(0x0028)
	struct FFloatDistribution                          DragCoefficient;                                          // 0x00C8(0x0028)
	struct FFloatDistribution                          PointAttractorStrength;                                   // 0x00F0(0x0028)
	struct FFloatDistribution                          Resilience;                                               // 0x0118(0x0028)
	struct FVector                                     ConstantAcceleration;                                     // 0x0140(0x000C) (IsPlainOldData)
	struct FVector                                     PointAttractorPosition;                                   // 0x014C(0x000C) (IsPlainOldData)
	float                                              PointAttractorRadiusSq;                                   // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x015C(0x000C) (IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x0168(0x000C) (IsPlainOldData)
	struct FVector2D                                   InvMaxSize;                                               // 0x0174(0x0008) (IsPlainOldData)
	float                                              InvRotationRateScale;                                     // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxLifetime;                                              // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxParticleCount;                                         // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0189(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x018A(0x0002) MISSED OFFSET
	unsigned char                                      bEnableCollision : 1;                                     // 0x018C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	TEnumAsByte<EParticleCollisionMode>                CollisionMode;                                            // 0x0190(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0194(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0195(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRawDistributionVector                      DynamicColor;                                             // 0x01A0(0x0050)
	struct FRawDistributionFloat                       DynamicAlpha;                                             // 0x01F0(0x0038)
	struct FRawDistributionVector                      DynamicColorScale;                                        // 0x0228(0x0050)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                        // 0x0278(0x0038)
	unsigned char                                      UnknownData05[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0160
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedMiscSamples;                                     // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                           // 0x0020(0x0010) (ZeroConstructor)
	struct FVector4                                    ColorScale;                                               // 0x0030(0x0010) (IsPlainOldData)
	struct FVector4                                    ColorBias;                                                // 0x0040(0x0010) (IsPlainOldData)
	struct FVector4                                    MiscScale;                                                // 0x0050(0x0010) (IsPlainOldData)
	struct FVector4                                    MiscBias;                                                 // 0x0060(0x0010) (IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveScale;                                 // 0x0070(0x0010) (IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveBias;                                  // 0x0080(0x0010) (IsPlainOldData)
	struct FVector4                                    SubImageSize;                                             // 0x0090(0x0010) (IsPlainOldData)
	struct FVector4                                    SizeBySpeed;                                              // 0x00A0(0x0010) (IsPlainOldData)
	struct FVector                                     ConstantAcceleration;                                     // 0x00B0(0x000C) (IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                          // 0x00BC(0x000C) (IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                         // 0x00C8(0x000C) (IsPlainOldData)
	struct FVector                                     OrbitFrequencyBase;                                       // 0x00D4(0x000C) (IsPlainOldData)
	struct FVector                                     OrbitFrequencyRange;                                      // 0x00E0(0x000C) (IsPlainOldData)
	struct FVector                                     OrbitPhaseBase;                                           // 0x00EC(0x000C) (IsPlainOldData)
	struct FVector                                     OrbitPhaseRange;                                          // 0x00F8(0x000C) (IsPlainOldData)
	float                                              GlobalVectorFieldScale;                                   // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalVectorFieldTightness;                               // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldScale;                              // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PerParticleVectorFieldBias;                               // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientScale;                                     // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficientBias;                                      // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceScale;                                          // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ResilienceBias;                                           // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusScale;                                     // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadiusBias;                                      // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionTimeBias;                                        // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRandomSpread;                                    // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionRandomDistribution;                              // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OneMinusFriction;                                         // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationRateScale;                                        // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CameraMotionBlurAmount;                                   // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleScreenAlignment>              ScreenAlignment;                                          // 0x0144(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParticleAxisLock>                     LockAxisFlag;                                             // 0x0145(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0146(0x0002) MISSED OFFSET
	struct FVector2D                                   PivotOffset;                                              // 0x0148(0x0008) (IsPlainOldData)
	unsigned char                                      bRemoveHMDRoll : 1;                                       // 0x0150(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0010
struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x0110
struct FPhysicsConstraintProfileHandle
{
	struct FConstraintProfileProperties                ProfileProperties;                                        // 0x0000(0x0104)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FName                                       ProfileName;                                              // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     DisplayDescription;                                       // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     DisplayPrice;                                             // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0018
struct FRigTransformConstraint
{
	TEnumAsByte<EConstraintTransform>                  TranformType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       ParentSpace;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransformBaseConstraint                    Constraints[0x2];                                         // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.Node
// 0x0060
struct FNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ParentName;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	struct FString                                     DisplayName;                                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bAdvanced;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.DestructibleDamageParameters
// 0x001C
struct FDestructibleDamageParameters
{
	float                                              DamageThreshold;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageSpread;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableImpactDamage;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ImpactDamage;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DefaultImpactDamageDepth;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCustomImpactResistance;                                  // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              ImpactResistance;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisLifetimeMax;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisMaxSeparationMin;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisMaxSeparationMax;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox                                        ValidBounds;                                              // 0x0010(0x001C) (Edit, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactVelocityThreshold;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxChunkSpeed;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FractureImpulseScale;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleSpecialHierarchyDepths
// 0x0014
struct FDestructibleSpecialHierarchyDepths
{
	int                                                SupportDepth;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractureDepth;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebris;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                DebrisDepth;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EssentialDepth;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      bAccumulateDamage : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bAssetDefinedSupport : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bWorldSupport : 1;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bDebrisTimeout : 1;                                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bDebrisMaxSeparation : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bCrumbleSmallestChunks : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bAccurateRaycasts : 1;                                    // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseValidBounds : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bFormExtendedStructures : 1;                              // 0x0001(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.DestructibleParameters
// 0x0088
struct FDestructibleParameters
{
	struct FDestructibleDamageParameters               DamageParameters;                                         // 0x0000(0x001C) (Edit)
	struct FDestructibleDebrisParameters               DebrisParameters;                                         // 0x001C(0x002C) (Edit)
	struct FDestructibleAdvancedParameters             AdvancedParameters;                                       // 0x0048(0x0010) (Edit)
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                                   // 0x0058(0x0014) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                          // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FDestructibleParametersFlag                 Flags;                                                    // 0x0080(0x0004) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x0190
struct FSkeletalMeshLODGroupSettings
{
	float                                              ScreenSize;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSkeletalMeshOptimizationSettings           OptimizationSettings;                                     // 0x0008(0x0188) (Edit)
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	TEnumAsByte<ESoundGroup>                           SoundGroup;                                               // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0008(0x0010) (ZeroConstructor, Config)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                              // 0x0018(0x0001) (Config)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              DecompressedDuration;                                     // 0x001C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
};

// ScriptStruct Engine.SoundClassProperties
// 0x002C
struct FSoundClassProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StereoBleed;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LFEBleed;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VoiceCenterChannelVolume;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolume;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadioFilterVolumeThreshold;                               // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyEffects : 1;                                        // 0x001C(0x0001) (Edit)
	unsigned char                                      bAlwaysPlay : 1;                                          // 0x001C(0x0001) (Edit)
	unsigned char                                      bIsUISound : 1;                                           // 0x001C(0x0001) (Edit)
	unsigned char                                      bIsMusic : 1;                                             // 0x001C(0x0001) (Edit)
	unsigned char                                      bReverb : 1;                                              // 0x001C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              Default2DReverbSendAmount;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCenterChannelOnly : 1;                                   // 0x0024(0x0001) (Edit)
	unsigned char                                      bApplyAmbientVolumes : 1;                                 // 0x0024(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	TEnumAsByte<EAudioOutputTarget>                    OutputTarget;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinVolumeThreshold;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVolumeThreshold;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SourceEffectChainEntry
// 0x0010
struct FSourceEffectChainEntry
{
	class USoundEffectSourcePreset*                    Preset;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bBypass : 1;                                              // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AudioEQEffect
// 0x0038
struct FAudioEQEffect
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FrequencyCenter0;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain0;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth0;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter1;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain1;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth1;                                               // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter2;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain2;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth2;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrequencyCenter3;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain3;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth3;                                               // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0018
struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeAdjuster;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchAdjuster;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bApplyToChildren : 1;                                     // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              VoiceCenterChannelVolumeAdjuster;                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDialogueContext                            Context;                                                  // 0x0008(0x0018) (Edit)
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDistanceEnd;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceStart;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDistanceEnd;                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInput;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInput;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinOutput;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxOutput;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EModulationParamMode>                  ParamMode;                                                // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.StaticMaterial
// 0x0028
struct FStaticMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       MaterialSlotName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                            // 0x0010(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0024
struct FSubsurfaceProfileStruct
{
	float                                              ScatterRadius;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SubsurfaceColor;                                          // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                FalloffColor;                                             // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct Engine.VectorDistribution
// 0x0028
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028)
};

// ScriptStruct Engine.Vector4Distribution
// 0x0028
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                                    // 0x0000(0x0028)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// 0x0008
struct FFloatRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// 0x0008
struct FVectorRK4SpringInterpolator
{
	float                                              StiffnessConstant;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampeningRatio;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0020
struct FBranchingPointNotifyPayload
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlatformInterfaceDataType>            Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FloatValue;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     StringValue;                                              // 0x0018(0x0010) (ZeroConstructor)
	class UObject*                                     ObjectValue;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	bool                                               bSuccessful;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPlatformInterfaceData                      Data;                                                     // 0x0008(0x0030)
};

// ScriptStruct Engine.AttackId
// 0x0004
struct FAttackId
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DamageEvent
// 0x0018
struct FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FAttackId                                   AttackId;                                                 // 0x0008(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FastArraySerializer
// 0x00B0
struct FFastArraySerializer
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x000C
struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                ReplicationKey;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MostRecentArrayReplicationKey;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                          // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                                // 0x0004(0x0010) (BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   GlowOuterRadius;                                          // 0x0014(0x0008) (BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   GlowInnerRadius;                                          // 0x001C(0x0008) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                            // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      bEnableShadow : 1;                                        // 0x0000(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FDepthFieldGlowInfo                         GlowInfo;                                                 // 0x0004(0x0024) (BlueprintVisible)
};

// ScriptStruct Engine.ComponentReference
// 0x0018
struct FComponentReference
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       ComponentProperty;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DelayDamageEvent
// 0x0010 (0x0028 - 0x0018)
struct FDelayDamageEvent : public FDamageEvent
{
	struct FVector                                     DamageStartLocation;                                      // 0x0018(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              BaseDamage;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageFalloff;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0058 - 0x0028)
struct FRadialDamageEvent : public FDelayDamageEvent
{
	struct FRadialDamageParams                         Params;                                                   // 0x0028(0x0014)
	struct FVector                                     Origin;                                                   // 0x003C(0x000C) (IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                            // 0x0048(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.PointDamageEvent
// 0x0098 (0x00B0 - 0x0018)
struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShotDirection;                                            // 0x001C(0x000C)
	struct FHitResult                                  HitInfo;                                                  // 0x0028(0x0088) (IsPlainOldData)
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0040
struct FMeshBuildSettings
{
	bool                                               bUseMikkTSpace;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecomputeNormals;                                        // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecomputeTangents;                                       // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDegenerates;                                       // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBuildAdjacencyBuffer;                                    // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBuildReversedIndexBuffer;                                // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHighPrecisionTangentBasis;                            // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFullPrecisionUVs;                                     // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateLightmapUVs;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MinLightmapResolution;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SrcLightmapIndex;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BuildScale;                                               // 0x0018(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     BuildScale3D;                                             // 0x001C(0x000C) (Edit, IsPlainOldData)
	float                                              DistanceFieldResolutionScale;                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateDistanceFieldAsIfTwoSided;                       // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              DistanceFieldBias;                                        // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0088
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	int                                                UpdateRate;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EvaluationRate;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInterpolateSkippedFrames;                                // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldUseLodMap;                                         // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSkipUpdate;                                              // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSkipEvaluation;                                          // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              TickedPoseOffestTime;                                     // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AdditionalTime;                                           // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
	int                                                BaseNonRenderedUpdateRate;                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;                       // 0x0020(0x0010) (ZeroConstructor)
	TMap<int, int>                                     LODToFrameSkipMap;                                        // 0x0030(0x0050) (ZeroConstructor)
	int                                                MaxEvalRateForInterpolation;                              // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	EUpdateRateShiftBucket                             ShiftBucket;                                              // 0x0084(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotDesc
// 0x0010
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumChannels;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ChannelWeights;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (IsPlainOldData)
	float                                              Distance;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                         // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceContentExport : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bInitialized : 1;                                         // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStatsEnabled : 1;                                        // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CoplanarTolerance;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseImmediateImport : 1;                                  // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bImmediateProcessMappings : 1;                            // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSortMappings : 1;                                        // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDumpBinaryFiles : 1;                                     // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDebugMaterials : 1;                                      // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bPadMappings : 1;                                         // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDebugPaddings : 1;                                       // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                          // 0x0008(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseRandomColors : 1;                                     // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bColorBordersGreen : 1;                                   // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bColorByExecutionTime : 1;                                // 0x0009(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	float                                              ExecutionTimeDivisor;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CachedBaseLocation;                                       // 0x0014(0x000C) (IsPlainOldData)
	struct FRotator                                    CachedBaseRotation;                                       // 0x0020(0x000C) (IsPlainOldData)
	struct FVector                                     CachedTransPosition;                                      // 0x002C(0x000C) (IsPlainOldData)
};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0070 - 0x0058)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                                     // 0x0058(0x0010) (Edit, ZeroConstructor)
	int                                                DefaultValue;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultValueBeforeFirstKey;                           // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.StringCurveKey
// 0x0018
struct FStringCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.StringCurve
// 0x0020 (0x0078 - 0x0058)
struct FStringCurve : public FIndexedCurve
{
	struct FString                                     DefaultValue;                                             // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<struct FStringCurveKey>                     Keys;                                                     // 0x0068(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x000C
struct FAnimationRecordingSettings
{
	bool                                               bRecordInWorldSpace;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveRootAnimation;                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSaveAsset;                                           // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              SampleRate;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ComponentSpacePose
// 0x0020
struct FComponentSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.LocalSpacePose
// 0x0020
struct FLocalSpacePose
{
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Names;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.NamedTransform
// 0x0040
struct FNamedTransform
{
	struct FTransform                                  Value;                                                    // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NamedColor
// 0x0010
struct FNamedColor
{
	struct FColor                                      Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedVector
// 0x0018
struct FNamedVector
{
	struct FVector                                     Value;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NamedFloat
// 0x0010
struct FNamedFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0080
struct FExposedValueCopyRecord
{
	class UProperty*                                   SourceProperty;                                           // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       SourcePropertyName;                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSubPropertyName;                                    // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SourceArrayIndex;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UProperty*                                   DestProperty;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                DestArrayIndex;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInstanceIsTarget;                                        // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	EPostCopyOperation                                 PostCopyOperation;                                        // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class UBoolProperty*                               CachedBoolSourceProperty;                                 // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBoolProperty*                               CachedBoolDestProperty;                                   // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UStructProperty*                             CachedStructDestProperty;                                 // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObjectProperty*                             CachedObjectSourceProperty;                               // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UProperty*                                   CachedObjectSubProperty;                                  // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0060(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0028
struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                              // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Base
// 0x0030
struct FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FExposedValueHandler                        EvaluateGraphExposedInputs;                               // 0x0008(0x0028)
};

// ScriptStruct Engine.PoseLinkBase
// 0x0018
struct FPoseLinkBase
{
	int                                                LinkID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0018 - 0x0018)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0018 - 0x0018)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.InputAlphaBoolBlend
// 0x0050
struct FInputAlphaBoolBlend
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendOption;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0009(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 AlphaBlend;                                               // 0x0018(0x0038) (Transient)
};

// ScriptStruct Engine.InputRange
// 0x0008
struct FInputRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputScaleBiasClamp
// 0x0030
struct FInputScaleBiasClamp
{
	bool                                               bMapRange;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClampResult;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInterpResult;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0003(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	struct FInputRange                                 InRange;                                                  // 0x0004(0x0008) (Edit, BlueprintVisible)
	struct FInputRange                                 OutRange;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible)
	float                                              Scale;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMin;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClampMax;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedIncreasing;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeedDecreasing;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolatedResult;                                       // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bias;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x00D8 (0x0108 - 0x0030)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0048(0x0018) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0064(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EAnimAlphaInputType                                AlphaInputType;                                           // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              ALPHA;                                                    // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0070(0x0008) (Edit, BlueprintVisible)
	bool                                               bAlphaBoolEnabled;                                        // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0080(0x0050) (Edit, BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x00D8(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	bool                                               bIgnoreForRelevancyTest;                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                GroupIndex;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                              // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              InternalTimeAccumulator;                                  // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x0044(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   Pose;                                                     // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FName                                       CachePoseName;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              GlobalWeight;                                             // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8C];                                      // 0x0054(0x008C) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxTransitionsPerFrame;                                   // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipFirstUpdateTransition;                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0039(0x000F) MISSED OFFSET
	int                                                CurrentState;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x90];                                      // 0x0050(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0030
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x00D0
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
	class UBlendProfile*                               BlendProfile;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0098(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInput
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_SubInput : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInstance
// 0x0098 (0x00C8 - 0x0030)
struct FAnimNode_SubInstance : public FAnimNode_Base
{
	struct FPoseLink                                   InPose;                                                   // 0x0030(0x0018)
	class UClass*                                      InstanceClass;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimInstance*                               InstanceToRun;                                            // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UProperty*>                           InstanceProperties;                                       // 0x0058(0x0010) (ZeroConstructor, Transient)
	TArray<class UProperty*>                           SubInstanceProperties;                                    // 0x0068(0x0010) (ZeroConstructor, Transient)
	TArray<struct FName>                               SourcePropertyNames;                                      // 0x0078(0x0010) (ZeroConstructor)
	TArray<struct FName>                               DestPropertyNames;                                        // 0x0088(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	TEnumAsByte<EEvaluatorDataSource>                  DataSource;                                               // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEvaluatorMode>                        EvaluatorMode;                                            // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	int                                                FramesToCachePose;                                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0038(0x0038) MISSED OFFSET
	int                                                CacheFramesRemaining;                                     // 0x0070(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	bool                                               bCanEnterTransition;                                      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0031(0x004F) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0020 (0x0050 - 0x0030)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                        // 0x0030(0x0018)
	struct FName                                       CachePoseName;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                                // 0x0030(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0030(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.NameCurveKey
// 0x0010
struct FNameCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Value;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0068 - 0x0058)
struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                                     // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MemberScope;                                              // 0x0008(0x0010) (ZeroConstructor)
	struct FName                                       MemberName;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       MemberGuid;                                               // 0x0020(0x0010) (IsPlainOldData)
	bool                                               bSelfContext;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasDeprecated;                                           // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.AnimInstanceProxy
// 0x0510
struct FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x510];                                     // 0x0000(0x0510) MISSED OFFSET
};

// ScriptStruct Engine.QueuedDrawDebugItem
// 0x0068
struct FQueuedDrawDebugItem
{
	TEnumAsByte<EDrawDebugItemType>                    ItemType;                                                 // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     StartLoc;                                                 // 0x0004(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     EndLoc;                                                   // 0x0010(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     Center;                                                   // 0x001C(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0028(0x000C) (Transient, IsPlainOldData)
	float                                              Radius;                                                   // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Size;                                                     // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                Segments;                                                 // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0040(0x0004) (Transient, IsPlainOldData)
	bool                                               bPersistentLines;                                         // 0x0044(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Thickness;                                                // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     Message;                                                  // 0x0050(0x0010) (ZeroConstructor, Transient)
	struct FVector2D                                   TextScale;                                                // 0x0060(0x0008) (Transient, IsPlainOldData)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0180 (0x0690 - 0x0510)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x180];                                     // 0x0510(0x0180) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SingleNode
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_SingleNode : public FAnimNode_Base
{
	struct FPoseLink                                   SourcePose;                                               // 0x0030(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MaterialClipPlane
// 0x0020
struct FMaterialClipPlane
{
	struct FVector4                                    Plane;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PlaneOffsetOutside;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.MaterialClipPlaneSoft
// 0x0050
struct FMaterialClipPlaneSoft
{
	struct FVector4                                    Plane;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   PlaneOffset;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FVector4                                    PlaneRadiusXYInOut;                                       // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector4                                    FadeRangeXYInOut;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   UprightMulAdd;                                            // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bAdditive;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialClipVolumeImportance>         SoftPlaneImportance;                                      // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct Engine.MaterialClipPlaneSoftEx
// 0x0020 (0x0070 - 0x0050)
struct FMaterialClipPlaneSoftEx : public FMaterialClipPlaneSoft
{
	struct FVector                                     PlaneX;                                                   // 0x0050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlaneY;                                                   // 0x005C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ScopeSettings
// 0x00C0
struct FScopeSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              BlurLevel;                                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthBlurPower;                                           // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthBlurBlackPoint;                                      // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthBlurWhitePoint;                                      // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScopeRadiusNear;                                          // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScopeRadiusFar;                                           // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScopeEllipseRatio;                                        // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bReverseScopeMask : 1;                                    // 0x0020(0x0001) (BlueprintVisible)
	unsigned char                                      bReticleExtendTextureBorder : 1;                          // 0x0020(0x0001) (BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              ReticleAngularSize;                                       // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReticleTextureCenter;                                     // 0x0028(0x0008) (BlueprintVisible, IsPlainOldData)
	float                                              ReticleGamma;                                             // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReticleTint;                                              // 0x0034(0x0010) (BlueprintVisible, IsPlainOldData)
	float                                              LensDistortion;                                           // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LensCA;                                                   // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterBrightness;                                          // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LensTint;                                                 // 0x0050(0x0010) (BlueprintVisible, IsPlainOldData)
	float                                              ParallaxMovementScale;                                    // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParallaxRadiusScale;                                      // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ScopeCenterNear;                                          // 0x0068(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     ScopeCenterFar;                                           // 0x0074(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     ReticleCenter;                                            // 0x0080(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     ReticleUp;                                                // 0x008C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ReticleRect;                                              // 0x0098(0x0008) (BlueprintVisible, IsPlainOldData)
	class UTexture2D*                                  ReticleTexture;                                           // 0x00A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	struct FVector4                                    ReticleBrightSceneVisibilityMultipliers;                  // 0x00B0(0x0010) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Engine.AnimCurveParam
// 0x0010
struct FAnimCurveParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.Axis
// 0x0010
struct FAxis
{
	struct FVector                                     Axis;                                                     // 0x0000(0x000C) (Edit, IsPlainOldData)
	bool                                               bInLocalSpace;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (IsPlainOldData)
	float                                              PointSize;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (IsPlainOldData)
	float                                              Thickness;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingLifeTime;                                        // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode
// 0x0028
struct FClusterNode
{
	struct FVector                                     BoundMin;                                                 // 0x0000(0x000C) (IsPlainOldData)
	int                                                FirstChild;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoundMax;                                                 // 0x0010(0x000C) (IsPlainOldData)
	int                                                LastChild;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstInstance;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastInstance;                                             // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
	float                                              Mins[0x3];                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Ranges[0x3];                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      CurveWeights;                                             // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      Times;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FQuat>                               RotKeys;                                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             ScaleKeys;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FName>                               TrackNames;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                              // 0x0000(0x0018)
	float                                              BlendWeight;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               TransitionReturnVal;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                TransitionIndex;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                StateRootNodeIndex;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StartNotify;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EndNotify;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FullyBlendedNotify;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0040
struct FSlotEvaluationPose
{
	TEnumAsByte<EAdditiveAnimationType>                AdditiveType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ComponentSpaceFlags;                                      // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0018
struct FEditedDocumentInfo
{
	class UObject*                                     EditedObject;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SavedViewOffset;                                          // 0x0008(0x0008) (IsPlainOldData)
	float                                              SavedZoomAmount;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UEdGraph*>                            Graphs;                                                   // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BPVariableDescription
// 0x00F8
struct FBPVariableDescription
{
	struct FName                                       VarName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       VarGuid;                                                  // 0x0008(0x0010) (IsPlainOldData)
	struct FEdGraphPinType                             VarType;                                                  // 0x0018(0x0080) (Edit)
	struct FString                                     FriendlyName;                                             // 0x0098(0x0010) (Edit, ZeroConstructor)
	struct FText                                       Category;                                                 // 0x00A8(0x0018) (Edit)
	uint64_t                                           PropertyFlags;                                            // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RepNotifyFunc;                                            // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELifetimeCondition>                    ReplicationCondition;                                     // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                            // 0x00D8(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DefaultValue;                                             // 0x00E8(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// 0x0001
struct FBlueprintMacroCosmeticInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CompilerNativizationOptions
// 0x0080
struct FCompilerNativizationOptions
{
	struct FName                                       PlatformName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               ServerOnlyPlatform;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ClientOnlyPlatform;                                       // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	TArray<struct FName>                               ExcludedModules;                                          // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty Engine.CompilerNativizationOptions.ExcludedAssets
	TArray<struct FString>                             ExcludedFolderPaths;                                      // 0x0070(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ParentNodeGuid;                                           // 0x0008(0x0010) (IsPlainOldData)
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColumnName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowContents;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                          // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     ContactNormal;                                            // 0x000C(0x000C) (IsPlainOldData)
	float                                              ContactPenetration;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                        // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                                       // 0x0010(0x000C) (IsPlainOldData)
	struct FVector                                     TotalFrictionImpulse;                                     // 0x001C(0x000C) (IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                 // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                               // 0x0010(0x0010) (IsPlainOldData)
	struct FVector_NetQuantize100                      LinVel;                                                   // 0x0020(0x000C)
	struct FVector_NetQuantize100                      AngVel;                                                   // 0x002C(0x000C)
	unsigned char                                      Flags;                                                    // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	int                                                LogOffset;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFixed;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.URL
// 0x0070
struct FURL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Host;                                                     // 0x0010(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Map;                                                      // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     RedirectURL;                                              // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Op;                                                       // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     Portal;                                                   // 0x0058(0x0010) (ZeroConstructor)
	int                                                Valid;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinReference
// 0x0018
struct FEdGraphPinReference
{
	TWeakObjectPtr<class UEdGraphNode>                 OwningNode;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       PinId;                                                    // 0x0008(0x0010) (IsPlainOldData)
};

// ScriptStruct Engine.MeshMergingSettings
// 0x00D4
struct FMeshMergingSettings
{
	bool                                               bGenerateLightMapUV;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TargetLightMapResolution;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bImportVertexColors;                                      // 0x0008(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bPivotPointAtZero;                                        // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMergePhysicsData;                                        // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAssignLODGroup;                                          // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LODGroupIndex;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMergeMaterials;                                          // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceUniqueUVGeneration;                                 // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FMaterialProxySettings                      MaterialSettings;                                         // 0x0014(0x009C) (Edit, BlueprintVisible)
	bool                                               bBakeVertexDataToMesh;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseVertexDataForBakingMaterial;                          // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTextureBinning;                                       // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCalculateCorrectLODModel;                                // 0x00B3(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	EMeshLODSelectionType                              LODSelectionType;                                         // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	int                                                ExportSpecificLOD;                                        // 0x00B8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                SpecificLOD;                                              // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeCulling;                                     // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              MinimalBoundsSize;                                        // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bExportNormalMap;                                         // 0x00C8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportMetallicMap;                                       // 0x00C9(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportRoughnessMap;                                      // 0x00CA(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExportSpecularMap;                                       // 0x00CB(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MergedMaterialAtlasResolution;                            // 0x00CC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00D0(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MeshReductionSettings
// 0x0158
struct FMeshReductionSettings
{
	int                                                BaseLODModel;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EOptimizationMetric                                MetricToUse;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              PercentTriangles;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScreenSize;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviation;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PixelError;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                SilhouetteImportance;                                     // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                TextureImportance;                                        // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                ShadingImportance;                                        // 0x001E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                VertexColorImportance;                                    // 0x001F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PercentVertices;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRecalculateNormals;                                      // 0x0024(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              HardAngleThreshold;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x002C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateUniqueLightmapUVs;                               // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepSymmetry;                                            // 0x002E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bVisibilityAided;                                         // 0x002F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCullOccluded;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EStaticMeshReductionTerimationCriterion            TerminationCriterion;                                     // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMeshFeatureImportance>                VisibilityAggressiveness;                                 // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseVertexWeights;                                        // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSimplifyMaterials;                                       // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                                      // 0x0038(0x0080) (Deprecated)
	struct FMaterialProxySettings                      MaterialProxySettings;                                    // 0x00B8(0x009C) (Edit)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x0168
struct FLevelSimplificationDetails
{
	bool                                               bCreatePackagePerAsset;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DetailsPercentage;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MergeDistance;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleRatioForIndoor;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MergeBoldness;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	EPhysXAggregationMode                              PhysXAggregationMode;                                     // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              MaxTriangleSize;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      StaticMeshMaterialSettings;                               // 0x001C(0x009C) (Edit)
	bool                                               bOverrideLandscapeExportLOD;                              // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	int                                                LandscapeExportLOD;                                       // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMaterialProxySettings                      LandscapeMaterialSettings;                                // 0x00C0(0x009C) (Edit)
	bool                                               bBakeFoliageToLandscape;                                  // 0x015C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBakeGrassToLandscape;                                    // 0x015D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGenerateMeshNormalMap;                                   // 0x015E(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshMetallicMap;                                 // 0x015F(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshRoughnessMap;                                // 0x0160(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateMeshSpecularMap;                                 // 0x0161(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeNormalMap;                              // 0x0162(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeMetallicMap;                            // 0x0163(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeRoughnessMap;                           // 0x0164(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bGenerateLandscapeSpecularMap;                            // 0x0165(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUseLandscapeCulling;                                     // 0x0166(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCullingPrecision>            LandscapeCullingPrecision;                                // 0x0167(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0028
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0010 (0x0038 - 0x0028)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	class UTexture2D*                                  Texture;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAttached;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              OriginalRadius;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LatentActionManager
// 0x00F0
struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Engine.PlayerMuteList
// 0x0038
struct FPlayerMuteList
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
	bool                                               bHasVoiceHandshakeCompleted;                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                VoiceChannelIdx;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x01E8
struct FHierarchicalSimplification
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              TransitionScreenSize;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSimplifyMesh;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FMeshProxySettings                          ProxySetting;                                             // 0x000C(0x00FC) (Edit)
	struct FMeshMergingSettings                        MergeSetting;                                             // 0x0108(0x00D4) (Edit)
	float                                              DesiredBoundRadius;                                       // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFillingPercentage;                                 // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinNumberOfActorsToBuild;                                 // 0x01E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StreamingTexturePrimitiveInfo
// 0x0030
struct FStreamingTexturePrimitiveInfo
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0008(0x001C) (IsPlainOldData)
	float                                              TexelFactor;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PackedRelativeBox;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0038
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018)
	struct FText                                       Description;                                              // 0x0020(0x0018)
};

// ScriptStruct Engine.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0030
struct FPreviewAttachedObjectPair
{
	TAssetPtr<class UObject>                           AttachedObject;                                           // 0x0000(0x0020)
	class UObject*                                     Object;                                                   // 0x0020(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       AttachedTo;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0038
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TrackColor;                                               // 0x0008(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendWeight;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// 0x0050
struct FSkeletalMeshClothBuildParams
{
	struct FString                                     AssetName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	int                                                LODIndex;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SourceSection;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveFromMesh;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TAssetPtr<class UPhysicsAsset>                     PhysicsAsset;                                             // 0x0020(0x0020) (Edit)
	bool                                               bTryAutoFix;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              AutoFixThreshold;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SimulatedParticleMaxDistance;                             // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0018
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceBoneName;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneFlipAxis;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimationGroupReference
// 0x0010
struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimGroupRole>                        GroupRole;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0080
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.AnimTickRecord
// 0x0048
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0090
struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.BlendSampleData
// 0x0040
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               Animation;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TotalWeight;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x001C(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0001
struct FRootMotionSourceStatus
{
	unsigned char                                      Flags;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// 0x0014
struct FRootMotionFinishVelocitySettings
{
	ERootMotionFinishVelocityMode                      Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     SetVelocity;                                              // 0x0004(0x000C) (IsPlainOldData)
	float                                              ClampVelocity;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource
// 0x00A0
struct FRootMotionSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	uint16_t                                           Priority;                                                 // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           LocalID;                                                  // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	ERootMotionAccumulateMode                          AccumulateMode;                                           // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentTime;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PreviousTime;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRootMotionSourceStatus                     Status;                                                   // 0x0030(0x0001)
	struct FRootMotionSourceSettings                   Settings;                                                 // 0x0031(0x0001)
	bool                                               bInLocalSpace;                                            // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0033(0x000D) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                         // 0x0040(0x0040)
	struct FRootMotionFinishVelocitySettings           FinishVelocityParams;                                     // 0x0080(0x0014)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0094(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
	struct FRotator                                    Rotation;                                                 // 0x0098(0x000C) (IsPlainOldData)
	float                                              Distance;                                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDisableTimeout;                                          // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x0098(0x000C) (IsPlainOldData)
	struct FVector                                     InitialTargetLocation;                                    // 0x00A4(0x000C) (IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00B0(0x000C) (IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0020 (0x00C0 - 0x00A0)
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                            // 0x0098(0x000C) (IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x00A4(0x000C) (IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0040 (0x00E0 - 0x00A0)
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	struct FVector                                     Location;                                                 // 0x0098(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class AActor*                                      LocationActor;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPush;                                                  // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bNoZForce;                                                // 0x00B9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                                      // 0x00D4(0x000C) (IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0010 (0x00B0 - 0x00A0)
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	struct FVector                                     force;                                                    // 0x0098(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 StrengthOverTime;                                         // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.SmartNameMapping
// 0x00F8
struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct Engine.CurveMetaData
// 0x0018
struct FCurveMetaData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveType
// 0x0002
struct FAnimCurveType
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNameMapping>                        BoneMappingTable;                                         // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	struct FName                                       PoseName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReferencePose;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.VectorCurve
// 0x0150 (0x0170 - 0x0020)
struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                         // 0x0020(0x0070)
};

// ScriptStruct Engine.TransformCurve
// 0x0450 (0x0470 - 0x0020)
struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                         // 0x0020(0x0170)
	struct FVectorCurve                                RotationCurve;                                            // 0x0190(0x0170)
	struct FVectorCurve                                ScaleCurve;                                               // 0x0300(0x0170)
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndPosition;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimMontageInstance
// 0x01D0
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0008(0x00C8) MISSED OFFSET
	bool                                               bPlaying;                                                 // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              DefaultBlendTimeMultiplier;                               // 0x00D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00D8(0x0028) MISSED OFFSET
	TArray<int>                                        NextSections;                                             // 0x0100(0x0010) (ZeroConstructor)
	TArray<int>                                        PrevSections;                                             // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                               // 0x0130(0x0010) (ZeroConstructor, Transient)
	float                                              Position;                                                 // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 Blend;                                                    // 0x0148(0x0038) (Transient)
	unsigned char                                      UnknownData04[0x20];                                      // 0x0180(0x0020) MISSED OFFSET
	int                                                DisableRootMotionCount;                                   // 0x01A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2C];                                      // 0x01A4(0x002C) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x01E0
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0000(0x01E0) MISSED OFFSET
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FVector2D                                   LineExtent;                                               // 0x0010(0x0008) (IsPlainOldData)
};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawY;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawXL;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawYL;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scaling;                                                  // 0x0010(0x0008) (IsPlainOldData)
	class UFont*                                       DrawFont;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpacingAdjust;                                            // 0x0020(0x0008) (IsPlainOldData)
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        AutoCompleteListIndices;                                  // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x01C8
struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                         // 0x0000(0x0070)
	class UCurveLinearColor*                           ExternalCurve;                                            // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlueprint*                                  GraphBlueprint;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       GraphGuid;                                                // 0x0010(0x0010) (IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x0100
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FText                                       MenuDescription;                                          // 0x0008(0x0018)
	struct FText                                       TooltipDescription;                                       // 0x0020(0x0018)
	struct FText                                       Category;                                                 // 0x0038(0x0018)
	struct FText                                       Keywords;                                                 // 0x0050(0x0018)
	int                                                Grouping;                                                 // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionID;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MenuDescriptionArray;                                     // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchTitlesArray;                                    // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchKeywordsArray;                                  // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FString>                             FullSearchCategoryArray;                                  // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedMenuDescriptionArray;                            // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchTitlesArray;                           // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchKeywordsArray;                         // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FString>                             LocalizedFullSearchCategoryArray;                         // 0x00E0(0x0010) (ZeroConstructor)
	struct FString                                     SearchText;                                               // 0x00F0(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x0108 - 0x0100)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                             // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StartAsyncSimulationFunction
// 0x0008 (0x0058 - 0x0050)
struct FStartAsyncSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                              // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    CamRotation;                                              // 0x000C(0x000C) (IsPlainOldData)
	float                                              CamOrthoZoom;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CamUpdated;                                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.ScreenMessageString
// 0x0030
struct FScreenMessageString
{
	uint64_t                                           Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     ScreenMessage;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
	struct FColor                                      DisplayColor;                                             // 0x0018(0x0004) (Transient, IsPlainOldData)
	float                                              TimeToDisplay;                                            // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentTimeDisplayed;                                     // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   TextScale;                                                // 0x0024(0x0008) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                                      // 0x0008(0x0001)
	unsigned char                                      bShouldBeVisible : 1;                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           LODIndex;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<EFullyLoadPackageType>                 FullyLoadType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Tag;                                                      // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               PackagesToLoad;                                           // 0x0018(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             LoadedObjects;                                            // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x02A8
struct FWorldContext
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;                       // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                                      // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                        // 0x0048(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0058(0x0008) UNKNOWN PROPERTY: EncryptedObjectProperty Engine.WorldContext.GameViewport
	unsigned char                                      UnknownData04[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                          // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                         // 0x0090(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData06[0x28];                                      // 0x00A0(0x0028) MISSED OFFSET
	class UPendingNetGame*                             PendingNetGame;                                           // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC8];                                      // 0x00D0(0x00C8) MISSED OFFSET
	struct FURL                                        LastURL;                                                  // 0x0198(0x0070)
	struct FURL                                        LastRemoteURL;                                            // 0x0208(0x0070)
	unsigned char                                      UnknownData08[0x18];                                      // 0x0278(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData09[0x8];                                       // 0x0278(0x0008) UNKNOWN PROPERTY: EncryptedObjectProperty Engine.WorldContext.OwningGameInstance
	unsigned char                                      UnknownData10[0x10];                                      // 0x0298(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0018
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BlockInput_Action
// 0x0010
struct FBlockInput_Action
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           KeyEvent;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInterpTrack*                                Track;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                KeyIndex;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              UnsnappedPosition;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSeq;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, EditConst, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, EditConst, IsPlainOldData)
	class APawn*                                       PawnInst;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        TrackIndices;                                             // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                         // 0x0020(0x0001)
	unsigned char                                      bIsSelected : 1;                                          // 0x0020(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SubTrackName;                                             // 0x0008(0x0010) (ZeroConstructor)
	int                                                GroupIndex;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MessageType;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MessageIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MessageString;                                            // 0x0018(0x0010) (ZeroConstructor)
	class APlayerState*                                RelatedPlayerState;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerState*                                RelatedPlayerState02;                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0014
struct FPacketSimulationSettings
{
	int                                                PktLoss;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktOrder;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktDup;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLag;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PktLagVariance;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LevelNameAndTime
// 0x0018
struct FLevelNameAndTime
{
	struct FString                                     LevelName;                                                // 0x0000(0x0010) (ZeroConstructor)
	uint32_t                                           LevelChangeTimeInMS;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x0010) (ZeroConstructor)
	class UObject*                                     CurveObject;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BeamTargetData
// 0x0010
struct FBeamTargetData
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetPercentage;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TexturePlatformData
// 0x0020
struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.TextureSource
// 0x0088
struct FTextureSource
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.MaterialRemapIndex
// 0x0018
struct FMaterialRemapIndex
{
	uint32_t                                           ImportVersionKey;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        MaterialRemap;                                            // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	bool                                               bIsSet;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     CamOrbitPoint;                                            // 0x0004(0x000C) (IsPlainOldData)
	struct FVector                                     CamOrbitZoom;                                             // 0x0010(0x000C) (IsPlainOldData)
	struct FRotator                                    CamOrbitRotation;                                         // 0x001C(0x000C) (IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCastShadow;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideIndoorOutdoorMask;                               // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IndoorOutdoorMask;                                        // 0x0007(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	TMap<uint32_t, struct FMeshSectionInfo>            Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Engine.MeshSectionInfoDataBase
// 0x0050
struct FMeshSectionInfoDataBase
{
	TMap<struct FString, struct FMeshSectionInfoMap>   Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct Engine.MeshSectionInfoKey
// 0x0004
struct FMeshSectionInfoKey
{
	uint16_t                                           LODIndex;                                                 // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           SectionIndex;                                             // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GroupedStaticMeshOptimizationSettings
// 0x0260
struct FGroupedStaticMeshOptimizationSettings
{
	EStaticMeshLODType                                 LevelOfDetailType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FMeshReductionSettings                      ReductionSettings;                                        // 0x0008(0x0158) (Edit)
	struct FMeshProxySettings                          ProxySettings;                                            // 0x0160(0x00FC) (Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x04B0
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                            // 0x0000(0x0040) (Edit)
	struct FMeshReductionSettings                      ReductionSettings;                                        // 0x0040(0x0158)
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                        // 0x0198(0x00A8) (Deprecated)
	bool                                               bHasBeenSimplified;                                       // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FGroupedStaticMeshOptimizationSettings      OptimizationSettings;                                     // 0x0248(0x0260) (Edit)
	float                                              LODDistance;                                              // 0x04A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ScreenSize;                                               // 0x04AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<EOptimizationType>                     ReductionMethod;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxDeviationPercentage;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeldingThreshold;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecalcNormals;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SilhouetteImportance;                                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TextureImportance;                                        // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShadingImportance;                                        // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
