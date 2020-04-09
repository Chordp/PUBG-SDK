#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Paper2D_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0020 (0x0230 - 0x0210)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bSampleAdditionalTextures;                                // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	int                                                AdditionalSlotIndex;                                      // 0x0214(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       SlotDisplayName;                                          // 0x0218(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.MaterialExpressionSpriteTextureSampler"));

		return ptr;
	}

};


// Class Paper2D.PaperCharacter
// 0x0010 (0x0840 - 0x0830)
class APaperCharacter : public ACharacter
{
public:
	class UPaperFlipbookComponent*                     Sprite;                                                   // 0x0830(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0838(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperCharacter"));

		return ptr;
	}

};


// Class Paper2D.PaperFlipbook
// 0x0028 (0x0058 - 0x0030)
class UPaperFlipbook : public UObject
{
public:
	float                                              FramesPerSecond;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FPaperFlipbookKeyFrame>              KeyFrames;                                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFlipbookCollisionMode>                CollisionSource;                                          // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperFlipbook"));

		return ptr;
	}


	bool STATIC_IsValidKeyFrameIndex(int Index);
	float STATIC_GetTotalDuration();
	class UPaperSprite* STATIC_GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* STATIC_GetSpriteAtFrame(int FrameIndex);
	int STATIC_GetNumKeyFrames();
	int STATIC_GetNumFrames();
	int STATIC_GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};


// Class Paper2D.PaperFlipbookActor
// 0x0008 (0x03F0 - 0x03E8)
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*                     RenderComponent;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperFlipbookActor"));

		return ptr;
	}

};


// Class Paper2D.PaperFlipbookComponent
// 0x0050 (0x0B10 - 0x0AC0)
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UPaperFlipbook*                              SourceFlipbook;                                           // 0x0AC0(0x0008) (Edit, Net, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0AC8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0AD0(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0AD4(0x0001) (Net)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0AD4(0x0001) (Net)
	unsigned char                                      bPlaying : 1;                                             // 0x0AD4(0x0001) (Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AD5(0x0003) MISSED OFFSET
	float                                              AccumulatedTime;                                          // 0x0AD8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                CachedFrameIndex;                                         // 0x0ADC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SpriteColor;                                              // 0x0AE0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0AF0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFinishedPlaying;                                        // 0x0AF8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B08(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperFlipbookComponent"));

		return ptr;
	}


	void STATIC_Stop();
	void STATIC_SetSpriteColor(const struct FLinearColor& NewColor);
	void STATIC_SetPlayRate(float NewRate);
	void STATIC_SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents);
	void STATIC_SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void STATIC_SetNewTime(float NewTime);
	void STATIC_SetLooping(bool bNewLooping);
	bool STATIC_SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void STATIC_ReverseFromEnd();
	void STATIC_Reverse();
	void STATIC_PlayFromStart();
	void STATIC_Play();
	void STATIC_OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool STATIC_IsReversing();
	bool STATIC_IsPlaying();
	bool STATIC_IsLooping();
	class UMaterialInterface* STATIC_GetSpriteMaterial();
	float STATIC_GetPlayRate();
	int STATIC_GetPlaybackPositionInFrames();
	float STATIC_GetPlaybackPosition();
	int STATIC_GetFlipbookLengthInFrames();
	float STATIC_GetFlipbookLength();
	float STATIC_GetFlipbookFramerate();
	class UPaperFlipbook* STATIC_GetFlipbook();
};


// Class Paper2D.PaperGroupedSpriteActor
// 0x0008 (0x03F0 - 0x03E8)
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*                RenderComponent;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperGroupedSpriteActor"));

		return ptr;
	}

};


// Class Paper2D.PaperGroupedSpriteComponent
// 0x0030 (0x0AF0 - 0x0AC0)
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<class UMaterialInterface*>                  InstanceMaterials;                                        // 0x0AC0(0x0010) (ZeroConstructor)
	TArray<struct FSpriteInstanceData>                 PerInstanceSpriteData;                                    // 0x0AD0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0AE0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperGroupedSpriteComponent"));

		return ptr;
	}


	bool STATIC_UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool STATIC_UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void STATIC_SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis);
	bool STATIC_RemoveInstance(int InstanceIndex);
	bool STATIC_GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	int STATIC_GetInstanceCount();
	void STATIC_ClearInstances();
	int STATIC_AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color);
};


