#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyBlurBackgroundWidjet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UMG.UserWidget.UnregisterInputComponent
struct ULobbyBlurBackgroundWidjet_C_UnregisterInputComponent_Params
{
};

// Function UMG.UserWidget.Tick
struct ULobbyBlurBackgroundWidjet_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForInputAction
struct ULobbyBlurBackgroundWidjet_C_StopListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForAllInputActions
struct ULobbyBlurBackgroundWidjet_C_StopListeningForAllInputActions_Params
{
};

// Function UMG.UserWidget.StopAnimation
struct ULobbyBlurBackgroundWidjet_C_StopAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.UserWidget.StopAllAnimations
struct ULobbyBlurBackgroundWidjet_C_StopAllAnimations_Params
{
};

// Function UMG.UserWidget.SetPositionInViewport
struct ULobbyBlurBackgroundWidjet_C_SetPositionInViewport_Params
{
	struct FVector2D                                   Position;                                                 // (Parm, IsPlainOldData)
	bool                                               bRemoveDPIScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPlaybackSpeed
struct ULobbyBlurBackgroundWidjet_C_SetPlaybackSpeed_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetPadding
struct ULobbyBlurBackgroundWidjet_C_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm)
};

// Function UMG.UserWidget.SetOwningPlayer
struct ULobbyBlurBackgroundWidjet_C_SetOwningPlayer_Params
{
	class APlayerController*                           LocalPlayerController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetOwningLocalPlayer
struct ULobbyBlurBackgroundWidjet_C_SetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetNumLoopsToPlay
struct ULobbyBlurBackgroundWidjet_C_SetNumLoopsToPlay_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionPriority
struct ULobbyBlurBackgroundWidjet_C_SetInputActionPriority_Params
{
	int                                                NewPriority;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionBlocking
struct ULobbyBlurBackgroundWidjet_C_SetInputActionBlocking_Params
{
	bool                                               bShouldBlock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.SetForegroundColor
struct ULobbyBlurBackgroundWidjet_C_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                        // (Parm)
};

// Function UMG.UserWidget.SetDesiredSizeInViewport
struct ULobbyBlurBackgroundWidjet_C_SetDesiredSizeInViewport_Params
{
	struct FVector2D                                   Size;                                                     // (Parm, IsPlainOldData)
};

// Function UMG.UserWidget.SetColorAndOpacity
struct ULobbyBlurBackgroundWidjet_C_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (Parm, IsPlainOldData)
};

// Function UMG.UserWidget.SetAnchorsInViewport
struct ULobbyBlurBackgroundWidjet_C_SetAnchorsInViewport_Params
{
	struct FAnchors                                    Anchors;                                                  // (Parm)
};

// Function UMG.UserWidget.SetAlignmentInViewport
struct ULobbyBlurBackgroundWidjet_C_SetAlignmentInViewport_Params
{
	struct FVector2D                                   Alignment;                                                // (Parm, IsPlainOldData)
};

// Function UMG.UserWidget.ReverseAnimation
struct ULobbyBlurBackgroundWidjet_C_ReverseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.UserWidget.RemoveFromViewport
struct ULobbyBlurBackgroundWidjet_C_RemoveFromViewport_Params
{
};

// Function UMG.UserWidget.RegisterInputComponent
struct ULobbyBlurBackgroundWidjet_C_RegisterInputComponent_Params
{
};

// Function UMG.UserWidget.PreConstruct
struct ULobbyBlurBackgroundWidjet_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlaySound
struct ULobbyBlurBackgroundWidjet_C_PlaySound_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationTo
struct ULobbyBlurBackgroundWidjet_C_PlayAnimationTo_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndAtTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimation
struct ULobbyBlurBackgroundWidjet_C_PlayAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.PauseAnimation
struct ULobbyBlurBackgroundWidjet_C_PauseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnTouchStarted
struct ULobbyBlurBackgroundWidjet_C_OnTouchStarted_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchMoved
struct ULobbyBlurBackgroundWidjet_C_OnTouchMoved_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchGesture
struct ULobbyBlurBackgroundWidjet_C_OnTouchGesture_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               GestureEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnTouchEnded
struct ULobbyBlurBackgroundWidjet_C_OnTouchEnded_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct ULobbyBlurBackgroundWidjet_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPreviewKeyDown
struct ULobbyBlurBackgroundWidjet_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnPaint
struct ULobbyBlurBackgroundWidjet_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseWheel
struct ULobbyBlurBackgroundWidjet_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseMove
struct ULobbyBlurBackgroundWidjet_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseLeave
struct ULobbyBlurBackgroundWidjet_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseEnter
struct ULobbyBlurBackgroundWidjet_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UMG.UserWidget.OnMouseButtonUp
struct ULobbyBlurBackgroundWidjet_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDown
struct ULobbyBlurBackgroundWidjet_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct ULobbyBlurBackgroundWidjet_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                             // (Parm, IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnMotionDetected
struct ULobbyBlurBackgroundWidjet_C_OnMotionDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FMotionEvent                                InMotionEvent;                                            // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyUp
struct ULobbyBlurBackgroundWidjet_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyDown
struct ULobbyBlurBackgroundWidjet_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnKeyChar
struct ULobbyBlurBackgroundWidjet_C_OnKeyChar_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FCharacterEvent                             InCharacterEvent;                                         // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnFocusReceived
struct ULobbyBlurBackgroundWidjet_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnFocusLost
struct ULobbyBlurBackgroundWidjet_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (Parm)
};

