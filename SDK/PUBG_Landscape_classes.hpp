#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Landscape_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x0B40 - 0x0B40)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.ControlPointMeshComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeComponent
// 0x0170 (0x0B20 - 0x09B0)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                ComponentSizeQuads;                                       // 0x09B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x09B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x09B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09BC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x09D0(0x0010) (ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x09E0(0x0010) (ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x09F0(0x0010) (ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0A00(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A08(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0A10(0x0010) (IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x0A20(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0A24(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0A30(0x0010) (IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0A40(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0A48(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x0A64(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x0A80(0x0010) (IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x0A90(0x0010) (ZeroConstructor, Deprecated)
	int                                                CollisionMipLevel;                                        // 0x0AA0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0AA4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0AA8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x0AAC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x0AB0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x0AB4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LODBias;                                                  // 0x0AB8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x0ABC(0x0010) (IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x0ACC(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0AE0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bRemoveGrass;                                             // 0x0AE8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0AE9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0AEA(0x0006) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0AF0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x0AF8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0B00(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x0400 - 0x0400)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoActor"));

		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0450 - 0x0400)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0400(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoActiveActor"));

		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x09B0 - 0x09B0)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGizmoRenderComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x0038 (0x0060 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0038(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0040(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0044(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0048(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x004C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0050(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0051(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeGrassType"));

		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x0A90 - 0x09B0)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09B0(0x0008) MISSED OFFSET
	int                                                SectionBaseX;                                             // 0x09B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x09BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x09C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionScale;                                           // 0x09C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x09C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x09D0(0x0010) (ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x09E0(0x0010) (IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x09F0(0x001C) (IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x0A0C(0x001C) (ExportObject, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0A28(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x0A38(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0A48(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeHeightfieldCollisionComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x0AA0 - 0x0A90)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0A90(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshCollisionComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeInfo
// 0x01D8 (0x0200 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x001C) (IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x006C(0x0054) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x006C(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData02[0xF0];                                      // 0x0110(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeInfo"));

		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0050 (0x0078 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeInfoMap"));

		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0050 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeLayerInfoObject"));

		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (0x01E8 - 0x01E0)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01E0(0x0001)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x01E0(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMaterialInstanceConstant"));

		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x0408 - 0x0400)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshProxyActor"));

		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x0B70 - 0x0B40)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x0B40(0x0010) (IsPlainOldData)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x0B50(0x0010) (ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0B60(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0B61(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeMeshProxyComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x0470 (0x0870 - 0x0400)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0408(0x0010) (IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0418(0x0008) (IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x0424(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	int                                                StaticLightingLOD;                                        // 0x042C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0440(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x0448(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0450(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x0454(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x0458(0x0010) (ExportObject, ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0468(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0478(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0488(0x0060) MISSED OFFSET
	bool                                               bHasLandscapeGrass;                                       // 0x04E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x04EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x04F0(0x0001) (Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x04F0(0x0001) (Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x04F0(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	struct FLightingChannels                           LightingChannels;                                         // 0x04F4(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x1];                                       // 0x04F7(0x0001) MISSED OFFSET
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x04F8(0x0001) (Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x04F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x04FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x0500(0x0018) (Edit)
	int                                                CollisionMipLevel;                                        // 0x0518(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x051C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0520(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x0524(0x000C) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0530(0x0240) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x0770(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x0770(0x0001) (Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x0774(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0778(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumSubsections;                                           // 0x077C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0780(0x0001) (Edit)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0781(0x0003) MISSED OFFSET
	ENavDataGatheringMode                              NavigationGeometryGatheringMode;                          // 0x0784(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeForCullingInvisibleHLODVertices;             // 0x0785(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0xEA];                                      // 0x0786(0x00EA) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeProxy"));

		return ptr;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.Landscape
// 0x0000 (0x0870 - 0x0870)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.Landscape"));

		return ptr;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0890 - 0x0870)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0870(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeStreamingProxy"));

		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x09E0 - 0x09B0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x09B0(0x0008) MISSED OFFSET
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x09B8(0x0010) (ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x09C8(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x09D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplinesComponent"));

		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (Edit, EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplineSegment"));

		return ptr;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x0098 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (Edit, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (Edit, IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0070(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.LandscapeSplineControlPoint"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0060(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeGrassOutput"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0070(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerBlend"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0078 - 0x0060)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanU;                                              // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerCoords"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x006C(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSample"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x00F0 - 0x0060)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0060(0x0038)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00D8(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x00DC(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerSwitch"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x00F8 - 0x0060)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0060(0x0038)
	struct FExpressionInput                            Layer;                                                    // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00DC(0x000C) (Edit, IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00E8(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeLayerWeight"));

		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0060(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Landscape.MaterialExpressionLandscapeVisibilityMask"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
