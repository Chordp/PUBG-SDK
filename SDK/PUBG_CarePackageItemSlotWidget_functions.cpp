// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CarePackageItemSlotWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.GetSlotItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackageItemSlotWidget_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.GetSlotItem"));

	UCarePackageItemSlotWidget_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackageItemSlotWidget_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.GetSlotContainer"));

	UCarePackageItemSlotWidget_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SetItemCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemCount                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackageItemSlotWidget_C::SetItemCount(int* ItemCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SetItemCount"));

	UCarePackageItemSlotWidget_C_SetItemCount_Params params;
	params.ItemCount = ItemCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SetItemIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture**               ItemIcon                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackageItemSlotWidget_C::SetItemIcon(class UTexture** ItemIcon)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SetItemIcon"));

	UCarePackageItemSlotWidget_C_SetItemIcon_Params params;
	params.ItemIcon = ItemIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SetItemName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ItemName                       (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UCarePackageItemSlotWidget_C::SetItemName(struct FText* ItemName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SetItemName"));

	UCarePackageItemSlotWidget_C_SetItemName_Params params;
	params.ItemName = ItemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
