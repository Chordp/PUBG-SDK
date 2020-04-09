#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_UMG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0050 - 0x0030)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.AsyncTaskDownloadImage"));

		return ptr;
	}


	class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);
};


// Class UMG.DragDropOperation
// 0x0060 (0x0090 - 0x0030)
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                      // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UObject*                                     payload;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     DefaultDragVisual;                                        // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EDragPivot                                         Pivot;                                                    // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x0054(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDrop;                                                   // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragged;                                                // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.DragDropOperation"));

		return ptr;
	}


	void STATIC_Drop(const struct FPointerEvent& PointerEvent);
	void STATIC_Dragged(const struct FPointerEvent& PointerEvent);
	void STATIC_DragCancelled(const struct FPointerEvent& PointerEvent);
};


// Class UMG.MovieScene2DTransformSection
// 0x0320 (0x03F0 - 0x00D0)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FRichCurve                                  Translation[0x2];                                         // 0x00D8(0x0070)
	struct FRichCurve                                  Rotation;                                                 // 0x01B8(0x0070)
	struct FRichCurve                                  Scale[0x2];                                               // 0x0228(0x0070)
	struct FRichCurve                                  Shear[0x2];                                               // 0x0308(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.MovieScene2DTransformSection"));

		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.MovieScene2DTransformTrack"));

		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x01D0 (0x02A0 - 0x00D0)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FRichCurve                                  TopCurve;                                                 // 0x00D8(0x0070)
	struct FRichCurve                                  LeftCurve;                                                // 0x0148(0x0070)
	struct FRichCurve                                  RightCurve;                                               // 0x01B8(0x0070)
	struct FRichCurve                                  BottomCurve;                                              // 0x0228(0x0070)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.MovieSceneMarginSection"));

		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.MovieSceneMarginTrack"));

		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0010 (0x00E0 - 0x00D0)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	struct FName                                       TrackName;                                                // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.MovieSceneWidgetMaterialTrack"));

		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0030 - 0x0030)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.NamedSlotInterface"));

		return ptr;
	}

};


// Class UMG.PropertyBinding
// 0x0020 (0x0050 - 0x0030)
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0038(0x0010)
	struct FName                                       DestinationProperty;                                      // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.PropertyBinding"));

		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0050 - 0x0050)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.BoolBinding"));

		return ptr;
	}

};


// Class UMG.BrushBinding
// 0x0008 (0x0058 - 0x0050)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.BrushBinding"));

		return ptr;
	}

};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0058 - 0x0050)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.CheckedStateBinding"));

		return ptr;
	}

};


// Class UMG.ColorBinding
// 0x0008 (0x0058 - 0x0050)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ColorBinding"));

		return ptr;
	}

};


// Class UMG.FloatBinding
// 0x0000 (0x0050 - 0x0050)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.FloatBinding"));

		return ptr;
	}

};


// Class UMG.Int32Binding
// 0x0000 (0x0050 - 0x0050)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Int32Binding"));

		return ptr;
	}

};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0050 - 0x0050)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.MouseCursorBinding"));

		return ptr;
	}

};


// Class UMG.TextBinding
// 0x0008 (0x0058 - 0x0050)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.TextBinding"));

		return ptr;
	}

};


// Class UMG.VisibilityBinding
// 0x0000 (0x0050 - 0x0050)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.VisibilityBinding"));

		return ptr;
	}

};


// Class UMG.WidgetBinding
// 0x0000 (0x0050 - 0x0050)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetBinding"));

		return ptr;
	}

};


// Class UMG.RichTextBlockDecorator
// 0x0008 (0x0038 - 0x0030)
class URichTextBlockDecorator : public UObject
{
public:
	bool                                               bReveal;                                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                RevealedIndex;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.RichTextBlockDecorator"));

		return ptr;
	}

};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.SlateBlueprintLibrary"));

		return ptr;
	}

};


// Class UMG.SlateDataSheet
// 0x0408 (0x0438 - 0x0030)
class USlateDataSheet : public UObject
{
public:
	class UTexture2D*                                  DataTexture;                                              // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x400];                                     // 0x0038(0x0400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.SlateDataSheet"));

		return ptr;
	}

};


// Class UMG.SlateVectorArtData
// 0x0038 (0x0068 - 0x0030)
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                               // 0x0030(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   IndexData;                                                // 0x0040(0x0010) (ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMin;                                                // 0x0058(0x0008) (IsPlainOldData)
	struct FVector2D                                   ExtentMax;                                                // 0x0060(0x0008) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.SlateVectorArtData"));

		return ptr;
	}

};


// Class UMG.Visual
// 0x0000 (0x0030 - 0x0030)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Visual"));

		return ptr;
	}

};


// Class UMG.Widget
// 0x0100 (0x0130 - 0x0030)
class UWidget : public UVisual
{
public:
	bool                                               bIsVariable;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCreatedByConstructionScript;                             // 0x0031(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class UPanelSlot*                                  Slot;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FScriptDelegate                             bIsEnabledDelegate;                                       // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnPrepass;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FText                                       ToolTipText;                                              // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ToolTipTextDelegate;                                      // 0x0080(0x0010) (ZeroConstructor, InstancedReference)
	class UWidget*                                     ToolTipWidget;                                            // 0x0090(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                    // 0x0098(0x0010) (ZeroConstructor, InstancedReference)
	ESlateVisibility                                   Visiblity;                                                // 0x00A8(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	struct FScriptDelegate                             VisibilityDelegate;                                       // 0x00B0(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      bOverride_Cursor : 1;                                     // 0x00C0(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVolatile;                                              // 0x00C5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
	struct FWidgetTransform                            RenderTransform;                                          // 0x00C8(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   RenderTransformPivot;                                     // 0x00E4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UWidgetNavigation*                           Navigation;                                               // 0x00F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x28];                                      // 0x00F8(0x0028) MISSED OFFSET
	TArray<class UPropertyBinding*>                    NativeBindings;                                           // 0x0120(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Widget"));

