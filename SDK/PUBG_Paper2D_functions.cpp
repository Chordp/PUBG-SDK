// PUBG (9.1.5.3) SDK

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
// FunctionAddress:0x00007FF75C514B10              		 offset:2b14b10                       

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
// FunctionAddress:0x00007FF75C514A50              		 offset:2b14a50                       

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
// FunctionAddress:0x00007FF75C514210              		 offset:2b14210                       

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
// FunctionAddress:0x00007FF75C514180              		 offset:2b14180                       

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
// FunctionAddress:0x00007FF75C5140A0              		 offset:2b140a0                       

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
// FunctionAddress:0x00007FF75C514070              		 offset:2b14070                       

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
// FunctionAddress:0x00007FF75C513DC0              		 offset:2b13dc0                       

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
// FunctionAddress:0x00007FF75C515D30              		 offset:2b15d30                       

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
// FunctionAddress:0x00007FF75C515940              		 offset:2b15940                       

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
// FunctionAddress:0x00007FF75C515730              		 offset:2b15730                       

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
// FunctionAddress:0x00007FF75C515880              		 offset:2b15880                       

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
// FunctionAddress:0x00007FF75C5157B0              		 offset:2b157b0                       

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
// FunctionAddress:0x00007FF75C5156B0              		 offset:2b156b0                       

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
// FunctionAddress:0x00007FF75C515620              		 offset:2b15620                       

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
// FunctionAddress:0x00007FF75A1630B0              		 offset:7630b0                        

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
// FunctionAddress:0x00007FF75C515240              		 offset:2b15240                       

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
// FunctionAddress:0x00007FF75C515220              		 offset:2b15220                       

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
// FunctionAddress:0x00007FF75C515080              		 offset:2b15080                       

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
// FunctionAddress:0x00007FF75C515060              		 offset:2b15060                       

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
// FunctionAddress:0x00007FF75C514FB0              		 offset:2b14fb0                       

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
// FunctionAddress:0x00007FF75C514AE0              		 offset:2b14ae0                       

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
// FunctionAddress:0x00007FF75C514AB0              		 offset:2b14ab0                       

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
// FunctionAddress:0x00007FF75C514A80              		 offset:2b14a80                       

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
// FunctionAddress:0x00007FF75C5142E0              		 offset:2b142e0                       

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
// FunctionAddress:0x00007FF75C5140C0              		 offset:2b140c0                       

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
// FunctionAddress:0x00007FF75C514120              		 offset:2b14120                       

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
// FunctionAddress:0x00007FF75C5140F0              		 offset:2b140f0                       

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
// FunctionAddress:0x00007FF75C513C00              		 offset:2b13c00                       

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
// FunctionAddress:0x00007FF75C513BD0              		 offset:2b13bd0                       

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
// FunctionAddress:0x00007FF75C513BA0              		 offset:2b13ba0                       

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
// FunctionAddress:0x00007FF75C514150              		 offset:2b14150                       

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
// FunctionAddress:0x00007FF75C515E60              		 offset:2b15e60                       

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
// FunctionAddress:0x00007FF75C515D50              		 offset:2b15d50                       

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
// FunctionAddress:0x00007FF75C515CA0              		 offset:2b15ca0                       

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
// FunctionAddress:0x00007FF75C5150C0              		 offset:2b150c0                       

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
// FunctionAddress:0x00007FF75C513C60              		 offset:2b13c60                       

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
// FunctionAddress:0x00007FF75C513C30              		 offset:2b13c30                       

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
// FunctionAddress:0x00007FF75C5139D0              		 offset:2b139d0                       

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
// FunctionAddress:0x00007FF75C5135C0              		 offset:2b135c0                       

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


// Function Paper2D.PaperSpriteComponent.SetSpriteColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75C5159C0              		 offset:2b159c0                       

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
// FunctionAddress:0x00007FF75A1630B0              		 offset:7630b0                        

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
// FunctionAddress:0x00007FF75C514150              		 offset:2b14150                       

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
// FunctionAddress:0x00007FF75C515A40              		 offset:2b15a40                       

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


