// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CarePackgeItemListWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.UpdateIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::UpdateIconTexture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.UpdateIconTexture"));

	UCarePackgeItemListWidget_C_UpdateIconTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.FinishCarePackgeItemList
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::FinishCarePackgeItemList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.FinishCarePackgeItemList"));

	UCarePackgeItemListWidget_C_FinishCarePackgeItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.PrepareCarePackgeItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::PrepareCarePackgeItemList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.PrepareCarePackgeItemList"));

	UCarePackgeItemListWidget_C_PrepareCarePackgeItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideTextCarePackageEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::HideTextCarePackageEmpty()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideTextCarePackageEmpty"));

	UCarePackgeItemListWidget_C_HideTextCarePackageEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.SetCarePackgeItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::SetCarePackgeItemList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.SetCarePackgeItemList"));

	UCarePackgeItemListWidget_C_SetCarePackgeItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemIcons
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::GetCarePackageItemIcons()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemIcons"));

	UCarePackgeItemListWidget_C_GetCarePackageItemIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideCarePackageItemList
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::HideCarePackageItemList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.HideCarePackageItemList"));

	UCarePackgeItemListWidget_C_HideCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               ItemIcon                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  ItemName                       (Parm)
// int*                           ItemCount                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCarePackageItemSlotWidget_C* CarePackageItemSlotWidget      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::GetCarePackageItemWidget(class UTexture** ItemIcon, struct FText* ItemName, int* ItemCount, class UCarePackageItemSlotWidget_C** CarePackageItemSlotWidget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.GetCarePackageItemWidget"));

	UCarePackgeItemListWidget_C_GetCarePackageItemWidget_Params params;
	params.ItemIcon = ItemIcon;
	params.ItemName = ItemName;
	params.ItemCount = ItemCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CarePackageItemSlotWidget != nullptr)
		*CarePackageItemSlotWidget = params.CarePackageItemSlotWidget;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItemList
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::ShowCarePackageItemList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItemList"));

	UCarePackgeItemListWidget_C_ShowCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.Construct"));

	UCarePackgeItemListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItem
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::ShowCarePackageItem()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ShowCarePackageItem"));

	UCarePackgeItemListWidget_C_ShowCarePackageItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.CustomTick
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::CustomTick()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.CustomTick"));

	UCarePackgeItemListWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.TimerCheckUpdateList
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::TimerCheckUpdateList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.TimerCheckUpdateList"));

	UCarePackgeItemListWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ExecuteUbergraph_CarePackgeItemListWidget
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::ExecuteUbergraph_CarePackgeItemListWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.ExecuteUbergraph_CarePackgeItemListWidget"));

	UCarePackgeItemListWidget_C_ExecuteUbergraph_CarePackgeItemListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.EventDispatcher_ShowCarePackageItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackgeItemListWidget_C::EventDispatcher_ShowCarePackageItem__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackgeItemListWidget.CarePackgeItemListWidget_C.EventDispatcher_ShowCarePackageItem__DelegateSignature"));

	UCarePackgeItemListWidget_C_EventDispatcher_ShowCarePackageItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