		return ptr;
	}


	void STATIC_SetVisibility(ESlateVisibility InVisibility);
	void STATIC_SetUserFocus(class APlayerController* PlayerController);
	void STATIC_SetToolTipText(const struct FText& InToolTipText);
	void STATIC_SetToolTip(class UWidget* Widget);
	void STATIC_SetRenderTranslation(const struct FVector2D& Translation);
	void STATIC_SetRenderTransformPivot(const struct FVector2D& Pivot);
	void STATIC_SetRenderTransform(const struct FWidgetTransform& InTransform);
	void STATIC_SetRenderShear(const struct FVector2D& Shear);
	void STATIC_SetRenderScale(const struct FVector2D& Scale);
	void STATIC_SetRenderAngle(float Angle);
	void STATIC_SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_SetKeyboardFocus();
	void STATIC_SetIsEnabled(bool bInIsEnabled);
	void STATIC_SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void STATIC_SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_ResetCursor();
	void STATIC_RemoveFromParent();
	struct FEventReply STATIC_OnReply__DelegateSignature();
	struct FEventReply STATIC_OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool STATIC_IsVisible();
	bool STATIC_IsHovered();
	void STATIC_InvalidateLayoutAndVolatility();
	bool STATIC_HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool STATIC_HasUserFocus(class APlayerController* PlayerController);
	bool STATIC_HasMouseCapture();
	bool STATIC_HasKeyboardFocus();
	bool STATIC_HasFocusedDescendants();
	bool STATIC_HasAnyUserFocus();
	class UWidget* STATIC_GetWidget__DelegateSignature();
	ESlateVisibility STATIC_GetVisibility();
	struct FText STATIC_GetText__DelegateSignature();
	ESlateVisibility STATIC_GetSlateVisibility__DelegateSignature();
	struct FSlateColor STATIC_GetSlateColor__DelegateSignature();
	struct FSlateBrush STATIC_GetSlateBrush__DelegateSignature();
	class UPanelWidget* STATIC_GetParent();
	class APlayerController* STATIC_GetOwningPlayer();
	TEnumAsByte<EMouseCursor> STATIC_GetMouseCursor__DelegateSignature();
	struct FLinearColor STATIC_GetLinearColor__DelegateSignature();
	bool STATIC_GetIsEnabled();
	int STATIC_GetInt32__DelegateSignature();
	float STATIC_GetFloat__DelegateSignature();
	struct FVector2D STATIC_GetDesiredSize();
	ECheckBoxState STATIC_GetCheckBoxState__DelegateSignature();
	struct FGeometry STATIC_GetCachedGeometry();
	bool STATIC_GetBool__DelegateSignature();
	class UWidget* STATIC_GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* STATIC_GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void STATIC_ForceVolatile(bool bForce);
	void STATIC_ForceLayoutPrepass();
	void STATIC_EventForWidget__DelegateSignature(class UWidget* BoundWidget);
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0070 (0x0428 - 0x03B8)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTemplate;                                           // 0x03C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C1(0x0007) MISSED OFFSET
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                 // 0x03C8(0x0010) (ZeroConstructor)
	TArray<class UWidgetAnimation*>                    Animations;                                               // 0x03D8(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FName>                               NamedSlots;                                               // 0x03E8(0x0010) (ZeroConstructor)
	bool                                               bValidTemplate;                                           // 0x03F8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bTemplateInitialized;                                     // 0x03F9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCookedTemplate;                                          // 0x03FA(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x03FB(0x0005) MISSED OFFSET
	TAssetPtr<class UUserWidget>                       TemplateAsset;                                            // 0x0400(0x0020) (ExportObject, InstancedReference)
	class UUserWidget*                                 Template;                                                 // 0x0420(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetBlueprintGeneratedClass"));

		return ptr;
	}

};


// Class UMG.UserWidget
// 0x0120 (0x0250 - 0x0130)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0148(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0158(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ForegroundColorDelegate;                                  // 0x0180(0x0010) (ZeroConstructor, InstancedReference)
	struct FMargin                                     Padding;                                                  // 0x0190(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bSupportsKeyboardFocus;                                   // 0x01A0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bIsFocusable;                                             // 0x01A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x01A2(0x0006) MISSED OFFSET
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                    // 0x01A8(0x0010) (ZeroConstructor, Transient)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                   // 0x01B8(0x0010) (ZeroConstructor, Transient)
	bool                                               bStopAction;                                              // 0x01C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01C9(0x0003) MISSED OFFSET
	int                                                Priority;                                                 // 0x01CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                        // 0x01D0(0x0010) (ZeroConstructor)
	class UWidgetTree*                                 WidgetTree;                                               // 0x01E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bCanEverTick : 1;                                         // 0x01E8(0x0001)
	unsigned char                                      bCanEverPaint : 1;                                        // 0x01E8(0x0001)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	unsigned char                                      bCookedWidgetTree : 1;                                    // 0x01F0(0x0001)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x50];                                      // 0x0200(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.UserWidget"));

		return ptr;
	}


	void STATIC_UnregisterInputComponent();
	void STATIC_Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void STATIC_StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType);
	void STATIC_StopListeningForAllInputActions();
	void STATIC_StopAnimation(class UWidgetAnimation* InAnimation);
	void STATIC_StopAllAnimations();
	void STATIC_SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void STATIC_SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetOwningPlayer(class APlayerController* LocalPlayerController);
	void STATIC_SetOwningLocalPlayer(class ULocalPlayer* LocalPlayer);
	void STATIC_SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void STATIC_SetInputActionPriority(int NewPriority);
	void STATIC_SetInputActionBlocking(bool bShouldBlock);
	void STATIC_SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void STATIC_SetDesiredSizeInViewport(const struct FVector2D& Size);
	void STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetAnchorsInViewport(const struct FAnchors& Anchors);
	void STATIC_SetAlignmentInViewport(const struct FVector2D& Alignment);
	void STATIC_ReverseAnimation(class UWidgetAnimation* InAnimation);
	void STATIC_RemoveFromViewport();
	void STATIC_RegisterInputComponent();
	void STATIC_PreConstruct(bool IsDesignTime);
	void STATIC_PlaySound(class USoundBase* SoundToPlay);
	void STATIC_PlayAnimationTo(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	void STATIC_PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	float STATIC_PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply STATIC_OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply STATIC_OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply STATIC_OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply STATIC_OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply STATIC_OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply STATIC_OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void STATIC_OnPaint(struct FPaintContext* Context);
	struct FEventReply STATIC_OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply STATIC_OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void STATIC_OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply STATIC_OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply STATIC_OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply STATIC_OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply STATIC_OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply STATIC_OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply STATIC_OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply STATIC_OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	struct FEventReply STATIC_OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void STATIC_OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool STATIC_OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool STATIC_OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void STATIC_OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void STATIC_OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	struct FEventReply STATIC_OnControllerButtonReleased(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply STATIC_OnControllerButtonPressed(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	struct FEventReply STATIC_OnControllerAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent);
	void STATIC_OnAnimationStarted(class UWidgetAnimation* Animation);
	void STATIC_OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply STATIC_OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void STATIC_ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool STATIC_IsPlayingAnimation();
	bool STATIC_IsListeningForInputAction(const struct FName& ActionName);
	bool STATIC_IsInViewport();
	bool STATIC_IsInteractable();
	bool STATIC_IsAnyAnimationPlaying();
	bool STATIC_IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* STATIC_GetOwningPlayerPawn();
	class APlayerController* STATIC_GetOwningPlayer();
	class ULocalPlayer* STATIC_GetOwningLocalPlayer();
	bool STATIC_GetIsVisible();
	float STATIC_GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors STATIC_GetAnchorsInViewport();
	struct FVector2D STATIC_GetAlignmentInViewport();
	void STATIC_FinishStoppedSequencePlayers();
	void STATIC_Destruct();
	void STATIC_Construct();
	void STATIC_AddToViewport(int ZOrder);
	bool STATIC_AddToPlayerScreen(int ZOrder);
};


// Class UMG.UMGSequencePlayer
// 0x0680 (0x06B0 - 0x0030)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x348];                                     // 0x0030(0x0348) MISSED OFFSET
	class UWidgetAnimation*                            Animation;                                                // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x330];                                     // 0x0380(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.UMGSequencePlayer"));

		return ptr;
	}

};


