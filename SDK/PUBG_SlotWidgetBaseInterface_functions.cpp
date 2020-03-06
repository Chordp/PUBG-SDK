// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SlotWidgetBaseInterface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SlotWidgetBaseInterface.SlotWidgetBaseInterface_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void USlotWidgetBaseInterface_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SlotWidgetBaseInterface.SlotWidgetBaseInterface_C.GetSlotContainer"));

	USlotWidgetBaseInterface_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function SlotWidgetBaseInterface.SlotWidgetBaseInterface_C.GetSlotItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void USlotWidgetBaseInterface_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SlotWidgetBaseInterface.SlotWidgetBaseInterface_C.GetSlotItem"));

	USlotWidgetBaseInterface_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
