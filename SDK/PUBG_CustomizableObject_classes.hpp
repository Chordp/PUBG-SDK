#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CustomizableObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomizableObject.CustomizableSkeletalComponent
// 0x0050 (0x0500 - 0x04B0)
class UCustomizableSkeletalComponent : public USceneComponent
{
public:
	bool                                               bPendingUpdateSkeletalMesh;                               // 0x04B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	float                                              SkippedLastRenderTime;                                    // 0x04B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                               // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x04C0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableSkeletalComponent"));

		return ptr;
	}


	void STATIC_UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);
};


// Class CustomizableObject.CustomizableObjectInstance
// 0x01F0 (0x0220 - 0x0030)
class UCustomizableObjectInstance : public UObject
{
public:
	class UCustomizableObject*                         CustomizableObject;                                       // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                           // 0x0040(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                            // 0x0050(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                          // 0x0060(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;                                        // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                         // 0x0080(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                      // 0x0090(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	bool                                               bBuildParameterDecorations;                               // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    UpdatedDelegate;                                          // 0x00A8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x98];                                      // 0x00B8(0x0098) MISSED OFFSET
	struct FString                                     SkeletalMeshStatus;                                       // 0x0150(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x0160(0x00A8) MISSED OFFSET
	class UCustomizableInstancePrivateData*            PrivateData;                                              // 0x0208(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0210(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableObjectInstance"));

		return ptr;
	}


	void STATIC_UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);
	void STATIC_SetVectorParameterSelectedOption(const struct FString& VectorParamName, const struct FLinearColor& VectorValue);
	void STATIC_SetRandomValues();
	void STATIC_SetProjectorValue(const struct FString& ProjectorParamName, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float upX, float upY, float upZ, float ScaleX, float ScaleY, float ScaleZ, float Angle, ECustomizableObjectProjectorType ProjectionType);
	void STATIC_SetProjectorParameterType(const struct FString& ParamName, ECustomizableObjectProjectorType Type);
	void STATIC_SetIntParameterSelectedOption(const struct FString& ParamName, const struct FString& SelectedOptionName);
	void STATIC_SetFloatParameterSelectedOption(const struct FString& FloatParamName, float FloatValue);
	void STATIC_SetCurrentState(const struct FString& StateName);
	void STATIC_SetBoolParameterSelectedOption(const struct FString& BoolParamName, bool BoolValue);
	bool STATIC_IsParameterRelevant(const struct FString& ParamName);
	ECustomizableObjectProjectorType STATIC_GetProjectorParameterType(const struct FString& ParamName);
	class UTexture2D* STATIC_GetParameterDescription(const struct FString& ParamName, int DescIndex);
	struct FString STATIC_GetIntParameterSelectedOption(const struct FString& ParamName);
	float STATIC_GetFloatParameterSelectedOption(const struct FString& FloatParamName);
	struct FString STATIC_GetCurrentState();
	bool STATIC_GetBoolParameterSelectedOption(const struct FString& BoolParamName);
	int STATIC_FindVectorParameterNameIndex(const struct FString& ParamName);
	int STATIC_FindProjectorParameterNameIndex(const struct FString& ParamName);
	int STATIC_FindIntParameterNameIndex(const struct FString& ParamName);
	int STATIC_FindFloatParameterNameIndex(const struct FString& ParamName);
	int STATIC_FindBoolParameterNameIndex(const struct FString& ParamName);
};


// Class CustomizableObject.CustomizableInstancePrivateData
// 0x0218 (0x0248 - 0x0030)
class UCustomizableInstancePrivateData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	TArray<struct FGeneratedMaterial>                  GeneratedMaterials;                                       // 0x0038(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGeneratedMesh>                      GeneratedMeshes;                                          // 0x0048(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGeneratedTexture>                   GeneratedTextures;                                        // 0x0058(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0068(0x0088) MISSED OFFSET
	TArray<struct FParameterDecorations>               ParameterDecorations;                                     // 0x00F0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0xE8];                                      // 0x0100(0x00E8) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ReferencedMaterials;                                      // 0x01E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x50];                                      // 0x01F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableInstancePrivateData"));

		return ptr;
	}

};


