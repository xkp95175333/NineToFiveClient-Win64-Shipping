// Enum HoudiniEngineRuntime.EHoudiniStaticMeshMethod
enum class EHoudiniStaticMeshMethod : uint8 {
	RawMesh,
	FMeshDescription,
	UHoudiniStaticMesh,
	EHoudiniStaticMeshMethod_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniAssetStateResult
enum class EHoudiniAssetStateResult : uint8 {
	None,
	Working,
	Success,
	FinishedWithError,
	FinishedWithFatalError,
	Aborted,
	EHoudiniAssetStateResult_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniAssetState
enum class EHoudiniAssetState : uint8 {
	NeedInstantiation,
	PreInstantiation,
	Instantiating,
	PreCook,
	Cooking,
	PostCook,
	PreProcess,
	Processing,
	None,
	NeedRebuild,
	NeedDelete,
	Deleting,
	ProcessTemplate,
	EHoudiniAssetState_MAX,
};

// Enum HoudiniEngineRuntime.EAttribOwner
enum class EAttribOwner : uint8 {
	Invalid,
	Vertex,
	Point,
	Prim,
	Detail,
	EAttribOwner_MAX,
};

// Enum HoudiniEngineRuntime.EAttribStorageType
enum class EAttribStorageType : uint8 {
	Invalid,
	INT,
	INT64,
	FLOAT,
	FLOAT64,
	STRING,
	EAttribStorageType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniCurveMethod
enum class EHoudiniCurveMethod : uint8 {
	Invalid,
	CVs,
	Breakpoints,
	Freehand,
	EHoudiniCurveMethod_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniCurveType
enum class EHoudiniCurveType : uint8 {
	Invalid,
	Polygon,
	Nurbs,
	Bezier,
	Points,
	EHoudiniCurveType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniInstancerType
enum class EHoudiniInstancerType : uint8 {
	Invalid,
	ObjectInstancer,
	PackedPrimitive,
	AttributeInstancer,
	OldSchoolAttributeInstancer,
	EHoudiniInstancerType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniPartType
enum class EHoudiniPartType : uint8 {
	Invalid,
	Mesh,
	Instancer,
	Curve,
	Volume,
	EHoudiniPartType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniGeoType
enum class EHoudiniGeoType : uint8 {
	Invalid,
	Default,
	Intermediate,
	Input,
	Curve,
	EHoudiniGeoType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8 {
	Xform,
	Bounder,
	Unsupported,
	EHoudiniHandleType_MAX,
};

// Enum HoudiniEngineRuntime.EXformParameter
enum class EXformParameter : uint8 {
	TX,
	TY,
	TZ,
	RX,
	RY,
	RZ,
	SX,
	SY,
	SZ,
	COUNT,
	EXformParameter_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniInputObjectType
enum class EHoudiniInputObjectType : uint8 {
	Invalid,
	Object,
	StaticMesh,
	SkeletalMesh,
	SceneComponent,
	StaticMeshComponent,
	InstancedStaticMeshComponent,
	SplineComponent,
	HoudiniSplineComponent,
	HoudiniAssetComponent,
	Actor,
	Landscape,
	Brush,
	CameraComponent,
	DataTable,
	HoudiniAssetActor,
	EHoudiniInputObjectType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniLandscapeExportType
enum class EHoudiniLandscapeExportType : uint8 {
	Heightfield,
	Mesh,
	Points,
	EHoudiniLandscapeExportType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniXformType
enum class EHoudiniXformType : uint8 {
	None,
	IntoThisObject,
	Auto,
	EHoudiniXformType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniInputType
enum class EHoudiniInputType : uint8 {
	Invalid,
	Geometry,
	Curve,
	Asset,
	Landscape,
	World,
	Skeletal,
	EHoudiniInputType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
enum class EHoudiniLandscapeOutputBakeType : uint8 {
	Detachment,
	BakeToImage,
	BakeToWorld,
	InValid,
	EHoudiniLandscapeOutputBakeType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniCurveOutputType
enum class EHoudiniCurveOutputType : uint8 {
	UnrealSpline,
	HoudiniSpline,
	EHoudiniCurveOutputType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniOutputType
enum class EHoudiniOutputType : uint8 {
	Invalid,
	Mesh,
	Instancer,
	Landscape,
	Curve,
	Skeletal,
	EHoudiniOutputType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniRampInterpolationType
enum class EHoudiniRampInterpolationType : uint8 {
	InValid,
	CONSTANT,
	LINEAR,
	CATMULL_ROM,
	MONOTONE_CUBIC,
	BEZIER,
	BSPLINE,
	HERMITE,
	EHoudiniRampInterpolationType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniParameterType
enum class EHoudiniParameterType : uint8 {
	Invalid,
	Button,
	ButtonStrip,
	Color,
	ColorRamp,
	File,
	FileDir,
	FileGeo,
	FileImage,
	Float,
	FloatRamp,
	Folder,
	FolderList,
	Input,
	Int,
	IntChoice,
	Label,
	MultiParm,
	Separator,
	String,
	StringChoice,
	StringAssetRef,
	Toggle,
	EHoudiniParameterType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniFolderParameterType
enum class EHoudiniFolderParameterType : uint8 {
	Invalid,
	Collapsible,
	Simple,
	Tabs,
	Radio,
	Other,
	EHoudiniFolderParameterType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniMultiParmModificationType
enum class EHoudiniMultiParmModificationType : uint8 {
	None,
	Inserted,
	Removed,
	Modified,
	EHoudiniMultiParmModificationType_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
enum class EHoudiniRampPointConstructStatus : uint8 {
	None,
	INITIALIZED,
	POSITION_INSERTED,
	VALUE_INSERTED,
	INTERPTYPE_INSERTED,
	EHoudiniRampPointConstructStatus_MAX,
};

// Enum HoudiniEngineRuntime.EPDGWorkResultState
enum class EPDGWorkResultState : uint8 {
	None,
	ToLoad,
	Loading,
	Loaded,
	ToDelete,
	Deleting,
	Deleted,
	NotLoaded,
	EPDGWorkResultState_MAX,
};

// Enum HoudiniEngineRuntime.EPDGNodeState
enum class EPDGNodeState : uint8 {
	None,
	Dirtied,
	Dirtying,
	Cooking,
	Cook_Complete,
	Cook_Failed,
	EPDGNodeState_MAX,
};

// Enum HoudiniEngineRuntime.EPDGLinkState
enum class EPDGLinkState : uint8 {
	Inactive,
	Linking,
	Linked,
	Error_Not_Linked,
	EPDGLinkState_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8 {
	HRSRF_Always,
	HRSRF_OnlyIfMissing,
	HRSRF_Never,
	HRSRF_MAX,
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8 {
	HRSST_InProcess,
	HRSST_Socket,
	HRSST_NamedPipe,
	HRSST_None,
	HRSST_MAX,
};

// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
// Size: 0x120 (Inherited: 0x68)
struct FHoudiniAssetBlueprintInstanceData : FActorComponentInstanceData {
	struct UHoudiniAsset* HoudiniAsset; // 0x68(0x08)
	int32_t AssetId; // 0x70(0x04)
	enum class EHoudiniAssetState AssetState; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	uint32_t SubAssetIndex; // 0x78(0x04)
	uint32_t AssetCookCount; // 0x7c(0x04)
	bool bHasBeenLoaded; // 0x80(0x01)
	bool bHasBeenDuplicated; // 0x81(0x01)
	bool bPendingDelete; // 0x82(0x01)
	bool bRecookRequested; // 0x83(0x01)
	bool bRebuildRequested; // 0x84(0x01)
	bool bEnableCooking; // 0x85(0x01)
	bool bForceNeedUpdate; // 0x86(0x01)
	bool bLastCookSuccess; // 0x87(0x01)
	struct FGuid ComponentGUID; // 0x88(0x10)
	struct FGuid HapiGUID; // 0x98(0x10)
	bool bRegisteredComponentTemplate; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString SourceName; // 0xb0(0x10)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs; // 0xc0(0x50)
	struct TArray<struct UHoudiniInput*> Inputs; // 0x110(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
// Size: 0x40 (Inherited: 0x00)
struct FHoudiniOutputObjectIdentifier {
	int32_t ObjectId; // 0x00(0x04)
	int32_t GeoId; // 0x04(0x04)
	int32_t PartId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString SplitIdentifier; // 0x10(0x10)
	struct FString PartName; // 0x20(0x10)
	int32_t PrimitiveIndex; // 0x30(0x04)
	int32_t PointIndex; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
// Size: 0xf0 (Inherited: 0x00)
struct FHoudiniAssetBlueprintOutput {
	int32_t OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FHoudiniOutputObject OutputObject; // 0x08(0xe8)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
// Size: 0xe8 (Inherited: 0x00)
struct FHoudiniOutputObject {
	struct UObject* OutputObject; // 0x00(0x08)
	struct UObject* OutputComponent; // 0x08(0x08)
	struct UObject* ProxyObject; // 0x10(0x08)
	struct UObject* ProxyComponent; // 0x18(0x08)
	bool bProxyIsCurrent; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString BakeName; // 0x28(0x10)
	struct FHoudiniCurveOutputProperties CurveOutputProperty; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct TMap<struct FString, struct FString> CachedAttributes; // 0x48(0x50)
	struct TMap<struct FString, struct FString> CachedTokens; // 0x98(0x50)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
// Size: 0x0c (Inherited: 0x00)
struct FHoudiniCurveOutputProperties {
	enum class EHoudiniCurveOutputType CurveOutputType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t NumPoints; // 0x04(0x04)
	bool bClosed; // 0x08(0x01)
	enum class EHoudiniCurveType CurveType; // 0x09(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
// Size: 0x50 (Inherited: 0x00)
struct FHoudiniGenericAttribute {
	struct FString AttributeName; // 0x00(0x10)
	enum class EAttribStorageType AttributeType; // 0x10(0x01)
	enum class EAttribOwner AttributeOwner; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t AttributeCount; // 0x14(0x04)
	int32_t AttributeTupleSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<double> DoubleValues; // 0x20(0x10)
	struct TArray<int64_t> IntValues; // 0x30(0x10)
	struct TArray<struct FString> StringValues; // 0x40(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
// Size: 0x210 (Inherited: 0x00)
struct FHoudiniGeoPartObject {
	int32_t AssetId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString AssetName; // 0x08(0x10)
	int32_t ObjectId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ObjectName; // 0x20(0x10)
	int32_t GeoId; // 0x30(0x04)
	int32_t PartId; // 0x34(0x04)
	struct FString PartName; // 0x38(0x10)
	bool bHasCustomPartName; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FString> SplitGroups; // 0x50(0x10)
	struct FTransform TransformMatrix; // 0x60(0x30)
	struct FString NodePath; // 0x90(0x10)
	enum class EHoudiniPartType Type; // 0xa0(0x01)
	enum class EHoudiniInstancerType InstancerType; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString VolumeName; // 0xa8(0x10)
	int32_t VolumeTileIndex; // 0xb8(0x04)
	bool bIsVisible; // 0xbc(0x01)
	bool bIsEditable; // 0xbd(0x01)
	bool bIsTemplated; // 0xbe(0x01)
	bool bIsInstanced; // 0xbf(0x01)
	bool bHasGeoChanged; // 0xc0(0x01)
	bool bHasPartChanged; // 0xc1(0x01)
	bool bHasTransformChanged; // 0xc2(0x01)
	bool bHasMaterialsChanged; // 0xc3(0x01)
	char pad_C4[0x14c]; // 0xc4(0x14c)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
// Size: 0x60 (Inherited: 0x00)
struct FHoudiniMeshSocket {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
// Size: 0x1c (Inherited: 0x00)
struct FHoudiniCurveInfo {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
// Size: 0x80 (Inherited: 0x00)
struct FHoudiniVolumeInfo {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
// Size: 0x48 (Inherited: 0x00)
struct FHoudiniPartInfo {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
// Size: 0x30 (Inherited: 0x00)
struct FHoudiniGeoInfo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
// Size: 0x28 (Inherited: 0x00)
struct FHoudiniObjectInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
// Size: 0x70 (Inherited: 0x00)
struct FHoudiniBrushInfo {
	struct TWeakObjectPtr<struct ABrush> BrushActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform CachedTransform; // 0x10(0x30)
	struct FVector CachedOrigin; // 0x40(0x0c)
	struct FVector CachedExtent; // 0x4c(0x0c)
	enum class EBrushType CachedBrushType; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	uint64_t CachedSurfaceHash; // 0x60(0x08)
	char pad_68[0x8]; // 0x68(0x08)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
// Size: 0x50 (Inherited: 0x00)
struct FHoudiniBakedOutput {
	struct TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects; // 0x00(0x50)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
// Size: 0x18 (Inherited: 0x00)
struct FHoudiniBakedOutputObjectIdentifier {
	int32_t PartId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SplitIdentifier; // 0x08(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
// Size: 0x68 (Inherited: 0x00)
struct FHoudiniBakedOutputObject {
	struct FString Actor; // 0x00(0x10)
	struct FString Blueprint; // 0x10(0x10)
	struct FName ActorBakeName; // 0x20(0x08)
	struct FString BakedObject; // 0x28(0x10)
	struct FString BakedComponent; // 0x38(0x10)
	struct TArray<struct FString> InstancedActors; // 0x48(0x10)
	struct TArray<struct FString> InstancedComponents; // 0x58(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
// Size: 0x78 (Inherited: 0x00)
struct FHoudiniInstancedOutput {
	struct TSoftObjectPtr<struct UObject> OriginalObject; // 0x00(0x28)
	int32_t OriginalObjectIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FTransform> OriginalTransforms; // 0x30(0x10)
	struct TArray<struct TSoftObjectPtr<struct UObject>> VariationObjects; // 0x40(0x10)
	struct TArray<struct FTransform> VariationTransformOffsets; // 0x50(0x10)
	struct TArray<int32_t> TransformVariationIndices; // 0x60(0x10)
	bool bChanged; // 0x70(0x01)
	bool bStale; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
// Size: 0x10 (Inherited: 0x00)
struct FHoudiniPDGWorkResultObjectBakedOutput {
	struct TArray<struct FHoudiniBakedOutput> BakedOutputs; // 0x00(0x10)
};

// ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
// Size: 0x08 (Inherited: 0x00)
struct FWorkItemTallyBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
// Size: 0x28 (Inherited: 0x08)
struct FAggregatedWorkItemTally : FWorkItemTallyBase {
	int32_t TotalWorkItems; // 0x08(0x04)
	int32_t WaitingWorkItems; // 0x0c(0x04)
	int32_t ScheduledWorkItems; // 0x10(0x04)
	int32_t CookingWorkItems; // 0x14(0x04)
	int32_t CookedWorkItems; // 0x18(0x04)
	int32_t ErroredWorkItems; // 0x1c(0x04)
	int32_t CookCancelledWorkItems; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct HoudiniEngineRuntime.WorkItemTally
// Size: 0x238 (Inherited: 0x08)
struct FWorkItemTally : FWorkItemTallyBase {
	struct TSet<int32_t> AllWorkItems; // 0x08(0x50)
	struct TSet<int32_t> WaitingWorkItems; // 0x58(0x50)
	struct TSet<int32_t> ScheduledWorkItems; // 0xa8(0x50)
	struct TSet<int32_t> CookingWorkItems; // 0xf8(0x50)
	struct TSet<int32_t> CookedWorkItems; // 0x148(0x50)
	struct TSet<int32_t> ErroredWorkItems; // 0x198(0x50)
	struct TSet<int32_t> CookCancelledWorkItems; // 0x1e8(0x50)
};

// ScriptStruct HoudiniEngineRuntime.TOPWorkResult
// Size: 0x18 (Inherited: 0x00)
struct FTOPWorkResult {
	int32_t WorkItemIndex; // 0x00(0x04)
	int32_t WorkItemID; // 0x04(0x04)
	struct TArray<struct FTOPWorkResultObject> ResultObjects; // 0x08(0x10)
};

// ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
// Size: 0x60 (Inherited: 0x00)
struct FTOPWorkResultObject {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	struct FString FilePath; // 0x18(0x10)
	enum class EPDGWorkResultState State; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t WorkItemResultInfoIndex; // 0x2c(0x04)
	struct TArray<struct UHoudiniOutput*> ResultOutputs; // 0x30(0x10)
	struct TArray<struct UObject*> OutputObjectsToDelete; // 0x40(0x10)
	struct FOutputActorOwner OutputActorOwner; // 0x50(0x10)
};

// ScriptStruct HoudiniEngineRuntime.OutputActorOwner
// Size: 0x10 (Inherited: 0x00)
struct FOutputActorOwner {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* OutputActor; // 0x08(0x08)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
// Size: 0x1b0 (Inherited: 0x00)
struct FHoudiniStaticMeshGenerationProperties {
	char bGeneratedDoubleSidedGeometry : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x08(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0x10(0x158)
	enum class ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x168(0x01)
	char pad_169[0x3]; // 0x169(0x03)
	int32_t GeneratedLightMapResolution; // 0x16c(0x04)
	float GeneratedLpvBiasMultiplier; // 0x170(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x174(0x04)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x178(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x188(0x04)
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x18c(0x01)
	char pad_18C_1 : 7; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	float GeneratedStreamingDistanceMultiplier; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x198(0x08)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x1a0(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
// Size: 0x98 (Inherited: 0x68)
struct FHoudiniSplineComponentInstanceData : FActorComponentInstanceData {
	struct TArray<struct FTransform> CurvePoints; // 0x68(0x10)
	struct TArray<struct FVector> DisplayPoints; // 0x78(0x10)
	struct TArray<int32_t> DisplayPointIndexDivider; // 0x88(0x10)
};

