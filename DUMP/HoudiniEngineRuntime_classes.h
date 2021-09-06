// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x50 (Inherited: 0x28)
struct UHoudiniAsset : UObject {
	struct FString AssetFileName; // 0x28(0x10)
	struct TArray<char> AssetBytes; // 0x38(0x10)
	uint32_t AssetBytesCount; // 0x48(0x04)
	bool bAssetLimitedCommercial; // 0x4c(0x01)
	bool bAssetNonCommercial; // 0x4d(0x01)
	bool bAssetExpanded; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x228 (Inherited: 0x220)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x220(0x08)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0x7d0 (Inherited: 0x440)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	struct UHoudiniAsset* HoudiniAsset; // 0x440(0x08)
	bool bCookOnParameterChange; // 0x448(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x449(0x01)
	bool bCookOnTransformChange; // 0x44a(0x01)
	bool bCookOnAssetInputCook; // 0x44b(0x01)
	bool bOutputless; // 0x44c(0x01)
	bool bOutputTemplateGeos; // 0x44d(0x01)
	char pad_44E[0x2]; // 0x44e(0x02)
	struct FDirectoryPath TemporaryCookFolder; // 0x450(0x10)
	struct FDirectoryPath BakeFolder; // 0x460(0x10)
	enum class EHoudiniStaticMeshMethod StaticMeshMethod; // 0x470(0x01)
	char pad_471[0x7]; // 0x471(0x07)
	struct FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties; // 0x478(0x1b0)
	bool bOverrideGlobalProxyStaticMeshSettings; // 0x628(0x01)
	bool bEnableProxyStaticMeshOverride; // 0x629(0x01)
	bool bEnableProxyStaticMeshRefinementByTimerOverride; // 0x62a(0x01)
	char pad_62B[0x1]; // 0x62b(0x01)
	float ProxyMeshAutoRefineTimeoutSecondsOverride; // 0x62c(0x04)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride; // 0x630(0x01)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride; // 0x631(0x01)
	char pad_632[0x2]; // 0x632(0x02)
	int32_t AssetId; // 0x634(0x04)
	struct TSet<struct UHoudiniAssetComponent*> DownstreamHoudiniAssets; // 0x638(0x50)
	struct FGuid ComponentGUID; // 0x688(0x10)
	struct FGuid HapiGUID; // 0x698(0x10)
	enum class EHoudiniAssetState AssetState; // 0x6a8(0x01)
	enum class EHoudiniAssetState DebugLastAssetState; // 0x6a9(0x01)
	enum class EHoudiniAssetStateResult AssetStateResult; // 0x6aa(0x01)
	char pad_6AB[0x1]; // 0x6ab(0x01)
	uint32_t SubAssetIndex; // 0x6ac(0x04)
	int32_t AssetCookCount; // 0x6b0(0x04)
	bool bHasBeenLoaded; // 0x6b4(0x01)
	bool bHasBeenDuplicated; // 0x6b5(0x01)
	bool bPendingDelete; // 0x6b6(0x01)
	bool bRecookRequested; // 0x6b7(0x01)
	bool bRebuildRequested; // 0x6b8(0x01)
	bool bEnableCooking; // 0x6b9(0x01)
	bool bForceNeedUpdate; // 0x6ba(0x01)
	bool bLastCookSuccess; // 0x6bb(0x01)
	bool bBlueprintStructureModified; // 0x6bc(0x01)
	bool bBlueprintModified; // 0x6bd(0x01)
	char pad_6BE[0x2]; // 0x6be(0x02)
	struct TArray<struct UHoudiniParameter*> Parameters; // 0x6c0(0x10)
	struct TArray<struct UHoudiniInput*> Inputs; // 0x6d0(0x10)
	struct TArray<struct UHoudiniOutput*> Outputs; // 0x6e0(0x10)
	struct TArray<struct FHoudiniBakedOutput> BakedOutputs; // 0x6f0(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> UntrackedOutputs; // 0x700(0x10)
	struct TArray<struct UHoudiniHandleComponent*> HandleComponents; // 0x710(0x10)
	bool bHasComponentTransformChanged; // 0x720(0x01)
	bool bFullyLoaded; // 0x721(0x01)
	char pad_722[0x6]; // 0x722(0x06)
	struct UHoudiniPDGAssetLink* PDGAssetLink; // 0x728(0x08)
	struct FTimerHandle RefineMeshesTimer; // 0x730(0x08)
	char pad_738[0x18]; // 0x738(0x18)
	bool bNoProxyMeshNextCookRequested; // 0x750(0x01)
	char pad_751[0x7]; // 0x751(0x07)
	struct TMap<struct UObject*, int32_t> InputPresets; // 0x758(0x50)
	bool bBakeAfterNextCook; // 0x7a8(0x01)
	char pad_7A9[0x17]; // 0x7a9(0x17)
	bool bCachedIsPreview; // 0x7c0(0x01)
	char pad_7C1[0xf]; // 0x7c1(0x0f)
};

// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
// Size: 0x8d0 (Inherited: 0x7d0)
struct UHoudiniAssetBlueprintComponent : UHoudiniAssetComponent {
	char pad_7D0[0x48]; // 0x7d0(0x48)
	bool FauxBPProperty; // 0x818(0x01)
	bool bHoudiniAssetChanged; // 0x819(0x01)
	bool bUpdatedFromTemplate; // 0x81a(0x01)
	bool bIsInBlueprintEditor; // 0x81b(0x01)
	bool bCanDeleteHoudiniNodes; // 0x81c(0x01)
	bool bHasRegisteredComponentTemplate; // 0x81d(0x01)
	char pad_81E[0xa]; // 0x81e(0x0a)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes; // 0x828(0x50)
	struct TMap<struct FGuid, struct FGuid> CachedInputNodes; // 0x878(0x50)
	char pad_8C8[0x8]; // 0x8c8(0x08)

