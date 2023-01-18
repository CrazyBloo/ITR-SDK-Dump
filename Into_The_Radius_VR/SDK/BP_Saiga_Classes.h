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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Saiga.BP_Saiga_C
	 * Size -> 0x0037 (FullSize[0x0EC0] - InheritedSize[0x0E89])
	 */
	class ABP_Saiga_C : public ABP_MagFirearmItem_C
	{
	public:
		unsigned char                                              UnknownData_2QZW[0x7];                                   // 0x0E89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E90(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_AtSl_Dovetail_Rail_B_C*                         BPC_AtSl_Dovetail_Rail_B;                                // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Dovetail_C*                                BPC_AtSl_Dovetail;                                       // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Rail_B_C*                                  BPC_AtSl_Rail_B1;                                        // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Stock_C*                                        BPC_Stock;                                               // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WPN_AKM_WPN_AKM_safetyswitch;                            // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnReconfigure();
		void AttachmentAttached(class AActor* Actor);
		void AttachmentDetached(class AActor* Actor);
		void ExecuteUbergraph_BP_Saiga(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
