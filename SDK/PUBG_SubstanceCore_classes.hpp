#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SubstanceCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SubstanceCore.SubstanceGraphInstance
// 0x00E8 (0x0110 - 0x0028)
class USubstanceGraphInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     PackageURL;                                               // 0x0030(0x0010) (ZeroConstructor)
	class USubstanceInstanceFactory*                   ParentFactory;                                            // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, class USubstanceImageInput*>        ImageSources;                                             // 0x0048(0x0050) (ZeroConstructor)
	class UMaterial*                                   CreatedMaterial;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FGuid>                            OutputTextureLinkData;                                    // 0x00A0(0x0050) (ZeroConstructor)
	bool                                               bIsFrozen;                                                // 0x00F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x00F1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SubstanceCore.SubstanceGraphInstance"));

		return ptr;
	}


	void SetInputString(const struct FString& Identifier, const struct FString& Value);
	void SetInputInt(const struct FString& Identifier, TArray<int> InputValues);
	bool SetInputImg(const struct FString& InputName, class UObject* Value);
	void SetInputFloat(const struct FString& Identifier, TArray<float> InputValues);
	void SetInputColor(const struct FString& Identifier, const struct FLinearColor& Color);
	void SetInputBool(const struct FString& Identifier, bool Bool);
	struct FSubstanceIntInputDesc GetIntInputDesc(const struct FString& Identifier);
	struct FSubstanceInstanceDesc GetInstanceDesc();
	TEnumAsByte<ESubstanceInputType> GetInputType(const struct FString& InputName);
	struct FString GetInputString(const struct FString& Identifier);
	TArray<struct FString> GetInputNames();
	TArray<int> GetInputInt(const struct FString& Identifier);
	TArray<float> GetInputFloat(const struct FString& Identifier);
	struct FLinearColor GetInputColor(const struct FString& Identifier);
	bool GetInputBool(const struct FString& Identifier);
	struct FSubstanceFloatInputDesc GetFloatInputDesc(const struct FString& Identifier);
};


// Class SubstanceCore.SubstanceImageInput
// 0x0140 (0x0168 - 0x0028)
class USubstanceImageInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET
	int                                                CompressionLevelRGB;                                      // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CompressionLevelAlpha;                                    // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SizeX;                                                    // 0x0128(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SizeY;                                                    // 0x012C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                NumComponents;                                            // 0x0130(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FString                                     SourceFilePath;                                           // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     SourceFileTimestamp;                                      // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<class USubstanceGraphInstance*>             Consumers;                                                // 0x0158(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SubstanceCore.SubstanceImageInput"));

		return ptr;
	}

};


// Class SubstanceCore.SubstanceInstanceFactory
// 0x0058 (0x0080 - 0x0028)
class USubstanceInstanceFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FString                                     RelativeSourceFilePath;                                   // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     AbsoluteSourceFilePath;                                   // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     SourceFileTimestamp;                                      // 0x0058(0x0010) (ZeroConstructor)
	TEnumAsByte<ESubstanceGenerationMode>              GenerationMode;                                           // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0069(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SubstanceCore.SubstanceInstanceFactory"));

		return ptr;
	}

};


// Class SubstanceCore.SubstanceSettings
// 0x0018 (0x0040 - 0x0028)
class USubstanceSettings : public UObject
{
public:
	int                                                MemoryBudgetMb;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CPUCores;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AsyncLoadMipClip;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAsyncSubstancesRenderedPerFrame;                       // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ESubstanceGenerationMode>              DefaultGenerationMode;                                    // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ESubstanceEngineType>                  SubstanceEngine;                                          // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SubstanceCore.SubstanceSettings"));

		return ptr;
	}

};


// Class SubstanceCore.SubstanceTexture2D
// 0x0070 (0x0150 - 0x00E0)
class USubstanceTexture2D : public UTexture2DDynamic
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET
	class USubstanceGraphInstance*                     ParentInstance;                                           // 0x0120(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x0128(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x0129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCooked;                                                  // 0x012A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x25];                                      // 0x012B(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SubstanceCore.SubstanceTexture2D"));

		return ptr;
	}


	TEnumAsByte<ESubChannelType> GetChannel();
};


// Class SubstanceCore.SubstanceUtility
// 0x0000 (0x0028 - 0x0028)
class USubstanceUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class SubstanceCore.SubstanceUtility"));

		return ptr;
	}


	void STATIC_SyncRendering(class USubstanceGraphInstance* InstancesToRender);
	void STATIC_SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int Width, int Height);
	void STATIC_SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, TEnumAsByte<ESubstanceTextureSize> Width, TEnumAsByte<ESubstanceTextureSize> Height);
	void STATIC_ResetInputParameters(class USubstanceGraphInstance* GraphInstance);
	TArray<class USubstanceTexture2D*> STATIC_GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance);
	TArray<class USubstanceGraphInstance*> STATIC_GetSubstances(class UMaterialInterface* Material);
	float STATIC_GetSubstanceLoadingProgress();
	struct FString STATIC_GetGraphName(class USubstanceGraphInstance* GraphInstance);
	struct FString STATIC_GetFactoryName(class USubstanceGraphInstance* GraphInstance);
	void STATIC_EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int> OutputIndices);
	class USubstanceGraphInstance* STATIC_DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance);
	void STATIC_DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int> OutputIndices);
	class USubstanceGraphInstance* STATIC_CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int GraphDescIndex, const struct FString& InstanceName);
	class USubstanceInstanceFactory* STATIC_CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int InputFactoryGraphIndex, TArray<struct FSubstanceConnection> Connections);
	void STATIC_CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance);
	void STATIC_ClearCache();
	void STATIC_AsyncRendering(class USubstanceGraphInstance* InstancesToRender);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