// Class UMG.PanelSlot
// 0x0010 (0x0040 - 0x0030)
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.PanelSlot"));

		return ptr;
	}

};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0068 - 0x0040)
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0052(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.BackgroundBlurSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.BorderSlot
// 0x0028 (0x0068 - 0x0040)
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0052(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.BorderSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ButtonSlot
// 0x0028 (0x0068 - 0x0040)
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0052(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ButtonSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0078 - 0x0040)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                               // 0x0040(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoSize;                                                // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.CanvasPanelSlot"));

		return ptr;
	}


	void STATIC_SetZOrder(int InZOrder);
	void STATIC_SetSize(const struct FVector2D& InSize);
	void STATIC_SetPosition(const struct FVector2D& InPosition);
	void STATIC_SetOffsets(const struct FMargin& InOffset);
	void STATIC_SetMinimum(const struct FVector2D& InMinimumAnchors);
	void STATIC_SetMaximum(const struct FVector2D& InMaximumAnchors);
	void STATIC_SetLayout(const struct FAnchorData& InLayoutData);
	void STATIC_SetAutoSize(bool InbAutoSize);
	void STATIC_SetAnchors(const struct FAnchors& InAnchors);
	void STATIC_SetAlignment(const struct FVector2D& InAlignment);
	int STATIC_GetZOrder();
	struct FVector2D STATIC_GetSize();
	struct FVector2D STATIC_GetPosition();
	struct FMargin STATIC_GetOffsets();
	struct FAnchorData STATIC_GetLayout();
	bool STATIC_GetAutoSize();
	struct FAnchors STATIC_GetAnchors();
	struct FVector2D STATIC_GetAlignment();
};


// Class UMG.GridSlot
// 0x0038 (0x0078 - 0x0040)
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RowSpan;                                                  // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ColumnSpan;                                               // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Nudge;                                                    // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.GridSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetRowSpan(int InRowSpan);
	void STATIC_SetRow(int InRow);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetLayer(int InLayer);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetColumnSpan(int InColumnSpan);
	void STATIC_SetColumn(int InColumn);
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0068 - 0x0040)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateChildSize                             Size;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x005A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.HorizontalBoxSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetSize(const struct FSlateChildSize& InSize);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.OverlaySlot
// 0x0020 (0x0060 - 0x0040)
class UOverlaySlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.OverlaySlot"));

		return ptr;
	}


	void STATIC_SetZOrder(int InZOrder);
	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	int STATIC_GetZOrder();
};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0068 - 0x0040)
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	struct FMargin                                     SafeAreaScale;                                            // 0x0044(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x0054(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x0055(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.SafeZoneSlot"));

		return ptr;
	}

};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0068 - 0x0040)
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0052(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ScaleBoxSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0060 - 0x0040)
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0051(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ScrollBoxSlot"));

		return ptr;
	}


	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0068 - 0x0040)
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0052(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.SizeBoxSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0058 - 0x0040)
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x004C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.UniformGridSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetRow(int InRow);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetColumn(int InColumn);
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0068 - 0x0040)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateChildSize                             Size;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x005A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.VerticalBoxSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetSize(const struct FSlateChildSize& InSize);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0060 - 0x0040)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetSwitcherSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.PanelWidget
// 0x0018 (0x0148 - 0x0130)
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    // 0x0130(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0140(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.PanelWidget"));

		return ptr;
	}


	bool STATIC_RemoveChildAt(int Index);
	bool STATIC_RemoveChild(class UWidget* Content);
	bool STATIC_HasChild(class UWidget* Content);
	bool STATIC_HasAnyChildren();
	int STATIC_GetChildrenCount();
	int STATIC_GetChildIndex(class UWidget* Content);
	class UWidget* STATIC_GetChildAt(int Index);
	void STATIC_ClearChildren();
	class UPanelSlot* STATIC_AddChild(class UWidget* Content);
};


// Class UMG.ContentWidget
// 0x0000 (0x0148 - 0x0148)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ContentWidget"));

		return ptr;
	}


	bool STATIC_RemoveChildAt(int Index);
	bool STATIC_RemoveChild(class UWidget* Content);
	bool STATIC_HasChild(class UWidget* Content);
	bool STATIC_HasAnyChildren();
	int STATIC_GetChildrenCount();
	int STATIC_GetChildIndex(class UWidget* Content);
	class UWidget* STATIC_GetChildAt(int Index);
	void STATIC_ClearChildren();
	class UPanelSlot* STATIC_AddChild(class UWidget* Content);
};


// Class UMG.WindowTitleBarArea
// 0x0020 (0x0168 - 0x0148)
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                               bDoubleClickTogglesFullscreen;                            // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0149(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WindowTitleBarArea"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0068 - 0x0040)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0052(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WindowTitleBarAreaSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0068 - 0x0040)
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bFillEmptySpace;                                          // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              FillSpanWhenLessThan;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x005A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WrapBoxSlot"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void STATIC_SetFillEmptySpace(bool InbFillEmptySpace);
};


// Class UMG.CircularThrobber
// 0x00C0 (0x01F0 - 0x0130)
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0140(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0148(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bEnableRadius;                                            // 0x01D8(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x01D9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.CircularThrobber"));

		return ptr;
	}


	void STATIC_SetRadius(float InRadius);
	void STATIC_SetPeriod(float InPeriod);
	void STATIC_SetNumberOfPieces(int InNumberOfPieces);
};


// Class UMG.ComboBox
// 0x0038 (0x0168 - 0x0130)
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                    // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0140(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               bIsFocusable;                                             // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0151(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ComboBox"));

		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x0C80 (0x0DB0 - 0x0130)
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                           // 0x0130(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SelectedOption;                                           // 0x0140(0x0010) (Edit, ZeroConstructor)
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0150(0x0428) (Edit, BlueprintVisible)
	struct FTableRowStyle                              ItemStyle;                                                // 0x0578(0x0718) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x0C90(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MaxListHeight;                                            // 0x0CA0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDownArrow;                                             // 0x0CA4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGamepadNavigationMode;                              // 0x0CA5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0CA6(0x0002) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0CA8(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0D10(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsFocusable;                                             // 0x0D38(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x0D39(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0D3A(0x0006) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0D40(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0D50(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpening;                                                // 0x0D60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0D70(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ComboBoxString"));

		return ptr;
	}


	void STATIC_SetSelectedOption(const struct FString& Option);
	bool STATIC_RemoveOption(const struct FString& Option);
	void STATIC_RefreshOptions();
	void STATIC_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void STATIC_OnOpeningEvent__DelegateSignature();
	struct FString STATIC_GetSelectedOption();
	int STATIC_GetOptionCount();
	struct FString STATIC_GetOptionAtIndex(int Index);
	int STATIC_FindOptionIndex(const struct FString& Option);
	void STATIC_ClearSelection();
	void STATIC_ClearOptions();
	void STATIC_AddOption(const struct FString& Option);
};


// Class UMG.TextLayoutWidget
// 0x0028 (0x0158 - 0x0130)
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x0139(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x013A(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETextWrappingPolicy                                WrappingPolicy;                                           // 0x0140(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	struct FMargin                                     Margin;                                                   // 0x0144(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LineHeightPercentage;                                     // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.TextLayoutWidget"));

		return ptr;
	}

};


