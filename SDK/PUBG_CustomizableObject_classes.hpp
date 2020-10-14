#pragma once

// PUBG (8.3.5.39) SDK

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
// 0x0050 (0x0510 - 0x04C0)
class UCustomizableSkeletalComponent : public USceneComponent
{
public:
	bool                                               bPendingUpdateSkeletalMesh;                               // 0x04C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C1(0x0003) MISSED OFFSET
	float                                              SkippedLastRenderTime;                                    // 0x04C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                               // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x04D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableSkeletalComponent"));

		return ptr;
	}


	void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);
};


// Class CustomizableObject.CustomizableObjectInstance
// 0x0200 (0x0240 - 0x0040)
class UCustomizableObjectInstance : public UObject
{
public:
	class UCustomizableObject*                         CustomizableObject;                                       // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0048(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                           // 0x0050(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                            // 0x0060(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                          // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;                                        // 0x0080(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                         // 0x0090(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                      // 0x00A0(0x0010) (Edit, EditFixedSize, ZeroConstructor, EditConst)
	bool                                               bBuildParameterDecorations;                               // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    UpdatedDelegate;                                          // 0x00B8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x98];                                      // 0x00C8(0x0098) MISSED OFFSET
	struct FString                                     SkeletalMeshStatus;                                       // 0x0160(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xC0];                                      // 0x0170(0x00C0) MISSED OFFSET
	class UCustomizableInstancePrivateData*            PrivateData;                                              // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableObjectInstance"));

		return ptr;
	}


	void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);
	void SetVectorParameterSelectedOption(const struct FString& VectorParamName, const struct FLinearColor& VectorValue);
	void SetRandomValues();
	void SetProjectorValue(const struct FString& ProjectorParamName, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float upX, float upY, float upZ, float ScaleX, float ScaleY, float ScaleZ, float Angle, ECustomizableObjectProjectorType ProjectionType, int RangeIndex);
	void SetProjectorParameterType(const struct FString& ParamName, int RangeIndex, ECustomizableObjectProjectorType Type);
	void SetIntParameterSelectedOption(const struct FString& ParamName, const struct FString& SelectedOptionName, int RangeIndex);
	void SetFloatParameterSelectedOption(const struct FString& FloatParamName, float FloatValue, int RangeIndex);
	void SetCurrentState(const struct FString& StateName);
	void SetColorParameterSelectedOption(const struct FString& ColorParamName, const struct FLinearColor& ColorValue);
	void SetBoolParameterSelectedOption(const struct FString& BoolParamName, bool BoolValue);
	bool IsParameterRelevant(const struct FString& ParamName);
	bool GetProjectorValue(const struct FString& ProjectorParamName, int RangeIndex, struct FVector* OutPos, struct FVector* OutDir, struct FVector* OutUp, struct FVector* OutScale, float* OutAngle, ECustomizableObjectProjectorType* OutType);
	struct FVector GetProjectorUp(const struct FString& ParamName);
	struct FVector GetProjectorScale(const struct FString& ParamName);
	struct FVector GetProjectorPosition(const struct FString& ParamName);
	ECustomizableObjectProjectorType GetProjectorParameterType(const struct FString& ParamName, int RangeIndex);
	struct FVector GetProjectorDirection(const struct FString& ParamName);
	class UTexture2D* GetParameterDescription(const struct FString& ParamName, int DescIndex);
	struct FString GetIntParameterSelectedOption(const struct FString& ParamName, int RangeIndex);
	float GetFloatParameterSelectedOption(const struct FString& FloatParamName, int RangeIndex);
	struct FString GetCurrentState();
	struct FLinearColor GetColorParameterSelectedOption(const struct FString& ColorParamName);
	bool GetBoolParameterSelectedOption(const struct FString& BoolParamName);
	int FindVectorParameterNameIndex(const struct FString& ParamName);
	int FindProjectorParameterNameIndex(const struct FString& ParamName);
	int FindIntParameterNameIndex(const struct FString& ParamName);
	int FindFloatParameterNameIndex(const struct FString& ParamName);
	int FindBoolParameterNameIndex(const struct FString& ParamName);
	class UCustomizableObjectInstance* Clone();
};


// Class CustomizableObject.CustomizableInstancePrivateData
// 0x0358 (0x0398 - 0x0040)
class UCustomizableInstancePrivateData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	TArray<struct FGeneratedMaterial>                  GeneratedMaterials;                                       // 0x0048(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGeneratedMesh>                      GeneratedMeshes;                                          // 0x0058(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGeneratedTexture>                   GeneratedTextures;                                        // 0x0068(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0078(0x0088) MISSED OFFSET
	TArray<struct FParameterDecorations>               ParameterDecorations;                                     // 0x0100(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0110(0x0010) MISSED OFFSET
	TMap<struct FString, TWeakObjectPtr<class UTexture2D>> TextureReuseCache;                                        // 0x0120(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x1C8];                                     // 0x0170(0x01C8) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ReferencedMaterials;                                      // 0x0338(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0348(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableInstancePrivateData"));

		return ptr;
	}

};


