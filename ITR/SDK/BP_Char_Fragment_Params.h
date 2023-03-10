#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
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
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.ToggleFragmentEnable
	 */
	struct ABP_Char_Fragment_C_ToggleFragmentEnable_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U6UB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.IsAttacksLocked
	 */
	struct ABP_Char_Fragment_C_IsAttacksLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.MatAnim__FinishedFunc
	 */
	struct ABP_Char_Fragment_C_MatAnim__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.MatAnim__UpdateFunc
	 */
	struct ABP_Char_Fragment_C_MatAnim__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Char_Fragment_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Char_Fragment_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.LoadAdditionalSettings
	 */
	struct ABP_Char_Fragment_C_LoadAdditionalSettings_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.BndEvt__MeleeAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature
	 */
	struct ABP_Char_Fragment_C_BndEvt__MeleeAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Fragment_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.DamagedState
	 */
	struct ABP_Char_Fragment_C_DamagedState_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.DeathTest
	 */
	struct ABP_Char_Fragment_C_DeathTest_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.ReceiveAnyDamage
	 */
	struct ABP_Char_Fragment_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D8VY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.OnDeath
	 */
	struct ABP_Char_Fragment_C_OnDeath_Params
	{
	public:
		bool                                                       EnableRagdoll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.ReceiveEndPlay
	 */
	struct ABP_Char_Fragment_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.BndEvt__BP_Char_Fragment_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature
	 */
	struct ABP_Char_Fragment_C_BndEvt__BP_Char_Fragment_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.BndEvt__BP_Char_Fragment_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature
	 */
	struct ABP_Char_Fragment_C_BndEvt__BP_Char_Fragment_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.OnAttackCommandStarted
	 */
	struct ABP_Char_Fragment_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.OnAttackCommandFinished
	 */
	struct ABP_Char_Fragment_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.OnIdleCommandFinished
	 */
	struct ABP_Char_Fragment_C_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.OnWalkCommandFinished
	 */
	struct ABP_Char_Fragment_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.OnGameStateChange
	 */
	struct ABP_Char_Fragment_C_OnGameStateChange_Params
	{
	public:
		bool                                                       IsPause;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.ReceivePointDamage
	 */
	struct ABP_Char_Fragment_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BTAR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGBF[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x0058(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.BndEvt__BP_Char_Fragment_MeleeAttackComponent_K2Node_ComponentBoundEvent_0_OnMeleeSwing__DelegateSignature
	 */
	struct ABP_Char_Fragment_C_BndEvt__BP_Char_Fragment_MeleeAttackComponent_K2Node_ComponentBoundEvent_0_OnMeleeSwing__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Fragment.BP_Char_Fragment_C.ExecuteUbergraph_BP_Char_Fragment
	 */
	struct ABP_Char_Fragment_C_ExecuteUbergraph_BP_Char_Fragment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