	void SetToggleValueAt(struct FString Name, bool Value, int32_t Index); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt // (Final|Native|Public|BlueprintCallable) // @ game+0xa3c1a0
	void SetFloatParameter(struct FString Name, float Value, int32_t Index); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xa3c040
	bool HasParameter(struct FString Name); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xa3bf40
};

// Class HoudiniEngineRuntime.HoudiniAssetParameter
// Size: 0x80 (Inherited: 0x28)
struct UHoudiniAssetParameter : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterButton : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// Size: 0xb8 (Inherited: 0x80)
struct UHoudiniAssetParameterChoice : UHoudiniAssetParameter {
	char pad_80[0x38]; // 0x80(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// Size: 0x90 (Inherited: 0x80)
struct UHoudiniAssetParameterColor : UHoudiniAssetParameter {
	char pad_80[0x10]; // 0x80(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// Size: 0xa8 (Inherited: 0x80)
struct UHoudiniAssetParameterFile : UHoudiniAssetParameter {
	char pad_80[0x28]; // 0x80(0x28)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// Size: 0xb8 (Inherited: 0x80)
struct UHoudiniAssetParameterFloat : UHoudiniAssetParameter {
	char pad_80[0x38]; // 0x80(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterFolder : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterFolderList : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// Size: 0xb0 (Inherited: 0x80)
struct UHoudiniAssetParameterInt : UHoudiniAssetParameter {
	char pad_80[0x30]; // 0x80(0x30)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterLabel : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// Size: 0x88 (Inherited: 0x80)
struct UHoudiniAssetParameterMultiparm : UHoudiniAssetParameter {
	char pad_80[0x8]; // 0x80(0x08)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// Size: 0x98 (Inherited: 0x80)
struct UHoudiniAssetParameterRamp : UHoudiniAssetParameter {
	char pad_80[0x18]; // 0x80(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// Size: 0x80 (Inherited: 0x80)
struct UHoudiniAssetParameterSeparator : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// Size: 0x90 (Inherited: 0x80)
struct UHoudiniAssetParameterString : UHoudiniAssetParameter {
	char pad_80[0x10]; // 0x80(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// Size: 0x90 (Inherited: 0x80)
struct UHoudiniAssetParameterToggle : UHoudiniAssetParameter {
	char pad_80[0x10]; // 0x80(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
// Size: 0xc8 (Inherited: 0x28)
struct UHoudiniAssetComponentMaterials_V1 : UObject {
	char pad_28[0xa0]; // 0x28(0xa0)
};

// Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
// Size: 0x290 (Inherited: 0x200)
struct UHoudiniHandleComponent_V1 : USceneComponent {
	char pad_200[0x90]; // 0x200(0x90)
};

// Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
// Size: 0x2f0 (Inherited: 0x200)
struct UHoudiniSplineComponent_V1 : USceneComponent {
	char pad_200[0xf0]; // 0x200(0xf0)
};

// Class HoudiniEngineRuntime.HoudiniAssetInput
// Size: 0x1a0 (Inherited: 0x80)
struct UHoudiniAssetInput : UHoudiniAssetParameter {
	char pad_80[0x120]; // 0x80(0x120)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// Size: 0x160 (Inherited: 0x80)
struct UHoudiniAssetInstanceInput : UHoudiniAssetParameter {
	char pad_80[0xe0]; // 0x80(0xe0)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// Size: 0x190 (Inherited: 0x28)
struct UHoudiniAssetInstanceInputField : UObject {
	char pad_28[0x168]; // 0x28(0x168)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
// Size: 0x960 (Inherited: 0x440)
struct UHoudiniAssetComponent_V1 : UPrimitiveComponent {
	char bGeneratedDoubleSidedGeometry : 1; // 0x440(0x01)
	char pad_440_1 : 7; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x448(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0x450(0x158)
	enum class ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	int32_t GeneratedLightMapResolution; // 0x5ac(0x04)
	float GeneratedLpvBiasMultiplier; // 0x5b0(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x5b4(0x04)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x5b8(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x5c8(0x04)
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x5cc(0x01)
	char pad_5CC_1 : 7; // 0x5cc(0x01)
	char pad_5CD[0x3]; // 0x5cd(0x03)
	float GeneratedStreamingDistanceMultiplier; // 0x5d0(0x04)
	char pad_5D4[0x4]; // 0x5d4(0x04)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x5d8(0x08)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x5e0(0x10)
	struct FText BakeFolder; // 0x5f0(0x18)
	struct FText TempCookFolder; // 0x608(0x18)
	char pad_620[0x340]; // 0x620(0x340)
};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
// Size: 0x210 (Inherited: 0x200)
struct UHoudiniInstancedActorComponent_V1 : USceneComponent {
	char pad_200[0x10]; // 0x200(0x10)
};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
// Size: 0x220 (Inherited: 0x200)
struct UHoudiniMeshSplitInstancerComponent_V1 : USceneComponent {
	char pad_200[0x20]; // 0x200(0x20)
};

// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
// Size: 0x28 (Inherited: 0x28)
struct UHoudiniEngineCopyPropertiesInterface : UInterface {
};

// Class HoudiniEngineRuntime.HoudiniHandleParameter
// Size: 0x38 (Inherited: 0x28)
struct UHoudiniHandleParameter : UObject {
	struct UHoudiniParameter* AssetParameter; // 0x28(0x08)
	int32_t TupleIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class HoudiniEngineRuntime.HoudiniHandleComponent
// Size: 0x230 (Inherited: 0x200)
struct UHoudiniHandleComponent : USceneComponent {
	struct TArray<struct UHoudiniHandleParameter*> XformParms; // 0x1f8(0x10)
	struct UHoudiniHandleParameter* RSTParm; // 0x208(0x08)
	struct UHoudiniHandleParameter* RotOrderParm; // 0x210(0x08)
	enum class EHoudiniHandleType HandleType; // 0x218(0x01)
	struct FString HandleName; // 0x220(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInput
// Size: 0x158 (Inherited: 0x28)
struct UHoudiniInput : UObject {
	struct FString Name; // 0x28(0x10)
	struct FString Label; // 0x38(0x10)
	enum class EHoudiniInputType Type; // 0x48(0x01)
	enum class EHoudiniInputType PreviousType; // 0x49(0x01)
	char pad_4A[0x2]; // 0x4a(0x02)
	int32_t AssetNodeId; // 0x4c(0x04)
	int32_t InputNodeId; // 0x50(0x04)
	int32_t InputIndex; // 0x54(0x04)
	int32_t ParmId; // 0x58(0x04)
	bool bIsObjectPathParameter; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<int32_t> CreatedDataNodeIds; // 0x60(0x10)
	bool bHasChanged; // 0x70(0x01)
	bool bNeedsToTriggerUpdate; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct FString Help; // 0x78(0x10)
	enum class EHoudiniXformType KeepWorldTransform; // 0x88(0x01)
	bool bPackBeforeMerge; // 0x89(0x01)
	bool bImportAsReference; // 0x8a(0x01)
	bool bExportLODs; // 0x8b(0x01)
	bool bExportSockets; // 0x8c(0x01)
	bool bExportColliders; // 0x8d(0x01)
	bool bCookOnCurveChanged; // 0x8e(0x01)
	char pad_8F[0x1]; // 0x8f(0x01)
	struct TArray<struct UHoudiniInputObject*> GeometryInputObjects; // 0x90(0x10)
	bool bStaticMeshChanged; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct UHoudiniInputObject*> AssetInputObjects; // 0xa8(0x10)
	bool bInputAssetConnectedInHoudini; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct UHoudiniInputObject*> CurveInputObjects; // 0xc0(0x10)
	bool bSwitchedToCurve; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float DefaultCurveOffset; // 0xd4(0x04)
	struct TArray<struct UHoudiniInputObject*> LandscapeInputObjects; // 0xd8(0x10)
	bool bLandscapeHasExportTypeChanged; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct UHoudiniInputObject*> WorldInputObjects; // 0xf0(0x10)
	struct TArray<struct AActor*> WorldInputBoundSelectorObjects; // 0x100(0x10)
	bool bIsWorldInputBoundSelector; // 0x110(0x01)
	bool bWorldInputBoundSelectorAutoUpdate; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	float UnrealSplineResolution; // 0x114(0x04)
	struct TArray<struct UHoudiniInputObject*> SkeletalInputObjects; // 0x118(0x10)
	struct TArray<struct UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs; // 0x128(0x10)
	struct TArray<struct UHoudiniInputObject*> LastUndoDeletedInputs; // 0x138(0x10)
	bool bUpdateInputLandscape; // 0x148(0x01)
	enum class EHoudiniLandscapeExportType LandscapeExportType; // 0x149(0x01)
	bool bLandscapeExportSelectionOnly; // 0x14a(0x01)
	bool bLandscapeAutoSelectComponent; // 0x14b(0x01)
	bool bLandscapeExportMaterials; // 0x14c(0x01)
	bool bLandscapeExportLighting; // 0x14d(0x01)
	bool bLandscapeExportNormalizedUVs; // 0x14e(0x01)
	bool bLandscapeExportTileUVs; // 0x14f(0x01)
	bool bCanDeleteHoudiniNodes; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class HoudiniEngineRuntime.HoudiniInputObject
// Size: 0xb0 (Inherited: 0x28)
struct UHoudiniInputObject : UObject {
	struct TSoftObjectPtr<struct UObject> InputObject; // 0x28(0x28)
	struct FTransform Transform; // 0x50(0x30)
	enum class EHoudiniInputObjectType Type; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t InputNodeId; // 0x84(0x04)
	int32_t InputObjectNodeId; // 0x88(0x04)
	struct FGuid Guid; // 0x8c(0x10)
	bool bHasChanged; // 0x9c(0x01)
	bool bNeedsToTriggerUpdate; // 0x9d(0x01)
	bool bTransformChanged; // 0x9e(0x01)
	bool bImportAsReference; // 0x9f(0x01)
	bool bCanDeleteHoudiniNodes; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
// Size: 0xc0 (Inherited: 0xb0)
struct UHoudiniInputStaticMesh : UHoudiniInputObject {
	struct TArray<struct UHoudiniInputStaticMesh*> BlueprintStaticMeshes; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
// Size: 0xb0 (Inherited: 0xb0)
struct UHoudiniInputSkeletalMesh : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UHoudiniInputSceneComponent : UHoudiniInputObject {
	struct FTransform ActorTransform; // 0xb0(0x30)
};

// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
// Size: 0x120 (Inherited: 0xe0)
struct UHoudiniInputMeshComponent : UHoudiniInputSceneComponent {
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0xe0(0x28)
	struct TArray<struct FString> MeshComponentsMaterials; // 0x108(0x10)
	char pad_118[0x8]; // 0x118(0x08)
};

// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
// Size: 0x130 (Inherited: 0x120)
struct UHoudiniInputInstancedMeshComponent : UHoudiniInputMeshComponent {
	struct TArray<struct FTransform> InstanceTransforms; // 0x118(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
// Size: 0x100 (Inherited: 0xe0)
struct UHoudiniInputSplineComponent : UHoudiniInputSceneComponent {
	int32_t NumberOfSplineControlPoints; // 0xe0(0x04)
	float SplineLength; // 0xe4(0x04)
	float SplineResolution; // 0xe8(0x04)
	bool SplineClosed; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct TArray<struct FTransform> SplineControlPoints; // 0xf0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UHoudiniInputHoudiniSplineComponent : UHoudiniInputObject {
	enum class EHoudiniCurveType CurveType; // 0xa8(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0xa9(0x01)
	bool Reversed; // 0xaa(0x01)
	struct UHoudiniSplineComponent* CachedComponent; // 0xb0(0x08)
	char pad_BB[0x5]; // 0xbb(0x05)
};

// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
// Size: 0x100 (Inherited: 0xe0)
struct UHoudiniInputCameraComponent : UHoudiniInputSceneComponent {
	char pad_E0[0x20]; // 0xe0(0x20)
};

// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
// Size: 0xb0 (Inherited: 0xb0)
struct UHoudiniInputHoudiniAsset : UHoudiniInputObject {
	int32_t AssetOutputIndex; // 0xa8(0x04)
};

// Class HoudiniEngineRuntime.HoudiniInputActor
// Size: 0xc0 (Inherited: 0xb0)
struct UHoudiniInputActor : UHoudiniInputObject {
	struct TArray<struct UHoudiniInputSceneComponent*> ActorComponents; // 0xa8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputLandscape
// Size: 0xf0 (Inherited: 0xc0)
struct UHoudiniInputLandscape : UHoudiniInputActor {
	struct FTransform CachedInputLandscapeTraqnsform; // 0xc0(0x30)
};

// Class HoudiniEngineRuntime.HoudiniInputBrush
// Size: 0xe0 (Inherited: 0xc0)
struct UHoudiniInputBrush : UHoudiniInputActor {
	struct TArray<struct FHoudiniBrushInfo> BrushesInfo; // 0xb8(0x10)
	struct UModel* CombinedModel; // 0xc8(0x08)
	bool bIgnoreInputObject; // 0xd0(0x01)
	enum class EBrushType CachedInputBrushType; // 0xd1(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
};

// Class HoudiniEngineRuntime.HoudiniInputDataTable
// Size: 0xb0 (Inherited: 0xb0)
struct UHoudiniInputDataTable : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// Size: 0x210 (Inherited: 0x200)
struct UHoudiniInstancedActorComponent : USceneComponent {
	struct UObject* InstancedObject; // 0x1f8(0x08)
	struct TArray<struct AActor*> InstancedActors; // 0x200(0x10)
};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// Size: 0x220 (Inherited: 0x200)
struct UHoudiniMeshSplitInstancerComponent : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x1f8(0x10)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x208(0x10)
	struct UStaticMesh* InstancedMesh; // 0x218(0x08)
};

// Class HoudiniEngineRuntime.HoudiniLandscapePtr
// Size: 0x58 (Inherited: 0x28)
struct UHoudiniLandscapePtr : UObject {
	struct TSoftObjectPtr<struct ALandscapeProxy> LandscapeSoftPtr; // 0x28(0x28)
	enum class EHoudiniLandscapeOutputBakeType BakeType; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class HoudiniEngineRuntime.HoudiniOutput
// Size: 0x1b0 (Inherited: 0x28)
struct UHoudiniOutput : UObject {
	enum class EHoudiniOutputType Type; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FHoudiniGeoPartObject> HoudiniGeoPartObjects; // 0x30(0x10)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects; // 0x40(0x50)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs; // 0x90(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> AssignementMaterials; // 0xe0(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> ReplacementMaterials; // 0x130(0x50)
	char pad_180[0x4]; // 0x180(0x04)
	bool bLandscapeWorldComposition; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct TArray<struct AActor*> HoudiniCreatedSocketActors; // 0x188(0x10)
	struct TArray<struct AActor*> HoudiniAttachedSocketActors; // 0x198(0x10)
	bool bIsEditableNode; // 0x1a8(0x01)
	bool bHasEditableNodeBuilt; // 0x1a9(0x01)
	bool bIsUpdating; // 0x1aa(0x01)
	bool bCanDeleteHoudiniNodes; // 0x1ab(0x01)
	char pad_1AC[0x4]; // 0x1ac(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameter
// Size: 0x108 (Inherited: 0x28)
struct UHoudiniParameter : UObject {
	struct FString Name; // 0x28(0x10)
	struct FString Label; // 0x38(0x10)
	enum class EHoudiniParameterType ParmType; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	uint32_t TupleSize; // 0x4c(0x04)
	int32_t NodeId; // 0x50(0x04)
	int32_t ParmId; // 0x54(0x04)
	int32_t ParentParmId; // 0x58(0x04)
	int32_t ChildIndex; // 0x5c(0x04)
	bool bIsVisible; // 0x60(0x01)
	bool bIsDisabled; // 0x61(0x01)
	bool bHasChanged; // 0x62(0x01)
	bool bNeedsToTriggerUpdate; // 0x63(0x01)
	bool bIsDefault; // 0x64(0x01)
	bool bIsSpare; // 0x65(0x01)
	bool bJoinNext; // 0x66(0x01)
	bool bIsChildOfMultiParm; // 0x67(0x01)
	bool bIsDirectChildOfMultiParm; // 0x68(0x01)
	bool bPendingRevertToDefault; // 0x69(0x01)
	char pad_6A[0x6]; // 0x6a(0x06)
	struct TArray<int32_t> TuplePendingRevertToDefault; // 0x70(0x10)
	struct FString Help; // 0x80(0x10)
	uint32_t TagCount; // 0x90(0x04)
	int32_t ValueIndex; // 0x94(0x04)
	bool bHasExpression; // 0x98(0x01)
	bool bShowExpression; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString ParamExpression; // 0xa0(0x10)
	struct TMap<struct FString, struct FString> Tags; // 0xb0(0x50)
	bool bAutoUpdate; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterButton
// Size: 0x108 (Inherited: 0x108)
struct UHoudiniParameterButton : UHoudiniParameter {
};

// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
// Size: 0x130 (Inherited: 0x108)
struct UHoudiniParameterButtonStrip : UHoudiniParameter {
	int32_t Count; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct FString> Labels; // 0x110(0x10)
	struct TArray<int32_t> Values; // 0x120(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterChoice
// Size: 0x168 (Inherited: 0x108)
struct UHoudiniParameterChoice : UHoudiniParameter {
	int32_t IntValue; // 0x108(0x04)
	int32_t DefaultIntValue; // 0x10c(0x04)
	struct FString StringValue; // 0x110(0x10)
	struct FString DefaultStringValue; // 0x120(0x10)
	struct TArray<struct FString> StringChoiceValues; // 0x130(0x10)
	struct TArray<struct FString> StringChoiceLabels; // 0x140(0x10)
	char pad_150[0x10]; // 0x150(0x10)
	bool bIsChildOfRamp; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterColor
// Size: 0x130 (Inherited: 0x108)
struct UHoudiniParameterColor : UHoudiniParameter {
	struct FLinearColor Color; // 0x108(0x10)
	struct FLinearColor DefaultColor; // 0x118(0x10)
	bool bIsChildOfRamp; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFile
// Size: 0x140 (Inherited: 0x108)
struct UHoudiniParameterFile : UHoudiniParameter {
	struct TArray<struct FString> Values; // 0x108(0x10)
	struct TArray<struct FString> DefaultValues; // 0x118(0x10)
	struct FString Filters; // 0x128(0x10)
	bool bIsReadOnly; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFloat
// Size: 0x158 (Inherited: 0x108)
struct UHoudiniParameterFloat : UHoudiniParameter {
	struct TArray<float> Values; // 0x108(0x10)
	struct TArray<float> DefaultValues; // 0x118(0x10)
	struct FString Unit; // 0x128(0x10)
	bool bNoSwap; // 0x138(0x01)
	bool bHasMin; // 0x139(0x01)
	bool bHasMax; // 0x13a(0x01)
	bool bHasUIMin; // 0x13b(0x01)
	bool bHasUIMax; // 0x13c(0x01)
	bool bIsLogarithmic; // 0x13d(0x01)
	char pad_13E[0x2]; // 0x13e(0x02)
	float Min; // 0x140(0x04)
	float Max; // 0x144(0x04)
	float UIMin; // 0x148(0x04)
	float UIMax; // 0x14c(0x04)
	bool bIsChildOfRamp; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFolder
// Size: 0x118 (Inherited: 0x108)
struct UHoudiniParameterFolder : UHoudiniParameter {
	enum class EHoudiniFolderParameterType FolderType; // 0x108(0x01)
	bool bExpanded; // 0x109(0x01)
	bool bChosen; // 0x10a(0x01)
	char pad_10B[0x1]; // 0x10b(0x01)
	int32_t ChildCounter; // 0x10c(0x04)
	bool bIsContentShown; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFolderList
// Size: 0x120 (Inherited: 0x108)
struct UHoudiniParameterFolderList : UHoudiniParameter {
	bool bIsTabMenu; // 0x108(0x01)
	bool bIsTabsShown; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct TArray<struct UHoudiniParameterFolder*> TabFolders; // 0x110(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterInt
// Size: 0x150 (Inherited: 0x108)
struct UHoudiniParameterInt : UHoudiniParameter {
	struct TArray<int32_t> Values; // 0x108(0x10)
	struct TArray<int32_t> DefaultValues; // 0x118(0x10)
	struct FString Unit; // 0x128(0x10)
	bool bHasMin; // 0x138(0x01)
	bool bHasMax; // 0x139(0x01)
	bool bHasUIMin; // 0x13a(0x01)
	bool bHasUIMax; // 0x13b(0x01)
	bool bIsLogarithmic; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	int32_t Min; // 0x140(0x04)
	int32_t Max; // 0x144(0x04)
	int32_t UIMin; // 0x148(0x04)
	int32_t UIMax; // 0x14c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameterLabel
// Size: 0x118 (Inherited: 0x108)
struct UHoudiniParameterLabel : UHoudiniParameter {
	struct TArray<struct FString> LabelStrings; // 0x108(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
// Size: 0x150 (Inherited: 0x108)
struct UHoudiniParameterMultiParm : UHoudiniParameter {
	bool bIsShown; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32_t Value; // 0x10c(0x04)
	struct FString TemplateName; // 0x110(0x10)
	int32_t MultiparmValue; // 0x120(0x04)
	uint32_t MultiParmInstanceNum; // 0x124(0x04)
	uint32_t MultiParmInstanceLength; // 0x128(0x04)
	uint32_t MultiParmInstanceCount; // 0x12c(0x04)
	uint32_t InstanceStartOffset; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray; // 0x138(0x10)
	int32_t DefaultInstanceCount; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
// Size: 0x110 (Inherited: 0x108)
struct UHoudiniParameterOperatorPath : UHoudiniParameter {
	struct TWeakObjectPtr<struct UHoudiniInput> HoudiniInput; // 0x108(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
// Size: 0x50 (Inherited: 0x28)
struct UHoudiniParameterRampModificationEvent : UObject {
	bool bIsInsertEvent; // 0x28(0x01)
	bool bIsFloatRamp; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t DeleteInstanceIndex; // 0x2c(0x04)
	float InsertPosition; // 0x30(0x04)
	float InsertFloat; // 0x34(0x04)
	struct FLinearColor InsertColor; // 0x38(0x10)
	enum class EHoudiniRampInterpolationType InsertInterpolation; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
// Size: 0x50 (Inherited: 0x28)
struct UHoudiniParameterRampFloatPoint : UObject {
	float Position; // 0x28(0x04)
	float Value; // 0x2c(0x04)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t InstanceIndex; // 0x34(0x04)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x38(0x08)
	struct UHoudiniParameterFloat* ValueParentParm; // 0x40(0x08)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x48(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
// Size: 0x60 (Inherited: 0x28)
struct UHoudiniParameterRampColorPoint : UObject {
	float Position; // 0x28(0x04)
	struct FLinearColor Value; // 0x2c(0x10)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	int32_t InstanceIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x48(0x08)
	struct UHoudiniParameterColor* ValueParentParm; // 0x50(0x08)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x58(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
// Size: 0x1b8 (Inherited: 0x150)
struct UHoudiniParameterRampFloat : UHoudiniParameterMultiParm {
	struct TArray<struct UHoudiniParameterRampFloatPoint*> Points; // 0x150(0x10)
	struct TArray<struct UHoudiniParameterRampFloatPoint*> CachedPoints; // 0x160(0x10)
	struct TArray<float> DefaultPositions; // 0x170(0x10)
	struct TArray<float> DefaultValues; // 0x180(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x190(0x10)
	int32_t NumDefaultPoints; // 0x1a0(0x04)
	bool bCaching; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1a8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampColor
// Size: 0x1c0 (Inherited: 0x150)
struct UHoudiniParameterRampColor : UHoudiniParameterMultiParm {
	struct TArray<struct UHoudiniParameterRampColorPoint*> Points; // 0x150(0x10)
	bool bCaching; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct TArray<struct UHoudiniParameterRampColorPoint*> CachedPoints; // 0x168(0x10)
	struct TArray<float> DefaultPositions; // 0x178(0x10)
	struct TArray<struct FLinearColor> DefaultValues; // 0x188(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x198(0x10)
	int32_t NumDefaultPoints; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1b0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterSeparator
// Size: 0x108 (Inherited: 0x108)
struct UHoudiniParameterSeparator : UHoudiniParameter {
};

// Class HoudiniEngineRuntime.HoudiniParameterString
// Size: 0x140 (Inherited: 0x108)
struct UHoudiniParameterString : UHoudiniParameter {
	struct TArray<struct FString> Values; // 0x108(0x10)
	struct TArray<struct FString> DefaultValues; // 0x118(0x10)
	struct TArray<struct UObject*> ChosenAssets; // 0x128(0x10)
	bool bIsAssetRef; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterToggle
// Size: 0x128 (Inherited: 0x108)
struct UHoudiniParameterToggle : UHoudiniParameter {
	struct TArray<int32_t> Values; // 0x108(0x10)
	struct TArray<int32_t> DefaultValues; // 0x118(0x10)
};

// Class HoudiniEngineRuntime.TOPNode
// Size: 0x3d0 (Inherited: 0x28)
struct UTOPNode : UObject {
	int32_t NodeId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString NodeName; // 0x30(0x10)
	struct FString NodePath; // 0x40(0x10)
	struct FString ParentName; // 0x50(0x10)
	struct UObject* WorkResultParent; // 0x60(0x08)
	struct TArray<struct FTOPWorkResult> WorkResult; // 0x68(0x10)
	bool bHidden; // 0x78(0x01)
	bool bAutoLoad; // 0x79(0x01)
	enum class EPDGNodeState NodeState; // 0x7a(0x01)
	bool bCachedHaveNotLoadedWorkResults; // 0x7b(0x01)
	bool bCachedHaveLoadedWorkResults; // 0x7c(0x01)
	bool bHasChildNodes; // 0x7d(0x01)
	char pad_7E[0x82]; // 0x7e(0x82)
	bool bShow; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TMap<struct FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs; // 0x108(0x50)
	struct FWorkItemTally WorkItemTally; // 0x158(0x238)
	struct FAggregatedWorkItemTally AggregatedWorkItemTally; // 0x390(0x28)
	struct FOutputActorOwner OutputActorOwner; // 0x3b8(0x10)
	char pad_3C8[0x8]; // 0x3c8(0x08)
};

// Class HoudiniEngineRuntime.TOPNetwork
// Size: 0x80 (Inherited: 0x28)
struct UTOPNetwork : UObject {
	int32_t NodeId; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString NodeName; // 0x30(0x10)
	struct FString NodePath; // 0x40(0x10)
	struct TArray<struct UTOPNode*> AllTOPNodes; // 0x50(0x10)
	int32_t SelectedTOPIndex; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString ParentName; // 0x68(0x10)
	bool bShowResults; // 0x78(0x01)
	bool bAutoLoadResults; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
// Size: 0x100 (Inherited: 0x28)
struct UHoudiniPDGAssetLink : UObject {
	struct FString AssetName; // 0x28(0x10)
	struct FString AssetNodePath; // 0x38(0x10)
	int32_t AssetId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct UTOPNetwork*> AllTOPNetworks; // 0x50(0x10)
	int32_t SelectedTOPNetworkIndex; // 0x60(0x04)
	enum class EPDGLinkState LinkState; // 0x64(0x01)
	bool bAutoCook; // 0x65(0x01)
	bool bUseTOPNodeFilter; // 0x66(0x01)
	bool bUseTOPOutputFilter; // 0x67(0x01)
	struct FString TOPNodeFilter; // 0x68(0x10)
	struct FString TOPOutputFilter; // 0x78(0x10)
	int32_t NumWorkitems; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FAggregatedWorkItemTally WorkItemTally; // 0x90(0x28)
	struct FString OutputCachePath; // 0xb8(0x10)
	bool bNeedsUIRefresh; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct AActor* OutputParentActor; // 0xd0(0x08)
	struct FDirectoryPath BakeFolder; // 0xd8(0x10)
	char pad_E8[0x18]; // 0xe8(0x18)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x2e8 (Inherited: 0x28)
struct UHoudiniRuntimeSettings : UObject {
	enum class EHoudiniRuntimeSettingsSessionType SessionType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FString ServerHost; // 0x30(0x10)
	int32_t ServerPort; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ServerPipeName; // 0x48(0x10)
	bool bStartAutomaticServer; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float AutomaticServerTimeout; // 0x5c(0x04)
	bool bSyncWithHoudiniCook; // 0x60(0x01)
	bool bCookUsingHoudiniTime; // 0x61(0x01)
	bool bSyncViewport; // 0x62(0x01)
	bool bSyncHoudiniViewport; // 0x63(0x01)
	bool bSyncUnrealViewport; // 0x64(0x01)
	bool bShowMultiAssetDialog; // 0x65(0x01)
	bool bPreferHdaMemoryCopyOverHdaSourceFile; // 0x66(0x01)
	bool bPauseCookingOnStart; // 0x67(0x01)
	bool bDisplaySlateCookingNotifications; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString DefaultTemporaryCookFolder; // 0x70(0x10)
	struct FString DefaultBakeFolder; // 0x80(0x10)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x90(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x91(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x92(0x01)
	char pad_93[0x1]; // 0x93(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x94(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0x98(0x04)
	float MarshallingSplineResolution; // 0x9c(0x04)
	bool bEnableProxyStaticMesh; // 0xa0(0x01)
	bool bShowDefaultMesh; // 0xa1(0x01)
	bool bEnableProxyStaticMeshRefinementByTimer; // 0xa2(0x01)
	char pad_A3[0x1]; // 0xa3(0x01)
	float ProxyMeshAutoRefineTimeoutSeconds; // 0xa4(0x04)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorld; // 0xa8(0x01)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIE; // 0xa9(0x01)
	char pad_AA[0x2]; // 0xaa(0x02)
	char bDoubleSidedGeometry : 1; // 0xac(0x01)
	char pad_AC_1 : 7; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	struct UPhysicalMaterial* PhysMaterial; // 0xb0(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0xb8(0x158)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32_t LightMapResolution; // 0x214(0x04)
	float LpvBiasMultiplier; // 0x218(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x21c(0x04)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x220(0x10)
	int32_t LightMapCoordinateIndex; // 0x230(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x234(0x01)
	char pad_234_1 : 7; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	float StreamingDistanceMultiplier; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UFoliageType_InstancedStaticMesh* FoliageDefaultSettings; // 0x240(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x248(0x10)
	bool bUseFullPrecisionUVs; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int32_t SrcLightmapIndex; // 0x25c(0x04)
	int32_t DstLightmapIndex; // 0x260(0x04)
	int32_t MinLightmapResolution; // 0x264(0x04)
	bool bRemoveDegenerates; // 0x268(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag; // 0x269(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag; // 0x26a(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag; // 0x26b(0x01)
	bool bUseMikkTSpace; // 0x26c(0x01)
	bool bBuildAdjacencyBuffer; // 0x26d(0x01)
	char bComputeWeightedNormals : 1; // 0x26e(0x01)
	char bBuildReversedIndexBuffer : 1; // 0x26e(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x26e(0x01)
	char pad_26E_3 : 5; // 0x26e(0x01)
	char pad_26F[0x1]; // 0x26f(0x01)
	float DistanceFieldResolutionScale; // 0x270(0x04)
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x274(0x01)
	char bSupportFaceRemap : 1; // 0x274(0x01)
	char pad_274_2 : 6; // 0x274(0x01)
	bool bEnableBackwardCompatibility; // 0x275(0x01)
	bool bAutomaticLegacyHDARebuild; // 0x276(0x01)
	bool bUseCustomHoudiniLocation; // 0x277(0x01)
	struct FDirectoryPath CustomHoudiniLocation; // 0x278(0x10)
	int32_t CookingThreadStackSize; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x290(0x10)
	struct FString OtlSearchPath; // 0x2a0(0x10)
	struct FString DsoSearchPath; // 0x2b0(0x10)
	struct FString ImageDsoSearchPath; // 0x2c0(0x10)
	struct FString AudioDsoSearchPath; // 0x2d0(0x10)
	bool bPDGAsyncCommandletImportEnabled; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)
};

// Class HoudiniEngineRuntime.HoudiniSplineComponent
// Size: 0x480 (Inherited: 0x200)
struct UHoudiniSplineComponent : USceneComponent {
	struct TArray<struct FTransform> CurvePoints; // 0x200(0x10)
	struct TArray<struct FVector> DisplayPoints; // 0x210(0x10)
	struct TArray<int32_t> DisplayPointIndexDivider; // 0x220(0x10)
	struct FString HoudiniSplineName; // 0x230(0x10)
	bool bClosed; // 0x240(0x01)
	bool bReversed; // 0x241(0x01)
	bool bIsHoudiniSplineVisible; // 0x242(0x01)
	enum class EHoudiniCurveType CurveType; // 0x243(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0x244(0x01)
	bool bIsOutputCurve; // 0x245(0x01)
	bool bCookOnCurveChanged; // 0x246(0x01)
	char pad_247[0x219]; // 0x247(0x219)
	bool bHasChanged; // 0x460(0x01)
	bool bNeedsToTriggerUpdate; // 0x461(0x01)
	bool bIsInputCurve; // 0x462(0x01)
	bool bIsEditableOutputCurve; // 0x463(0x01)
	int32_t NodeId; // 0x464(0x04)
	struct FString PartName; // 0x468(0x10)
	char pad_478[0x8]; // 0x478(0x08)
};

// Class HoudiniEngineRuntime.HoudiniStaticMesh
// Size: 0xc8 (Inherited: 0x28)
struct UHoudiniStaticMesh : UObject {
	bool bHasNormals; // 0x28(0x01)
	bool bHasTangents; // 0x29(0x01)
	bool bHasColors; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	uint32_t NumUVLayers; // 0x2c(0x04)
	bool bHasPerFaceMaterials; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FVector> VertexPositions; // 0x38(0x10)
	struct TArray<struct FIntVector> TriangleIndices; // 0x48(0x10)
	struct TArray<struct FColor> VertexInstanceColors; // 0x58(0x10)
	struct TArray<struct FVector> VertexInstanceNormals; // 0x68(0x10)
	struct TArray<struct FVector> VertexInstanceUTangents; // 0x78(0x10)
	struct TArray<struct FVector> VertexInstanceVTangents; // 0x88(0x10)
	struct TArray<struct FVector2D> VertexInstanceUVs; // 0x98(0x10)
	struct TArray<int32_t> MaterialIDsPerTriangle; // 0xa8(0x10)
	struct TArray<struct FStaticMaterial> StaticMaterials; // 0xb8(0x10)