// Class UMG.EditableText
// 0x0390 (0x04C0 - 0x0130)
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0130(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0148(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       HintText;                                                 // 0x0158(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0170(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextStyle                          WidgetStyle;                                              // 0x0180(0x0248) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x03C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageSelected;                                  // 0x03D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageComposing;                                 // 0x03D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CaretImage;                                               // 0x03E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x03E8(0x0068) (Deprecated)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0450(0x0028) (Deprecated)
	bool                                               IsReadOnly;                                               // 0x0478(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0479(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x047A(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0480(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0481(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0482(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0483(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0484(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0485(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x0486(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0487(0x0001) MISSED OFFSET
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0490(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x04A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.EditableText"));

		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool InbIsReadyOnly);
	void STATIC_SetIsPassword(bool InbIsPassword);
	void STATIC_SetHintText(const struct FText& InHintText);
	void STATIC_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText STATIC_GetText();
};


// Class UMG.EditableTextBox
// 0x09B8 (0x0AE8 - 0x0130)
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0130(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0148(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0158(0x0870) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x09C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       HintText;                                                 // 0x09D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x09E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x09F8(0x0068) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0A60(0x0010) (Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0A70(0x0010) (Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0A80(0x0010) (Deprecated, IsPlainOldData)
	bool                                               IsReadOnly;                                               // 0x0A90(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0A91(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0A92(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x0A94(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0A98(0x0010) (Deprecated)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0AA8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0AA9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0AAA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0AAB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0AAC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0AAD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x0AAE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0AAF(0x0001) MISSED OFFSET
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0AB0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0AB8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0AC8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0AD8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.EditableTextBox"));

		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool bReadOnly);
	void STATIC_SetHintText(const struct FText& InText);
	void STATIC_SetError(const struct FText& InError);
	void STATIC_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool STATIC_HasError();
	struct FText STATIC_GetText();
	void STATIC_ClearError();
};


// Class UMG.ExpandableArea
// 0x0248 (0x0378 - 0x0130)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	struct FExpandableAreaStyle                        Style;                                                    // 0x0138(0x0130) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0268(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 BorderColor;                                              // 0x02F8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsExpanded;                                              // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     HeaderPadding;                                            // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     AreaPadding;                                              // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                       // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWidget*                                     HeaderContent;                                            // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     BodyContent;                                              // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0368(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ExpandableArea"));

		return ptr;
	}


	void STATIC_SetIsExpanded_Animated(bool IsExpanded);
	void STATIC_SetIsExpanded(bool IsExpanded);
	bool STATIC_GetIsExpanded();
};


// Class UMG.Image
// 0x00E8 (0x0218 - 0x0130)
class UImage : public UWidget
{
public:
	class USlateBrushAsset*                            Image;                                                    // 0x0130(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // 0x0138(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x01C8(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x01D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x01E8(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x01F8(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0208(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Image"));

		return ptr;
	}


	void STATIC_SetOpacity(float InOpacity);
	void STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetBrushSize(const struct FVector2D& BrushSize);
	void STATIC_SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void STATIC_SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void STATIC_SetBrushFromMaterial(class UMaterialInterface* Material);
	void STATIC_SetBrushFromAsset(class USlateBrushAsset* Asset);
	void STATIC_SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial();
};


// Class UMG.InputKeySelector
// 0x0100 (0x0230 - 0x0130)
class UInputKeySelector : public UWidget
{
public:
	struct FInputChord                                 SelectedKey;                                              // 0x0130(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FSlateFontInfo                              Font;                                                     // 0x0150(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     Margin;                                                   // 0x01B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x01C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FText                                       KeySelectionText;                                         // 0x01D8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAllowModifierKeys;                                       // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnKeySelected;                                            // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIsSelectingKeyChanged;                                  // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0218(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.InputKeySelector"));

		return ptr;
	}


	void STATIC_SetSelectedKey(const struct FInputChord& InSelectedKey);
	void STATIC_SetKeySelectionText(const struct FText& InKeySelectionText);
	void STATIC_SetAllowModifierKeys(bool bInAllowModifierKeys);
	void STATIC_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void STATIC_OnIsSelectingKeyChanged__DelegateSignature();
	bool STATIC_GetIsSelectingKey();
};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0140 - 0x0130)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.NativeWidgetHost"));

		return ptr;
	}


	void STATIC_SetVisibility(ESlateVisibility InVisibility);
	void STATIC_SetUserFocus(class APlayerController* PlayerController);
	void STATIC_SetToolTipText(const struct FText& InToolTipText);
	void STATIC_SetToolTip(class UWidget* Widget);
	void STATIC_SetRenderTranslation(const struct FVector2D& Translation);
	void STATIC_SetRenderTransformPivot(const struct FVector2D& Pivot);
	void STATIC_SetRenderTransform(const struct FWidgetTransform& InTransform);
	void STATIC_SetRenderShear(const struct FVector2D& Shear);
	void STATIC_SetRenderScale(const struct FVector2D& Scale);
	void STATIC_SetRenderAngle(float Angle);
	void STATIC_SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_SetKeyboardFocus();
	void STATIC_SetIsEnabled(bool bInIsEnabled);
	void STATIC_SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void STATIC_SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_ResetCursor();
	void STATIC_RemoveFromParent();
	struct FEventReply STATIC_OnReply__DelegateSignature();
	struct FEventReply STATIC_OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool STATIC_IsVisible();
	bool STATIC_IsHovered();
	void STATIC_InvalidateLayoutAndVolatility();
	bool STATIC_HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool STATIC_HasUserFocus(class APlayerController* PlayerController);
	bool STATIC_HasMouseCapture();
	bool STATIC_HasKeyboardFocus();
	bool STATIC_HasFocusedDescendants();
	bool STATIC_HasAnyUserFocus();
	class UWidget* STATIC_GetWidget__DelegateSignature();
	ESlateVisibility STATIC_GetVisibility();
	struct FText STATIC_GetText__DelegateSignature();
	ESlateVisibility STATIC_GetSlateVisibility__DelegateSignature();
	struct FSlateColor STATIC_GetSlateColor__DelegateSignature();
	struct FSlateBrush STATIC_GetSlateBrush__DelegateSignature();
	class UPanelWidget* STATIC_GetParent();
	class APlayerController* STATIC_GetOwningPlayer();
	TEnumAsByte<EMouseCursor> STATIC_GetMouseCursor__DelegateSignature();
	struct FLinearColor STATIC_GetLinearColor__DelegateSignature();
	bool STATIC_GetIsEnabled();
	int STATIC_GetInt32__DelegateSignature();
	float STATIC_GetFloat__DelegateSignature();
	struct FVector2D STATIC_GetDesiredSize();
	ECheckBoxState STATIC_GetCheckBoxState__DelegateSignature();
	struct FGeometry STATIC_GetCachedGeometry();
	bool STATIC_GetBool__DelegateSignature();
	class UWidget* STATIC_GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* STATIC_GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void STATIC_ForceVolatile(bool bForce);
	void STATIC_ForceLayoutPrepass();
	void STATIC_EventForWidget__DelegateSignature(class UWidget* BoundWidget);
};


// Class UMG.CanvasPanel
// 0x0010 (0x0158 - 0x0148)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.CanvasPanel"));

		return ptr;
	}


	bool STATIC_RemoveChildAt(int Index);
	bool STATIC_RemoveChild(class UWidget* Content);
	bool STATIC_HasChild(class UWidget* Content);
	bool STATIC_HasAnyChildren();
	int STATIC_GetChildrenCount();
	int STATIC_GetChildIndex(class UWidget* Content);
	class UWidget* STATIC_GetChildAt(int Index);
	void STATIC_ClearChildren();
	class UPanelSlot* STATIC_AddChild(class UWidget* Content);
};


// Class UMG.BackgroundBlur
// 0x00C0 (0x0208 - 0x0148)
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                                     Padding;                                                  // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0158(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0159(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyAlphaToBlur;                                        // 0x015A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x015B(0x0001) MISSED OFFSET
	float                                              BlurStrength;                                             // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAutoRadiusCalculation;                           // 0x0160(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0161(0x0003) MISSED OFFSET
	int                                                BlurRadius;                                               // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                  // 0x0168(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.BackgroundBlur"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetBlurStrength(float InStrength);
	void STATIC_SetBlurRadius(int InBlurRadius);
	void STATIC_SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};