// Class CustomizableObject.CustomizableObject
// 0x0200 (0x0230 - 0x0030)
class UCustomizableObject : public UObject
{
public:
	class USkeletalMesh*                               ReferenceSkeletalMesh;                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ReferenceStaticMesh;                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	ECustomizableObjectRelevancy                       Relevancy;                                                // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableTextureLayoutManagement;                          // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	TArray<TAssetPtr<class UMaterialInterface>>        ReferencedMaterials;                                      // 0x0048(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FMutableModelImageProperties>        ImageProperties;                                          // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap;                                             // 0x0068(0x0050) (ZeroConstructor)
	struct FCompilationOptions                         CompileOptions;                                           // 0x00B8(0x0020)
	struct FCustomizableObjectExportOptions            ExportOptions;                                            // 0x00D8(0x0018)
	EMutableCompileMeshType                            MeshCompileType;                                          // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<class UCustomizableObject*>                 WorkingSet;                                               // 0x00F8(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       VersionId;                                                // 0x0108(0x0010) (IsPlainOldData)
	TArray<struct FMutableModelParameterProperties>    ParameterProperties;                                      // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0128(0x0050) MISSED OFFSET
	TMap<struct FString, struct FParameterUIData>      ParameterUIDataMap;                                       // 0x0178(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FParameterUIData>      StateUIDataMap;                                           // 0x01C8(0x0050) (ZeroConstructor)
	bool                                               bIsChildObject;                                           // 0x0218(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17];                                      // 0x0219(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableObject"));

		return ptr;
	}


	struct FParameterUIData STATIC_GetStateUIMetadataFromIndex(int StateIndex);
	struct FParameterUIData STATIC_GetStateUIMetadata(const struct FString& StateName);
	struct FString STATIC_GetStateParameterName(const struct FString& StateName, int ParameterIndex);
	int STATIC_GetStateParameterCount(const struct FString& StateName);
	struct FString STATIC_GetStateName(int StateIndex);
	int STATIC_GetStateCount();
	struct FParameterUIData STATIC_GetParameterUIMetadataFromIndex(int ParamIndex);
	struct FParameterUIData STATIC_GetParameterUIMetadata(const struct FString& ParamName);
	EMutableParameterType STATIC_GetParameterTypeByName(const struct FString& Name);
	EMutableParameterType STATIC_GetParameterType(int ParamIndex);
	struct FString STATIC_GetParameterName(int ParamIndex);
	int STATIC_GetParameterDescriptionCount(const struct FString& ParamName);
	int STATIC_GetParameterCount();
	int STATIC_GetIntParameterNumOptions(int ParamIndex);
	struct FString STATIC_GetIntParameterAvailableOption(int ParamIndex, int K);
	int STATIC_FindParameter(const struct FString& Name);
};


// Class CustomizableObject.CustomizableSystemImageProvider
// 0x0000 (0x0030 - 0x0030)
class UCustomizableSystemImageProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableSystemImageProvider"));

		return ptr;
	}

};


// Class CustomizableObject.CustomizableObjectImageProviderArray
// 0x0090 (0x00C0 - 0x0030)
class UCustomizableObjectImageProviderArray : public UCustomizableSystemImageProvider
{
public:
	TArray<class UTexture2D*>                          Textures;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableObjectImageProviderArray"));

		return ptr;
	}

};


// Class CustomizableObject.CustomizableObjectSystem
// 0x0110 (0x0140 - 0x0030)
class UCustomizableObjectSystem : public UObject
{
public:
	TArray<struct FPendingReleaseSkeletalMeshInfo>     PendingReleaseSkeletalMesh;                               // 0x0030(0x0010) (ZeroConstructor)
	class UCustomizableObjectImageProviderArray*       PreviewExternalImageProvider;                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0048(0x00D8) MISSED OFFSET
	TArray<class UTexture2D*>                          ProtectedCachedTextures;                                  // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableObjectSystem"));

		return ptr;
	}

};


// Class CustomizableObject.InstanceUpdatedHelper
// 0x0008 (0x0038 - 0x0030)
class UInstanceUpdatedHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.InstanceUpdatedHelper"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
