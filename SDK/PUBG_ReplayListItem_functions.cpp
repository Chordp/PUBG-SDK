// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayListItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           MK3DReplayVersion              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetMK3DReplayVersion(int* MK3DReplayVersion)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion"));

	UReplayListItem_C_SetMK3DReplayVersion_Params params;
	params.MK3DReplayVersion = MK3DReplayVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bHaveCameraEvent               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetHaveCameraEvent(bool* bHaveCameraEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent"));

	UReplayListItem_C_SetHaveCameraEvent_Params params;
	params.bHaveCameraEvent = bHaveCameraEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetGameVersion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                GameVersion                    (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetGameVersion(struct FString* GameVersion)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetGameVersion"));

	UReplayListItem_C_SetGameVersion_Params params;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAllDeadOrWin                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetAllDeadOrWin(bool* bAllDeadOrWin)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin"));

	UReplayListItem_C_SetAllDeadOrWin_Params params;
	params.bAllDeadOrWin = bAllDeadOrWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetSeverRecording
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsServerRecording             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetSeverRecording(bool* bIsServerRecording)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetSeverRecording"));

	UReplayListItem_C_SetSeverRecording_Params params;
	params.bIsServerRecording = bIsServerRecording;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         fPercent                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetActionMessageDownloadPercent(float* fPercent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent"));

	UReplayListItem_C_SetActionMessageDownloadPercent_Params params;
	params.fPercent = fPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                strFileName                    (Parm, ZeroConstructor)
// int*                           nReceived                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           nTotal                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::ShowDownloadPercent(struct FString* strFileName, int* nReceived, int* nTotal)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent"));

	UReplayListItem_C_ShowDownloadPercent_Params params;
	params.strFileName = strFileName;
	params.nReceived = nReceived;
	params.nTotal = nTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.DisableDownload
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::DisableDownload()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.DisableDownload"));

	UReplayListItem_C_DisableDownload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetArchived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsArchived                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetArchived(bool* IsArchived)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetArchived"));

	UReplayListItem_C_SetArchived_Params params;
	params.IsArchived = IsArchived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                inRegionOrLocal                (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetRegionOrLocal(struct FString* inRegionOrLocal)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal"));

	UReplayListItem_C_SetRegionOrLocal_Params params;
	params.inRegionOrLocal = inRegionOrLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetShouldKeep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bShouldKeep                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetShouldKeep(bool* bShouldKeep)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetShouldKeep"));

	UReplayListItem_C_SetShouldKeep_Params params;
	params.bShouldKeep = bShouldKeep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetCorrupt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsCorrupt                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetCorrupt(bool* bIsCorrupt)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetCorrupt"));

	UReplayListItem_C_SetCorrupt_Params params;
	params.bIsCorrupt = bIsCorrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetInComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIncomplete                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetInComplete(bool* bIncomplete)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetInComplete"));

	UReplayListItem_C_SetInComplete_Params params;
	params.bIncomplete = bIncomplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetVersionCompatible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsVersionCompatible           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetVersionCompatible(bool* bIsVersionCompatible)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetVersionCompatible"));

	UReplayListItem_C_SetVersionCompatible_Params params;
	params.bIsVersionCompatible = bIsVersionCompatible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Mode                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetMode(struct FString* Mode)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetMode"));

	UReplayListItem_C_SetMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetLength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           LengthInMS                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetLength(int* LengthInMS)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetLength"));

	UReplayListItem_C_SetLength_Params params;
	params.LengthInMS = LengthInMS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Message                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetActionMessageSimple(struct FString* Message)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple"));

	UReplayListItem_C_SetActionMessageSimple_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         fPercent                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetActionMessageDecompressPercent(float* fPercent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent"));

	UReplayListItem_C_SetActionMessageDecompressPercent_Params params;
	params.fPercent = fPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsDownloading                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsUnzipping                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetActionMessage(bool* bIsDownloading, bool* bIsUnzipping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetActionMessage"));

	UReplayListItem_C_SetActionMessage_Params params;
	params.bIsDownloading = bIsDownloading;
	params.bIsUnzipping = bIsUnzipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bIsDownloading                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsUnzipping                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetDownloadCancelBtns(bool* bIsDownloading, bool* bIsUnzipping)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns"));

	UReplayListItem_C_SetDownloadCancelBtns_Params params;
	params.bIsDownloading = bIsDownloading;
	params.bIsUnzipping = bIsUnzipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetDate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime*              Date                           (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetDate(struct FDateTime* Date)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetDate"));

	UReplayListItem_C_SetDate_Params params;
	params.Date = Date;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetLive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLive                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetLive(bool* IsLive)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetLive"));

	UReplayListItem_C_SetLive_Params params;
	params.IsLive = IsLive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SizeInBytes                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetSize(int* SizeInBytes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetSize"));

	UReplayListItem_C_SetSize_Params params;
	params.SizeInBytes = SizeInBytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetFriendlyName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                FriendlyName                   (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetFriendlyName(struct FString* FriendlyName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetFriendlyName"));

	UReplayListItem_C_SetFriendlyName_Params params;
	params.FriendlyName = FriendlyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetReplayItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReplayItem*            ReplayItem                     (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetReplayItem(struct FReplayItem* ReplayItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetReplayItem"));

	UReplayListItem_C_SetReplayItem_Params params;
	params.ReplayItem = ReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetSessionName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Text                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::SetSessionName(struct FString* Text)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.SetSessionName"));

	UReplayListItem_C_SetSessionName_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// float*                         Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bytes                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::OnProgress(struct FString* archive, float* Percentage, int* bytes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.OnProgress"));

	UReplayListItem_C_OnProgress_Params params;
	params.archive = archive;
	params.Percentage = Percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnFileDone
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// struct FString*                file                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::OnFileDone(struct FString* archive, struct FString* file)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.OnFileDone"));

	UReplayListItem_C_OnFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnDone
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState>* CompletionState                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::OnDone(struct FString* archive, TEnumAsByte<EZipUtilityCompletionState>* CompletionState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.OnDone"));

	UReplayListItem_C_OnDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature"));

	UReplayListItem_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature(bool* bIsChecked)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature"));

	UReplayListItem_C_BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.UnzipEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                strFullPath                    (Parm, ZeroConstructor)
// struct FString*                strToExtract                   (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::UnzipEvent(struct FString* strFullPath, struct FString* strToExtract)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.UnzipEvent"));

	UReplayListItem_C_UnzipEvent_Params params;
	params.strFullPath = strFullPath;
	params.strToExtract = strToExtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// float*                         Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bytes                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::ShowUnzipPercent(struct FString* archive, float* Percentage, int* bytes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent"));

	UReplayListItem_C_ShowUnzipPercent_Params params;
	params.archive = archive;
	params.Percentage = Percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	UReplayListItem_C_BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnStartProcess
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// int*                           bytes                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::OnStartProcess(struct FString* archive, int* bytes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.OnStartProcess"));

	UReplayListItem_C_OnStartProcess_Params params;
	params.archive = archive;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnFileFound
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// struct FString*                file                           (Parm, ZeroConstructor)
// int*                           Size                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::OnFileFound(struct FString* archive, struct FString* file, int* Size)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.OnFileFound"));

	UReplayListItem_C_OnFileFound_Params params;
	params.archive = archive;
	params.file = file;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// struct FString*                file                           (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::ShowUnZipFileDone(struct FString* archive, struct FString* file)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone"));

	UReplayListItem_C_ShowUnZipFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowUnzipDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                archive                        (Parm, ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState>* CompletionState                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::ShowUnzipDone(struct FString* archive, TEnumAsByte<EZipUtilityCompletionState>* CompletionState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.ShowUnzipDone"));

	UReplayListItem_C_ShowUnzipDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature"));

	UReplayListItem_C_BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.Construct"));

	UReplayListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::ExecuteUbergraph_ReplayListItem(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem"));

	UReplayListItem_C_ExecuteUbergraph_ReplayListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReplayItem             inReplayItem                   (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::EventOnUpdateItem__DelegateSignature(const struct FReplayItem& inReplayItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature"));

	UReplayListItem_C_EventOnUpdateItem__DelegateSignature_Params params;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RegionOrLocal                  (Parm, ZeroConstructor)
// struct FReplayItem             inReplayItem                   (Parm)
// struct FReplayItem             bShoudUpdate                   (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::EventOnUpdateShouldKeep__DelegateSignature(const struct FString& RegionOrLocal, const struct FReplayItem& inReplayItem, const struct FReplayItem& bShoudUpdate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature"));

	UReplayListItem_C_EventOnUpdateShouldKeep__DelegateSignature_Params params;
	params.RegionOrLocal = RegionOrLocal;
	params.inReplayItem = inReplayItem;
	params.bShoudUpdate = bShoudUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::EventOnCancelDownloading__DelegateSignature(const struct FString& Name, class UWidget* Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature"));

	UReplayListItem_C_EventOnCancelDownloading__DelegateSignature_Params params;
	params.Name = Name;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::EventOnDownload__DelegateSignature(const struct FString& Name, class UWidget* Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature"));

	UReplayListItem_C_EventOnDownload__DelegateSignature_Params params;
	params.Name = Name;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inRegionOrLocal                (Parm, ZeroConstructor)
// struct FReplayItem             inReplayItem                   (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UReplayListItem_C::EventOnItemClicked__DelegateSignature(const struct FString& inRegionOrLocal, const struct FReplayItem& inReplayItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature"));

	UReplayListItem_C_EventOnItemClicked__DelegateSignature_Params params;
	params.inRegionOrLocal = inRegionOrLocal;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
