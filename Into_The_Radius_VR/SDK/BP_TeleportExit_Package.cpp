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
	 * 		Name   -> PredefinedFunction ABP_TeleportExit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TeleportExit_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TeleportExit.BP_TeleportExit_C");
		return ptr;
	}

}