// Class UMG.Border
// 0x0160 (0x02A8 - 0x0148)
class UBorder : public UContentWidget
{
public:
	struct FLinearColor                                ContentColorAndOpacity;                                   // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                           // 0x0158(0x0010) (ZeroConstructor, InstancedReference)
	struct FMargin                                     Padding;                                                  // 0x0168(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0178(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0179(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x017A(0x0006) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x0180(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BackgroundDelegate;                                       // 0x0210(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                BrushColor;                                               // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             BrushColorDelegate;                                       // 0x0230(0x0010) (ZeroConstructor, InstancedReference)
	struct FVector2D                                   DesiredSizeScale;                                         // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bShowEffectWhenDisabled;                                  // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x0250(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                     // 0x0260(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseMoveEvent;                                         // 0x0270(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                  // 0x0280(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
	class USlateBrushAsset*                            Brush;                                                    // 0x02A0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Border"));

		return ptr;
	}


	void STATIC_SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void STATIC_SetPadding(const struct FMargin& InPadding);
	void STATIC_SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void STATIC_SetDesiredSizeScale(const struct FVector2D& InScale);
	void STATIC_SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void STATIC_SetBrushFromTexture(class UTexture2D* Texture);
	void STATIC_SetBrushFromMaterial(class UMaterialInterface* Material);
	void STATIC_SetBrushFromAsset(class USlateBrushAsset* Asset);
	void STATIC_SetBrushColor(const struct FLinearColor& InBrushColor);
	void STATIC_SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial();
};


// Class UMG.Button
// 0x0338 (0x0480 - 0x0148)
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0148(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0150(0x02A8) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x0418(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x0419(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x041A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x041B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPressed;                                                // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHovered;                                                // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUnHovered;                                              // 0x0460(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0470(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Button"));

		return ptr;
	}


	void STATIC_SetStyle(const struct FButtonStyle& InStyle);
	void STATIC_SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void STATIC_SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool STATIC_IsPressed();
};


// Class UMG.CheckBox
// 0x06B0 (0x07F8 - 0x0148)
class UCheckBox : public UContentWidget
{
public:
	ECheckBoxState                                     CheckedState;                                             // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x0150(0x0010) (ZeroConstructor, InstancedReference)
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x0160(0x05E0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0740(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedImage;                                           // 0x0748(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                    // 0x0750(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedPressedImage;                                    // 0x0758(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedImage;                                             // 0x0760(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedHoveredImage;                                      // 0x0768(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedPressedImage;                                      // 0x0770(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedImage;                                        // 0x0778(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                 // 0x0780(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                 // 0x0788(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0790(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0791(0x0003) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0794(0x0010) (Deprecated)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x07A8(0x0028) (Deprecated)
	bool                                               IsFocusable;                                              // 0x07D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                      // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x07E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.CheckBox"));

		return ptr;
	}


	void STATIC_SetIsChecked(bool InIsChecked);
	void STATIC_SetCheckedState(ECheckBoxState InCheckedState);
	bool STATIC_IsPressed();
	bool STATIC_IsChecked();
	ECheckBoxState STATIC_GetCheckedState();
};


// Class UMG.InvalidationBox
// 0x0018 (0x0160 - 0x0148)
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               bCanCache;                                                // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CacheRelativeTransforms;                                  // 0x0149(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x014A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.InvalidationBox"));

		return ptr;
	}


	void STATIC_SetCanCache(bool CanCache);
	void STATIC_InvalidateCache();
	bool STATIC_GetCanCache();
};


// Class UMG.MenuAnchor
// 0x0040 (0x0188 - 0x0148)
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                    // 0x0150(0x0010) (Edit, ZeroConstructor, InstancedReference)
	TEnumAsByte<EMenuPlacement>                        Placement;                                                // 0x0160(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDeferPaintingAfterWindowContent;                    // 0x0161(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseApplicationMenuStack;                                  // 0x0162(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0163(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                        // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0178(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.MenuAnchor"));

		return ptr;
	}


	void STATIC_ToggleOpen(bool bFocusOnOpen);
	bool STATIC_ShouldOpenDueToClick();
	void STATIC_Open(bool bFocusMenu);
	bool STATIC_IsOpen();
	bool STATIC_HasOpenSubMenus();
	struct FVector2D STATIC_GetMenuPosition();
	void STATIC_Close();
};


// Class UMG.NamedSlot
// 0x0010 (0x0158 - 0x0148)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.NamedSlot"));

		return ptr;
	}


	bool STATIC_RemoveChildAt(int Index);
	bool STATIC_RemoveChild(class UWidget* Content);
	bool STATIC_HasChild(class UWidget* Content);
	bool STATIC_HasAnyChildren();
	int STATIC_GetChildrenCount();
	int STATIC_GetChildIndex(class UWidget* Content);
	class UWidget* STATIC_GetChildAt(int Index);
	void STATIC_ClearChildren();
	class UPanelSlot* STATIC_AddChild(class UWidget* Content);
};


// Class UMG.RetainerBox
// 0x0030 (0x0178 - 0x0148)
class URetainerBox : public UContentWidget
{
public:
	bool                                               RenderOnPhase;                                            // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	int                                                Phase;                                                    // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PhaseCount;                                               // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameter;                                         // 0x0160(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0168(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.RetainerBox"));

		return ptr;
	}


	void STATIC_SetTextureParameter(const struct FName& TextureParameter);
	void STATIC_SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void STATIC_RequestRender();
	class UMaterialInstanceDynamic* STATIC_GetEffectMaterial();
};


// Class UMG.SafeZone
// 0x0018 (0x0160 - 0x0148)
class USafeZone : public UContentWidget
{
public:
	bool                                               PadLeft;                                                  // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadRight;                                                 // 0x0149(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadTop;                                                   // 0x014A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadBottom;                                                // 0x014B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x014C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.SafeZone"));

		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x0020 (0x0168 - 0x0148)
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<EStretch>                              Stretch;                                                  // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                         // 0x0149(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x014A(0x0002) MISSED OFFSET
	float                                              UserSpecifiedScale;                                       // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreInheritedScale;                                     // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0151(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ScaleBox"));

		return ptr;
	}


	void STATIC_SetUserSpecifiedScale(float InUserSpecifiedScale);
	void STATIC_SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);
	void STATIC_SetStretch(TEnumAsByte<EStretch> InStretch);
	void STATIC_SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};


// Class UMG.SizeBox
// 0x0030 (0x0178 - 0x0148)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      bOverride_WidthOverride : 1;                              // 0x0148(0x0001) (Edit)
	unsigned char                                      bOverride_HeightOverride : 1;                             // 0x0148(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                            // 0x0148(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                           // 0x0148(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                            // 0x0148(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                           // 0x0148(0x0001) (Edit)
	unsigned char                                      bOverride_MaxAspectRatio : 1;                             // 0x0148(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeightOverride;                                           // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredHeight;                                         // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredWidth;                                          // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredHeight;                                         // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAspectRatio;                                           // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0168(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.SizeBox"));

		return ptr;
	}


	void STATIC_SetWidthOverride(float InWidthOverride);
	void STATIC_SetMinDesiredWidth(float InMinDesiredWidth);
	void STATIC_SetMinDesiredHeight(float InMinDesiredHeight);
	void STATIC_SetMaxDesiredWidth(float InMaxDesiredWidth);
	void STATIC_SetMaxDesiredHeight(float InMaxDesiredHeight);
	void STATIC_SetMaxAspectRatio(float InMaxAspectRatio);
	void STATIC_SetHeightOverride(float InHeightOverride);
	void STATIC_ClearWidthOverride();
	void STATIC_ClearMinDesiredWidth();
	void STATIC_ClearMinDesiredHeight();
	void STATIC_ClearMaxDesiredWidth();
	void STATIC_ClearMaxDesiredHeight();
	void STATIC_ClearMaxAspectRatio();
	void STATIC_ClearHeightOverride();
};