// Function Engine.SplineComponent.UpdateSpline
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75ECC6320              		 offset:52c6320                       

void UPaperTerrainSplineComponent::UpdateSpline()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.UpdateSpline"));

	UPaperTerrainSplineComponent_UpdateSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetWorldLocationAtSplinePoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EC4BA40              		 offset:524ba40                       

void UPaperTerrainSplineComponent::SetWorldLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetWorldLocationAtSplinePoint"));

	UPaperTerrainSplineComponent_SetWorldLocationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetUpVectorAtSplinePoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InUpVector                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B56F3F0              		 offset:1b6f3f0                       

void UPaperTerrainSplineComponent::SetUpVectorAtSplinePoint(int PointIndex, const struct FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetUpVectorAtSplinePoint"));

	UPaperTerrainSplineComponent_SetUpVectorAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InUpVector = InUpVector;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetUnselectedSplineSegmentColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            SegmentColor                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A011210              		 offset:611210                        

void UPaperTerrainSplineComponent::SetUnselectedSplineSegmentColor(const struct FLinearColor& SegmentColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetUnselectedSplineSegmentColor"));

	UPaperTerrainSplineComponent_SetUnselectedSplineSegmentColor_Params params;
	params.SegmentColor = SegmentColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetTangentsAtSplinePoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InArriveTangent                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 InLeaveTangent                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B496E90              		 offset:1a96e90                       

void UPaperTerrainSplineComponent::SetTangentsAtSplinePoint(int PointIndex, const struct FVector& InArriveTangent, const struct FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetTangentsAtSplinePoint"));

	UPaperTerrainSplineComponent_SetTangentsAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InArriveTangent = InArriveTangent;
	params.InLeaveTangent = InLeaveTangent;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetTangentAtSplinePoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InTangent                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759CB0DC0              		 offset:2b0dc0                        

void UPaperTerrainSplineComponent::SetTangentAtSplinePoint(int PointIndex, const struct FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetTangentAtSplinePoint"));

	UPaperTerrainSplineComponent_SetTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InTangent = InTangent;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSplineWorldPoints
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF75B8637B0              		 offset:1e637b0                       

void UPaperTerrainSplineComponent::SetSplineWorldPoints(TArray<struct FVector> Points)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetSplineWorldPoints"));

	UPaperTerrainSplineComponent_SetSplineWorldPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSplinePointType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplinePointType>  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CF4C7C0              		 offset:354c7c0                       

void UPaperTerrainSplineComponent::SetSplinePointType(int PointIndex, TEnumAsByte<ESplinePointType> Type, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetSplinePointType"));

	UPaperTerrainSplineComponent_SetSplinePointType_Params params;
	params.PointIndex = PointIndex;
	params.Type = Type;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSplinePoints
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D591680              		 offset:3b91680                       

void UPaperTerrainSplineComponent::SetSplinePoints(TArray<struct FVector> Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetSplinePoints"));

	UPaperTerrainSplineComponent_SetSplinePoints_Params params;
	params.Points = Points;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSplineLocalPoints
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF75ECEEBB0              		 offset:52eebb0                       

void UPaperTerrainSplineComponent::SetSplineLocalPoints(TArray<struct FVector> Points)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetSplineLocalPoints"));

	UPaperTerrainSplineComponent_SetSplineLocalPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetSelectedSplineSegmentColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            SegmentColor                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A011210              		 offset:611210                        

void UPaperTerrainSplineComponent::SetSelectedSplineSegmentColor(const struct FLinearColor& SegmentColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetSelectedSplineSegmentColor"));

	UPaperTerrainSplineComponent_SetSelectedSplineSegmentColor_Params params;
	params.SegmentColor = SegmentColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetLocationAtSplinePoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759B167A0              		 offset:1167a0                        

void UPaperTerrainSplineComponent::SetLocationAtSplinePoint(int PointIndex, const struct FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetLocationAtSplinePoint"));

	UPaperTerrainSplineComponent_SetLocationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.InLocation = InLocation;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetDrawDebug
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E2632C0              		 offset:48632c0                       

void UPaperTerrainSplineComponent::SetDrawDebug(bool bShow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetDrawDebug"));

	UPaperTerrainSplineComponent_SetDrawDebug_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetDefaultUpVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 UpVector                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B8FFD50              		 offset:1effd50                       

void UPaperTerrainSplineComponent::SetDefaultUpVector(const struct FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetDefaultUpVector"));

	UPaperTerrainSplineComponent_SetDefaultUpVector_Params params;
	params.UpVector = UpVector;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetClosedLoopAtPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInClosedLoop                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Key                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DF9F650              		 offset:459f650                       

void UPaperTerrainSplineComponent::SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetClosedLoopAtPosition"));

	UPaperTerrainSplineComponent_SetClosedLoopAtPosition_Params params;
	params.bInClosedLoop = bInClosedLoop;
	params.Key = Key;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.SetClosedLoop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInClosedLoop                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DFF53D0              		 offset:45f53d0                       

void UPaperTerrainSplineComponent::SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.SetClosedLoop"));

	UPaperTerrainSplineComponent_SetClosedLoop_Params params;
	params.bInClosedLoop = bInClosedLoop;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.RemoveSplinePoint
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B10BE90              		 offset:170be90                       

void UPaperTerrainSplineComponent::RemoveSplinePoint(int Index, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.RemoveSplinePoint"));

	UPaperTerrainSplineComponent_RemoveSplinePoint_Params params;
	params.Index = Index;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.IsClosedLoop
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AB452E0              		 offset:11452e0                       

bool UPaperTerrainSplineComponent::IsClosedLoop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.IsClosedLoop"));

	UPaperTerrainSplineComponent_IsClosedLoop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B469A40              		 offset:1a69a40                       

struct FVector UPaperTerrainSplineComponent::GetWorldTangentAtDistanceAlongSpline(float Distance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetWorldTangentAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetWorldTangentAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldRotationAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AD54090              		 offset:1354090                       

struct FRotator UPaperTerrainSplineComponent::GetWorldRotationAtTime(float Time, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetWorldRotationAtTime"));

	UPaperTerrainSplineComponent_GetWorldRotationAtTime_Params params;
	params.Time = Time;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B62A030              		 offset:1c2a030                       

struct FRotator UPaperTerrainSplineComponent::GetWorldRotationAtDistanceAlongSpline(float Distance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetWorldRotationAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetWorldRotationAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldLocationAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759DCED50              		 offset:3ced50                        

struct FVector UPaperTerrainSplineComponent::GetWorldLocationAtTime(float Time, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetWorldLocationAtTime"));

	UPaperTerrainSplineComponent_GetWorldLocationAtTime_Params params;
	params.Time = Time;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldLocationAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D2D85F0              		 offset:38d85f0                       

struct FVector UPaperTerrainSplineComponent::GetWorldLocationAtSplinePoint(int PointIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetWorldLocationAtSplinePoint"));

	UPaperTerrainSplineComponent_GetWorldLocationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75ED4F600              		 offset:534f600                       

struct FVector UPaperTerrainSplineComponent::GetWorldLocationAtDistanceAlongSpline(float Distance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetWorldLocationAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetWorldLocationAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldDirectionAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CCDDC10              		 offset:32ddc10                       

struct FVector UPaperTerrainSplineComponent::GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetWorldDirectionAtTime"));

	UPaperTerrainSplineComponent_GetWorldDirectionAtTime_Params params;
	params.Time = Time;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AAA1780              		 offset:10a1780                       

struct FVector UPaperTerrainSplineComponent::GetWorldDirectionAtDistanceAlongSpline(float Distance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetWorldDirectionAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetWorldDirectionAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetUpVectorAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CAC4FE0              		 offset:30c4fe0                       

struct FVector UPaperTerrainSplineComponent::GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetUpVectorAtTime"));

	UPaperTerrainSplineComponent_GetUpVectorAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetUpVectorAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E278760              		 offset:4878760                       

struct FVector UPaperTerrainSplineComponent::GetUpVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetUpVectorAtSplinePoint"));

	UPaperTerrainSplineComponent_GetUpVectorAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BAAF7C0              		 offset:20af7c0                       

struct FVector UPaperTerrainSplineComponent::GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetUpVectorAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetUpVectorAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTransformAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CE337D0              		 offset:34337d0                       

struct FTransform UPaperTerrainSplineComponent::GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetTransformAtTime"));

	UPaperTerrainSplineComponent_GetTransformAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;
	params.bUseScale = bUseScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTransformAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CC40FA0              		 offset:3240fa0                       

struct FTransform UPaperTerrainSplineComponent::GetTransformAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetTransformAtSplinePoint"));

	UPaperTerrainSplineComponent_GetTransformAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseScale = bUseScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTransformAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759FAF270              		 offset:5af270                        

struct FTransform UPaperTerrainSplineComponent::GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetTransformAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetTransformAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseScale = bUseScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTangentAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B933760              		 offset:1f33760                       

struct FVector UPaperTerrainSplineComponent::GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetTangentAtTime"));

	UPaperTerrainSplineComponent_GetTangentAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTangentAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B3C7930              		 offset:19c7930                       

struct FVector UPaperTerrainSplineComponent::GetTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetTangentAtSplinePoint"));

	UPaperTerrainSplineComponent_GetTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetTangentAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B43BD00              		 offset:1a3bd00                       

struct FVector UPaperTerrainSplineComponent::GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetTangentAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetTangentAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetSplinePointType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplinePointType>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B4E9100              		 offset:1ae9100                       

TEnumAsByte<ESplinePointType> UPaperTerrainSplineComponent::GetSplinePointType(int PointIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetSplinePointType"));

	UPaperTerrainSplineComponent_GetSplinePointType_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetSplineLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759B90ED0              		 offset:190ed0                        

float UPaperTerrainSplineComponent::GetSplineLength()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetSplineLength"));

	UPaperTerrainSplineComponent_GetSplineLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetScaleAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D652370              		 offset:3c52370                       

struct FVector UPaperTerrainSplineComponent::GetScaleAtTime(float Time, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetScaleAtTime"));

	UPaperTerrainSplineComponent_GetScaleAtTime_Params params;
	params.Time = Time;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetScaleAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B6E0F50              		 offset:1ce0f50                       

struct FVector UPaperTerrainSplineComponent::GetScaleAtSplinePoint(int PointIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetScaleAtSplinePoint"));

	UPaperTerrainSplineComponent_GetScaleAtSplinePoint_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetScaleAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AE80580              		 offset:1480580                       

struct FVector UPaperTerrainSplineComponent::GetScaleAtDistanceAlongSpline(float Distance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetScaleAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetScaleAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRotationAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AE3E530              		 offset:143e530                       

struct FRotator UPaperTerrainSplineComponent::GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetRotationAtTime"));

	UPaperTerrainSplineComponent_GetRotationAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRotationAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D3F73D0              		 offset:39f73d0                       

struct FRotator UPaperTerrainSplineComponent::GetRotationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetRotationAtSplinePoint"));

	UPaperTerrainSplineComponent_GetRotationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRotationAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DED2DA0              		 offset:44d2da0                       

struct FRotator UPaperTerrainSplineComponent::GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetRotationAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetRotationAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRollAtTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759DE9F10              		 offset:3e9f10                        

float UPaperTerrainSplineComponent::GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetRollAtTime"));

	UPaperTerrainSplineComponent_GetRollAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRollAtSplinePoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759FDE830              		 offset:5de830                        

float UPaperTerrainSplineComponent::GetRollAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetRollAtSplinePoint"));

	UPaperTerrainSplineComponent_GetRollAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRollAtDistanceAlongSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759F2B9C0              		 offset:52b9c0                        

float UPaperTerrainSplineComponent::GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetRollAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetRollAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRightVectorAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D491B10              		 offset:3a91b10                       

struct FVector UPaperTerrainSplineComponent::GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetRightVectorAtTime"));

	UPaperTerrainSplineComponent_GetRightVectorAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRightVectorAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A58EC90              		 offset:b8ec90                        

struct FVector UPaperTerrainSplineComponent::GetRightVectorAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetRightVectorAtSplinePoint"));

	UPaperTerrainSplineComponent_GetRightVectorAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CD25EC0              		 offset:3325ec0                       

struct FVector UPaperTerrainSplineComponent::GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetRightVectorAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetRightVectorAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetNumberOfSplinePoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AB8C720              		 offset:118c720                       

int UPaperTerrainSplineComponent::GetNumberOfSplinePoints()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetNumberOfSplinePoints"));

	UPaperTerrainSplineComponent_GetNumberOfSplinePoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLocationAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B0C01F0              		 offset:16c01f0                       

struct FVector UPaperTerrainSplineComponent::GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetLocationAtTime"));

	UPaperTerrainSplineComponent_GetLocationAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLocationAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D308500              		 offset:3908500                       

struct FVector UPaperTerrainSplineComponent::GetLocationAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetLocationAtSplinePoint"));

	UPaperTerrainSplineComponent_GetLocationAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLocationAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D3C4E80              		 offset:39c4e80                       

struct FVector UPaperTerrainSplineComponent::GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetLocationAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetLocationAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLocationAndTangentAtSplinePoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 Tangent                        (Parm, OutParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759B90D60              		 offset:190d60                        

void UPaperTerrainSplineComponent::GetLocationAndTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, struct FVector* Location, struct FVector* Tangent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetLocationAndTangentAtSplinePoint"));

	UPaperTerrainSplineComponent_GetLocationAndTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Tangent != nullptr)
		*Tangent = params.Tangent;
}


// Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocalLocation                  (Parm, OutParm, IsPlainOldData)
// struct FVector                 LocalTangent                   (Parm, OutParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BAC7EC0              		 offset:20c7ec0                       

void UPaperTerrainSplineComponent::GetLocalLocationAndTangentAtSplinePoint(int PointIndex, struct FVector* LocalLocation, struct FVector* LocalTangent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetLocalLocationAndTangentAtSplinePoint"));

	UPaperTerrainSplineComponent_GetLocalLocationAndTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalLocation != nullptr)
		*LocalLocation = params.LocalLocation;
	if (LocalTangent != nullptr)
		*LocalTangent = params.LocalTangent;
}


// Function Engine.SplineComponent.GetLengthInRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            StartIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            EndIndex                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B916AD0              		 offset:1f16ad0                       

float UPaperTerrainSplineComponent::GetLengthInRange(int StartIndex, int EndIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetLengthInRange"));

	UPaperTerrainSplineComponent_GetLengthInRange_Params params;
	params.StartIndex = StartIndex;
	params.EndIndex = EndIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetLeaveTangentAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B3C7930              		 offset:19c7930                       

struct FVector UPaperTerrainSplineComponent::GetLeaveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetLeaveTangentAtSplinePoint"));

	UPaperTerrainSplineComponent_GetLeaveTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DFB3F40              		 offset:45b3f40                       

float UPaperTerrainSplineComponent::GetInputKeyAtDistanceAlongSpline(float Distance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetInputKeyAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetInputKeyAtDistanceAlongSpline_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A25ED00              		 offset:85ed00                        

float UPaperTerrainSplineComponent::GetDistanceAlongSplineAtSplinePoint(int PointIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetDistanceAlongSplineAtSplinePoint"));

	UPaperTerrainSplineComponent_GetDistanceAlongSplineAtSplinePoint_Params params;
	params.PointIndex = PointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDirectionAtTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseConstantVelocity           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EB7CF60              		 offset:517cf60                       

struct FVector UPaperTerrainSplineComponent::GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetDirectionAtTime"));

	UPaperTerrainSplineComponent_GetDirectionAtTime_Params params;
	params.Time = Time;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseConstantVelocity = bUseConstantVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDirectionAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D339C80              		 offset:3939c80                       

struct FVector UPaperTerrainSplineComponent::GetDirectionAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetDirectionAtSplinePoint"));

	UPaperTerrainSplineComponent_GetDirectionAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDirectionAtDistanceAlongSpline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D87EBC0              		 offset:3e7ebc0                       

struct FVector UPaperTerrainSplineComponent::GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetDirectionAtDistanceAlongSpline"));

	UPaperTerrainSplineComponent_GetDirectionAtDistanceAlongSpline_Params params;
	params.Distance = Distance;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetDefaultUpVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E1D43B0              		 offset:47d43b0                       

struct FVector UPaperTerrainSplineComponent::GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetDefaultUpVector"));

	UPaperTerrainSplineComponent_GetDefaultUpVector_Params params;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.GetArriveTangentAtSplinePoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            PointIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D1069C0              		 offset:37069c0                       

struct FVector UPaperTerrainSplineComponent::GetArriveTangentAtSplinePoint(int PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.GetArriveTangentAtSplinePoint"));

	UPaperTerrainSplineComponent_GetArriveTangentAtSplinePoint_Params params;
	params.PointIndex = PointIndex;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindUpVectorClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AE100F0              		 offset:14100f0                       

struct FVector UPaperTerrainSplineComponent::FindUpVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindUpVectorClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindUpVectorClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindTransformClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseScale                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AD53F40              		 offset:1353f40                       

struct FTransform UPaperTerrainSplineComponent::FindTransformClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindTransformClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindTransformClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;
	params.bUseScale = bUseScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindTangentClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A6C4980              		 offset:cc4980                        

struct FVector UPaperTerrainSplineComponent::FindTangentClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindTangentClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindTangentClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindScaleClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DC3DBB0              		 offset:423dbb0                       

struct FVector UPaperTerrainSplineComponent::FindScaleClosestToWorldLocation(const struct FVector& WorldLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindScaleClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindScaleClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindRotationClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759A73250              		 offset:73250                         

struct FRotator UPaperTerrainSplineComponent::FindRotationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindRotationClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindRotationClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindRollClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A747FB0              		 offset:d47fb0                        

float UPaperTerrainSplineComponent::FindRollClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindRollClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindRollClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindRightVectorClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D0ED650              		 offset:36ed650                       

struct FVector UPaperTerrainSplineComponent::FindRightVectorClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindRightVectorClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindRightVectorClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindLocationClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E86A6C0              		 offset:4e6a6c0                       

struct FVector UPaperTerrainSplineComponent::FindLocationClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindLocationClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindLocationClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindInputKeyClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DC98B30              		 offset:4298b30                       

float UPaperTerrainSplineComponent::FindInputKeyClosestToWorldLocation(const struct FVector& WorldLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindInputKeyClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindInputKeyClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.FindDirectionClosestToWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759E377F0              		 offset:4377f0                        

struct FVector UPaperTerrainSplineComponent::FindDirectionClosestToWorldLocation(const struct FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.FindDirectionClosestToWorldLocation"));

	UPaperTerrainSplineComponent_FindDirectionClosestToWorldLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.CoordinateSpace = CoordinateSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SplineComponent.ClearSplinePoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CA5AB90              		 offset:305ab90                       

void UPaperTerrainSplineComponent::ClearSplinePoints(bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.ClearSplinePoints"));

	UPaperTerrainSplineComponent_ClearSplinePoints_Params params;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddSplineWorldPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D146AE0              		 offset:3746ae0                       

void UPaperTerrainSplineComponent::AddSplineWorldPoint(const struct FVector& Position)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.AddSplineWorldPoint"));

	UPaperTerrainSplineComponent_AddSplineWorldPoint_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddSplinePointAtIndex
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A654C10              		 offset:c54c10                        

void UPaperTerrainSplineComponent::AddSplinePointAtIndex(const struct FVector& Position, int Index, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.AddSplinePointAtIndex"));

	UPaperTerrainSplineComponent_AddSplinePointAtIndex_Params params;
	params.Position = Position;
	params.Index = Index;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddSplinePoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CEABDB0              		 offset:34abdb0                       

void UPaperTerrainSplineComponent::AddSplinePoint(const struct FVector& Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.AddSplinePoint"));

	UPaperTerrainSplineComponent_AddSplinePoint_Params params;
	params.Position = Position;
	params.CoordinateSpace = CoordinateSpace;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddSplineLocalPoint
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CFC8D60              		 offset:35c8d60                       

void UPaperTerrainSplineComponent::AddSplineLocalPoint(const struct FVector& Position)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.AddSplineLocalPoint"));

	UPaperTerrainSplineComponent_AddSplineLocalPoint_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddPoints
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FSplinePoint>    Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CF82540              		 offset:3582540                       

void UPaperTerrainSplineComponent::AddPoints(TArray<struct FSplinePoint> Points, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.AddPoints"));

	UPaperTerrainSplineComponent_AddPoints_Params params;
	params.Points = Points;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SplineComponent.AddPoint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSplinePoint            Point                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bUpdateSpline                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DEAC3E0              		 offset:44ac3e0                       

void UPaperTerrainSplineComponent::AddPoint(const struct FSplinePoint& Point, bool bUpdateSpline)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SplineComponent.AddPoint"));

	UPaperTerrainSplineComponent_AddPoint_Params params;
	params.Point = Point;
	params.bUpdateSpline = bUpdateSpline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.PaperTileMapComponent.SetTileMapColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75C515C20              		 offset:2b15c20                       

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
// FunctionAddress:0x00007FF75A1630B0              		 offset:7630b0                        

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
// FunctionAddress:0x00007FF75C515AC0              		 offset:2b15ac0                       

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
// FunctionAddress:0x00007FF75C515550              		 offset:2b15550                       

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
// FunctionAddress:0x00007FF75C515330              		 offset:2b15330                       

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
// FunctionAddress:0x00007FF75C515260              		 offset:2b15260                       

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
// FunctionAddress:0x00007FF75C515160              		 offset:2b15160                       

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
// FunctionAddress:0x00007FF75C5150A0              		 offset:2b150a0                       

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
// FunctionAddress:0x00007FF75C515030              		 offset:2b15030                       

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
// FunctionAddress:0x00007FF75C514F90              		 offset:2b14f90                       

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
// FunctionAddress:0x00007FF75C514720              		 offset:2b14720                       

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
// FunctionAddress:0x00007FF75C5146E0              		 offset:2b146e0                       

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
// FunctionAddress:0x00007FF75C514580              		 offset:2b14580                       

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
// FunctionAddress:0x00007FF75C514420              		 offset:2b14420                       

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
// FunctionAddress:0x00007FF75C514310              		 offset:2b14310                       

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
// FunctionAddress:0x00007FF75C513F30              		 offset:2b13f30                       

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
// FunctionAddress:0x00007FF75C513E90              		 offset:2b13e90                       

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
// FunctionAddress:0x00007FF75C5139F0              		 offset:2b139f0                       

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
// FunctionAddress:0x00007FF75C513780              		 offset:2b13780                       

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
