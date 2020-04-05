// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Paper2D_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C657CE0              		 offset:4887ce0                       

bool UPaperFlipbook::IsValidKeyFrameIndex(int* Index)
=======
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4AE70              		 offset:428ae70                       

bool UPaperFlipbook::IsValidKeyFrameIndex(int Index)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex"));

	UPaperFlipbook_IsValidKeyFrameIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetTotalDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C657C20              		 offset:4887c20                       
=======
// FunctionAddress:0x00007FF6DAC4ADB0              		 offset:428adb0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UPaperFlipbook::GetTotalDuration()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbook.GetTotalDuration"));

	UPaperFlipbook_GetTotalDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C6573E0              		 offset:48873e0                       

class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float* Time, bool* bClampToEnds)
=======
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4A570              		 offset:428a570                       

class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbook.GetSpriteAtTime"));

	UPaperFlipbook_GetSpriteAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// int*                           FrameIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C657350              		 offset:4887350                       

class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int* FrameIndex)
=======
// int                            FrameIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4A4E0              		 offset:428a4e0                       

class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int FrameIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbook.GetSpriteAtFrame"));

	UPaperFlipbook_GetSpriteAtFrame_Params params;
	params.FrameIndex = FrameIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumKeyFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C6572A0              		 offset:48872a0                       
=======
// FunctionAddress:0x00007FF6DAC4A400              		 offset:428a400                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

int UPaperFlipbook::GetNumKeyFrames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbook.GetNumKeyFrames"));

	UPaperFlipbook_GetNumKeyFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetNumFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C657270              		 offset:4887270                       
=======
// FunctionAddress:0x00007FF6DAC4A3D0              		 offset:428a3d0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

int UPaperFlipbook::GetNumFrames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbook.GetNumFrames"));

	UPaperFlipbook_GetNumFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C656FC0              		 offset:4886fc0                       

int UPaperFlipbook::GetKeyFrameIndexAtTime(float* Time, bool* bClampToEnds)
=======
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4A120              		 offset:428a120                       

int UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime"));

	UPaperFlipbook_GetKeyFrameIndexAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.Stop
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C658FA0              		 offset:4888fa0                       
=======
// FunctionAddress:0x00007FF6DAC4C130              		 offset:428c130                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UPaperFlipbookComponent::Stop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.Stop"));

	UPaperFlipbookComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FLinearColor*           NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658B10              		 offset:4888b10                       

void UPaperFlipbookComponent::SetSpriteColor(struct FLinearColor* NewColor)
=======
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BCA0              		 offset:428bca0                       

void UPaperFlipbookComponent::SetSpriteColor(const struct FLinearColor& NewColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.SetSpriteColor"));

	UPaperFlipbookComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// float*                         NewRate                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C658900              		 offset:4888900                       

void UPaperFlipbookComponent::SetPlayRate(float* NewRate)
=======
// float                          NewRate                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BA90              		 offset:428ba90                       

void UPaperFlipbookComponent::SetPlayRate(float NewRate)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.SetPlayRate"));

	UPaperFlipbookComponent_SetPlayRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           NewFramePosition               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C658A50              		 offset:4888a50                       

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int* NewFramePosition, bool* bFireEvents)
=======
// int                            NewFramePosition               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BBE0              		 offset:428bbe0                       

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames"));

	UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params params;
	params.NewFramePosition = NewFramePosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// float*                         NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C658980              		 offset:4888980                       

void UPaperFlipbookComponent::SetPlaybackPosition(float* NewPosition, bool* bFireEvents)
=======
// float                          NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BB10              		 offset:428bb10                       

void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition"));

	UPaperFlipbookComponent_SetPlaybackPosition_Params params;
	params.NewPosition = NewPosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetNewTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// float*                         NewTime                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C658880              		 offset:4888880                       

void UPaperFlipbookComponent::SetNewTime(float* NewTime)
=======
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BA10              		 offset:428ba10                       

void UPaperFlipbookComponent::SetNewTime(float NewTime)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.SetNewTime"));

	UPaperFlipbookComponent_SetNewTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// bool*                          bNewLooping                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C6587F0              		 offset:48887f0                       

void UPaperFlipbookComponent::SetLooping(bool* bNewLooping)
=======
// bool                           bNewLooping                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4B980              		 offset:428b980                       