	void SetVertexPosition(uint32_t InVertexIndex, struct FVector InPosition); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xa44da0
	void SetTriangleVertexVTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector InVTangent); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xa44c80
	void SetTriangleVertexUV(uint32_t InTriangleIndex, char InTriangleVertexIndex, char InUVLayer, struct FVector2D InUV); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xa44b20
	void SetTriangleVertexUTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector InUTangent); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xa44a00
	void SetTriangleVertexNormal(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector InNormal); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xa448e0
	void SetTriangleVertexIndices(uint32_t InTriangleIndex, struct FIntVector InTriangleVertexIndices); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xa44810
	void SetTriangleVertexColor(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FColor InColor); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0xa446f0
	void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID // (Final|Native|Public) // @ game+0xa44620
	void SetStaticMaterial(uint32_t InMaterialIndex, struct FStaticMaterial InStaticMaterial); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial // (Final|Native|Public|HasOutParms) // @ game+0xa44510
	void SetNumUVLayers(uint32_t InNumUVLayers); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers // (Final|Native|Public) // @ game+0xa44480
	void SetNumStaticMaterials(uint32_t InNumStaticMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials // (Final|Native|Public) // @ game+0xa443f0
	void SetHasTangents(bool bInHasTangents); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents // (Final|Native|Public) // @ game+0xa44240
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials // (Final|Native|Public) // @ game+0xa441b0
	void SetHasNormals(bool bInHasNormals); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals // (Final|Native|Public) // @ game+0xa44120
	void SetHasColors(bool bInHasColors); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors // (Final|Native|Public) // @ game+0xa44090
	void Optimize(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize // (Final|Native|Public) // @ game+0xa44070
	void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize // (Final|Native|Public) // @ game+0xa43dc0
	bool HasTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents // (Final|Native|Public|Const) // @ game+0xa43da0
	bool HasPerFaceMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials // (Final|Native|Public|Const) // @ game+0xa43d80
	bool HasNormals(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals // (Final|Native|Public|Const) // @ game+0xa43d60
	bool HasColors(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors // (Final|Native|Public|Const) // @ game+0xa43d40
	struct TArray<struct FVector> GetVertexPositions(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions // (Final|Native|Public|Const) // @ game+0xa43d10
	struct TArray<struct FVector> GetVertexInstanceVTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents // (Final|Native|Public|Const) // @ game+0xa43ce0
	struct TArray<struct FVector2D> GetVertexInstanceUVs(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs // (Final|Native|Public|Const) // @ game+0xa43c50
	struct TArray<struct FVector> GetVertexInstanceUTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents // (Final|Native|Public|Const) // @ game+0xa43c20
	struct TArray<struct FVector> GetVertexInstanceNormals(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals // (Final|Native|Public|Const) // @ game+0xa43bf0
	struct TArray<struct FColor> GetVertexInstanceColors(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors // (Final|Native|Public|Const) // @ game+0xa43b60
	struct TArray<struct FIntVector> GetTriangleIndices(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices // (Final|Native|Public|Const) // @ game+0xa43ad0
	struct TArray<struct FStaticMaterial> GetStaticMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials // (Final|Native|Public|Const) // @ game+0xa43a40
	uint32_t GetNumVertices(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices // (Final|Native|Public|Const) // @ game+0xa43a20
	uint32_t GetNumVertexInstances(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances // (Final|Native|Public|Const) // @ game+0xa43a00
	uint32_t GetNumUVLayers(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers // (Final|Native|Public|Const) // @ game+0xa439e0
	uint32_t GetNumTriangles(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles // (Final|Native|Public|Const) // @ game+0xa439c0
	uint32_t GetNumStaticMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials // (Final|Native|Public|Const) // @ game+0xa439a0
	int32_t GetMaterialIndex(struct FName InMaterialSlotName); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex // (Final|Native|Public|Const) // @ game+0xa438e0
	struct TArray<int32_t> GetMaterialIDsPerTriangle(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle // (Final|Native|Public|Const) // @ game+0xa438b0
	struct UMaterialInterface* GetMaterial(int32_t InMaterialIndex); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial // (Final|Native|Public) // @ game+0xa43810
	struct FBox CalcBounds(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds // (Final|Native|Public|HasDefaults|Const) // @ game+0xa437c0
	uint32_t AddStaticMaterial(struct FStaticMaterial InStaticMaterial); // Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial // (Final|Native|Public|HasOutParms) // @ game+0xa436b0
};

// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
// Size: 0x490 (Inherited: 0x470)
struct UHoudiniStaticMeshComponent : UMeshComponent {
	struct UHoudiniStaticMesh* Mesh; // 0x468(0x08)
	struct FBox LocalBounds; // 0x470(0x1c)
	bool bHoudiniIconVisible; // 0x48c(0x01)

	void SetMesh(struct UHoudiniStaticMesh* InMesh); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh // (Final|Native|Public) // @ game+0xa44360
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible // (Final|Native|Public) // @ game+0xa442d0
	void NotifyMeshUpdated(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated // (Final|Native|Public) // @ game+0xa44050
	bool IsHoudiniIconVisible(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible // (Final|Native|Public|Const) // @ game+0xa44030
	struct UHoudiniStaticMesh* GetMesh(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh // (Final|Native|Public) // @ game+0xa43980
};