// Class UMG.Viewport
// 0x0028 (0x0170 - 0x0148)
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                          // 0x0148(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0158(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Viewport"));

		return ptr;
	}


	class AActor* STATIC_Spawn(class UClass* ActorClass);
	void STATIC_SetViewRotation(const struct FRotator& Rotation);
	void STATIC_SetViewLocation(const struct FVector& Location);
	struct FRotator STATIC_GetViewRotation();
	class UWorld* STATIC_GetViewportWorld();
	struct FVector STATIC_GetViewLocation();
};


// Class UMG.GridPanel
// 0x0030 (0x0178 - 0x0148)
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      RowFill;                                                  // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0168(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.GridPanel"));

		return ptr;
	}


	class UGridSlot* STATIC_AddChildToGrid(class UWidget* Content);
};


// Class UMG.HorizontalBox
// 0x0010 (0x0158 - 0x0148)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.HorizontalBox"));

		return ptr;
	}


	bool STATIC_RemoveChildAt(int Index);
	bool STATIC_RemoveChild(class UWidget* Content);
	bool STATIC_HasChild(class UWidget* Content);
	bool STATIC_HasAnyChildren();
	int STATIC_GetChildrenCount();
	int STATIC_GetChildIndex(class UWidget* Content);
	class UWidget* STATIC_GetChildAt(int Index);
	void STATIC_ClearChildren();
	class UPanelSlot* STATIC_AddChild(class UWidget* Content);
};


// Class UMG.Overlay
// 0x0010 (0x0158 - 0x0148)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Overlay"));

		return ptr;
	}


	bool STATIC_RemoveChildAt(int Index);
	bool STATIC_RemoveChild(class UWidget* Content);
	bool STATIC_HasChild(class UWidget* Content);
	bool STATIC_HasAnyChildren();
	int STATIC_GetChildrenCount();
	int STATIC_GetChildIndex(class UWidget* Content);
	class UWidget* STATIC_GetChildAt(int Index);
	void STATIC_ClearChildren();
	class UPanelSlot* STATIC_AddChild(class UWidget* Content);
};


// Class UMG.ScrollBox
// 0x0798 (0x08E0 - 0x0148)
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0148(0x0248) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0390(0x0518) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x08A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateWidgetStyleAsset*                      BarStyle;                                                 // 0x08B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x08B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x08B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x08BA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x08BB(0x0001) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x08BC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               AlwaysShowScrollbar;                                      // 0x08C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRightMouseButtonToScroll;                             // 0x08C5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bGainFocusWhenClickedScrollBar;                           // 0x08C6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x19];                                      // 0x08C7(0x0019) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ScrollBox"));

		return ptr;
	}


	void STATIC_SetScrollOffset(float NewScrollOffset);
	void STATIC_ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll);
	void STATIC_ScrollToStart();
	void STATIC_ScrollToEnd();
	float STATIC_GetScrollToEndOffset();
	float STATIC_GetScrollOffset();
};


// Class UMG.UniformGridPanel
// 0x0028 (0x0170 - 0x0148)
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                              // 0x0148(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinDesiredSlotWidth;                                      // 0x0158(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x015C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.UniformGridPanel"));

		return ptr;
	}


	void STATIC_SetSlotPadding(const struct FMargin& InSlotPadding);
	void STATIC_SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void STATIC_SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* STATIC_AddChildToUniformGrid(class UWidget* Content);
};


// Class UMG.VerticalBox
// 0x0010 (0x0158 - 0x0148)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0148(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.VerticalBox"));

		return ptr;
	}


	bool STATIC_RemoveChildAt(int Index);
	bool STATIC_RemoveChild(class UWidget* Content);
	bool STATIC_HasChild(class UWidget* Content);
	bool STATIC_HasAnyChildren();
	int STATIC_GetChildrenCount();
	int STATIC_GetChildIndex(class UWidget* Content);
	class UWidget* STATIC_GetChildAt(int Index);
	void STATIC_ClearChildren();
	class UPanelSlot* STATIC_AddChild(class UWidget* Content);
};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0160 - 0x0148)
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x014C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetSwitcher"));

		return ptr;
	}


	void STATIC_SetActiveWidgetIndex(int Index);
	void STATIC_SetActiveWidget(class UWidget* Widget);
	class UWidget* STATIC_GetWidgetAtIndex(int Index);
	int STATIC_GetNumWidgets();
	int STATIC_GetActiveWidgetIndex();
};


// Class UMG.WrapBox
// 0x0020 (0x0168 - 0x0148)
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                         // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              WrapWidth;                                                // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExplicitWrapWidth;                                       // 0x0154(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0155(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WrapBox"));

		return ptr;
	}


	void STATIC_SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* STATIC_AddChildWrapBox(class UWidget* Content);
};


// Class UMG.ProgressBar
// 0x0220 (0x0350 - 0x0130)
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                              // 0x0130(0x01B8) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x02E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImage;                                          // 0x02F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            FillImage;                                                // 0x02F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            MarqueeImage;                                             // 0x0300(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Percent;                                                  // 0x0308(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x030C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMarquee;                                               // 0x030D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x030E(0x0002) MISSED OFFSET
	struct FScriptDelegate                             PercentDelegate;                                          // 0x0310(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x0320(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                              // 0x0330(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ProgressBar"));

		return ptr;
	}


	void STATIC_SetPercent(float InPercent);
	void STATIC_SetIsMarquee(bool InbIsMarquee);
	void STATIC_SetFillColorAndOpacity(const struct FLinearColor& InColor);
};


// Class UMG.ScrollBar
// 0x0540 (0x0670 - 0x0130)
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                              // 0x0130(0x0518) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0648(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAlwaysShowScrollbar;                                     // 0x0650(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0651(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0652(0x0002) MISSED OFFSET
	struct FVector2D                                   Thickness;                                                // 0x0654(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x065C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ScrollBar"));

		return ptr;
	}


	void STATIC_SetState(float InOffsetFraction, float InThumbSizeFraction);
};


// Class UMG.Slider
// 0x02F8 (0x0428 - 0x0130)
class USlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0138(0x0010) (ZeroConstructor, InstancedReference)
	struct FSliderStyle                                WidgetStyle;                                              // 0x0148(0x0250) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x039C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x03AC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x03BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x03BD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x03C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0418(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Slider"));

		return ptr;
	}


	void STATIC_SetValue(float InValue);
	void STATIC_SetStepSize(float InValue);
	void STATIC_SetSliderHandleColor(const struct FLinearColor& InValue);
	void STATIC_SetSliderBarColor(const struct FLinearColor& InValue);
	void STATIC_SetLocked(bool InValue);
	void STATIC_SetIndentHandle(bool InValue);
	float STATIC_GetValue();
};


// Class UMG.Spacer
// 0x0018 (0x0148 - 0x0130)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Spacer"));

		return ptr;
	}


	void STATIC_SetSize(const struct FVector2D& InSize);
};