// Class Paper2D.PaperRuntimeSettings
// 0x0008 (0x0038 - 0x0030)
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                               bEnableSpriteAtlasGroups;                                 // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableTerrainSplineEditing;                              // 0x0031(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bResizeSpriteDataToMatchTextures;                         // 0x0032(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0033(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperRuntimeSettings"));

		return ptr;
	}

};


// Class Paper2D.PaperSprite
// 0x0098 (0x00C8 - 0x0030)
class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FVector2D                                   SourceUV;                                                 // 0x0040(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   SourceDimension;                                          // 0x0048(0x0008) (Edit, IsPlainOldData)
	class UTexture2D*                                  SourceTexture;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0058(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   BakedSourceUV;                                            // 0x0068(0x0008) (IsPlainOldData)
	struct FVector2D                                   BakedSourceDimension;                                     // 0x0070(0x0008) (IsPlainOldData)
	class UTexture2D*                                  BakedSourceTexture;                                       // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AlternateMaterial;                                        // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPaperSpriteSocket>                  Sockets;                                                  // 0x0090(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              PixelsPerUnrealUnit;                                      // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  BodySetup;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AlternateMaterialSplitIndex;                              // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	TArray<struct FVector4>                            BakedRenderData;                                          // 0x00B8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperSprite"));

		return ptr;
	}

};


// Class Paper2D.PaperSpriteActor
// 0x0008 (0x03F0 - 0x03E8)
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                       RenderComponent;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperSpriteActor"));

		return ptr;
	}

};


// Class Paper2D.PaperSpriteAtlas
// 0x0000 (0x0030 - 0x0030)
class UPaperSpriteAtlas : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperSpriteAtlas"));

		return ptr;
	}

};


// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperSpriteBlueprintLibrary"));

		return ptr;
	}

};


// Class Paper2D.PaperSpriteComponent
// 0x0020 (0x0AE0 - 0x0AC0)
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UPaperSprite*                                SourceSprite;                                             // 0x0AC0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialOverride;                                         // 0x0AC8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                SpriteColor;                                              // 0x0AD0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperSpriteComponent"));

		return ptr;
	}


	void STATIC_SetSpriteColor(const struct FLinearColor& NewColor);
	bool STATIC_SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* STATIC_GetSprite();
};


// Class Paper2D.PaperTerrainActor
// 0x0018 (0x0400 - 0x03E8)
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                             DummyRoot;                                                // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPaperTerrainSplineComponent*                SplineComponent;                                          // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPaperTerrainComponent*                      RenderComponent;                                          // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperTerrainActor"));

		return ptr;
	}

};


// Class Paper2D.PaperTerrainComponent
// 0x0050 (0x0A10 - 0x09C0)
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	bool                                               bClosedSpline;                                            // 0x09C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFilledSpline;                                            // 0x09C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x09C2(0x0006) MISSED OFFSET
	class UPaperTerrainSplineComponent*                AssociatedSpline;                                         // 0x09C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                RandomSeed;                                               // 0x09D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SegmentOverlapAmount;                                     // 0x09D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TerrainColor;                                             // 0x09D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                ReparamStepsPerSegment;                                   // 0x09E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x09EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09ED(0x0003) MISSED OFFSET
	float                                              CollisionThickness;                                       // 0x09F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	class UBodySetup*                                  CachedBodySetup;                                          // 0x09F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0A00(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperTerrainComponent"));

		return ptr;
	}


	void STATIC_SetTerrainColor(const struct FLinearColor& NewColor);
};


// Class Paper2D.PaperTerrainMaterial
// 0x0018 (0x0050 - 0x0038)
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>           Rules;                                                    // 0x0038(0x0010) (Edit, ZeroConstructor)
	class UPaperSprite*                                InteriorFill;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperTerrainMaterial"));

		return ptr;
	}

};


