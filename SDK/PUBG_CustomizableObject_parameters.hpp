#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CustomizableObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
struct UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params
{
	bool                                               bNeverSkipUpdate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
struct UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Params
{
	bool                                               bIgnoreCloseDist;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceHighPriority;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
struct UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params
{
	struct FString                                     VectorParamName;                                          // (Parm, ZeroConstructor)
	struct FLinearColor                                VectorValue;                                              // (Parm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
struct UCustomizableObjectInstance_SetRandomValues_Params
{
};

// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
struct UCustomizableObjectInstance_SetProjectorValue_Params
{
	struct FString                                     ProjectorParamName;                                       // (Parm, ZeroConstructor)
	float                                              posX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              posY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              posZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dirX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dirY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dirZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              upX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              upY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              upZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleZ;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECustomizableObjectProjectorType                   ProjectionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RangeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType
struct UCustomizableObjectInstance_SetProjectorParameterType_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                RangeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ECustomizableObjectProjectorType                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
struct UCustomizableObjectInstance_SetIntParameterSelectedOption_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	struct FString                                     SelectedOptionName;                                       // (Parm, ZeroConstructor)
	int                                                RangeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
struct UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params
{
	struct FString                                     FloatParamName;                                           // (Parm, ZeroConstructor)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RangeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
struct UCustomizableObjectInstance_SetCurrentState_Params
{
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
};

// Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
struct UCustomizableObjectInstance_SetColorParameterSelectedOption_Params
{
	struct FString                                     ColorParamName;                                           // (Parm, ZeroConstructor)
	struct FLinearColor                                ColorValue;                                               // (Parm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
struct UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params
{
	struct FString                                     BoolParamName;                                            // (Parm, ZeroConstructor)
	bool                                               BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
struct UCustomizableObjectInstance_IsParameterRelevant_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue
struct UCustomizableObjectInstance_GetProjectorValue_Params
{
	struct FString                                     ProjectorParamName;                                       // (Parm, ZeroConstructor)
	struct FVector                                     OutPos;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutDir;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutUp;                                                    // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutScale;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              OutAngle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ECustomizableObjectProjectorType                   OutType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                RangeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp
struct UCustomizableObjectInstance_GetProjectorUp_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale
struct UCustomizableObjectInstance_GetProjectorScale_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
struct UCustomizableObjectInstance_GetProjectorPosition_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
struct UCustomizableObjectInstance_GetProjectorParameterType_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                RangeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ECustomizableObjectProjectorType                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
struct UCustomizableObjectInstance_GetProjectorDirection_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
struct UCustomizableObjectInstance_GetParameterDescription_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                DescIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
struct UCustomizableObjectInstance_GetIntParameterSelectedOption_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                RangeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
struct UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params
{
	struct FString                                     FloatParamName;                                           // (Parm, ZeroConstructor)
	int                                                RangeIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
struct UCustomizableObjectInstance_GetCurrentState_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
struct UCustomizableObjectInstance_GetColorParameterSelectedOption_Params
{
	struct FString                                     ColorParamName;                                           // (Parm, ZeroConstructor)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
struct UCustomizableObjectInstance_GetBoolParameterSelectedOption_Params
{
	struct FString                                     BoolParamName;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
struct UCustomizableObjectInstance_FindVectorParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
struct UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
struct UCustomizableObjectInstance_FindIntParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
struct UCustomizableObjectInstance_FindFloatParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
struct UCustomizableObjectInstance_FindBoolParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.Clone
struct UCustomizableObjectInstance_Clone_Params
{
	class UCustomizableObjectInstance*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.UnloadMaskOutCache
struct UCustomizableObject_UnloadMaskOutCache_Params
{
};

// Function CustomizableObject.CustomizableObject.LoadMaskOutCache
struct UCustomizableObject_LoadMaskOutCache_Params
{
};

// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
struct UCustomizableObject_GetStateUIMetadataFromIndex_Params
{
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FParameterUIData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
struct UCustomizableObject_GetStateUIMetadata_Params
{
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	struct FParameterUIData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateParameterName
struct UCustomizableObject_GetStateParameterName_Params
{
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	int                                                ParameterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateParameterCount
struct UCustomizableObject_GetStateParameterCount_Params
{
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetStateName
struct UCustomizableObject_GetStateName_Params
{
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateCount
struct UCustomizableObject_GetStateCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
struct UCustomizableObject_GetParameterUIMetadataFromIndex_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FParameterUIData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
struct UCustomizableObject_GetParameterUIMetadata_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	struct FParameterUIData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
struct UCustomizableObject_GetParameterTypeByName_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	EMutableParameterType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterType
struct UCustomizableObject_GetParameterType_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EMutableParameterType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterName
struct UCustomizableObject_GetParameterName_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
struct UCustomizableObject_GetParameterDescriptionCount_Params
{
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterCount
struct UCustomizableObject_GetParameterCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
struct UCustomizableObject_GetIntParameterNumOptions_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
struct UCustomizableObject_GetIntParameterAvailableOption_Params
{
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                K;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.FindParameter
struct UCustomizableObject_FindParameter_Params
{
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.CreateInstance
struct UCustomizableObject_CreateInstance_Params
{
	class UCustomizableObjectInstance*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances
struct UCustomizableObjectSystem_GetTotalInstances_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
struct UCustomizableObjectSystem_GetTextureMemoryUsed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion
struct UCustomizableObjectSystem_GetPluginVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
struct UCustomizableObjectSystem_GetNumPendingInstances_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectSystem.GetNumInstances
struct UCustomizableObjectSystem_GetNumInstances_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectSystem.GetInstance
struct UCustomizableObjectSystem_GetInstance_Params
{
	class UCustomizableObjectSystem*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
struct UCustomizableObjectSystem_GetAverageBuildTime_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent
struct UCustomizableObjectSystem_AreEnginePatchesPresent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.InstanceUpdatedHelper.DelegatedCallback
struct UInstanceUpdatedHelper_DelegatedCallback_Params
{
	class UCustomizableObjectInstance*                 Instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