// Class UMG.SpinBox
// 0x0438 (0x0568 - 0x0130)
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                    // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0138(0x0010) (ZeroConstructor, InstancedReference)
	struct FSpinBoxStyle                               WidgetStyle;                                              // 0x0148(0x0310) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0458(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Delta;                                                    // 0x0460(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SliderExponent;                                           // 0x0464(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0468(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinDesiredWidth;                                          // 0x04D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x04D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x04D5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x04D6(0x0002) MISSED OFFSET
	struct FSlateColor                                 ForegroundColor;                                          // 0x04D8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                         // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                    // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                      // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bOverride_MinValue : 1;                                   // 0x0540(0x0001) (Edit)
	unsigned char                                      bOverride_MaxValue : 1;                                   // 0x0540(0x0001) (Edit)
	unsigned char                                      bOverride_MinSliderValue : 1;                             // 0x0540(0x0001) (Edit)
	unsigned char                                      bOverride_MaxSliderValue : 1;                             // 0x0540(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x0544(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0548(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x054C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x0550(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0554(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.SpinBox"));

		return ptr;
	}


	void STATIC_SetValue(float NewValue);
	void STATIC_SetMinValue(float NewValue);
	void STATIC_SetMinSliderValue(float NewValue);
	void STATIC_SetMaxValue(float NewValue);
	void STATIC_SetMaxSliderValue(float NewValue);
	void STATIC_SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void STATIC_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void STATIC_OnSpinBoxBeginSliderMovement__DelegateSignature();
	float STATIC_GetValue();
	float STATIC_GetMinValue();
	float STATIC_GetMinSliderValue();
	float STATIC_GetMaxValue();
	float STATIC_GetMaxSliderValue();
	void STATIC_ClearMinValue();
	void STATIC_ClearMinSliderValue();
	void STATIC_ClearMaxValue();
	void STATIC_ClearMaxSliderValue();
};


// Class UMG.TableViewBase
// 0x0000 (0x0130 - 0x0130)
class UTableViewBase : public UWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.TableViewBase"));

		return ptr;
	}


	void STATIC_SetVisibility(ESlateVisibility InVisibility);
	void STATIC_SetUserFocus(class APlayerController* PlayerController);
	void STATIC_SetToolTipText(const struct FText& InToolTipText);
	void STATIC_SetToolTip(class UWidget* Widget);
	void STATIC_SetRenderTranslation(const struct FVector2D& Translation);
	void STATIC_SetRenderTransformPivot(const struct FVector2D& Pivot);
	void STATIC_SetRenderTransform(const struct FWidgetTransform& InTransform);
	void STATIC_SetRenderShear(const struct FVector2D& Shear);
	void STATIC_SetRenderScale(const struct FVector2D& Scale);
	void STATIC_SetRenderAngle(float Angle);
	void STATIC_SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_SetKeyboardFocus();
	void STATIC_SetIsEnabled(bool bInIsEnabled);
	void STATIC_SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void STATIC_SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void STATIC_ResetCursor();
	void STATIC_RemoveFromParent();
	struct FEventReply STATIC_OnReply__DelegateSignature();
	struct FEventReply STATIC_OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool STATIC_IsVisible();
	bool STATIC_IsHovered();
	void STATIC_InvalidateLayoutAndVolatility();
	bool STATIC_HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool STATIC_HasUserFocus(class APlayerController* PlayerController);
	bool STATIC_HasMouseCapture();
	bool STATIC_HasKeyboardFocus();
	bool STATIC_HasFocusedDescendants();
	bool STATIC_HasAnyUserFocus();
	class UWidget* STATIC_GetWidget__DelegateSignature();
	ESlateVisibility STATIC_GetVisibility();
	struct FText STATIC_GetText__DelegateSignature();
	ESlateVisibility STATIC_GetSlateVisibility__DelegateSignature();
	struct FSlateColor STATIC_GetSlateColor__DelegateSignature();
	struct FSlateBrush STATIC_GetSlateBrush__DelegateSignature();
	class UPanelWidget* STATIC_GetParent();
	class APlayerController* STATIC_GetOwningPlayer();
	TEnumAsByte<EMouseCursor> STATIC_GetMouseCursor__DelegateSignature();
	struct FLinearColor STATIC_GetLinearColor__DelegateSignature();
	bool STATIC_GetIsEnabled();
	int STATIC_GetInt32__DelegateSignature();
	float STATIC_GetFloat__DelegateSignature();
	struct FVector2D STATIC_GetDesiredSize();
	ECheckBoxState STATIC_GetCheckBoxState__DelegateSignature();
	struct FGeometry STATIC_GetCachedGeometry();
	bool STATIC_GetBool__DelegateSignature();
	class UWidget* STATIC_GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* STATIC_GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void STATIC_ForceVolatile(bool bForce);
	void STATIC_ForceLayoutPrepass();
	void STATIC_EventForWidget__DelegateSignature(class UWidget* BoundWidget);
};


// Class UMG.ListView
// 0x0040 (0x0170 - 0x0130)
class UListView : public UTableViewBase
{
public:
	float                                              ItemHeight;                                               // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	TArray<class UObject*>                             Items;                                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateRowEvent;                                       // 0x0150(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.ListView"));

		return ptr;
	}

};


// Class UMG.TileView
// 0x0040 (0x0170 - 0x0130)
class UTileView : public UTableViewBase
{
public:
	float                                              ItemWidth;                                                // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemHeight;                                               // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Items;                                                    // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateTileEvent;                                      // 0x0150(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0160(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.TileView"));

		return ptr;
	}


	void STATIC_SetItemWidth(float Width);
	void STATIC_SetItemHeight(float Height);
	void STATIC_RequestListRefresh();
};


// Class UMG.MultiLineEditableText
// 0x02F0 (0x0448 - 0x0158)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0158(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0170(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0188(0x0010) (ZeroConstructor, InstancedReference)
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0198(0x0208) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x03A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x03A8(0x0068) (Deprecated)
	bool                                               AllowContextMenu;                                         // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0438(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.MultiLineEditableText"));

		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool bReadOnly);
	void STATIC_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText STATIC_GetText();
};


