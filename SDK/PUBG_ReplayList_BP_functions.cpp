// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayList_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReplayItem*            inReplayItem                   (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::OnUpdateItem(struct FReplayItem* inReplayItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.OnUpdateItem"));

	AReplayList_BP_C_OnUpdateItem_Params params;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                inRegionOrLocal                (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::UpdateReplayList(struct FString* inRegionOrLocal)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.UpdateReplayList"));

	AReplayList_BP_C_UpdateReplayList_Params params;
	params.inRegionOrLocal = inRegionOrLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsReplayBusy                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::CheckReplayBusyStatus(bool* bIsReplayBusy)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.CheckReplayBusyStatus"));

	AReplayList_BP_C_CheckReplayBusyStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsReplayBusy != nullptr)
		*bIsReplayBusy = params.bIsReplayBusy;
}


// Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::OnGoPageBtn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.OnGoPageBtn"));

	AReplayList_BP_C_OnGoPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::OnNextPageBtn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.OnNextPageBtn"));

	AReplayList_BP_C_OnNextPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::OnPrevPageBtn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.OnPrevPageBtn"));

	AReplayList_BP_C_OnPrevPageBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ClearReplayList
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::ClearReplayList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.ClearReplayList"));

	AReplayList_BP_C_ClearReplayList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.UserConstructionScript"));

	AReplayList_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.ReceiveBeginPlay"));

	AReplayList_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::CreateReplayListEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.CreateReplayListEvent"));

	AReplayList_BP_C_CreateReplayListEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::PrevPageEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.PrevPageEvent"));

	AReplayList_BP_C_PrevPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.NextPageEvent
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::NextPageEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.NextPageEvent"));

	AReplayList_BP_C_NextPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.GoPageEvent
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::GoPageEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.GoPageEvent"));

	AReplayList_BP_C_GoPageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.OnItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                RegionOrLocal                  (Parm, ZeroConstructor)
// struct FReplayItem*            inReplayItem                   (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::OnItemClicked(struct FString* RegionOrLocal, struct FReplayItem* inReplayItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.OnItemClicked"));

	AReplayList_BP_C_OnItemClicked_Params params;
	params.RegionOrLocal = RegionOrLocal;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AReplayList_BP_C::ExecuteUbergraph_ReplayList_BP(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function ReplayList_BP.ReplayList_BP_C.ExecuteUbergraph_ReplayList_BP"));

	AReplayList_BP_C_ExecuteUbergraph_ReplayList_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