void UPaperFlipbookComponent::SetLooping(bool bNewLooping)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.SetLooping"));

	UPaperFlipbookComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.SetFlipbook
// (Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UPaperFlipbook**         NewFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658DF0              		 offset:4888df0                       

bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook** NewFlipbook)
=======
// class UPaperFlipbook*          NewFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BF80              		 offset:428bf80                       

bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.SetFlipbook"));

	UPaperFlipbookComponent_SetFlipbook_Params params;
	params.NewFlipbook = NewFlipbook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C658410              		 offset:4888410                       
=======
// FunctionAddress:0x00007FF6DAC4B5A0              		 offset:428b5a0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UPaperFlipbookComponent::ReverseFromEnd()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd"));

	UPaperFlipbookComponent_ReverseFromEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.Reverse
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C6583F0              		 offset:48883f0                       
=======
// FunctionAddress:0x00007FF6DAC4B580              		 offset:428b580                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UPaperFlipbookComponent::Reverse()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.Reverse"));

	UPaperFlipbookComponent_Reverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C658250              		 offset:4888250                       
=======
// FunctionAddress:0x00007FF6DAC4B3E0              		 offset:428b3e0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UPaperFlipbookComponent::PlayFromStart()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.PlayFromStart"));

	UPaperFlipbookComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.Play
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C658230              		 offset:4888230                       
=======
// FunctionAddress:0x00007FF6DAC4B3C0              		 offset:428b3c0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UPaperFlipbookComponent::Play()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.Play"));

	UPaperFlipbookComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
// (Final, Native, Protected)
// Parameters:
<<<<<<< HEAD
// class UPaperFlipbook**         OldFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C658180              		 offset:4888180                       

void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook** OldFlipbook)
=======
// class UPaperFlipbook*          OldFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4B310              		 offset:428b310                       

void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook"));

	UPaperFlipbookComponent_OnRep_SourceFlipbook_Params params;
	params.OldFlipbook = OldFlipbook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperFlipbookComponent.IsReversing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C657CB0              		 offset:4887cb0                       
=======
// FunctionAddress:0x00007FF6DAC4AE40              		 offset:428ae40                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UPaperFlipbookComponent::IsReversing()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.IsReversing"));

	UPaperFlipbookComponent_IsReversing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C657C80              		 offset:4887c80                       
=======
// FunctionAddress:0x00007FF6DAC4AE10              		 offset:428ae10                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UPaperFlipbookComponent::IsPlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.IsPlaying"));

	UPaperFlipbookComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C657C50              		 offset:4887c50                       
=======
// FunctionAddress:0x00007FF6DAC4ADE0              		 offset:428ade0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UPaperFlipbookComponent::IsLooping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.IsLooping"));

	UPaperFlipbookComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetSpriteMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C6574B0              		 offset:48874b0                       
=======
// FunctionAddress:0x00007FF6DAC4A640              		 offset:428a640                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UMaterialInterface* UPaperFlipbookComponent::GetSpriteMaterial()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.GetSpriteMaterial"));

	UPaperFlipbookComponent_GetSpriteMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C6572C0              		 offset:48872c0                       
=======
// FunctionAddress:0x00007FF6DAC4A420              		 offset:428a420                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UPaperFlipbookComponent::GetPlayRate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.GetPlayRate"));

	UPaperFlipbookComponent_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C657320              		 offset:4887320                       
=======
// FunctionAddress:0x00007FF6DAC4A480              		 offset:428a480                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

int UPaperFlipbookComponent::GetPlaybackPositionInFrames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames"));

	UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C6572F0              		 offset:48872f0                       
=======
// FunctionAddress:0x00007FF6DAC4A450              		 offset:428a450                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UPaperFlipbookComponent::GetPlaybackPosition()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition"));

	UPaperFlipbookComponent_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C656E00              		 offset:4886e00                       
=======
// FunctionAddress:0x00007FF6DAC49F60              		 offset:4289f60                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

int UPaperFlipbookComponent::GetFlipbookLengthInFrames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames"));

	UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C656DD0              		 offset:4886dd0                       
=======
// FunctionAddress:0x00007FF6DAC49F30              		 offset:4289f30                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UPaperFlipbookComponent::GetFlipbookLength()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength"));

	UPaperFlipbookComponent_GetFlipbookLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C656DA0              		 offset:4886da0                       
