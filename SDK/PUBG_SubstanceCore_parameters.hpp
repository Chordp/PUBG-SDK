#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SubstanceCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SubstanceCore.SubstanceGraphInstance.SetInputString
struct USubstanceGraphInstance_SetInputString_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
	struct FString*                                    Value;                                                    // (Parm, ZeroConstructor)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputInt
struct USubstanceGraphInstance_SetInputInt_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
	TArray<int>*                                       InputValues;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
	TArray<int>                                        InputValues;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputImg
struct USubstanceGraphInstance_SetInputImg_Params
{
<<<<<<< HEAD
	struct FString*                                    InputName;                                                // (Parm, ZeroConstructor)
	class UObject**                                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     InputName;                                                // (Parm, ZeroConstructor)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
struct USubstanceGraphInstance_SetInputFloat_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
	TArray<float>*                                     InputValues;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
	TArray<float>                                      InputValues;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputColor
struct USubstanceGraphInstance_SetInputColor_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputBool
struct USubstanceGraphInstance_SetInputBool_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
	bool*                                              Bool;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
	bool                                               Bool;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
struct USubstanceGraphInstance_GetIntInputDesc_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FSubstanceIntInputDesc                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
struct USubstanceGraphInstance_GetInstanceDesc_Params
{
	struct FSubstanceInstanceDesc                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputType
struct USubstanceGraphInstance_GetInputType_Params
{
<<<<<<< HEAD
	struct FString*                                    InputName;                                                // (Parm, ZeroConstructor)
=======
	struct FString                                     InputName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	TEnumAsByte<ESubstanceInputType>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputString
struct USubstanceGraphInstance_GetInputString_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputNames
struct USubstanceGraphInstance_GetInputNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputInt
struct USubstanceGraphInstance_GetInputInt_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
struct USubstanceGraphInstance_GetInputFloat_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputColor
struct USubstanceGraphInstance_GetInputColor_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputBool
struct USubstanceGraphInstance_GetInputBool_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
struct USubstanceGraphInstance_GetFloatInputDesc_Params
{
<<<<<<< HEAD
	struct FString*                                    Identifier;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     Identifier;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FSubstanceFloatInputDesc                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SubstanceCore.SubstanceTexture2D.GetChannel
struct USubstanceTexture2D_GetChannel_Params
{
	TEnumAsByte<ESubChannelType>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.SyncRendering
struct USubstanceUtility_SyncRendering_Params
{
<<<<<<< HEAD
	class USubstanceGraphInstance**                    InstancesToRender;                                        // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USubstanceGraphInstance*                     InstancesToRender;                                        // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
struct USubstanceUtility_SetGraphInstanceOutputSizeInt_Params
{
<<<<<<< HEAD
	class USubstanceGraphInstance**                    GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
struct USubstanceUtility_SetGraphInstanceOutputSize_Params
{
<<<<<<< HEAD
	class USubstanceGraphInstance**                    GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESubstanceTextureSize>*                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESubstanceTextureSize>*                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESubstanceTextureSize>                 Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESubstanceTextureSize>                 Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceUtility.ResetInputParameters
struct USubstanceUtility_ResetInputParameters_Params
{
<<<<<<< HEAD
	class USubstanceGraphInstance**                    GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceUtility.GetSubstanceTextures
struct USubstanceUtility_GetSubstanceTextures_Params
{
<<<<<<< HEAD
	class USubstanceGraphInstance**                    GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	TArray<class USubstanceTexture2D*>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceUtility.GetSubstances
struct USubstanceUtility_GetSubstances_Params
{
<<<<<<< HEAD
	class UMaterialInterface**                         Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	TArray<class USubstanceGraphInstance*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
struct USubstanceUtility_GetSubstanceLoadingProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.GetGraphName
struct USubstanceUtility_GetGraphName_Params
{
<<<<<<< HEAD
	class USubstanceGraphInstance**                    GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceUtility.GetFactoryName
struct USubstanceUtility_GetFactoryName_Params
{
<<<<<<< HEAD
	class USubstanceGraphInstance**                    GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs
struct USubstanceUtility_EnableInstanceOutputs_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance**                    GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       OutputIndices;                                            // (Parm, ZeroConstructor)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutputIndices;                                            // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance
struct USubstanceUtility_DuplicateGraphInstance_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance**                    GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class USubstanceGraphInstance*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs
struct USubstanceUtility_DisableInstanceOutputs_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance**                    GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       OutputIndices;                                            // (Parm, ZeroConstructor)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutputIndices;                                            // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceUtility.CreateGraphInstance
struct USubstanceUtility_CreateGraphInstance_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceInstanceFactory**                  Factory;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               GraphDescIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    InstanceName;                                             // (Parm, ZeroConstructor)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceInstanceFactory*                   Factory;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GraphDescIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceName;                                             // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class USubstanceGraphInstance*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory
struct USubstanceUtility_CreateAggregateSubstanceFactory_Params
{
<<<<<<< HEAD
	class USubstanceInstanceFactory**                  OutputFactory;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OutputFactoryGraphIndex;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceInstanceFactory**                  InputFactory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InputFactoryGraphIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSubstanceConnection>*               Connections;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	class USubstanceInstanceFactory*                   OutputFactory;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutputFactoryGraphIndex;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceInstanceFactory*                   InputFactory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InputFactoryGraphIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSubstanceConnection>                Connections;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class USubstanceInstanceFactory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.CopyInputParameters
struct USubstanceUtility_CopyInputParameters_Params
{
<<<<<<< HEAD
	class USubstanceGraphInstance**                    SourceGraphInstance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance**                    DestGraphInstance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USubstanceGraphInstance*                     SourceGraphInstance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance*                     DestGraphInstance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function SubstanceCore.SubstanceUtility.ClearCache
struct USubstanceUtility_ClearCache_Params
{
};

// Function SubstanceCore.SubstanceUtility.AsyncRendering
struct USubstanceUtility_AsyncRendering_Params
{
<<<<<<< HEAD
	class USubstanceGraphInstance**                    InstancesToRender;                                        // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USubstanceGraphInstance*                     InstancesToRender;                                        // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
