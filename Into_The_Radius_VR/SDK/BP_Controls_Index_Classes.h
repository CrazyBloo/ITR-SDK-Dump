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
	 * BlueprintGeneratedClass BP_Controls_Index.BP_Controls_Index_C
	 * Size -> 0x004C (FullSize[0x0350] - InheritedSize[0x0304])
	 */
	class ABP_Controls_Index_C : public ABPA_Controls_C
	{
	public:
		unsigned char                                              UnknownData_D252[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MovementDeadZone;                                        // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GripLeftPressed;                                         // 0x0314(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GripRightPressed;                                        // 0x0315(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BGJT[0x2];                                   // 0x0316(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnGripThreshold;                                         // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnY;                                                   // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SprintToggle;                                            // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E82T[0x3];                                   // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFingerCurls                                        LFinger_Curls;                                           // 0x0324(0x0014) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FFingerCurls                                        RFinger_Curls;                                           // 0x0338(0x0014) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      GripThreshold;                                           // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpAxisEvt_GripForce_Left_K2Node_InputAxisEvent_1(float AxisValue);
		void InpAxisEvt_GripForce_Right_K2Node_InputAxisEvent_2(float AxisValue);
		void HightlightButtons(bool Activate, TArray<EControlAction> Actions);
		void OnMovement_X(float AxisValue);
		void OnMovement_Y(float AxisValue);
		void OnTurning_Y(float AxisValue);
		void ExecuteUbergraph_BP_Controls_Index(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
