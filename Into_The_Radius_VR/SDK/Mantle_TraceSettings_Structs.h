﻿#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct Mantle_TraceSettings.Mantle_TraceSettings
	 * Size -> 0x0014
	 */
	struct FMantle_TraceSettings
	{
	public:
		float                                                      MaxLedgeHeight_15_DC0D8FBF4C01FDE39D0AFDB1B04955A8;      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinLedgeHeight_14_857E2CDE423BEE7929567D8802243370;      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ReachDistance_2_B3C154AA46EBFD9C1E67EB8DFBB7010E;        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ForwardTraceRadius_9_C1A792084D8AAADBD22D8F8DE31A3A1C;   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DownwardTraceRadius_12_7FE8C297416A916F74A892B85131B1BC; // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
