#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Paper2D_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
struct UPaperFlipbook_IsValidKeyFrameIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetTotalDuration
struct UPaperFlipbook_GetTotalDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetSpriteAtTime
struct UPaperFlipbook_GetSpriteAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClampToEnds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPaperSprite*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
struct UPaperFlipbook_GetSpriteAtFrame_Params
{
	int                                                FrameIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPaperSprite*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetNumKeyFrames
struct UPaperFlipbook_GetNumKeyFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetNumFrames
struct UPaperFlipbook_GetNumFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
struct UPaperFlipbook_GetKeyFrameIndexAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClampToEnds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.Stop
struct UPaperFlipbookComponent_Stop_Params
{
};

// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
struct UPaperFlipbookComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetPlayRate
struct UPaperFlipbookComponent_SetPlayRate_Params
{
	float                                              NewRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
struct UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params
{
	int                                                NewFramePosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
struct UPaperFlipbookComponent_SetPlaybackPosition_Params
{
	float                                              NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetNewTime
struct UPaperFlipbookComponent_SetNewTime_Params
{
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetLooping
struct UPaperFlipbookComponent_SetLooping_Params
{
	bool                                               bNewLooping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.SetFlipbook
struct UPaperFlipbookComponent_SetFlipbook_Params
{
	class UPaperFlipbook*                              NewFlipbook;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
struct UPaperFlipbookComponent_ReverseFromEnd_Params
{
};

// Function Paper2D.PaperFlipbookComponent.Reverse
struct UPaperFlipbookComponent_Reverse_Params
{
};

// Function Paper2D.PaperFlipbookComponent.PlayFromStart
struct UPaperFlipbookComponent_PlayFromStart_Params
{
};

// Function Paper2D.PaperFlipbookComponent.Play
struct UPaperFlipbookComponent_Play_Params
{
};

// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
struct UPaperFlipbookComponent_OnRep_SourceFlipbook_Params
{
	class UPaperFlipbook*                              OldFlipbook;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.IsReversing
struct UPaperFlipbookComponent_IsReversing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.IsPlaying
struct UPaperFlipbookComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.IsLooping
struct UPaperFlipbookComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetSpriteMaterial
struct UPaperFlipbookComponent_GetSpriteMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetPlayRate
struct UPaperFlipbookComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
struct UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
struct UPaperFlipbookComponent_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
struct UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
struct UPaperFlipbookComponent_GetFlipbookLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
struct UPaperFlipbookComponent_GetFlipbookFramerate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbook
struct UPaperFlipbookComponent_GetFlipbook_Params
{
	class UPaperFlipbook*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
struct UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  NewInstanceTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
struct UPaperGroupedSpriteComponent_UpdateInstanceColor_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewInstanceColor;                                         // (Parm, IsPlainOldData)
	bool                                               bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
struct UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params
{
	struct FVector                                     WorldSpaceSortAxis;                                       // (Parm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
struct UPaperGroupedSpriteComponent_RemoveInstance_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
struct UPaperGroupedSpriteComponent_GetInstanceTransform_Params
{
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutInstanceTransform;                                     // (Parm, OutParm, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
struct UPaperGroupedSpriteComponent_GetInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
struct UPaperGroupedSpriteComponent_ClearInstances_Params
{
};

// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
struct UPaperGroupedSpriteComponent_AddInstance_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPaperSprite*                                Sprite;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperSpriteComponent.SetSpriteColor
struct UPaperSpriteComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
};

// Function Paper2D.PaperSpriteComponent.SetSprite
struct UPaperSpriteComponent_SetSprite_Params
{
	class UPaperSprite*                                NewSprite;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperSpriteComponent.GetSprite
struct UPaperSpriteComponent_GetSprite_Params
{
	class UPaperSprite*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTerrainComponent.SetTerrainColor
struct UPaperTerrainComponent_SetTerrainColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
};

// Function Engine.SplineComponent.UpdateSpline
struct UPaperTerrainSplineComponent_UpdateSpline_Params
{
};

// Function Engine.SplineComponent.SetWorldLocationAtSplinePoint
struct UPaperTerrainSplineComponent_SetWorldLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.SplineComponent.SetUpVectorAtSplinePoint
struct UPaperTerrainSplineComponent_SetUpVectorAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InUpVector;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetUnselectedSplineSegmentColor
struct UPaperTerrainSplineComponent_SetUnselectedSplineSegmentColor_Params
{
	struct FLinearColor                                SegmentColor;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.SplineComponent.SetTangentsAtSplinePoint
struct UPaperTerrainSplineComponent_SetTangentsAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InArriveTangent;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     InLeaveTangent;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetTangentAtSplinePoint
struct UPaperTerrainSplineComponent_SetTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InTangent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetSplineWorldPoints
struct UPaperTerrainSplineComponent_SetSplineWorldPoints_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Engine.SplineComponent.SetSplinePointType
struct UPaperTerrainSplineComponent_SetSplinePointType_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplinePointType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetSplinePoints
struct UPaperTerrainSplineComponent_SetSplinePoints_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetSplineLocalPoints
struct UPaperTerrainSplineComponent_SetSplineLocalPoints_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Engine.SplineComponent.SetSelectedSplineSegmentColor
struct UPaperTerrainSplineComponent_SetSelectedSplineSegmentColor_Params
{
	struct FLinearColor                                SegmentColor;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.SplineComponent.SetLocationAtSplinePoint
struct UPaperTerrainSplineComponent_SetLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InLocation;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetDrawDebug
struct UPaperTerrainSplineComponent_SetDrawDebug_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetDefaultUpVector
struct UPaperTerrainSplineComponent_SetDefaultUpVector_Params
{
	struct FVector                                     UpVector;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetClosedLoopAtPosition
struct UPaperTerrainSplineComponent_SetClosedLoopAtPosition_Params
{
	bool                                               bInClosedLoop;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.SetClosedLoop
struct UPaperTerrainSplineComponent_SetClosedLoop_Params
{
	bool                                               bInClosedLoop;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.RemoveSplinePoint
struct UPaperTerrainSplineComponent_RemoveSplinePoint_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.IsClosedLoop
struct UPaperTerrainSplineComponent_IsClosedLoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetWorldTangentAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldRotationAtTime
struct UPaperTerrainSplineComponent_GetWorldRotationAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetWorldRotationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldLocationAtTime
struct UPaperTerrainSplineComponent_GetWorldLocationAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldLocationAtSplinePoint
struct UPaperTerrainSplineComponent_GetWorldLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetWorldLocationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldDirectionAtTime
struct UPaperTerrainSplineComponent_GetWorldDirectionAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetWorldDirectionAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetUpVectorAtTime
struct UPaperTerrainSplineComponent_GetUpVectorAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetUpVectorAtSplinePoint
struct UPaperTerrainSplineComponent_GetUpVectorAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetUpVectorAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetTransformAtTime
struct UPaperTerrainSplineComponent_GetTransformAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetTransformAtSplinePoint
struct UPaperTerrainSplineComponent_GetTransformAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetTransformAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetTransformAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetTangentAtTime
struct UPaperTerrainSplineComponent_GetTangentAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetTangentAtSplinePoint
struct UPaperTerrainSplineComponent_GetTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetTangentAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetTangentAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetSplinePointType
struct UPaperTerrainSplineComponent_GetSplinePointType_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplinePointType>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetSplineLength
struct UPaperTerrainSplineComponent_GetSplineLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetScaleAtTime
struct UPaperTerrainSplineComponent_GetScaleAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetScaleAtSplinePoint
struct UPaperTerrainSplineComponent_GetScaleAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetScaleAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetScaleAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetRotationAtTime
struct UPaperTerrainSplineComponent_GetRotationAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetRotationAtSplinePoint
struct UPaperTerrainSplineComponent_GetRotationAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetRotationAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetRotationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetRollAtTime
struct UPaperTerrainSplineComponent_GetRollAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetRollAtSplinePoint
struct UPaperTerrainSplineComponent_GetRollAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetRollAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetRollAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetRightVectorAtTime
struct UPaperTerrainSplineComponent_GetRightVectorAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetRightVectorAtSplinePoint
struct UPaperTerrainSplineComponent_GetRightVectorAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetRightVectorAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetNumberOfSplinePoints
struct UPaperTerrainSplineComponent_GetNumberOfSplinePoints_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetLocationAtTime
struct UPaperTerrainSplineComponent_GetLocationAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetLocationAtSplinePoint
struct UPaperTerrainSplineComponent_GetLocationAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetLocationAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetLocationAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetLocationAndTangentAtSplinePoint
struct UPaperTerrainSplineComponent_GetLocationAndTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint
struct UPaperTerrainSplineComponent_GetLocalLocationAndTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     LocalTangent;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetLengthInRange
struct UPaperTerrainSplineComponent_GetLengthInRange_Params
{
	int                                                StartIndex;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                EndIndex;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetLeaveTangentAtSplinePoint
struct UPaperTerrainSplineComponent_GetLeaveTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetInputKeyAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint
struct UPaperTerrainSplineComponent_GetDistanceAlongSplineAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetDirectionAtTime
struct UPaperTerrainSplineComponent_GetDirectionAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantVelocity;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetDirectionAtSplinePoint
struct UPaperTerrainSplineComponent_GetDirectionAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetDirectionAtDistanceAlongSpline
struct UPaperTerrainSplineComponent_GetDirectionAtDistanceAlongSpline_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetDefaultUpVector
struct UPaperTerrainSplineComponent_GetDefaultUpVector_Params
{
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.GetArriveTangentAtSplinePoint
struct UPaperTerrainSplineComponent_GetArriveTangentAtSplinePoint_Params
{
	int                                                PointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindUpVectorClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindUpVectorClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindTransformClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindTransformClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindTangentClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindTangentClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindScaleClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindScaleClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindRotationClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindRotationClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindRollClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindRollClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindRightVectorClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindRightVectorClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindLocationClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindLocationClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindInputKeyClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindInputKeyClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.FindDirectionClosestToWorldLocation
struct UPaperTerrainSplineComponent_FindDirectionClosestToWorldLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Engine.SplineComponent.ClearSplinePoints
struct UPaperTerrainSplineComponent_ClearSplinePoints_Params
{
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.AddSplineWorldPoint
struct UPaperTerrainSplineComponent_AddSplineWorldPoint_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.SplineComponent.AddSplinePointAtIndex
struct UPaperTerrainSplineComponent_AddSplinePointAtIndex_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.AddSplinePoint
struct UPaperTerrainSplineComponent_AddSplinePoint_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ESplineCoordinateSpace>                CoordinateSpace;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.AddSplineLocalPoint
struct UPaperTerrainSplineComponent_AddSplineLocalPoint_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Engine.SplineComponent.AddPoints
struct UPaperTerrainSplineComponent_AddPoints_Params
{
	TArray<struct FSplinePoint>                        Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.SplineComponent.AddPoint
struct UPaperTerrainSplineComponent_AddPoint_Params
{
	struct FSplinePoint                                Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bUpdateSpline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetTileMapColor
struct UPaperTileMapComponent_SetTileMapColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetTileMap
struct UPaperTileMapComponent_SetTileMap_Params
{
	class UPaperTileMap*                               NewTileMap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetTile
struct UPaperTileMapComponent_SetTile_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPaperTileInfo                              NewValue;                                                 // (Parm)
};

// Function Paper2D.PaperTileMapComponent.SetLayerColor
struct UPaperTileMapComponent_SetLayerColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetLayerCollision
struct UPaperTileMapComponent_SetLayerCollision_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasCollision;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideThickness;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CustomThickness;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CustomOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildCollision;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
struct UPaperTileMapComponent_SetDefaultCollisionThickness_Params
{
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildCollision;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.ResizeMap
struct UPaperTileMapComponent_ResizeMap_Params
{
	int                                                NewWidthInTiles;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewHeightInTiles;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.RebuildCollision
struct UPaperTileMapComponent_RebuildCollision_Params
{
};

// Function Paper2D.PaperTileMapComponent.OwnsTileMap
struct UPaperTileMapComponent_OwnsTileMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
struct UPaperTileMapComponent_MakeTileMapEditable_Params
{
};

// Function Paper2D.PaperTileMapComponent.GetTilePolygon
struct UPaperTileMapComponent_GetTilePolygon_Params
{
	int                                                TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Points;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTileMapColor
struct UPaperTileMapComponent_GetTileMapColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
struct UPaperTileMapComponent_GetTileCornerPosition_Params
{
	int                                                TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
struct UPaperTileMapComponent_GetTileCenterPosition_Params
{
	int                                                TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTile
struct UPaperTileMapComponent_GetTile_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPaperTileInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Paper2D.PaperTileMapComponent.GetMapSize
struct UPaperTileMapComponent_GetMapSize_Params
{
	int                                                MapWidth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MapHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumLayers;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetLayerColor
struct UPaperTileMapComponent_GetLayerColor_Params
{
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
struct UPaperTileMapComponent_CreateNewTileMap_Params
{
	int                                                MapWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MapHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileWidth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PixelsPerUnrealUnit;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateLayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.AddNewLayer
struct UPaperTileMapComponent_AddNewLayer_Params
{
	class UPaperTileLayer*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
