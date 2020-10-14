#pragma once

// PUBG (8.3.5.39) SDK

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
// 0x0360 (0x04A0 - 0x0140)
class UCoherentUIGTWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0140(0x0018) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0158(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x70];                                      // 0x01E0(0x0070) MISSED OFFSET
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> InputPropagationBehaviour;                                // 0x0252(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInputWhenTransparent;                             // 0x0253(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bGammaCorrectedMaterial;                                  // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPerformanceWarnings;                                 // 0x0255(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0256(0x0002) MISSED OFFSET
	float                                              ExecuteJSTimersThresholdMs;                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAdditionalDefaultStyles;                           // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20B];                                     // 0x0275(0x020B) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ClickThroughAlphaThreshold;                               // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Transparent;                                              // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x0495(0x000B) MISSED OFFSET

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
// 0x0000 (0x0040 - 0x0040)
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
// 0x0090 (0x00D0 - 0x0040)
class UCoherentUIGTJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET
	TArray<class UStruct*>                             StructTypes;                                              // 0x00C0(0x0010) (ZeroConstructor, Transient)

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
// 0x0018 (0x0058 - 0x0040)
class UCoherentUIGTJSPayload : public UObject
{
public:
	struct FString                                     EventName;                                                // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

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
// 0x0000 (0x0040 - 0x0040)
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
// 0x0320 (0x0530 - 0x0210)
class UCoherentUIGTBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x0210(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             LiveViewSizeRequested;                                    // 0x0290(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x70];                                      // 0x02A0(0x0070) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInput;                                            // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveInputWhenTransparent;                             // 0x031A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowPerformanceWarnings;                                 // 0x031B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExecuteJSTimersThresholdMs;                               // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAdditionalDefaultStyles;                           // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayedUpdate;                                           // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F6];                                     // 0x033A(0x01F6) MISSED OFFSET

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
// 0x0030 (0x0560 - 0x0530)
class UCoherentUIGTComponent : public UCoherentUIGTBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0530(0x0008) MISSED OFFSET
	int                                                Width;                                                    // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ManualTexture;                                            // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	float                                              ClickThroughAlphaThreshold;                               // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Transparent;                                              // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0549(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTComponent"));

		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTHUD
// 0x0020 (0x0550 - 0x0530)
class UCoherentUIGTHUD : public UCoherentUIGTBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0530(0x0008) MISSED OFFSET
	class UMaterial*                                   HUDMaterial;                                              // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                                      // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0548(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CoherentUIGTPlugin.CoherentUIGTHUD"));

		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// 0x0000 (0x0040 - 0x0040)
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
// 0x0030 (0x0240 - 0x0210)
class UCoherentUIGTLiveView : public UActorComponent
{
public:
	struct FString                                     LinkName;                                                 // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0228(0x0018) MISSED OFFSET

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
// 0x0040 (0x0080 - 0x0040)
class UCoherentUIGTSettings : public UObject
{
public:
	bool                                               EnableLiveReload;                                         // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                InspectorPort;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                WebdriverPort;                                            // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableWebSecurity;                                        // 0x004C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableLocalization;                                       // 0x004D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               RunAsynchronous;                                          // 0x004E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AllowPerformanceWarningsInEditor;                         // 0x004F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               ShowWarningsOnScreen;                                     // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ECoherentUIGTSettingsSeverity                      LogSeverity;                                              // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPaintToBackBuffer;                                       // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectTitleSafeZone;                                    // 0x0053(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bRespectLetterboxing;                                     // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FString                                     HUDMaterialName;                                          // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     CoUIResourcesRoot;                                        // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               TickWhileGameIsPaused;                                    // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	ECoherentUIGTMSAA                                  MSAA;                                                     // 0x0079(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x007A(0x0006) MISSED OFFSET

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
