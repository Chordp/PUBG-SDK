// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapPlayerStartWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.MapPlayerStartWidget.OnRespawnButtonDown
// (Final, Native, Public)
// FunctionAddress:0x00007FF75AB963E0              		 offset:11963e0                       

void UMapPlayerStartWidgetBP_C::OnRespawnButtonDown()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.MapPlayerStartWidget.OnRespawnButtonDown"));

	UMapPlayerStartWidgetBP_C_OnRespawnButtonDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.MapPlayerStartWidget.OnPlayerRespawnSpotChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName                   RespawnSpotName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A1FEB90              		 offset:7feb90                        

void UMapPlayerStartWidgetBP_C::OnPlayerRespawnSpotChanged(const struct FName& RespawnSpotName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.MapPlayerStartWidget.OnPlayerRespawnSpotChanged"));

	UMapPlayerStartWidgetBP_C_OnPlayerRespawnSpotChanged_Params params;
	params.RespawnSpotName = RespawnSpotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