=======
// FunctionAddress:0x00007FF6DAC49F00              		 offset:4289f00                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UPaperFlipbookComponent::GetFlipbookFramerate()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate"));

	UPaperFlipbookComponent_GetFlipbookFramerate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperFlipbookComponent.GetFlipbook
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaperFlipbook*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C656D70              		 offset:4886d70                       
=======
// FunctionAddress:0x00007FF6DAC4A4B0              		 offset:428a4b0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperFlipbookComponent.GetFlipbook"));

	UPaperFlipbookComponent_GetFlipbook_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             NewInstanceTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C6590D0              		 offset:48890d0                       

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int* InstanceIndex, struct FTransform* NewInstanceTransform, bool* bWorldSpace, bool* bMarkRenderStateDirty, bool* bTeleport)
=======
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              NewInstanceTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4C260              		 offset:428c260                       

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform"));

	UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceTransform = NewInstanceTransform;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           NewInstanceColor               (Parm, IsPlainOldData)
// bool*                          bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658FC0              		 offset:4888fc0                       

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int* InstanceIndex, struct FLinearColor* NewInstanceColor, bool* bMarkRenderStateDirty)
=======
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NewInstanceColor               (Parm, IsPlainOldData)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4C150              		 offset:428c150                       

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor"));

	UPaperGroupedSpriteComponent_UpdateInstanceColor_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceColor = NewInstanceColor;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FVector*                WorldSpaceSortAxis             (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658F10              		 offset:4888f10                       

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(struct FVector* WorldSpaceSortAxis)
=======
// struct FVector                 WorldSpaceSortAxis             (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4C0A0              		 offset:428c0a0                       

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis"));

	UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params params;
	params.WorldSpaceSortAxis = WorldSpaceSortAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
// (Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658290              		 offset:4888290                       

bool UPaperGroupedSpriteComponent::RemoveInstance(int* InstanceIndex)
=======
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4B420              		 offset:428b420                       

bool UPaperGroupedSpriteComponent::RemoveInstance(int InstanceIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance"));

	UPaperGroupedSpriteComponent_RemoveInstance_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// int*                           InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutInstanceTransform           (Parm, OutParm, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C656E60              		 offset:4886e60                       

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int* InstanceIndex, bool* bWorldSpace, struct FTransform* OutInstanceTransform)
=======
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutInstanceTransform           (Parm, OutParm, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC49FC0              		 offset:4289fc0                       

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform"));

	UPaperGroupedSpriteComponent_GetInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = params.OutInstanceTransform;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C656E30              		 offset:4886e30                       
=======
// FunctionAddress:0x00007FF6DAC49F90              		 offset:4289f90                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

int UPaperGroupedSpriteComponent::GetInstanceCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount"));

	UPaperGroupedSpriteComponent_GetInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
// (Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C656BA0              		 offset:4886ba0                       
=======
// FunctionAddress:0x00007FF6DAC49D30              		 offset:4289d30                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UPaperGroupedSpriteComponent::ClearInstances()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances"));

	UPaperGroupedSpriteComponent_ClearInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FTransform*             Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPaperSprite**           Sprite                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Color                          (Parm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C656790              		 offset:4886790                       

int UPaperGroupedSpriteComponent::AddInstance(struct FTransform* Transform, class UPaperSprite** Sprite, bool* bWorldSpace, struct FLinearColor* Color)
=======
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPaperSprite*            Sprite                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC49920              		 offset:4289920                       

int UPaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperGroupedSpriteComponent.AddInstance"));

	UPaperGroupedSpriteComponent_AddInstance_Params params;
	params.Transform = Transform;
	params.Sprite = Sprite;
	params.bWorldSpace = bWorldSpace;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
<<<<<<< HEAD
// class UPaperSprite**           Sprite                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C657D80              		 offset:4887d80                       

struct FSlateBrush UPaperSpriteBlueprintLibrary::STATIC_MakeBrushFromSprite(class UPaperSprite** Sprite, int* Width, int* Height)
=======
// class UPaperSprite*            Sprite                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6DAC4AF10              		 offset:428af10                       

struct FSlateBrush UPaperSpriteBlueprintLibrary::STATIC_MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite"));

	UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params params;
	params.Sprite = Sprite;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.SetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FLinearColor*           NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658B90              		 offset:4888b90                       

void UPaperSpriteComponent::SetSpriteColor(struct FLinearColor* NewColor)
=======
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BD20              		 offset:428bd20                       

void UPaperSpriteComponent::SetSpriteColor(const struct FLinearColor& NewColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperSpriteComponent.SetSpriteColor"));

	UPaperSpriteComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperSpriteComponent.SetSprite
// (Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UPaperSprite**           NewSprite                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658DF0              		 offset:4888df0                       

bool UPaperSpriteComponent::SetSprite(class UPaperSprite** NewSprite)
=======
// class UPaperSprite*            NewSprite                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BF80              		 offset:428bf80                       

bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperSpriteComponent.SetSprite"));

	UPaperSpriteComponent_SetSprite_Params params;
	params.NewSprite = NewSprite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperSpriteComponent.GetSprite
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C656D70              		 offset:4886d70                       
=======
// FunctionAddress:0x00007FF6DAC4A4B0              		 offset:428a4b0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UPaperSprite* UPaperSpriteComponent::GetSprite()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperSpriteComponent.GetSprite"));

	UPaperSpriteComponent_GetSprite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTerrainComponent.SetTerrainColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FLinearColor*           NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658C10              		 offset:4888c10                       

void UPaperTerrainComponent::SetTerrainColor(struct FLinearColor* NewColor)
=======
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BDA0              		 offset:428bda0                       

void UPaperTerrainComponent::SetTerrainColor(const struct FLinearColor& NewColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTerrainComponent.SetTerrainColor"));

	UPaperTerrainComponent_SetTerrainColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetTileMapColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FLinearColor*           NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658E90              		 offset:4888e90                       

void UPaperTileMapComponent::SetTileMapColor(struct FLinearColor* NewColor)
=======
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4C020              		 offset:428c020                       

void UPaperTileMapComponent::SetTileMapColor(const struct FLinearColor& NewColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.SetTileMapColor"));

	UPaperTileMapComponent_SetTileMapColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetTileMap
// (Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UPaperTileMap**          NewTileMap                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658DF0              		 offset:4888df0                       

bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap** NewTileMap)
=======
// class UPaperTileMap*           NewTileMap                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BF80              		 offset:428bf80                       

bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.SetTileMap"));

	UPaperTileMapComponent_SetTileMap_Params params;
	params.NewTileMap = NewTileMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.SetTile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           X                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo*         NewValue                       (Parm)
// FunctionAddress:0x00007FF71C658C90              		 offset:4888c90                       

void UPaperTileMapComponent::SetTile(int* X, int* Y, int* Layer, struct FPaperTileInfo* NewValue)
=======
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo          NewValue                       (Parm)
// FunctionAddress:0x00007FF6DAC4BE20              		 offset:428be20                       

void UPaperTileMapComponent::SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.SetTile"));

	UPaperTileMapComponent_SetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetLayerColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FLinearColor*           NewColor                       (Parm, IsPlainOldData)
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C658720              		 offset:4888720                       

void UPaperTileMapComponent::SetLayerColor(struct FLinearColor* NewColor, int* Layer)
=======
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4B8B0              		 offset:428b8b0                       

void UPaperTileMapComponent::SetLayerColor(const struct FLinearColor& NewColor, int Layer)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.SetLayerColor"));

	UPaperTileMapComponent_SetLayerColor_Params params;
	params.NewColor = NewColor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetLayerCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasCollision                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideThickness             (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CustomThickness                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bOverrideOffset                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CustomOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C658500              		 offset:4888500                       

void UPaperTileMapComponent::SetLayerCollision(int* Layer, bool* bHasCollision, bool* bOverrideThickness, float* CustomThickness, bool* bOverrideOffset, float* CustomOffset, bool* bRebuildCollision)
=======
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasCollision                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideThickness             (Parm, ZeroConstructor, IsPlainOldData)
// float                          CustomThickness                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideOffset                (Parm, ZeroConstructor, IsPlainOldData)
// float                          CustomOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4B690              		 offset:428b690                       

void UPaperTileMapComponent::SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.SetLayerCollision"));

	UPaperTileMapComponent_SetLayerCollision_Params params;
	params.Layer = Layer;
	params.bHasCollision = bHasCollision;
	params.bOverrideThickness = bOverrideThickness;
	params.CustomThickness = CustomThickness;
	params.bOverrideOffset = bOverrideOffset;
	params.CustomOffset = CustomOffset;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// float*                         Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C658430              		 offset:4888430                       

void UPaperTileMapComponent::SetDefaultCollisionThickness(float* Thickness, bool* bRebuildCollision)
=======
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4B5C0              		 offset:428b5c0                       

void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness"));

	UPaperTileMapComponent_SetDefaultCollisionThickness_Params params;
	params.Thickness = Thickness;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.ResizeMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           NewWidthInTiles                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewHeightInTiles               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C658330              		 offset:4888330                       

void UPaperTileMapComponent::ResizeMap(int* NewWidthInTiles, int* NewHeightInTiles)
=======
// int                            NewWidthInTiles                (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewHeightInTiles               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4B4C0              		 offset:428b4c0                       

void UPaperTileMapComponent::ResizeMap(int NewWidthInTiles, int NewHeightInTiles)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.ResizeMap"));

	UPaperTileMapComponent_ResizeMap_Params params;
	params.NewWidthInTiles = NewWidthInTiles;
	params.NewHeightInTiles = NewHeightInTiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.RebuildCollision
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C658270              		 offset:4888270                       
=======
// FunctionAddress:0x00007FF6DAC4B400              		 offset:428b400                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UPaperTileMapComponent::RebuildCollision()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.RebuildCollision"));

	UPaperTileMapComponent_RebuildCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.OwnsTileMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C658200              		 offset:4888200                       
=======
// FunctionAddress:0x00007FF6DAC4B390              		 offset:428b390                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UPaperTileMapComponent::OwnsTileMap()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.OwnsTileMap"));

	UPaperTileMapComponent_OwnsTileMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C658160              		 offset:4888160                       
=======
// FunctionAddress:0x00007FF6DAC4B2F0              		 offset:428b2f0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UPaperTileMapComponent::MakeTileMapEditable()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable"));

	UPaperTileMapComponent_MakeTileMapEditable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.GetTilePolygon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// int*                           TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Points                         (Parm, OutParm, ZeroConstructor)
// int*                           LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C6578F0              		 offset:48878f0                       

void UPaperTileMapComponent::GetTilePolygon(int* TileX, int* TileY, int* LayerIndex, bool* bWorldSpace, TArray<struct FVector>* Points)
=======
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Points                         (Parm, OutParm, ZeroConstructor)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4AA80              		 offset:428aa80                       

void UPaperTileMapComponent::GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.GetTilePolygon"));

	UPaperTileMapComponent_GetTilePolygon_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;
}


// Function Paper2D.PaperTileMapComponent.GetTileMapColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C6578B0              		 offset:48878b0                       
=======
// FunctionAddress:0x00007FF6DAC4AA40              		 offset:428aa40                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.GetTileMapColor"));

	UPaperTileMapComponent_GetTileMapColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// int*                           TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C657750              		 offset:4887750                       

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int* TileX, int* TileY, int* LayerIndex, bool* bWorldSpace)
=======
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4A8E0              		 offset:428a8e0                       

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition"));

	UPaperTileMapComponent_GetTileCornerPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// int*                           TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C6575F0              		 offset:48875f0                       

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int* TileX, int* TileY, int* LayerIndex, bool* bWorldSpace)
=======
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4A780              		 offset:428a780                       

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition"));

	UPaperTileMapComponent_GetTileCenterPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetTile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// int*                           X                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C6574E0              		 offset:48874e0                       

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int* X, int* Y, int* Layer)
=======
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6DAC4A670              		 offset:428a670                       

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int X, int Y, int Layer)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.GetTile"));

	UPaperTileMapComponent_GetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.GetMapSize
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            MapWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MapHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumLayers                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C657130              		 offset:4887130                       
=======
// FunctionAddress:0x00007FF6DAC4A290              		 offset:428a290                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UPaperTileMapComponent::GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.GetMapSize"));

	UPaperTileMapComponent_GetMapSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapWidth != nullptr)
		*MapWidth = params.MapWidth;
	if (MapHeight != nullptr)
		*MapHeight = params.MapHeight;
	if (NumLayers != nullptr)
		*NumLayers = params.NumLayers;
}


