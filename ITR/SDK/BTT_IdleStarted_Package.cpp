/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_IdleStarted.BTT_IdleStarted_C.ReceiveExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_IdleStarted_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_IdleStarted.BTT_IdleStarted_C.ReceiveExecute");
		
		UBTT_IdleStarted_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_IdleStarted.BTT_IdleStarted_C.ExecuteUbergraph_BTT_IdleStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_IdleStarted_C::ExecuteUbergraph_BTT_IdleStarted(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_IdleStarted.BTT_IdleStarted_C.ExecuteUbergraph_BTT_IdleStarted");
		
		UBTT_IdleStarted_C_ExecuteUbergraph_BTT_IdleStarted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_IdleStarted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_IdleStarted_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_IdleStarted.BTT_IdleStarted_C");
		return ptr;
	}

}