// Class UMG.MultiLineEditableTextBox
// 0x0B90 (0x0CE8 - 0x0158)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0158(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0170(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0188(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0198(0x0870) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0A08(0x0208) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x0C10(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0C11(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0C12(0x0006) MISSED OFFSET
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0C18(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0C20(0x0068) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0C88(0x0010) (Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0C98(0x0010) (Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0CA8(0x0010) (Deprecated, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTextChanged;                                            // 0x0CB8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                          // 0x0CC8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0CD8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.MultiLineEditableTextBox"));

		return ptr;
	}


	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetIsReadOnly(bool bReadOnly);
	void STATIC_SetError(const struct FText& InError);
	void STATIC_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText STATIC_GetText();
};


// Class UMG.RichTextBlock
// 0x02C8 (0x0420 - 0x0158)
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0158(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0170(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0180(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x01E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x01F8(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x218];                                     // 0x0208(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.RichTextBlock"));

		return ptr;
	}

};


// Class UMG.TextBlock
// 0x0108 (0x0260 - 0x0158)
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0158(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0170(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0180(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x01A8(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x01B8(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ShadowOffset;                                             // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0228(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            // 0x0238(0x0010) (ZeroConstructor, InstancedReference)
	float                                              MinDesiredWidth;                                          // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapWithInvalidationPanel;                               // 0x024C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x024D(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.TextBlock"));

		return ptr;
	}


	void STATIC_SetWrapTextAt(float InWrapTextAt);
	void STATIC_SetText(const struct FText& InText);
	void STATIC_SetShadowOffset(const struct FVector2D& InShadowOffset);
	void STATIC_SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void STATIC_SetOpacity(float InOpacity);
	void STATIC_SetMinDesiredWidth(float InMinDesiredWidth);
	void STATIC_SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void STATIC_SetFont(const struct FSlateFontInfo& InFontInfo);
	void STATIC_SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	struct FText STATIC_GetText();
};


// Class UMG.Throbber
// 0x00B0 (0x01E0 - 0x0130)
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateHorizontally;                                     // 0x0134(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateVertically;                                       // 0x0135(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateOpacity;                                          // 0x0136(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0137(0x0001) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0138(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0140(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.Throbber"));

		return ptr;
	}


	void STATIC_SetNumberOfPieces(int InNumberOfPieces);
	void STATIC_SetAnimateVertically(bool bInAnimateVertically);
	void STATIC_SetAnimateOpacity(bool bInAnimateOpacity);
	void STATIC_SetAnimateHorizontally(bool bInAnimateHorizontally);
};


// Class UMG.WidgetAnimation
// 0x0050 (0x0380 - 0x0330)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	struct FScriptMulticastDelegate                    OnAnimationStarted;                                       // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAnimationFinished;                                      // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovieScene*                                 MovieScene;                                               // 0x0350(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                        // 0x0358(0x0010) (ZeroConstructor)
	struct FString                                     DisplayLabel;                                             // 0x0368(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetAnimation"));

		return ptr;
	}


	float STATIC_GetStartTime();
	float STATIC_GetEndTime();
};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0030 - 0x0030)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetBlueprintLibrary"));

		return ptr;
	}

};


// Class UMG.WidgetComponent
// 0x0130 (0x0BF0 - 0x0AC0)
class UWidgetComponent : public UMeshComponent
{
public:
	EWidgetSpace                                       Space;                                                    // 0x0AC0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWidgetTimingPolicy                                TimingPolicy;                                             // 0x0AC1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0AC2(0x0006) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0AC8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   DrawSize;                                                 // 0x0AD0(0x0008) (Edit, IsPlainOldData)
	bool                                               bManuallyRedraw;                                          // 0x0AD8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRedrawRequested;                                         // 0x0AD9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0ADA(0x0002) MISSED OFFSET
	float                                              RedrawTime;                                               // 0x0ADC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0AE0(0x0008) MISSED OFFSET
	struct FIntPoint                                   CurrentDrawSize;                                          // 0x0AE8(0x0008) (IsPlainOldData)
	bool                                               bDrawAtDesiredSize;                                       // 0x0AF0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0AF1(0x0003) MISSED OFFSET
	struct FVector2D                                   Pivot;                                                    // 0x0AF4(0x0008) (Edit, IsPlainOldData)
	bool                                               bReceiveHardwareInput;                                    // 0x0AFC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWindowFocusable;                                         // 0x0AFD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0AFE(0x0002) MISSED OFFSET
	class ULocalPlayer*                                OwnerPlayer;                                              // 0x0B00(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0B08(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                TintColorAndOpacity;                                      // 0x0B18(0x0010) (Edit, IsPlainOldData)
	float                                              OpacityFromTexture;                                       // 0x0B28(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EWidgetBlendMode                                   BlendMode;                                                // 0x0B2C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTwoSided;                                              // 0x0B2D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenOffscreen;                                        // 0x0B2E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0B2F(0x0001) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x0B30(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x0B38(0x0020) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0B58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial;                                      // 0x0B60(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                             // 0x0B68(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial;                                           // 0x0B70(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                  // 0x0B78(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial;                                           // 0x0B80(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                  // 0x0B88(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0B90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0B98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bAddedToScreen;                                           // 0x0BA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bEditTimeUsable;                                          // 0x0BA1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0BA2(0x0006) MISSED OFFSET
	struct FName                                       SharedLayerName;                                          // 0x0BA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LayerZOrder;                                              // 0x0BB0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWidgetGeometryMode                                GeometryMode;                                             // 0x0BB4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0BB5(0x0003) MISSED OFFSET
	float                                              CylinderArcAngle;                                         // 0x0BB8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x34];                                      // 0x0BBC(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetComponent"));

		return ptr;
	}


	void STATIC_SetWidget(class UUserWidget* Widget);
	void STATIC_SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void STATIC_SetDrawSize(const struct FVector2D& Size);
	void STATIC_SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void STATIC_RequestRedraw();
	class UUserWidget* STATIC_GetUserWidgetObject();
	class UTextureRenderTarget2D* STATIC_GetRenderTarget();
	class ULocalPlayer* STATIC_GetOwnerPlayer();
	class UMaterialInstanceDynamic* STATIC_GetMaterialInstance();
	struct FVector2D STATIC_GetDrawSize();
};


// Class UMG.WidgetInteractionComponent
// 0x01F0 (0x06A0 - 0x04B0)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoveredWidgetChanged;                                   // 0x04B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET
	int                                                VirtualUserIndex;                                         // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PointerIndex;                                             // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	float                                              InteractionDistance;                                      // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWidgetInteractionSource                           InteractionSource;                                        // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHitTesting;                                        // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebug;                                               // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x04E3(0x0001) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x04E4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7C];                                      // 0x04F4(0x007C) MISSED OFFSET
	struct FHitResult                                  CustomHitResult;                                          // 0x0570(0x0088) (Transient, IsPlainOldData)
	struct FVector2D                                   LocalHitLocation;                                         // 0x05F8(0x0008) (Transient, IsPlainOldData)
	struct FVector2D                                   LastLocalHitLocation;                                     // 0x0600(0x0008) (Transient, IsPlainOldData)
	class UWidgetComponent*                            HoveredWidgetComponent;                                   // 0x0608(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FHitResult                                  LastHitResult;                                            // 0x0610(0x0088) (Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetInteractable;                             // 0x0698(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetFocusable;                                // 0x0699(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetHitTestVisible;                           // 0x069A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x069B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetInteractionComponent"));

		return ptr;
	}


	void STATIC_SetCustomHitResult(const struct FHitResult& HitResult);
	bool STATIC_SendKeyChar(const struct FString& Characters, bool bRepeat);
	void STATIC_ScrollWheel(float ScrollDelta);
	void STATIC_ReleasePointerKey(const struct FKey& Key);
	bool STATIC_ReleaseKey(const struct FKey& Key);
	void STATIC_PressPointerKey(const struct FKey& Key);
	bool STATIC_PressKey(const struct FKey& Key, bool bRepeat);
	bool STATIC_PressAndReleaseKey(const struct FKey& Key);
	bool STATIC_IsOverInteractableWidget();
	bool STATIC_IsOverHitTestVisibleWidget();
	bool STATIC_IsOverFocusableWidget();
	struct FHitResult STATIC_GetLastHitResult();
	class UWidgetComponent* STATIC_GetHoveredWidgetComponent();
	struct FVector2D STATIC_Get2DHitLocation();
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0030 - 0x0030)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetLayoutLibrary"));

		return ptr;
	}

};


// Class UMG.WidgetNavigation
// 0x0090 (0x00C0 - 0x0030)
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Down;                                                     // 0x0048(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Left;                                                     // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Right;                                                    // 0x0078(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Next;                                                     // 0x0090(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Previous;                                                 // 0x00A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetNavigation"));

		return ptr;
	}

};


// Class UMG.WidgetTree
// 0x0008 (0x0038 - 0x0030)
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                               // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class UMG.WidgetTree"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