// Class Paper2D.PaperTerrainSplineComponent
// 0x0040 (0x0AE0 - 0x0AA0)
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0AA0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperTerrainSplineComponent"));

		return ptr;
	}


	void STATIC_UpdateSpline();
	void STATIC_SetWorldLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation);
	void STATIC_SetUpVectorAtSplinePoint(int PointIndex, const struct FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetUnselectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	void STATIC_SetTangentsAtSplinePoint(int PointIndex, const struct FVector& InArriveTangent, const struct FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetTangentAtSplinePoint(int PointIndex, const struct FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetSplineWorldPoints(TArray<struct FVector> Points);
	void STATIC_SetSplinePointType(int PointIndex, TEnumAsByte<ESplinePointType> Type, bool bUpdateSpline);
	void STATIC_SetSplinePoints(TArray<struct FVector> Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetSplineLocalPoints(TArray<struct FVector> Points);
	void STATIC_SetSelectedSplineSegmentColor(const struct FLinearColor& SegmentColor);
	void STATIC_SetLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_SetDrawDebug(bool bShow);
	void STATIC_SetDefaultUpVector(const struct FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void STATIC_SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);
	void STATIC_SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);
	void STATIC_RemoveSplinePoint(int Index, bool bUpdateSpline);
	bool STATIC_IsClosedLoop();
	struct FVector STATIC_GetWorldTangentAtDistanceAlongSpline(float Distance);
	struct FRotator STATIC_GetWorldRotationAtTime(float Time, bool bUseConstantVelocity);
	struct FRotator STATIC_GetWorldRotationAtDistanceAlongSpline(float Distance);
	struct FVector STATIC_GetWorldLocationAtTime(float Time, bool bUseConstantVelocity);
	struct FVector STATIC_GetWorldLocationAtSplinePoint(int PointIndex);
	struct FVector STATIC_GetWorldLocationAtDistanceAlongSpline(float Distance);
	struct FVector STATIC_GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity);
	struct FVector STATIC_GetWorldDirectionAtDistanceAlongSpline(float Distance);
	struct FVector STATIC_GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector STATIC_GetUpVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FTransform STATIC_GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale);
	struct FTransform STATIC_GetTransformAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FTransform STATIC_GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FVector STATIC_GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector STATIC_GetTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	TEnumAsByte<ESplinePointType> STATIC_GetSplinePointType(int PointIndex);
	float STATIC_GetSplineLength();
	struct FVector STATIC_GetScaleAtTime(float Time, bool bUseConstantVelocity);
	struct FVector STATIC_GetScaleAtSplinePoint(int PointIndex);
	struct FVector STATIC_GetScaleAtDistanceAlongSpline(float Distance);
	struct FRotator STATIC_GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FRotator STATIC_GetRotationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FRotator STATIC_GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float STATIC_GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	float STATIC_GetRollAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float STATIC_GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector STATIC_GetRightVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	int STATIC_GetNumberOfSplinePoints();
	struct FVector STATIC_GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector STATIC_GetLocationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void STATIC_GetLocationAndTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, struct FVector* Location, struct FVector* Tangent);
	void STATIC_GetLocalLocationAndTangentAtSplinePoint(int PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent);
	float STATIC_GetLengthInRange(int StartIndex, int EndIndex);
	struct FVector STATIC_GetLeaveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float STATIC_GetInputKeyAtDistanceAlongSpline(float Distance);
	float STATIC_GetDistanceAlongSplineAtSplinePoint(int PointIndex);
	struct FVector STATIC_GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity);
	struct FVector STATIC_GetDirectionAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_GetArriveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_FindUpVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FTransform STATIC_FindTransformClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale);
	struct FVector STATIC_FindTangentClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_FindScaleClosestToWorldLocation(const struct FVector& WorldLocation);
	struct FRotator STATIC_FindRotationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float STATIC_FindRollClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_FindRightVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	struct FVector STATIC_FindLocationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	float STATIC_FindInputKeyClosestToWorldLocation(const struct FVector& WorldLocation);
	struct FVector STATIC_FindDirectionClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);
	void STATIC_ClearSplinePoints(bool bUpdateSpline);
	void STATIC_AddSplineWorldPoint(const struct FVector& Position);
	void STATIC_AddSplinePointAtIndex(const struct FVector& Position, int Index, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_AddSplinePoint(const struct FVector& Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);
	void STATIC_AddSplineLocalPoint(const struct FVector& Position);
	void STATIC_AddPoints(TArray<struct FSplinePoint> Points, bool bUpdateSpline);
	void STATIC_AddPoint(const struct FSplinePoint& Point, bool bUpdateSpline);
};


