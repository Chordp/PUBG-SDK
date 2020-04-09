#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyBlurBackgroundWidjet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LobbyBlurBackgroundWidjet.LobbyBlurBackgroundWidjet_C
// 0x0000 (0x0250 - 0x0250)
class ULobbyBlurBackgroundWidjet_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass LobbyBlurBackgroundWidjet.LobbyBlurBackgroundWidjet_C"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
