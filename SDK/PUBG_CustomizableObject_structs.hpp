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

// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8_t
{
	Planar                         = 0,
	Cylindrical                    = 1,
	ECustomizableObjectProjectorType_MAX = 2
};


// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8_t
{
	Full                           = 0,
	Local                          = 1,
	LocalAndChildren               = 2,
	AddWorkingSetNoChildren        = 3,
	AddWorkingSetAndChildren       = 4,
	EMutableCompileMeshType_MAX    = 5
};


// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8_t
{
	COGT_TOGGLE                    = 0,
	COGT_ALL                       = 1,
	COGT_ONE                       = 2,
	COGT_ONE_OR_NONE               = 3,
	COGT_MAX                       = 4
};


// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8_t
{
	None                           = 0,
	Bool                           = 1,
	Int                            = 2,
	Float                          = 3,
	Color                          = 4,
	Projector                      = 5,
	Texture                        = 6,
	EMutableParameterType_MAX      = 7
};


// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8_t
{
	All                            = 0,
	ClientOnly                     = 1,
	ECustomizableObjectRelevancy_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomizableObject.CustomizableObjectBoolParameterValue
// 0x0028
struct FCustomizableObjectBoolParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	bool                                               ParameterValue;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Uid;                                                      // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectIntParameterValue
// 0x0030
struct FCustomizableObjectIntParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     ParameterValueName;                                       // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Uid;                                                      // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectFloatParameterValue
// 0x0028
struct FCustomizableObjectFloatParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	float                                              ParameterValue;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Uid;                                                      // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectTextureParameterValue
// 0x0028
struct FCustomizableObjectTextureParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	uint64_t                                           ParameterValue;                                           // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     Uid;                                                      // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectVectorParameterValue
// 0x0030
struct FCustomizableObjectVectorParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FLinearColor                                ParameterValue;                                           // 0x0010(0x0010) (Edit, EditConst, IsPlainOldData)
	struct FString                                     Uid;                                                      // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjector
// 0x0038
struct FCustomizableObjectProjector
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Up;                                                       // 0x0018(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0024(0x000C) (Edit, IsPlainOldData)
	ECustomizableObjectProjectorType                   ProjectionType;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Angle;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectProjectorParameterValue
// 0x0058
struct FCustomizableObjectProjectorParameterValue
{
	struct FString                                     ParameterName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FCustomizableObjectProjector                Value;                                                    // 0x0010(0x0038) (Edit, EditConst)
	struct FString                                     Uid;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.GeneratedTexture
// 0x0020
struct FGeneratedTexture
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UTexture2D*                                  Texture;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.GeneratedMaterial
// 0x0010
struct FGeneratedMaterial
{
	TArray<struct FGeneratedTexture>                   Textures;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct CustomizableObject.GeneratedMesh
// 0x0010
struct FGeneratedMesh
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.ParameterDecorations
// 0x0010
struct FParameterDecorations
{
	TArray<class UTexture2D*>                          Images;                                                   // 0x0000(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct CustomizableObject.MutableModelImageProperties
// 0x0020
struct FMutableModelImageProperties
{
	struct FString                                     TextureParameterName;                                     // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ETextureCompressionSettings>           CompressionSettings;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	unsigned char                                      SRGB : 1;                                                 // 0x0014(0x0001)
	unsigned char                                      bDitherMipMapAlpha : 1;                                   // 0x0014(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                LODBias;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureMipGenSettings>                MipGenSettings;                                           // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct CustomizableObject.CustomizableObjectIdPair
// 0x0020
struct FCustomizableObjectIdPair
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CustomizableObjectName;                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct CustomizableObject.CompilationOptions
// 0x0020
struct FCompilationOptions
{
	bool                                               bPackaging;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTextureCompression;                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                OptimizationLevel;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct CustomizableObject.CustomizableObjectExportOptions
// 0x0018
struct FCustomizableObjectExportOptions
{
	bool                                               bTextureCompression;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     TargetPlatform;                                           // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomizableObject.MutableModelParameterValue
// 0x0018
struct FMutableModelParameterValue
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct CustomizableObject.MutableParamUIMetadata
// 0x00E8
struct FMutableParamUIMetadata
{
	struct FString                                     ObjectFriendlyName;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     UISectionName;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                UIOrder;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TAssetPtr<class UTexture2D>                        UIThumbnail;                                              // 0x0028(0x0020) (Edit, BlueprintVisible)
	TMap<struct FString, struct FString>               ExtraInformation;                                         // 0x0048(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, TAssetPtr<class UObject>>     ExtraAssets;                                              // 0x0098(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct CustomizableObject.MutableModelParameterProperties
// 0x0110
struct FMutableModelParameterProperties
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	EMutableParameterType                              Type;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ImageDescriptionCount;                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMutableModelParameterValue>         PossibleValues;                                           // 0x0018(0x0010) (ZeroConstructor)
	struct FMutableParamUIMetadata                     ParamUIMetadata;                                          // 0x0028(0x00E8)
};

// ScriptStruct CustomizableObject.IntegerParameterUIData
// 0x00F8
struct FIntegerParameterUIData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FMutableParamUIMetadata                     ParamUIMetadata;                                          // 0x0010(0x00E8) (BlueprintVisible)
};

// ScriptStruct CustomizableObject.ParameterUIData
// 0x0118
struct FParameterUIData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FMutableParamUIMetadata                     ParamUIMetadata;                                          // 0x0010(0x00E8) (BlueprintVisible)
	EMutableParameterType                              Type;                                                     // 0x00F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
	TArray<struct FIntegerParameterUIData>             ArrayIntegerParameterOption;                              // 0x0100(0x0010) (BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ECustomizableObjectGroupType>          IntegerParameterGroupType;                                // 0x0110(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
};

// ScriptStruct CustomizableObject.PendingReleaseSkeletalMeshInfo
// 0x0010
struct FPendingReleaseSkeletalMeshInfo
{
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Timestamp;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CustomizableObject.CustomizableObjectIdentifier
// 0x0030
struct FCustomizableObjectIdentifier
{
	struct FString                                     CustomizableObjectGroupName;                              // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     CustomizableObjectName;                                   // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Guid;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct CustomizableObject.CustomizedMaterialTexture2D
// 0x0010
struct FCustomizedMaterialTexture2D
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
