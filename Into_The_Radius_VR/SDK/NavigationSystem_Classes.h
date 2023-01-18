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
	 * Class NavigationSystem.NavigationData
	 * Size -> 0x0208 (FullSize[0x0488] - InheritedSize[0x0280])
	 */
	class ANavigationData : public AActor
	{
	public:
		unsigned char                                              UnknownData_SG1W[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 RenderingComp;                                           // 0x0288(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNavDataConfig                                      NavDataConfig;                                           // 0x0290(0x0078) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bEnableDrawing : 1;                                      // 0x0308(0x0001) BIT_FIELD Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bForceRebuildOnLoad : 1;                                 // 0x0308(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAutoDestroyWhenNoNavigation : 1;                        // 0x0308(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanBeMainNavData : 1;                                   // 0x0308(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCanSpawnOnRebuild : 1;                                  // 0x0308(0x0001) BIT_FIELD Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRebuildAtRuntime : 1;                                   // 0x0308(0x0001) BIT_FIELD Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UEEI[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERuntimeGenerationType                                     RuntimeGeneration;                                       // 0x030C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TW53[0x3];                                   // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ObservedPathsTickInterval;                               // 0x0310(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint32_t                                                   DataVersion;                                             // 0x0314(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q2E0[0x108];                                 // 0x0318(0x0108) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSupportedAreaData>                          SupportedAreas;                                          // 0x0420(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FMOT[0x58];                                  // 0x0430(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.AbstractNavData
	 * Size -> 0x0000 (FullSize[0x0488] - InheritedSize[0x0488])
	 */
	class AAbstractNavData : public ANavigationData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.CrowdManagerBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCrowdManagerBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UNavArea : public UNavAreaBase
	{
	public:
		float                                                      DefaultCost;                                             // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FixedAreaEnteringCost;                                   // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FColor                                              DrawColor;                                               // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x003C(0x0004) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent0 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent1 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent2 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent3 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent4 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent5 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent6 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent7 : 1;                                     // 0x0040(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent8 : 1;                                     // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent9 : 1;                                     // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent10 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent11 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent12 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent13 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent14 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSupportsAgent15 : 1;                                    // 0x0041(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WCJN[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_Default
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_Default : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_LowHeight
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_LowHeight : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_Null
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_Null : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavArea_Obstacle
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavArea_Obstacle : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavAreaMeta
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UNavAreaMeta : public UNavArea
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavAreaMeta_SwitchByAgent
	 * Size -> 0x0080 (FullSize[0x00C8] - InheritedSize[0x0048])
	 */
	class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
	{
	public:
		class UClass*                                              Agent0Area;                                              // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent1Area;                                              // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent2Area;                                              // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent3Area;                                              // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent4Area;                                              // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent5Area;                                              // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent6Area;                                              // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent7Area;                                              // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent8Area;                                              // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent9Area;                                              // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent10Area;                                             // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent11Area;                                             // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent12Area;                                             // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent13Area;                                             // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent14Area;                                             // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Agent15Area;                                             // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavCollision
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	class UNavCollision : public UNavCollisionBase
	{
	public:
		unsigned char                                              UnknownData_HOJ7[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavCollisionCylinder>                       CylinderCollision;                                       // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FNavCollisionBox>                            BoxCollision;                                            // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              AreaClass;                                               // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGatherConvexGeometry : 1;                               // 0x00A8(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCreateOnClient : 1;                                     // 0x00A8(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VN51[0x2F];                                  // 0x00A9(0x002F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationGraph
	 * Size -> 0x0000 (FullSize[0x0488] - InheritedSize[0x0488])
	 */
	class ANavigationGraph : public ANavigationData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationGraphNode
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class ANavigationGraphNode : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationGraphNodeComponent
	 * Size -> 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
	 */
	class UNavigationGraphNodeComponent : public USceneComponent
	{
	public:
		struct FNavGraphNode                                       Node;                                                    // 0x0228(0x0018) NativeAccessSpecifierPublic
		class UNavigationGraphNodeComponent*                       NextNodeComponent;                                       // 0x0240(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNavigationGraphNodeComponent*                       PrevNodeComponent;                                       // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationInvokerComponent
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UNavigationInvokerComponent : public UActorComponent
	{
	public:
		float                                                      TileGenerationRadius;                                    // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TileRemovalRadius;                                       // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationPath
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UNavigationPath : public UObject
	{
	public:
		class FScriptMulticastDelegate                             PathUpdatedNotifier;                                     // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PathPoints;                                              // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		ENavigationOptionFlag                                      RecalculateOnInvalidation;                               // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DVWK[0x3F];                                  // 0x0049(0x003F) MISSED OFFSET (PADDING)

	public:
		bool IsValid();
		bool IsStringPulled();
		bool IsPartial();
		float GetPathLength();
		float GetPathCost();
		class FString GetDebugString();
		void EnableRecalculationOnInvalidation(ENavigationOptionFlag DoRecalculation);
		void EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationPathGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavigationPathGenerator : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationQueryFilter
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UNavigationQueryFilter : public UObject
	{
	public:
		TArray<struct FNavigationFilterArea>                       Areas;                                                   // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FNavigationFilterFlags                              IncludeFlags;                                            // 0x0038(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNavigationFilterFlags                              ExcludeFlags;                                            // 0x003C(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DN49[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationSystemV1
	 * Size -> 0x15B8 (FullSize[0x15E0] - InheritedSize[0x0028])
	 */
	class UNavigationSystemV1 : public UNavigationSystemBase
	{
	public:
		class ANavigationData*                                     MainNavData;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANavigationData*                                     AbstractNavData;                                         // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DefaultAgentName;                                        // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              CrowdManagerClass[0x28];                                 // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              bAutoCreateNavigationData : 1;                           // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSpawnNavDataInNavBoundsLevel : 1;                       // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAllowClientSideNavigation : 1;                          // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bShouldDiscardSubLevelNavData : 1;                       // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bTickWhilePaused : 1;                                    // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSupportRebuilding : 1;                                  // 0x0068(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bInitialBuildingLocked : 1;                              // 0x0068(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ML5 : 1;                                    // 0x0068(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bSkipAgentHeightCheckWhenPickingNavData : 1;             // 0x0069(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGenerateNavigationOnlyAroundNavigationInvokers : 1;     // 0x0069(0x0001) BIT_FIELD Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VJTU[0x2];                                   // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ActiveTilesUpdateInterval;                               // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavDataGatheringModeConfig                                DataGatheringMode;                                       // 0x0070(0x0001) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KH3L[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DirtyAreaWarningSizeThreshold;                           // 0x0074(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FNavDataConfig>                              SupportedAgents;                                         // 0x0078(0x0010) Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		struct FNavAgentSelector                                   SupportedAgentsMask;                                     // 0x0088(0x0004) Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D6X4[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ANavigationData*>                             NavDataSet;                                              // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class ANavigationData*>                             NavDataRegistrationQueue;                                // 0x00A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IW07[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNavDataRegisteredEvent;                                // 0x00C0(0x0010) ZeroConstructor, Transient, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNavigationGenerationFinishedDelegate;                  // 0x00D0(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GRW[0xDC];                                  // 0x00E0(0x00DC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EFNavigationSystemRunMode                                  OperationMode;                                           // 0x01BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5F47[0x13FF];                                // 0x01BD(0x13FF) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DirtyAreasUpdateFreq;                                    // 0x15BC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KD5C[0x20];                                  // 0x15C0(0x0020) MISSED OFFSET (PADDING)

	public:
		void UnregisterNavigationInvoker(class AActor* Invoker);
		void SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
		void SimpleMoveToActor(class AController* Controller, class AActor* Goal);
		void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);
		void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
		void ResetMaxSimultaneousTileGenerationJobsCount();
		void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
		struct FVector ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
		void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
		bool NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UClass* FilterClass, class AController* Querier);
		bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);
		bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
		bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
		bool IsNavigationBeingBuilt(class UObject* WorldContextObject);
		struct FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		struct FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
		ENavigationQueryResult GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UClass* FilterClass);
		ENavigationQueryResult GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UClass* FilterClass);
		class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);
		class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
		class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationSystemModuleConfig
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UNavigationSystemModuleConfig : public UNavigationSystemConfig
	{
	public:
		unsigned char                                              bStrictlyStatic : 1;                                     // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCreateOnClient : 1;                                     // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bAutoSpawnMissingNavData : 1;                            // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bSpawnNavDataInNavBoundsLevel : 1;                       // 0x0050(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CXGU[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavigationTestingActor
	 * Size -> 0x00F0 (FullSize[0x0370] - InheritedSize[0x0280])
	 */
	class ANavigationTestingActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_U9XJ[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   CapsuleComponent;                                        // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UNavigationInvokerComponent*                         InvokerComponent;                                        // 0x0298(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bActAsNavigationInvoker : 1;                             // 0x02A0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_96OT[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNavAgentProperties                                 NavAgentProps;                                           // 0x02A8(0x0030) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             QueryingExtent;                                          // 0x02D8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I100[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANavigationData*                                     MyNavData;                                               // 0x02E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ProjectedLocation;                                       // 0x02F0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bProjectedLocationValid : 1;                             // 0x02FC(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSearchStart : 1;                                        // 0x02FC(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP6E[0x3];                                   // 0x02FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CostLimitFactor;                                         // 0x0300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumCostLimit;                                        // 0x0304(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBacktracking : 1;                                       // 0x0308(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseHierarchicalPathfinding : 1;                         // 0x0308(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGatherDetailedInfo : 1;                                 // 0x0308(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDistanceToWall : 1;                                 // 0x0308(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowNodePool : 1;                                       // 0x0308(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowBestPath : 1;                                       // 0x0308(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShowDiffWithPreviousStep : 1;                           // 0x0308(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bShouldBeVisibleInGame : 1;                              // 0x0308(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YSC[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENavCostDisplay                                            CostDisplayMode;                                         // 0x030C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HEX[0x3];                                   // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           TextCanvasOffset;                                        // 0x0310(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPathExist : 1;                                          // 0x0318(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPathIsPartial : 1;                                      // 0x0318(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPathSearchOutOfNodes : 1;                               // 0x0318(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDAR[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PathfindingTime;                                         // 0x031C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PathCost;                                                // 0x0320(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PathfindingSteps;                                        // 0x0324(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANavigationTestingActor*                             OtherActor;                                              // 0x0328(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              FilterClass;                                             // 0x0330(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ShowStepIndex;                                           // 0x0338(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetFromCornersDistance;                               // 0x033C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5H2R[0x30];                                  // 0x0340(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkComponent
	 * Size -> 0x0020 (FullSize[0x04A0] - InheritedSize[0x0480])
	 */
	class UNavLinkComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_4JLO[0x8];                                   // 0x0480(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNavigationLink>                             Links;                                                   // 0x0488(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J50[0x8];                                   // 0x0498(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavRelevantComponent
	 * Size -> 0x0030 (FullSize[0x0110] - InheritedSize[0x00E0])
	 */
	class UNavRelevantComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_EFGS[0x24];                                  // 0x00E0(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAttachToOwnersRoot : 1;                                 // 0x0104(0x0001) BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EOFY[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CachedNavParent;                                         // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetNavigationRelevancy(bool bRelevant);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkCustomComponent
	 * Size -> 0x00B0 (FullSize[0x01C0] - InheritedSize[0x0110])
	 */
	class UNavLinkCustomComponent : public UNavRelevantComponent
	{
	public:
		unsigned char                                              UnknownData_5NQ4[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   NavLinkUserId;                                           // 0x0118(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6CTH[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EnabledAreaClass;                                        // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DisabledAreaClass;                                       // 0x0128(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x0130(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             LinkRelativeStart;                                       // 0x0134(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LinkRelativeEnd;                                         // 0x0140(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavLinkDirection                                          LinkDirection;                                           // 0x014C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2UKZ[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bLinkEnabled : 1;                                        // 0x0150(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bNotifyWhenEnabled : 1;                                  // 0x0150(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bNotifyWhenDisabled : 1;                                 // 0x0150(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bCreateBoxObstacle : 1;                                  // 0x0150(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JTLS[0x3];                                   // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ObstacleOffset;                                          // 0x0154(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ObstacleExtent;                                          // 0x0160(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5J0R[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ObstacleAreaClass;                                       // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BroadcastRadius;                                         // 0x0178(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BroadcastInterval;                                       // 0x017C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECollisionChannel                                          BroadcastChannel;                                        // 0x0180(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CG5W[0x3F];                                  // 0x0181(0x003F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkCustomInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavLinkCustomInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkHostInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavLinkHostInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkRenderingComponent
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class UNavLinkRenderingComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavLinkTrivial
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UNavLinkTrivial : public UNavLinkDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavMeshBoundsVolume
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class ANavMeshBoundsVolume : public AVolume
	{
	public:
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x02B8(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSQY[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavMeshRenderingComponent
	 * Size -> 0x0010 (FullSize[0x0490] - InheritedSize[0x0480])
	 */
	class UNavMeshRenderingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_QSD0[0x10];                                  // 0x0480(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavModifierComponent
	 * Size -> 0x0060 (FullSize[0x0170] - InheritedSize[0x0110])
	 */
	class UNavModifierComponent : public UNavRelevantComponent
	{
	public:
		class UClass*                                              AreaClass;                                               // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FailsafeExtent;                                          // 0x0118(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIncludeAgentHeight : 1;                                 // 0x0124(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_174C[0x4B];                                  // 0x0125(0x004B) MISSED OFFSET (PADDING)

	public:
		void SetAreaClass(class UClass* NewAreaClass);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavModifierVolume
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class ANavModifierVolume : public AVolume
	{
	public:
		unsigned char                                              UnknownData_CJTD[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AreaClass;                                               // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bMaskFillCollisionUnderneathForNavmesh;                  // 0x02C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X1OK[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetAreaClass(class UClass* NewAreaClass);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavNodeInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavNodeInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavSystemConfigOverride
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class ANavSystemConfigOverride : public AActor
	{
	public:
		class UNavigationSystemConfig*                             NavigationSystemConfig;                                  // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavSystemOverridePolicy                                   OverridePolicy;                                          // 0x0288(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bLoadOnClient : 1;                                       // 0x0289(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_65C9[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.NavTestRenderingComponent
	 * Size -> 0x0000 (FullSize[0x0480] - InheritedSize[0x0480])
	 */
	class UNavTestRenderingComponent : public UPrimitiveComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.RecastFilter_UseDefaultArea
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.RecastNavMesh
	 * Size -> 0x00B0 (FullSize[0x0538] - InheritedSize[0x0488])
	 */
	class ARecastNavMesh : public ANavigationData
	{
	public:
		unsigned char                                              bDrawTriangleEdges : 1;                                  // 0x0488(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawPolyEdges : 1;                                      // 0x0488(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawFilledPolys : 1;                                    // 0x0488(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawNavMeshEdges : 1;                                   // 0x0488(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawTileBounds : 1;                                     // 0x0488(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawPathCollidingGeometry : 1;                          // 0x0488(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawTileLabels : 1;                                     // 0x0488(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawPolygonLabels : 1;                                  // 0x0488(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawDefaultPolygonCost : 1;                             // 0x0489(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawPolygonFlags : 1;                                   // 0x0489(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawLabelsOnPathNodes : 1;                              // 0x0489(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawNavLinks : 1;                                       // 0x0489(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawFailedNavLinks : 1;                                 // 0x0489(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawClusters : 1;                                       // 0x0489(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawOctree : 1;                                         // 0x0489(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawOctreeDetails : 1;                                  // 0x0489(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDrawMarkedForbiddenPolys : 1;                           // 0x048A(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDistinctlyDrawTilesBeingBuilt : 1;                      // 0x048A(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXE3[0x1];                                   // 0x048B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawOffset;                                              // 0x048C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFixedTilePoolSize : 1;                                  // 0x0490(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1BEG[0x3];                                   // 0x0491(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TilePoolSize;                                            // 0x0494(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TileSizeUU;                                              // 0x0498(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x049C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellHeight;                                              // 0x04A0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentRadius;                                             // 0x04A4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentHeight;                                             // 0x04A8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxSlope;                                           // 0x04AC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgentMaxStepHeight;                                      // 0x04B0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRegionArea;                                           // 0x04B4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MergeRegionSize;                                         // 0x04B8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSimplificationError;                                  // 0x04BC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSimultaneousTileGenerationJobsCount;                  // 0x04C0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TileNumberHardLimit;                                     // 0x04C4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolyRefTileBits;                                         // 0x04C8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolyRefNavPolyBits;                                      // 0x04CC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PolyRefSaltBits;                                         // 0x04D0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             NavMeshOriginOffset;                                     // 0x04D4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultDrawDistance;                                     // 0x04E0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMaxSearchNodes;                                   // 0x04E4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMaxHierarchicalSearchNodes;                       // 0x04E8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERecastPartitioning                                        RegionPartitioning;                                      // 0x04EC(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERecastPartitioning                                        LayerPartitioning;                                       // 0x04ED(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41LX[0x2];                                   // 0x04EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RegionChunkSplits;                                       // 0x04F0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LayerChunkSplits;                                        // 0x04F4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSortNavigationAreasByCost : 1;                          // 0x04F8(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPerformVoxelFiltering : 1;                              // 0x04F8(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMarkLowHeightAreas : 1;                                 // 0x04F8(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseExtraTopCellWhenMarkingAreas : 1;                    // 0x04F8(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFilterLowSpanSequences : 1;                             // 0x04F8(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFilterLowSpanFromTileCache : 1;                         // 0x04F8(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDoFullyAsyncNavDataGathering : 1;                       // 0x04F8(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseBetterOffsetsFromCorners : 1;                        // 0x04F8(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStoreEmptyTileLayers : 1;                               // 0x04F9(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseVirtualFilters : 1;                                  // 0x04F9(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowNavLinkAsPathEnd : 1;                              // 0x04F9(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseVoxelCache : 1;                                      // 0x04F9(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IA3Q[0x2];                                   // 0x04FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TileSetUpdateInterval;                                   // 0x04FC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HeuristicScale;                                          // 0x0500(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalDeviationFromGroundCompensation;                 // 0x0504(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2OR[0x30];                                  // 0x0508(0x0030) MISSED OFFSET (PADDING)

	public:
		bool K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);
		static UClass* StaticClass();
	};

	/**
	 * Class NavigationSystem.RecastNavMeshDataChunk
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class URecastNavMeshDataChunk : public UNavigationDataChunk
	{
	public:
		unsigned char                                              UnknownData_LSFX[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