// Class CustomizableObject.MutableMaskOutCache
// 0x00A0 (0x00E0 - 0x0040)
class UMutableMaskOutCache : public UObject
{
public:
	TMap<struct FString, struct FString>               Materials;                                                // 0x0040(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FMaskOutTexture>       Textures;                                                 // 0x0090(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.MutableMaskOutCache"));

		return ptr;
	}

};


// Class CustomizableObject.CustomizableObject
// 0x0278 (0x02B8 - 0x0040)
class UCustomizableObject : public UObject
{
public:
	class USkeletalMesh*                               ReferenceSkeletalMesh;                                    // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ReferenceStaticMesh;                                      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	ECustomizableObjectRelevancy                       Relevancy;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableTextureLayoutManagement;                          // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	TArray<TAssetPtr<class UMaterialInterface>>        ReferencedMaterials;                                      // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FMutableModelImageProperties>        ImageProperties;                                          // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap;                                             // 0x0078(0x0050) (ZeroConstructor)
	struct FCompilationOptions                         CompileOptions;                                           // 0x00C8(0x0020)
	struct FCustomizableObjectExportOptions            ExportOptions;                                            // 0x00E8(0x0018)
	EMutableCompileMeshType                            MeshCompileType;                                          // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	TArray<class UCustomizableObject*>                 WorkingSet;                                               // 0x0108(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       VersionId;                                                // 0x0118(0x0010) (IsPlainOldData)
	TArray<struct FMutableModelParameterProperties>    ParameterProperties;                                      // 0x0128(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0138(0x0050) MISSED OFFSET
	TMap<struct FString, struct FParameterUIData>      ParameterUIDataMap;                                       // 0x0188(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FParameterUIData>      StateUIDataMap;                                           // 0x01D8(0x0050) (ZeroConstructor)
	TMap<struct FString, class UPhysicsAsset*>         PhysicsAssetMap;                                          // 0x0228(0x0050) (ZeroConstructor)
	TAssetPtr<class UMutableMaskOutCache>              MaskOutCache;                                             // 0x0278(0x0020)
	bool                                               bIsChildObject;                                           // 0x0298(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class UMutableMaskOutCache*                        MaskOutCache_HardRef;                                     // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableObject"));

		return ptr;
	}


	void UnloadMaskOutCache();
	void LoadMaskOutCache();
	struct FParameterUIData GetStateUIMetadataFromIndex(int StateIndex);
	struct FParameterUIData GetStateUIMetadata(const struct FString& StateName);
	struct FString GetStateParameterName(const struct FString& StateName, int ParameterIndex);
	int GetStateParameterCount(const struct FString& StateName);
	struct FString GetStateName(int StateIndex);
	int GetStateCount();
	struct FParameterUIData GetParameterUIMetadataFromIndex(int ParamIndex);
	struct FParameterUIData GetParameterUIMetadata(const struct FString& ParamName);
	EMutableParameterType GetParameterTypeByName(const struct FString& Name);
	EMutableParameterType GetParameterType(int ParamIndex);
	struct FString GetParameterName(int ParamIndex);
	int GetParameterDescriptionCount(const struct FString& ParamName);
	int GetParameterCount();
	int GetIntParameterNumOptions(int ParamIndex);
	struct FString GetIntParameterAvailableOption(int ParamIndex, int K);
	int FindParameter(const struct FString& Name);
	class UCustomizableObjectInstance* CreateInstance();
};


// Class CustomizableObject.CustomizableSystemImageProvider
// 0x0000 (0x0040 - 0x0040)
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
// 0x0090 (0x00D0 - 0x0040)
class UCustomizableObjectImageProviderArray : public UCustomizableSystemImageProvider
{
public:
	TArray<class UTexture2D*>                          Textures;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0050(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableObjectImageProviderArray"));

		return ptr;
	}

};


// Class CustomizableObject.CustomizableObjectSystem
// 0x0118 (0x0158 - 0x0040)
class UCustomizableObjectSystem : public UObject
{
public:
	TArray<struct FPendingReleaseSkeletalMeshInfo>     PendingReleaseSkeletalMesh;                               // 0x0040(0x0010) (ZeroConstructor)
	class UCustomizableObjectImageProviderArray*       PreviewExternalImageProvider;                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0058(0x00D8) MISSED OFFSET
	TArray<class UTexture2D*>                          ProtectedCachedTextures;                                  // 0x0130(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0140(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.CustomizableObjectSystem"));

		return ptr;
	}


	int GetTotalInstances();
	int GetTextureMemoryUsed();
	struct FString GetPluginVersion();
	int GetNumPendingInstances();
	int GetNumInstances();
	class UCustomizableObjectSystem* STATIC_GetInstance();
	int GetAverageBuildTime();
	bool AreEnginePatchesPresent();
};


// Class CustomizableObject.InstanceUpdatedHelper
// 0x0008 (0x0048 - 0x0040)
class UInstanceUpdatedHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomizableObject.InstanceUpdatedHelper"));

		return ptr;
	}


	void DelegatedCallback(class UCustomizableObjectInstance* Instance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
