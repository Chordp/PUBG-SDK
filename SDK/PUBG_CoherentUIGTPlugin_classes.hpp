#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CoherentUIGTPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoherentUIGTPlugin.CoherentUIGTWidget
// 0x0368 (0x0490 - 0x0128)
class UCoherentUIGTWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0128(0x0018) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0140(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x78];                                      // 0x01C8(0x0078) MISSED OFFSET
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> InputPropagationBehaviour;                                // 0x0242(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInputWhenTransparent;                             // 0x0243(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGammaCorrectedMaterial;                                  // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPerformanceWarnings;                                 // 0x0245(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0246(0x0002) MISSED OFFSET
	float                                              ExecuteJSTimersThresholdMs;                               // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAdditionalDefaultStyles;                           // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20B];                                     // 0x0265(0x020B) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ClickThroughAlphaThreshold;                               // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Transparent;                                              // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x0485(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTWidget"));

		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool Show);
	void SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	class UTextureRenderTarget2D* GetRenderTexture();
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> GetInputPropagationBehaviour();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const struct FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
};


// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTAssetReferencer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer"));

		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTSystem
// 0x0040 (0x0440 - 0x0400)
class ACoherentUIGTSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0400(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTSystem"));

		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// 0x0090 (0x00B8 - 0x0028)
class UCoherentUIGTJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	TArray<class UStruct*>                             StructTypes;                                              // 0x00A8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTJSEvent"));

		return ptr;
	}


	void AddText(const struct FText& Text);
	void AddStructArg(class UStructProperty* Arg);
	void AddString(const struct FString& Str);
	void AddObject(class UObject* Object);
	void AddName(const struct FName& Name);
	void AddInt32(int integer);
	void AddFloat(float FL);
	void AddByte(unsigned char byte);
	void AddBool(bool B);
	void AddArray(TArray<int> Array);
};


// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// 0x0018 (0x0040 - 0x0028)
class UCoherentUIGTJSPayload : public UObject
{
public:
	struct FString                                     EventName;                                                // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTJSPayload"));

		return ptr;
	}


	void ReadObject(int Index, class UObject* Object);
	struct FString GetString(int Index);
	float GetNumber(int Index);
	int GetInt32(int Index);
	bool GetBool(int Index);
};


// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTEventHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTEventHelpers"));

		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// 0x0320 (0x0510 - 0x01F0)
class UCoherentUIGTBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x01F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x0200(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             LiveViewSizeRequested;                                    // 0x0270(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0280(0x0070) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInputWhenTransparent;                             // 0x02FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPerformanceWarnings;                                 // 0x02FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExecuteJSTimersThresholdMs;                               // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAdditionalDefaultStyles;                           // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayedUpdate;                                           // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F6];                                     // 0x031A(0x01F6) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTBaseComponent"));

		return ptr;
	}


	void UpdateWholeDataModelFromStruct(class UStructProperty* Arg);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool Show);
	void SetClickThroughAlphaThreshold(float Threshold);
	void Resize(int Width, int Height);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	void EndDebugFrameSave();
	void EnableDelayedUpdate(bool bEnabled);
	void DebugSaveNextFrame();
	class UCoherentUIGTJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const struct FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const struct FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
};


// Class CoherentUIGTPlugin.CoherentUIGTComponent
// 0x0030 (0x0540 - 0x0510)
class UCoherentUIGTComponent : public UCoherentUIGTBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0510(0x0008) MISSED OFFSET
	int                                                Width;                                                    // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ManualTexture;                                            // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	float                                              ClickThroughAlphaThreshold;                               // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Transparent;                                              // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0529(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTComponent"));

		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTHUD
// 0x0020 (0x0530 - 0x0510)
class UCoherentUIGTHUD : public UCoherentUIGTBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0510(0x0008) MISSED OFFSET
	class UMaterial*                                   HUDMaterial;                                              // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                                      // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTHUD"));

		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary"));

		return ptr;
	}


	void STATIC_TriggerJSEvent(class UCoherentUIGTBaseComponent* Component, const struct FString& EventName, class UCoherentUIGTJSEvent* JSEvent);
	void STATIC_SetupLoadingScreen(class UObject* WorldContextObject, const struct FCoherentUIGTLoadingScreenSettings& Settings);
	class UCoherentUIGTJSEvent* STATIC_CreateJSEvent(class UObject* WorldContextObject);
	void STATIC_AddStructArg(class UCoherentUIGTJSEvent* JSEvent, class UStructProperty* Arg);
	void STATIC_AddString(class UCoherentUIGTJSEvent* JSEvent, const struct FString& Arg);
	void STATIC_AddObject(class UCoherentUIGTJSEvent* JSEvent, class UObject* Arg);
	void STATIC_AddInt32(class UCoherentUIGTJSEvent* JSEvent, int Arg);
	void STATIC_AddFloat(class UCoherentUIGTJSEvent* JSEvent, float Arg);
	void STATIC_AddByte(class UCoherentUIGTJSEvent* JSEvent, unsigned char Arg);
	void STATIC_AddBool(class UCoherentUIGTJSEvent* JSEvent, bool Arg);
	void STATIC_AddArrayOfStructs(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg);
	void STATIC_AddArray(class UCoherentUIGTJSEvent* JSEvent, TArray<int> Arg, int ArrayType);
};


// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// 0x0098 (0x0580 - 0x04E8)
class ACoherentUIGTGameHUD : public AHUD
{
public:
	class UCoherentUIGTHUD*                            CoherentUIGTHUD;                                          // 0x04E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x04F0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTGameHUD"));

		return ptr;
	}


	void SetupUIGTView(const struct FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate);
	bool HasSetupUIGTView();
};


// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// 0x0058 (0x0458 - 0x0400)
class ACoherentUIGTInputActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonDown;                  // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonUp;                    // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyDown;                          // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyUp;                            // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0440(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTInputActor"));

		return ptr;
	}


	void ToggleCoherentUIGTInputFocus();
	void SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode> Mode);
	void SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation);
	void SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView);
	void SetCoherentUIGTInputFocus(bool FocusUI);
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED();
	bool IsCoherentUIGTFocused();
	void Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel);
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow);
};


// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// 0x0030 (0x0220 - 0x01F0)
class UCoherentUIGTLiveView : public UActorComponent
{
public:
	struct FString                                     LinkName;                                                 // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0208(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTLiveView"));

		return ptr;
	}


	void OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* baseComponent, const struct FString& Name, int* Width, int* Height);
};


// Class CoherentUIGTPlugin.CoherentUIGTSettings
// 0x0040 (0x0068 - 0x0028)
class UCoherentUIGTSettings : public UObject
{
public:
	bool                                               EnableLiveReload;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                InspectorPort;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                WebdriverPort;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableWebSecurity;                                        // 0x0034(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableLocalization;                                       // 0x0035(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               RunAsynchronous;                                          // 0x0036(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowPerformanceWarningsInEditor;                         // 0x0037(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ShowWarningsOnScreen;                                     // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ECoherentUIGTSettingsSeverity                      LogSeverity;                                              // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPaintToBackBuffer;                                       // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectTitleSafeZone;                                    // 0x003B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectLetterboxing;                                     // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FString                                     HUDMaterialName;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     CoUIResourcesRoot;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               TickWhileGameIsPaused;                                    // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ECoherentUIGTMSAA                                  MSAA;                                                     // 0x0061(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTSettings"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