// Function UMG.UserWidget.OnDrop
struct ULobbyBlurBackgroundWidjet_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (Parm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragOver
struct ULobbyBlurBackgroundWidjet_C_OnDragOver_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (Parm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragLeave
struct ULobbyBlurBackgroundWidjet_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (Parm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragEnter
struct ULobbyBlurBackgroundWidjet_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (Parm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragDetected
struct ULobbyBlurBackgroundWidjet_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnDragCancelled
struct ULobbyBlurBackgroundWidjet_C_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.OnControllerButtonReleased
struct ULobbyBlurBackgroundWidjet_C_OnControllerButtonReleased_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FControllerEvent                            ControllerEvent;                                          // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnControllerButtonPressed
struct ULobbyBlurBackgroundWidjet_C_OnControllerButtonPressed_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FControllerEvent                            ControllerEvent;                                          // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnControllerAnalogValueChanged
struct ULobbyBlurBackgroundWidjet_C_OnControllerAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FControllerEvent                            ControllerEvent;                                          // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.OnAnimationStarted
struct ULobbyBlurBackgroundWidjet_C_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationFinished
struct ULobbyBlurBackgroundWidjet_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UMG.UserWidget.OnAnalogValueChanged
struct ULobbyBlurBackgroundWidjet_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.ListenForInputAction
struct ULobbyBlurBackgroundWidjet_C_ListenForInputAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConsume;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (Parm, ZeroConstructor)
};

// Function UMG.UserWidget.IsPlayingAnimation
struct ULobbyBlurBackgroundWidjet_C_IsPlayingAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsListeningForInputAction
struct ULobbyBlurBackgroundWidjet_C_IsListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInViewport
struct ULobbyBlurBackgroundWidjet_C_IsInViewport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsInteractable
struct ULobbyBlurBackgroundWidjet_C_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnyAnimationPlaying
struct ULobbyBlurBackgroundWidjet_C_IsAnyAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlaying
struct ULobbyBlurBackgroundWidjet_C_IsAnimationPlaying_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayerPawn
struct ULobbyBlurBackgroundWidjet_C_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayer
struct ULobbyBlurBackgroundWidjet_C_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningLocalPlayer
struct ULobbyBlurBackgroundWidjet_C_GetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetIsVisible
struct ULobbyBlurBackgroundWidjet_C_GetIsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnimationCurrentTime
struct ULobbyBlurBackgroundWidjet_C_GetAnimationCurrentTime_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.GetAnchorsInViewport
struct ULobbyBlurBackgroundWidjet_C_GetAnchorsInViewport_Params
{
	struct FAnchors                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function UMG.UserWidget.GetAlignmentInViewport
struct ULobbyBlurBackgroundWidjet_C_GetAlignmentInViewport_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UMG.UserWidget.FinishStoppedSequencePlayers
struct ULobbyBlurBackgroundWidjet_C_FinishStoppedSequencePlayers_Params
{
};

// Function UMG.UserWidget.Destruct
struct ULobbyBlurBackgroundWidjet_C_Destruct_Params
{
};

// Function UMG.UserWidget.Construct
struct ULobbyBlurBackgroundWidjet_C_Construct_Params
{
};

// Function UMG.UserWidget.AddToViewport
struct ULobbyBlurBackgroundWidjet_C_AddToViewport_Params
{
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UMG.UserWidget.AddToPlayerScreen
struct ULobbyBlurBackgroundWidjet_C_AddToPlayerScreen_Params
{
	int                                                ZOrder;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
