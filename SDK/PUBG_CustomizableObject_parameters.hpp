#pragma once

// PUBG (7.1.6.5) SDK

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
<<<<<<< HEAD
	bool*                                              bNeverSkipUpdate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bNeverSkipUpdate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
struct UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Params
{
<<<<<<< HEAD
	bool*                                              bIgnoreCloseDist;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForceHighPriority;                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bIgnoreCloseDist;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceHighPriority;                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
struct UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params
{
<<<<<<< HEAD
	struct FString*                                    VectorParamName;                                          // (Parm, ZeroConstructor)
	struct FLinearColor*                               VectorValue;                                              // (Parm, IsPlainOldData)
=======
	struct FString                                     VectorParamName;                                          // (Parm, ZeroConstructor)
	struct FLinearColor                                VectorValue;                                              // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
struct UCustomizableObjectInstance_SetRandomValues_Params
{
};

// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
struct UCustomizableObjectInstance_SetProjectorValue_Params
{
<<<<<<< HEAD
	struct FString*                                    ProjectorParamName;                                       // (Parm, ZeroConstructor)
	float*                                             posX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             posY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             posZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             dirX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             dirY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             dirZ;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             upX;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             upY;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             upZ;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleX;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleY;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleZ;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECustomizableObjectProjectorType*                  ProjectionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
=======
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
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType
struct UCustomizableObjectInstance_SetProjectorParameterType_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
	ECustomizableObjectProjectorType*                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	ECustomizableObjectProjectorType                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
struct UCustomizableObjectInstance_SetIntParameterSelectedOption_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
	struct FString*                                    SelectedOptionName;                                       // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	struct FString                                     SelectedOptionName;                                       // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
struct UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params
{
<<<<<<< HEAD
	struct FString*                                    FloatParamName;                                           // (Parm, ZeroConstructor)
	float*                                             FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     FloatParamName;                                           // (Parm, ZeroConstructor)
	float                                              FloatValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
struct UCustomizableObjectInstance_SetCurrentState_Params
{
<<<<<<< HEAD
	struct FString*                                    StateName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
struct UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params
{
<<<<<<< HEAD
	struct FString*                                    BoolParamName;                                            // (Parm, ZeroConstructor)
	bool*                                              BoolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     BoolParamName;                                            // (Parm, ZeroConstructor)
	bool                                               boolValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
struct UCustomizableObjectInstance_IsParameterRelevant_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
struct UCustomizableObjectInstance_GetProjectorParameterType_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	ECustomizableObjectProjectorType                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
struct UCustomizableObjectInstance_GetParameterDescription_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
	int*                                               DescIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
	int                                                DescIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
struct UCustomizableObjectInstance_GetIntParameterSelectedOption_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
struct UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params
{
<<<<<<< HEAD
	struct FString*                                    FloatParamName;                                           // (Parm, ZeroConstructor)
=======
	struct FString                                     FloatParamName;                                           // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
struct UCustomizableObjectInstance_GetCurrentState_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
struct UCustomizableObjectInstance_GetBoolParameterSelectedOption_Params
{
<<<<<<< HEAD
	struct FString*                                    BoolParamName;                                            // (Parm, ZeroConstructor)
=======
	struct FString                                     BoolParamName;                                            // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
struct UCustomizableObjectInstance_FindVectorParameterNameIndex_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
struct UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
struct UCustomizableObjectInstance_FindIntParameterNameIndex_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
struct UCustomizableObjectInstance_FindFloatParameterNameIndex_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
struct UCustomizableObjectInstance_FindBoolParameterNameIndex_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
struct UCustomizableObject_GetStateUIMetadataFromIndex_Params
{
<<<<<<< HEAD
	int*                                               StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FParameterUIData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
struct UCustomizableObject_GetStateUIMetadata_Params
{
<<<<<<< HEAD
	struct FString*                                    StateName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FParameterUIData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateParameterName
struct UCustomizableObject_GetStateParameterName_Params
{
<<<<<<< HEAD
	struct FString*                                    StateName;                                                // (Parm, ZeroConstructor)
	int*                                               ParameterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
	int                                                ParameterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateParameterCount
struct UCustomizableObject_GetStateParameterCount_Params
{
<<<<<<< HEAD
	struct FString*                                    StateName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     StateName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetStateName
struct UCustomizableObject_GetStateName_Params
{
<<<<<<< HEAD
	int*                                               StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                StateIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	int*                                               ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FParameterUIData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
struct UCustomizableObject_GetParameterUIMetadata_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FParameterUIData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
struct UCustomizableObject_GetParameterTypeByName_Params
{
<<<<<<< HEAD
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
=======
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	EMutableParameterType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterType
struct UCustomizableObject_GetParameterType_Params
{
<<<<<<< HEAD
	int*                                               ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	EMutableParameterType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterName
struct UCustomizableObject_GetParameterName_Params
{
<<<<<<< HEAD
	int*                                               ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
struct UCustomizableObject_GetParameterDescriptionCount_Params
{
<<<<<<< HEAD
	struct FString*                                    ParamName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     ParamName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
	int*                                               ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
struct UCustomizableObject_GetIntParameterAvailableOption_Params
{
<<<<<<< HEAD
	int*                                               ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               K;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                ParamIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                K;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CustomizableObject.CustomizableObject.FindParameter
struct UCustomizableObject_FindParameter_Params
{
<<<<<<< HEAD
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
=======
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomizableObject.InstanceUpdatedHelper.DelegatedCallback
struct UInstanceUpdatedHelper_DelegatedCallback_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
