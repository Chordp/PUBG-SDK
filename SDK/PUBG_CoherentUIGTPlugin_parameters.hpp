#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CoherentUIGTPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromStruct
struct UCoherentUIGTWidget_UpdateWholeDataModelFromStruct_Params
{
<<<<<<< HEAD
	class UStructProperty**                            Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
=======
	class UStructProperty*                             Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.UpdateWholeDataModelFromObject
struct UCoherentUIGTWidget_UpdateWholeDataModelFromObject_Params
{
<<<<<<< HEAD
	class UObject**                                    Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
struct UCoherentUIGTWidget_TriggerJSEvent_Params
{
<<<<<<< HEAD
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	class UCoherentUIGTJSEvent**                       EventData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UCoherentUIGTJSEvent*                        EventData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SynchronizeModels
struct UCoherentUIGTWidget_SynchronizeModels_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
struct UCoherentUIGTWidget_ShowPaintRects_Params
{
<<<<<<< HEAD
	bool*                                              Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetInputPropagationBehaviour
struct UCoherentUIGTWidget_SetInputPropagationBehaviour_Params
{
<<<<<<< HEAD
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour>* Propagation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params
{
<<<<<<< HEAD
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
struct UCoherentUIGTWidget_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
struct UCoherentUIGTWidget_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
struct UCoherentUIGTWidget_Load_Params
{
<<<<<<< HEAD
	struct FString*                                    path;                                                     // (Parm, ZeroConstructor)
=======
	struct FString                                     path;                                                     // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
struct UCoherentUIGTWidget_IsTransparent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
struct UCoherentUIGTWidget_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
struct UCoherentUIGTWidget_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
struct UCoherentUIGTWidget_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
struct UCoherentUIGTWidget_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetRenderTexture
struct UCoherentUIGTWidget_GetRenderTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetInputPropagationBehaviour
struct UCoherentUIGTWidget_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.EndDebugFrameSave
struct UCoherentUIGTWidget_EndDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.DebugSaveNextFrame
struct UCoherentUIGTWidget_DebugSaveNextFrame_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
struct UCoherentUIGTWidget_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromStruct
struct UCoherentUIGTWidget_CreateDataModelFromStruct_Params
{
<<<<<<< HEAD
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	class UStructProperty**                            Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UStructProperty*                             Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateDataModelFromObject
struct UCoherentUIGTWidget_CreateDataModelFromObject_Params
{
<<<<<<< HEAD
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	class UObject**                                    Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.BeginDebugFrameSave
struct UCoherentUIGTWidget_BeginDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddText
struct UCoherentUIGTJSEvent_AddText_Params
{
<<<<<<< HEAD
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddStructArg
struct UCoherentUIGTJSEvent_AddStructArg_Params
{
<<<<<<< HEAD
	class UStructProperty**                            Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
=======
	class UStructProperty*                             Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddString
struct UCoherentUIGTJSEvent_AddString_Params
{
<<<<<<< HEAD
	struct FString*                                    Str;                                                      // (Parm, ZeroConstructor)
=======
	struct FString                                     Str;                                                      // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddObject
struct UCoherentUIGTJSEvent_AddObject_Params
{
<<<<<<< HEAD
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddName
struct UCoherentUIGTJSEvent_AddName_Params
{
<<<<<<< HEAD
	struct FName*                                      Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
=======
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddInt32
struct UCoherentUIGTJSEvent_AddInt32_Params
{
<<<<<<< HEAD
	int*                                               integer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                integer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddFloat
struct UCoherentUIGTJSEvent_AddFloat_Params
{
<<<<<<< HEAD
	float*                                             FL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              FL;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddByte
struct UCoherentUIGTJSEvent_AddByte_Params
{
<<<<<<< HEAD
	unsigned char*                                     byte;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	unsigned char                                      byte;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddBool
struct UCoherentUIGTJSEvent_AddBool_Params
{
<<<<<<< HEAD
	bool*                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSEvent.AddArray
struct UCoherentUIGTJSEvent_AddArray_Params
{
<<<<<<< HEAD
	TArray<int>*                                       Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	TArray<int>                                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
struct UCoherentUIGTJSPayload_ReadObject_Params
{
<<<<<<< HEAD
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
struct UCoherentUIGTJSPayload_GetString_Params
{
<<<<<<< HEAD
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
struct UCoherentUIGTJSPayload_GetNumber_Params
{
<<<<<<< HEAD
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
struct UCoherentUIGTJSPayload_GetInt32_Params
{
<<<<<<< HEAD
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
struct UCoherentUIGTJSPayload_GetBool_Params
{
<<<<<<< HEAD
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromStruct
struct UCoherentUIGTBaseComponent_UpdateWholeDataModelFromStruct_Params
{
<<<<<<< HEAD
	class UStructProperty**                            Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
=======
	class UStructProperty*                             Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.UpdateWholeDataModelFromObject
struct UCoherentUIGTBaseComponent_UpdateWholeDataModelFromObject_Params
{
<<<<<<< HEAD
	class UObject**                                    Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
struct UCoherentUIGTBaseComponent_TriggerJSEvent_Params
{
<<<<<<< HEAD
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	class UCoherentUIGTJSEvent**                       EventData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UCoherentUIGTJSEvent*                        EventData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SynchronizeModels
struct UCoherentUIGTBaseComponent_SynchronizeModels_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
struct UCoherentUIGTBaseComponent_ShowPaintRects_Params
{
<<<<<<< HEAD
	bool*                                              Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params
{
<<<<<<< HEAD
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
struct UCoherentUIGTBaseComponent_Resize_Params
{
<<<<<<< HEAD
	int*                                               Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
struct UCoherentUIGTBaseComponent_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
struct UCoherentUIGTBaseComponent_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
struct UCoherentUIGTBaseComponent_Load_Params
{
<<<<<<< HEAD
	struct FString*                                    path;                                                     // (Parm, ZeroConstructor)
=======
	struct FString                                     path;                                                     // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
struct UCoherentUIGTBaseComponent_IsTransparent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
struct UCoherentUIGTBaseComponent_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
struct UCoherentUIGTBaseComponent_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
struct UCoherentUIGTBaseComponent_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
struct UCoherentUIGTBaseComponent_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EndDebugFrameSave
struct UCoherentUIGTBaseComponent_EndDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
struct UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params
{
<<<<<<< HEAD
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.DebugSaveNextFrame
struct UCoherentUIGTBaseComponent_DebugSaveNextFrame_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
struct UCoherentUIGTBaseComponent_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromStruct
struct UCoherentUIGTBaseComponent_CreateDataModelFromStruct_Params
{
<<<<<<< HEAD
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	class UStructProperty**                            Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UStructProperty*                             Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateDataModelFromObject
struct UCoherentUIGTBaseComponent_CreateDataModelFromObject_Params
{
<<<<<<< HEAD
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	class UObject**                                    Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.BeginDebugFrameSave
struct UCoherentUIGTBaseComponent_BeginDebugFrameSave_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.TriggerJSEvent
struct UCoherentUIGTBlueprintFunctionLibrary_TriggerJSEvent_Params
{
<<<<<<< HEAD
	class UCoherentUIGTBaseComponent**                 Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UCoherentUIGTBaseComponent*                  Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.SetupLoadingScreen
struct UCoherentUIGTBlueprintFunctionLibrary_SetupLoadingScreen_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCoherentUIGTLoadingScreenSettings*         Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCoherentUIGTLoadingScreenSettings          Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.CreateJSEvent
struct UCoherentUIGTBlueprintFunctionLibrary_CreateJSEvent_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddStructArg
struct UCoherentUIGTBlueprintFunctionLibrary_AddStructArg_Params
{
<<<<<<< HEAD
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UStructProperty**                            Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
=======
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddString
struct UCoherentUIGTBlueprintFunctionLibrary_AddString_Params
{
<<<<<<< HEAD
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Arg;                                                      // (Parm, ZeroConstructor)
=======
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Arg;                                                      // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddObject
struct UCoherentUIGTBlueprintFunctionLibrary_AddObject_Params
{
<<<<<<< HEAD
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddInt32
struct UCoherentUIGTBlueprintFunctionLibrary_AddInt32_Params
{
<<<<<<< HEAD
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddFloat
struct UCoherentUIGTBlueprintFunctionLibrary_AddFloat_Params
{
<<<<<<< HEAD
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddByte
struct UCoherentUIGTBlueprintFunctionLibrary_AddByte_Params
{
<<<<<<< HEAD
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddBool
struct UCoherentUIGTBlueprintFunctionLibrary_AddBool_Params
{
<<<<<<< HEAD
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArrayOfStructs
struct UCoherentUIGTBlueprintFunctionLibrary_AddArrayOfStructs_Params
{
<<<<<<< HEAD
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       Arg;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Arg;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary.AddArray
struct UCoherentUIGTBlueprintFunctionLibrary_AddArray_Params
{
<<<<<<< HEAD
	class UCoherentUIGTJSEvent**                       JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       Arg;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               ArrayType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UCoherentUIGTJSEvent*                        JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Arg;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ArrayType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
struct ACoherentUIGTGameHUD_SetupUIGTView_Params
{
<<<<<<< HEAD
	struct FString*                                    PageUrl;                                                  // (Parm, ZeroConstructor)
	bool*                                              bIsTransparent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ClickThroughAlphaThreshold;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AnimationFrameDefer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDelayedUpdate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     PageUrl;                                                  // (Parm, ZeroConstructor)
	bool                                               bIsTransparent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClickThroughAlphaThreshold;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimationFrameDefer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayedUpdate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.HasSetupUIGTView
struct ACoherentUIGTGameHUD_HasSetupUIGTView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
struct ACoherentUIGTInputActor_SetLineTraceMode_Params
{
<<<<<<< HEAD
	TEnumAsByte<EGTInputWidgetLineTraceMode>*          Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TEnumAsByte<EGTInputWidgetLineTraceMode>           Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
struct ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params
{
<<<<<<< HEAD
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour>* Propagation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params
{
<<<<<<< HEAD
	class UCoherentUIGTBaseComponent**                 NewFocusedView;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
=======
	class UCoherentUIGTBaseComponent*                  NewFocusedView;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params
{
<<<<<<< HEAD
	bool*                                              FocusUI;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               FocusUI;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
struct ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
struct ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
struct ACoherentUIGTInputActor_Initialize_Params
{
<<<<<<< HEAD
	TEnumAsByte<ECollisionChannel>*                    CollisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>*                      AddressMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGTInputWidgetRaycastQuality>*         RaycastQuality;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UVChannel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGTInputWidgetRaycastQuality>          RaycastQuality;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UVChannel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
struct ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
struct ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params
{
<<<<<<< HEAD
	bool*                                              bAccept;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bAccept;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
struct ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params
{
<<<<<<< HEAD
	bool*                                              bAllow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bAllow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
struct UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params
{
<<<<<<< HEAD
	class UCoherentUIGTBaseComponent**                 baseComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
=======
	class UCoherentUIGTBaseComponent*                  baseComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                Width;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