// Class Paper2D.PaperTileLayer
// 0x0070 (0x00A0 - 0x0030)
class UPaperTileLayer : public UObject
{
public:
	struct FText                                       LayerName;                                                // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                LayerWidth;                                               // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeight;                                              // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHiddenInGame : 1;                                        // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bLayerCollides : 1;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionThickness : 1;                          // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverrideCollisionOffset : 1;                             // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              CollisionThicknessOverride;                               // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CollisionOffsetOverride;                                  // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerColor;                                               // 0x005C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<struct FPaperTileInfo>                      AllocatedCells;                                           // 0x0078(0x0010) (ZeroConstructor)
	class UPaperTileSet*                               TileSet;                                                  // 0x0088(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<int>                                        AllocatedGrid;                                            // 0x0090(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperTileLayer"));

		return ptr;
	}

};


// Class Paper2D.PaperTileMap
// 0x0078 (0x00A8 - 0x0030)
class UPaperTileMap : public UObject
{
public:
	int                                                MapWidth;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MapHeight;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TileWidth;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TileHeight;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PixelsPerUnrealUnit;                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerTileX;                                       // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerTileY;                                       // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SeparationPerLayer;                                       // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UPaperTileSet>                     SelectedTileSet;                                          // 0x0050(0x0020)
	class UMaterialInterface*                          Material;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	float                                              CollisionThickness;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x008C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETileMapProjectionMode>                ProjectionMode;                                           // 0x008D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	int                                                HexSideLength;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LayerNameIndex;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperTileMap"));

		return ptr;
	}

};


// Class Paper2D.PaperTileMapActor
// 0x0008 (0x03F0 - 0x03E8)
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                      RenderComponent;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperTileMapActor"));

		return ptr;
	}

};


// Class Paper2D.PaperTileMapComponent
// 0x0050 (0x0B10 - 0x0AC0)
class UPaperTileMapComponent : public UMeshComponent
{
public:
	int                                                MapWidth;                                                 // 0x0AC0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MapHeight;                                                // 0x0AC4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileWidth;                                                // 0x0AC8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileHeight;                                               // 0x0ACC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UPaperTileSet*                               DefaultLayerTileSet;                                      // 0x0AD0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0AD8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x0AE0(0x0010) (ZeroConstructor, Deprecated)
	struct FLinearColor                                TileMapColor;                                             // 0x0AF0(0x0010) (Edit, IsPlainOldData)
	int                                                UseSingleLayerIndex;                                      // 0x0B00(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSingleLayer;                                          // 0x0B04(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	class UPaperTileMap*                               TileMap;                                                  // 0x0B08(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperTileMapComponent"));

		return ptr;
	}


	void STATIC_SetTileMapColor(const struct FLinearColor& NewColor);
	bool STATIC_SetTileMap(class UPaperTileMap* NewTileMap);
	void STATIC_SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue);
	void STATIC_SetLayerColor(const struct FLinearColor& NewColor, int Layer);
	void STATIC_SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void STATIC_SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void STATIC_ResizeMap(int NewWidthInTiles, int NewHeightInTiles);
	void STATIC_RebuildCollision();
	bool STATIC_OwnsTileMap();
	void STATIC_MakeTileMapEditable();
	void STATIC_GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points);
	struct FLinearColor STATIC_GetTileMapColor();
	struct FVector STATIC_GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FVector STATIC_GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo STATIC_GetTile(int X, int Y, int Layer);
	void STATIC_GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
	struct FLinearColor STATIC_GetLayerColor(int Layer);
	void STATIC_CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* STATIC_AddNewLayer();
};


// Class Paper2D.PaperTileSet
// 0x0070 (0x00A0 - 0x0030)
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                                   TileSize;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UTexture2D*                                  TileSheet;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FIntMargin                                  BorderMargin;                                             // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FIntPoint                                   PerTileSpacing;                                           // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FIntPoint                                   DrawingOffset;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                WidthInTiles;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeightInTiles;                                            // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedWidth;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllocatedHeight;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPaperTileMetadata>                  PerTileData;                                              // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FPaperTileSetTerrain>                Terrains;                                                 // 0x0080(0x0010) (ZeroConstructor)
	int                                                TileWidth;                                                // 0x0090(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                TileHeight;                                               // 0x0094(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                Margin;                                                   // 0x0098(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                Spacing;                                                  // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.PaperTileSet"));

		return ptr;
	}

};


// Class Paper2D.TileMapBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Paper2D.TileMapBlueprintLibrary"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
