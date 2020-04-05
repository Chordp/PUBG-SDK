#pragma once

// PUBG (7.1.6.5) SDK

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
<<<<<<< HEAD
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bClampToEnds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClampToEnds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UPaperSprite*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
struct UPaperFlipbook_GetSpriteAtFrame_Params
{
<<<<<<< HEAD
	int*                                               FrameIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                FrameIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bClampToEnds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClampToEnds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperFlipbookComponent.Stop
struct UPaperFlipbookComponent_Stop_Params
{
};

// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
struct UPaperFlipbookComponent_SetSpriteColor_Params
{
<<<<<<< HEAD
	struct FLinearColor*                               NewColor;                                                 // (Parm, IsPlainOldData)
=======
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperFlipbookComponent.SetPlayRate
struct UPaperFlipbookComponent_SetPlayRate_Params
{
<<<<<<< HEAD
	float*                                             NewRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              NewRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
struct UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params
{
<<<<<<< HEAD
	int*                                               NewFramePosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFireEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                NewFramePosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
struct UPaperFlipbookComponent_SetPlaybackPosition_Params
{
<<<<<<< HEAD
	float*                                             NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFireEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFireEvents;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperFlipbookComponent.SetNewTime
struct UPaperFlipbookComponent_SetNewTime_Params
{
<<<<<<< HEAD
	float*                                             NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              NewTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperFlipbookComponent.SetLooping
struct UPaperFlipbookComponent_SetLooping_Params
{
<<<<<<< HEAD
	bool*                                              bNewLooping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bNewLooping;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperFlipbookComponent.SetFlipbook
struct UPaperFlipbookComponent_SetFlipbook_Params
{
<<<<<<< HEAD
	class UPaperFlipbook**                             NewFlipbook;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UPaperFlipbook*                              NewFlipbook;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	class UPaperFlipbook**                             OldFlipbook;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UPaperFlipbook*                              OldFlipbook;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	int*                                               InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 NewInstanceTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  NewInstanceTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleport;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
struct UPaperGroupedSpriteComponent_UpdateInstanceColor_Params
{
<<<<<<< HEAD
	int*                                               InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               NewInstanceColor;                                         // (Parm, IsPlainOldData)
	bool*                                              bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NewInstanceColor;                                         // (Parm, IsPlainOldData)
	bool                                               bMarkRenderStateDirty;                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
struct UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params
{
<<<<<<< HEAD
	struct FVector*                                    WorldSpaceSortAxis;                                       // (Parm, IsPlainOldData)
=======
	struct FVector                                     WorldSpaceSortAxis;                                       // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
struct UPaperGroupedSpriteComponent_RemoveInstance_Params
{
<<<<<<< HEAD
	int*                                               InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
struct UPaperGroupedSpriteComponent_GetInstanceTransform_Params
{
<<<<<<< HEAD
	int*                                               InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutInstanceTransform;                                     // (Parm, OutParm, IsPlainOldData)
	bool*                                              bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                InstanceIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  OutInstanceTransform;                                     // (Parm, OutParm, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPaperSprite**                               Sprite;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (Parm, IsPlainOldData)
=======
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPaperSprite*                                Sprite;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
struct UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params
{
<<<<<<< HEAD
	class UPaperSprite**                               Sprite;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UPaperSprite*                                Sprite;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Paper2D.PaperSpriteComponent.SetSpriteColor
struct UPaperSpriteComponent_SetSpriteColor_Params
{
<<<<<<< HEAD
	struct FLinearColor*                               NewColor;                                                 // (Parm, IsPlainOldData)
=======
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperSpriteComponent.SetSprite
struct UPaperSpriteComponent_SetSprite_Params
{
<<<<<<< HEAD
	class UPaperSprite**                               NewSprite;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UPaperSprite*                                NewSprite;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	struct FLinearColor*                               NewColor;                                                 // (Parm, IsPlainOldData)
=======
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperTileMapComponent.SetTileMapColor
struct UPaperTileMapComponent_SetTileMapColor_Params
{
<<<<<<< HEAD
	struct FLinearColor*                               NewColor;                                                 // (Parm, IsPlainOldData)
=======
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperTileMapComponent.SetTileMap
struct UPaperTileMapComponent_SetTileMap_Params
{
<<<<<<< HEAD
	class UPaperTileMap**                              NewTileMap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UPaperTileMap*                               NewTileMap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.SetTile
struct UPaperTileMapComponent_SetTile_Params
{
<<<<<<< HEAD
	int*                                               X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPaperTileInfo*                             NewValue;                                                 // (Parm)
=======
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPaperTileInfo                              NewValue;                                                 // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperTileMapComponent.SetLayerColor
struct UPaperTileMapComponent_SetLayerColor_Params
{
<<<<<<< HEAD
	struct FLinearColor*                               NewColor;                                                 // (Parm, IsPlainOldData)
	int*                                               Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FLinearColor                                NewColor;                                                 // (Parm, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperTileMapComponent.SetLayerCollision
struct UPaperTileMapComponent_SetLayerCollision_Params
{
<<<<<<< HEAD
	int*                                               Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasCollision;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOverrideThickness;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CustomThickness;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOverrideOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CustomOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRebuildCollision;                                        // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasCollision;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideThickness;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CustomThickness;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideOffset;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CustomOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildCollision;                                        // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
struct UPaperTileMapComponent_SetDefaultCollisionThickness_Params
{
<<<<<<< HEAD
	float*                                             Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRebuildCollision;                                        // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRebuildCollision;                                        // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperTileMapComponent.ResizeMap
struct UPaperTileMapComponent_ResizeMap_Params
{
<<<<<<< HEAD
	int*                                               NewWidthInTiles;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewHeightInTiles;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                NewWidthInTiles;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewHeightInTiles;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	int*                                               TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Points;                                                   // (Parm, OutParm, ZeroConstructor)
	int*                                               LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Points;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperTileMapComponent.GetTileMapColor
struct UPaperTileMapComponent_GetTileMapColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
struct UPaperTileMapComponent_GetTileCornerPosition_Params
{
<<<<<<< HEAD
	int*                                               TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
struct UPaperTileMapComponent_GetTileCenterPosition_Params
{
<<<<<<< HEAD
	int*                                               TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                TileX;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileY;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.GetTile
struct UPaperTileMapComponent_GetTile_Params
{
<<<<<<< HEAD
	int*                                               X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	int*                                               Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Layer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
struct UPaperTileMapComponent_CreateNewTileMap_Params
{
<<<<<<< HEAD
	int*                                               MapWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MapHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TileWidth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TileHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PixelsPerUnrealUnit;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCreateLayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                MapWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MapHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileWidth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TileHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PixelsPerUnrealUnit;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateLayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Paper2D.PaperTileMapComponent.AddNewLayer
struct UPaperTileMapComponent_AddNewLayer_Params
{
	class UPaperTileLayer*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.TileMapBlueprintLibrary.MakeTile
struct UTileMapBlueprintLibrary_MakeTile_Params
{
<<<<<<< HEAD
	int*                                               TileIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPaperTileSet**                              TileSet;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFlipH;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFlipV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFlipD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                TileIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPaperTileSet*                               TileSet;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipH;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FPaperTileInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
struct UTileMapBlueprintLibrary_GetTileUserData_Params
{
<<<<<<< HEAD
	struct FPaperTileInfo*                             Tile;                                                     // (Parm)
=======
	struct FPaperTileInfo                              Tile;                                                     // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
struct UTileMapBlueprintLibrary_GetTileTransform_Params
{
<<<<<<< HEAD
	struct FPaperTileInfo*                             Tile;                                                     // (Parm)
=======
	struct FPaperTileInfo                              Tile;                                                     // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Paper2D.TileMapBlueprintLibrary.BreakTile
struct UTileMapBlueprintLibrary_BreakTile_Params
{
<<<<<<< HEAD
	struct FPaperTileInfo*                             Tile;                                                     // (Parm)
=======
	struct FPaperTileInfo                              Tile;                                                     // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                TileIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UPaperTileSet*                               TileSet;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipH;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipV;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipD;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