// Function Paper2D.PaperTileMapComponent.GetLayerColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// int*                           Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C657090              		 offset:4887090                       

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int* Layer)
=======
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4A1F0              		 offset:428a1f0                       

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int Layer)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.GetLayerColor"));

	UPaperTileMapComponent_GetLayerColor_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// int*                           MapWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           MapHeight                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileWidth                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TileHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PixelsPerUnrealUnit            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCreateLayer                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C656BC0              		 offset:4886bc0                       

void UPaperTileMapComponent::CreateNewTileMap(int* MapWidth, int* MapHeight, int* TileWidth, int* TileHeight, float* PixelsPerUnrealUnit, bool* bCreateLayer)
=======
// int                            MapWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            MapHeight                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileWidth                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PixelsPerUnrealUnit            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCreateLayer                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC49D50              		 offset:4289d50                       

void UPaperTileMapComponent::CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.CreateNewTileMap"));

	UPaperTileMapComponent_CreateNewTileMap_Params params;
	params.MapWidth = MapWidth;
	params.MapHeight = MapHeight;
	params.TileWidth = TileWidth;
	params.TileHeight = TileHeight;
	params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	params.bCreateLayer = bCreateLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.AddNewLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPaperTileLayer*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C656950              		 offset:4886950                       
=======
// FunctionAddress:0x00007FF6DAC49AE0              		 offset:4289ae0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.PaperTileMapComponent.AddNewLayer"));

	UPaperTileMapComponent_AddNewLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.MakeTile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
