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
	 * 		Name   -> PredefinedFunction USentryIOSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryIOSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SentryIO.SentryIOSettings");
		return ptr;
	}

}


