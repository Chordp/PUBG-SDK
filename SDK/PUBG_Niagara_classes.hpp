#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Niagara_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Niagara.NiagaraActor
// 0x0008 (0x0418 - 0x0410)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x0410(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraActor"));

		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x0050 (0x0A00 - 0x09B0)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09B0(0x0010) MISSED OFFSET
	TArray<struct FNiagaraVariable>                    EffectParameterLocalOverrides;                            // 0x09C0(0x0010) (Edit, ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     EffectDataInterfaceLocalOverrides;                        // 0x09D0(0x0010) (Edit, ZeroConstructor)
	TArray<class UNiagaraDataInterface*>               InstanceDataInterfaces;                                   // 0x09E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bRenderingEnabled;                                        // 0x09F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x09F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraComponent"));

		return ptr;
	}


	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraStaticMeshDataInterfaceActor(const struct FString& InVariableName, class AActor* InSource);
	void SetNiagaraEmitterSpawnRate(const struct FString& InEmitterName, float InValue);
	void ResetEffect();
	void ReinitializeEffect();
};


// Class Niagara.NiagaraDataInterface
// 0x0000 (0x0040 - 0x0040)
class UNiagaraDataInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraDataInterface"));

		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0000 (0x0040 - 0x0040)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraDataInterfaceCurveBase"));

		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0070 (0x00B0 - 0x0040)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0040(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraDataInterfaceCurve"));

		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0150 (0x0190 - 0x0040)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0040(0x0070) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00B0(0x0070) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0120(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraDataInterfaceVectorCurve"));

		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x01C0 (0x0200 - 0x0040)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0040(0x0070) (Edit)
	struct FRichCurve                                  GreenCurve;                                               // 0x00B0(0x0070) (Edit)
	struct FRichCurve                                  BlueCurve;                                                // 0x0120(0x0070) (Edit)
	struct FRichCurve                                  AlphaCurve;                                               // 0x0190(0x0070) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraDataInterfaceColorCurve"));

		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0000 (0x0040 - 0x0040)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraDataInterfaceCurlNoise"));

		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0090 (0x00D0 - 0x0040)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0048(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraDataInterfaceSpline"));

		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x01D0 (0x0210 - 0x0040)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0050(0x0068) (Edit)
	bool                                               bEnableVertexColorRangeSorting;                           // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x157];                                     // 0x00B9(0x0157) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraDataInterfaceStaticMesh"));

		return ptr;
	}

};


// Class Niagara.NiagaraEffect
// 0x0048 (0x0088 - 0x0040)
class UNiagaraEffect : public UObject
{
public:
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	class UNiagaraScript*                              EffectScript;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraParameterBinding>            ParameterBindings;                                        // 0x0058(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraParameterBinding>            DataInterfaceBindings;                                    // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEmitterInternalVariableBinding> InternalEmitterVariableBindings;                          // 0x0078(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraEffect"));

		return ptr;
	}

};


// Class Niagara.NiagaraEffectRendererProperties
// 0x0000 (0x0040 - 0x0040)
class UNiagaraEffectRendererProperties : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraEffectRendererProperties"));

		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x0010 (0x0050 - 0x0040)
class UNiagaraLightRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	float                                              RadiusScale;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorAdd;                                                 // 0x0044(0x000C) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraLightRendererProperties"));

		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x0008 (0x0048 - 0x0040)
class UNiagaraMeshRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraMeshRendererProperties"));

		return ptr;
	}

};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0000 (0x0040 - 0x0040)
class UNiagaraRibbonRendererProperties : public UNiagaraEffectRendererProperties
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraRibbonRendererProperties"));

		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x0020 (0x0060 - 0x0040)
class UNiagaraSpriteRendererProperties : public UNiagaraEffectRendererProperties
{
public:
	struct FVector2D                                   SubImageSize;                                             // 0x0040(0x0008) (Edit, IsPlainOldData)
	ENiagaraSpriteAlignment                            Alignment;                                                // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSpriteFacingMode                           FacingMode;                                               // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	struct FVector                                     CustomFacingVectorMask;                                   // 0x004C(0x000C) (Edit, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraSpriteRendererProperties"));

		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x00C0 (0x0100 - 0x0040)
class UNiagaraScript : public UObject
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x0040(0x0010) (ZeroConstructor)
	struct FNiagaraParameters                          Parameters;                                               // 0x0050(0x0010)
	struct FNiagaraParameters                          InternalParameters;                                       // 0x0060(0x0010)
	TArray<struct FNiagaraVariable>                    Attributes;                                               // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventReceivers;                                           // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventGenerators;                                          // 0x0090(0x0010) (ZeroConstructor)
	struct FNiagaraScriptDataUsageInfo                 DataUsage;                                                // 0x00A0(0x0001)
	ENiagaraScriptUsage                                Usage;                                                    // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00A2(0x0006) MISSED OFFSET
	TArray<struct FNiagaraScriptDataInterfaceInfo>     DataInterfaceInfo;                                        // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FVMExternalFunctionBindingInfo>      CalledVMExternalFunctions;                                // 0x00B8(0x0010) (ZeroConstructor)
	ENiagaraNumericOutputTypeSelectionMode             NumericOutputTypeSelectionMode;                           // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x00C9(0x0027) MISSED OFFSET
	TArray<struct FNiagaraStatScope>                   StatScopes;                                               // 0x00F0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraScript"));

		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0040 - 0x0040)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraEventReceiverEmitterAction"));

		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0048 - 0x0040)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles"));

		return ptr;
	}

};


// Class Niagara.NiagaraEmitterProperties
// 0x00E0 (0x0120 - 0x0040)
class UNiagaraEmitterProperties : public UObject
{
public:
	float                                              SpawnRate;                                                // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalSpace;                                              // 0x0044(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	class UMaterial*                                   Material;                                                 // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumLoops;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraCollisionMode                              CollisionMode;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x0060(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0068(0x0028)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0090(0x0028)
	struct FNiagaraEventScriptProperties               EventHandlerScriptProps;                                  // 0x00B8(0x0050) (Edit)
	TArray<struct FNiagaraEmitterBurst>                Bursts;                                                   // 0x0108(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x0118(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraEmitterProperties"));

		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0040 - 0x0040)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraFunctionLibrary"));

		return ptr;
	}

};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0060 - 0x0040)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraScriptSourceBase"));

		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x0050 (0x00A0 - 0x0050)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       DefaultEffect;                                            // 0x0050(0x0010) (Edit, Config)
	struct FStringAssetReference                       DefaultEmitter;                                           // 0x0060(0x0010) (Edit, Config)
	struct FStringAssetReference                       DefaultScript;                                            // 0x0070(0x0010) (Edit, Config)
	TArray<struct FStringAssetReference>               AdditionalParameterTypes;                                 // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FStringAssetReference>               AdditionalPayloadTypes;                                   // 0x0090(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class Niagara.NiagaraSettings"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