<<<<<<< HEAD
// int*                           TileIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperTileSet**          TileSet                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFlipH                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFlipV                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFlipD                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C657FB0              		 offset:4887fb0                       

struct FPaperTileInfo UTileMapBlueprintLibrary::STATIC_MakeTile(int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
=======
// int                            TileIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperTileSet*           TileSet                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipH                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipV                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipD                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6DAC4B140              		 offset:428b140                       

struct FPaperTileInfo UTileMapBlueprintLibrary::STATIC_MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.TileMapBlueprintLibrary.MakeTile"));

	UTileMapBlueprintLibrary_MakeTile_Params params;
	params.TileIndex = TileIndex;
	params.TileSet = TileSet;
	params.bFlipH = bFlipH;
	params.bFlipV = bFlipV;
	params.bFlipD = bFlipD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
<<<<<<< HEAD
// struct FPaperTileInfo*         Tile                           (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C657B80              		 offset:4887b80                       

struct FName UTileMapBlueprintLibrary::STATIC_GetTileUserData(struct FPaperTileInfo* Tile)
=======
// struct FPaperTileInfo          Tile                           (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4AD10              		 offset:428ad10                       

struct FName UTileMapBlueprintLibrary::STATIC_GetTileUserData(const struct FPaperTileInfo& Tile)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.TileMapBlueprintLibrary.GetTileUserData"));

	UTileMapBlueprintLibrary_GetTileUserData_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
<<<<<<< HEAD
// struct FPaperTileInfo*         Tile                           (Parm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C657AB0              		 offset:4887ab0                       

struct FTransform UTileMapBlueprintLibrary::STATIC_GetTileTransform(struct FPaperTileInfo* Tile)
=======
// struct FPaperTileInfo          Tile                           (Parm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4AC40              		 offset:428ac40                       

struct FTransform UTileMapBlueprintLibrary::STATIC_GetTileTransform(const struct FPaperTileInfo& Tile)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.TileMapBlueprintLibrary.GetTileTransform"));

	UTileMapBlueprintLibrary_GetTileTransform_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Paper2D.TileMapBlueprintLibrary.BreakTile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
<<<<<<< HEAD
// struct FPaperTileInfo*         Tile                           (Parm)
=======
// struct FPaperTileInfo          Tile                           (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
// int                            TileIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPaperTileSet*           TileSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipH                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipD                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C656980              		 offset:4886980                       

void UTileMapBlueprintLibrary::STATIC_BreakTile(struct FPaperTileInfo* Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
=======
// FunctionAddress:0x00007FF6DAC49B10              		 offset:4289b10                       

void UTileMapBlueprintLibrary::STATIC_BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Paper2D.TileMapBlueprintLibrary.BreakTile"));

	UTileMapBlueprintLibrary_BreakTile_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TileIndex != nullptr)
		*TileIndex = params.TileIndex;
	if (TileSet != nullptr)
		*TileSet = params.TileSet;
	if (bFlipH != nullptr)
		*bFlipH = params.bFlipH;
	if (bFlipV != nullptr)
		*bFlipV = params.bFlipV;
	if (bFlipD != nullptr)
		*bFlipD = params.bFlipD;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
