// PUBG (8.3.5.39) SDK

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
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BB1B0              		 offset:28eb1b0                       

bool UPaperFlipbook::IsValidKeyFrameIndex(int Index)
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
// FunctionAddress:0x00007FF62B3BB0F0              		 offset:28eb0f0                       

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
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BA8B0              		 offset:28ea8b0                       

class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
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
// int                            FrameIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperSprite*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BA820              		 offset:28ea820                       

class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int FrameIndex)
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
// FunctionAddress:0x00007FF62B3BA770              		 offset:28ea770                       

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
// FunctionAddress:0x00007FF62B3BA740              		 offset:28ea740                       

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
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClampToEnds                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BA490              		 offset:28ea490                       

int UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
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
// FunctionAddress:0x00007FF62B3BC470              		 offset:28ec470                       

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
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BC080              		 offset:28ec080                       

void UPaperFlipbookComponent::SetSpriteColor(const struct FLinearColor& NewColor)
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
// float                          NewRate                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BBE70              		 offset:28ebe70                       

void UPaperFlipbookComponent::SetPlayRate(float NewRate)
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
// int                            NewFramePosition               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BBFC0              		 offset:28ebfc0                       

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents)
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
// float                          NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFireEvents                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BBEF0              		 offset:28ebef0                       

void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
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
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BBDF0              		 offset:28ebdf0                       

void UPaperFlipbookComponent::SetNewTime(float NewTime)
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
// bool                           bNewLooping                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BBD60              		 offset:28ebd60                       

void UPaperFlipbookComponent::SetLooping(bool bNewLooping)
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
// class UPaperFlipbook*          NewFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BB9D0              		 offset:28eb9d0                       

bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
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
// FunctionAddress:0x00007FF62B3BB8E0              		 offset:28eb8e0                       

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
// FunctionAddress:0x00007FF62B3BB8C0              		 offset:28eb8c0                       

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
// FunctionAddress:0x00007FF62B3BB720              		 offset:28eb720                       

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
// FunctionAddress:0x00007FF62B3BB700              		 offset:28eb700                       

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
// class UPaperFlipbook*          OldFlipbook                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BB650              		 offset:28eb650                       

void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
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
// FunctionAddress:0x00007FF62B3BB180              		 offset:28eb180                       

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
// FunctionAddress:0x00007FF62B3BB150              		 offset:28eb150                       

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
// FunctionAddress:0x00007FF62B3BB120              		 offset:28eb120                       

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
// FunctionAddress:0x00007FF62B3BA980              		 offset:28ea980                       

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
// FunctionAddress:0x00007FF62B3BA790              		 offset:28ea790                       

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
// FunctionAddress:0x00007FF62B3BA7F0              		 offset:28ea7f0                       

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
// FunctionAddress:0x00007FF62B3BA7C0              		 offset:28ea7c0                       

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
// FunctionAddress:0x00007FF62B3BA2D0              		 offset:28ea2d0                       

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
// FunctionAddress:0x00007FF62B3BA2A0              		 offset:28ea2a0                       

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
// FunctionAddress:0x00007FF62B3BA270              		 offset:28ea270                       

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
// FunctionAddress:0x00007FF62B3BA240              		 offset:28ea240                       

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
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              NewInstanceTransform           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BC5A0              		 offset:28ec5a0                       

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
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
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NewInstanceColor               (Parm, IsPlainOldData)
// bool                           bMarkRenderStateDirty          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BC490              		 offset:28ec490                       

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
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
// struct FVector                 WorldSpaceSortAxis             (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BC3E0              		 offset:28ec3e0                       

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
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
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BB760              		 offset:28eb760                       

bool UPaperGroupedSpriteComponent::RemoveInstance(int InstanceIndex)
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
// int                            InstanceIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutInstanceTransform           (Parm, OutParm, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BA330              		 offset:28ea330                       

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform)
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
// FunctionAddress:0x00007FF62B3BA300              		 offset:28ea300                       

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
// FunctionAddress:0x00007FF62B3BA070              		 offset:28ea070                       

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
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPaperSprite*            Sprite                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3B9C60              		 offset:28e9c60                       

int UPaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
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
// class UPaperSprite*            Sprite                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62B3BB250              		 offset:28eb250                       

struct FSlateBrush UPaperSpriteBlueprintLibrary::STATIC_MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height)
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
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BC100              		 offset:28ec100                       

void UPaperSpriteComponent::SetSpriteColor(const struct FLinearColor& NewColor)
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
// class UPaperSprite*            NewSprite                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BB9D0              		 offset:28eb9d0                       

bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
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
// FunctionAddress:0x00007FF62B3BA240              		 offset:28ea240                       

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
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BC180              		 offset:28ec180                       

void UPaperTerrainComponent::SetTerrainColor(const struct FLinearColor& NewColor)
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
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BC360              		 offset:28ec360                       

void UPaperTileMapComponent::SetTileMapColor(const struct FLinearColor& NewColor)
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
// class UPaperTileMap*           NewTileMap                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BB9D0              		 offset:28eb9d0                       

bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
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
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo          NewValue                       (Parm)
// FunctionAddress:0x00007FF62B3BC200              		 offset:28ec200                       

void UPaperTileMapComponent::SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue)
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
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BBC90              		 offset:28ebc90                       

void UPaperTileMapComponent::SetLayerColor(const struct FLinearColor& NewColor, int Layer)
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
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasCollision                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideThickness             (Parm, ZeroConstructor, IsPlainOldData)
// float                          CustomThickness                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOverrideOffset                (Parm, ZeroConstructor, IsPlainOldData)
// float                          CustomOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BBA70              		 offset:28eba70                       

void UPaperTileMapComponent::SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
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
// float                          Thickness                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRebuildCollision              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BB900              		 offset:28eb900                       

void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
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
// int                            NewWidthInTiles                (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewHeightInTiles               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BB800              		 offset:28eb800                       

void UPaperTileMapComponent::ResizeMap(int NewWidthInTiles, int NewHeightInTiles)
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
// FunctionAddress:0x00007FF62B3BB740              		 offset:28eb740                       

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
// FunctionAddress:0x00007FF62B3BB6D0              		 offset:28eb6d0                       

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
// FunctionAddress:0x00007FF62B3BB630              		 offset:28eb630                       

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
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Points                         (Parm, OutParm, ZeroConstructor)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BADC0              		 offset:28eadc0                       

void UPaperTileMapComponent::GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points)
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
// FunctionAddress:0x00007FF62B3BAD80              		 offset:28ead80                       

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
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BAC20              		 offset:28eac20                       

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
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
// int                            TileX                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileY                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWorldSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BAAC0              		 offset:28eaac0                       

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
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
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62B3BA9B0              		 offset:28ea9b0                       

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int X, int Y, int Layer)
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
// FunctionAddress:0x00007FF62B3BA600              		 offset:28ea600                       

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
// int                            Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BA560              		 offset:28ea560                       

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int Layer)
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
// int                            MapWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            MapHeight                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileWidth                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TileHeight                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PixelsPerUnrealUnit            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCreateLayer                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BA090              		 offset:28ea090                       

void UPaperTileMapComponent::CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
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
// FunctionAddress:0x00007FF62B3B9E20              		 offset:28e9e20                       

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
// int                            TileIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPaperTileSet*           TileSet                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipH                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipV                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipD                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FPaperTileInfo          ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62B3BB480              		 offset:28eb480                       

struct FPaperTileInfo UTileMapBlueprintLibrary::STATIC_MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
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
// struct FPaperTileInfo          Tile                           (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BB050              		 offset:28eb050                       

struct FName UTileMapBlueprintLibrary::STATIC_GetTileUserData(const struct FPaperTileInfo& Tile)
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
// struct FPaperTileInfo          Tile                           (Parm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B3BAF80              		 offset:28eaf80                       

struct FTransform UTileMapBlueprintLibrary::STATIC_GetTileTransform(const struct FPaperTileInfo& Tile)
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
// struct FPaperTileInfo          Tile                           (Parm)
// int                            TileIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UPaperTileSet*           TileSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipH                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipV                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFlipD                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B3B9E50              		 offset:28e9e50                       

void UTileMapBlueprintLibrary::STATIC_BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
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
