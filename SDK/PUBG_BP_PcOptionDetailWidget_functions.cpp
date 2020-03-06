// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionDetailWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PcOptionDetailWidget.BP_PcOptionDetailWidget_C.ExecuteUbergraph_BP_PcOptionDetailWidget
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UBP_PcOptionDetailWidget_C::ExecuteUbergraph_BP_PcOptionDetailWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function BP_PcOptionDetailWidget.BP_PcOptionDetailWidget_C.ExecuteUbergraph_BP_PcOptionDetailWidget"));

	UBP_PcOptionDetailWidget_C_ExecuteUbergraph_BP_PcOptionDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
