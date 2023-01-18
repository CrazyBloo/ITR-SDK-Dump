﻿/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * 		Name   -> Function BP_Mag_AK74.BP_Mag_AK74_C.RefillBulletPoints
	 * 		Flags  -> ()
	 */
	void ABP_Mag_AK74_C::RefillBulletPoints()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_AK74.BP_Mag_AK74_C.RefillBulletPoints");
		
		ABP_Mag_AK74_C_RefillBulletPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_AK74.BP_Mag_AK74_C.ExecuteUbergraph_BP_Mag_AK74
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mag_AK74_C::ExecuteUbergraph_BP_Mag_AK74(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_AK74.BP_Mag_AK74_C.ExecuteUbergraph_BP_Mag_AK74");
		
		ABP_Mag_AK74_C_ExecuteUbergraph_BP_Mag_AK74_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mag_AK74_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mag_AK74_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mag_AK74.BP_Mag_AK74_C");
		return ptr;
	}

}


