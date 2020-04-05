// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_DecreaseBreathInHolding_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void ABuff_DecreaseBreathInHolding_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.UserConstructionScript"));

	ABuff_DecreaseBreathInHolding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.TickBuff
// (Event, Public, BlueprintEvent)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       
=======
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void ABuff_DecreaseBreathInHolding_C::TickBuff()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.TickBuff"));

	ABuff_DecreaseBreathInHolding_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.ExecuteUbergraph_Buff_DecreaseBreathInHolding
// ()
// Parameters:
<<<<<<< HEAD
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void ABuff_DecreaseBreathInHolding_C::ExecuteUbergraph_Buff_DecreaseBreathInHolding(int* EntryPoint)
=======
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ABuff_DecreaseBreathInHolding_C::ExecuteUbergraph_Buff_DecreaseBreathInHolding(int EntryPoint)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.ExecuteUbergraph_Buff_DecreaseBreathInHolding"));

	ABuff_DecreaseBreathInHolding_C_ExecuteUbergraph_Buff_DecreaseBreathInHolding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
