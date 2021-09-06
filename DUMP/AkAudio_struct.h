// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8 {
	EndOfEvent,
	Marker,
	Duration,
	Starvation,
	MusicPlayStarted,
	MusicSyncBeat,
	MusicSyncBar,
	MusicSyncEntry,
	MusicSyncExit,
	MusicSyncGrid,
	MusicSyncUserCue,
	MusicSyncPoint,
	MIDIEvent,
	EAkCallbackType_MAX,
};

// Enum AkAudio.EAkResult
enum class EAkResult : uint8 {
	NotImplemented,
	Success,
	Fail,
	PartialSuccess,
	NotCompatible,
	AlreadyConnected,
	InvalidFile,
	AudioFileHeaderTooLarge,
	MaxReached,
	InvalidID,
	IDNotFound,
	InvalidInstanceID,
	NoMoreData,
	InvalidStateGroup,
	ChildAlreadyHasAParent,
	InvalidLanguage,
	CannotAddItseflAsAChild,
	InvalidParameter,
	ElementAlreadyInList,
	PathNotFound,
	PathNoVertices,
	PathNotRunning,
	PathNotPaused,
	PathNodeAlreadyInList,
	PathNodeNotInList,
	DataNeeded,
	NoDataNeeded,
	DataReady,
	NoDataReady,
	InsufficientMemory,
	Cancelled,
	UnknownBankID,
	BankReadError,
	InvalidSwitchType,
	FormatNotReady,
	WrongBankVersion,
	FileNotFound,
	DeviceNotReady,
	BankAlreadyLoaded,
	RenderedFX,
	ProcessNeeded,
	ProcessDone,
	MemManagerNotInitialized,
	StreamMgrNotInitialized,
	SSEInstructionsNotSupported,
	Busy,
	UnsupportedChannelConfig,
	PluginMediaNotAvailable,
	MustBeVirtualized,
	CommandTooLarge,
	RejectedByFilter,
	InvalidCustomPlatformName,
	DLLCannotLoad,
	DLLPathNotFound,
	NoJavaVM,
	OpenSLError,
	PluginNotRegistered,
	DataAlignmentError,
	EAkResult_MAX,
};

// Enum AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8 {
	AAudio,
	OpenSL_ES,
	EAkAndroidAudioAPI_MAX,
};

// Enum AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8 {
	Default,
	VoiceChat,
	GameChat,
	VideoRecording,
	Measurement,
	MoviePlayback,
	VideoChat,
	EAkAudioSessionMode_MAX,
};

// Enum AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8 {
	MixWithOthers,
	DuckOthers,
	AllowBluetooth,
	DefaultToSpeaker,
	EAkAudioSessionCategoryOptions_MAX,
};

// Enum AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8 {
	Ambient,
	SoloAmbient,
	PlayAndRecord,
	EAkAudioSessionCategory_MAX,
};

// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8 {
	Wall,
	Ceiling,
	Floor,
	EReflectionFilterBits_MAX,
};

// Enum AkAudio.AkCodecId
enum class AkCodecId : uint8 {
	Bank,
	PCM,
	ADPCM,
	XMA,
	Vorbis,
	WiiADPCM,
	PCMEX,
	ExternalSource,
	XWMA,
	AAC,
	FilePackage,
	ATRAC9,
	VAG,
	ProfilerCapture,
	AnalysisFile,
	MIDI,
	OpusNX,
	CAF,
	AkOpus,
	AkCodecId_MAX,
};

// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8 {
	AkMidiCcBankSelectCoarse,
	AkMidiCcModWheelCoarse,
	AkMidiCcBreathCtrlCoarse,
	AkMidiCcCtrl3Coarse,
	AkMidiCcFootPedalCoarse,
	AkMidiCcPortamentoCoarse,
	AkMidiCcDataEntryCoarse,
	AkMidiCcVolumeCoarse,
	AkMidiCcBalanceCoarse,
	AkMidiCcCtrl9Coarse,
	AkMidiCcPanPositionCoarse,
	AkMidiCcExpressionCoarse,
	AkMidiCcEffectCtrl1Coarse,
	AkMidiCcEffectCtrl2Coarse,
	AkMidiCcCtrl14Coarse,
	AkMidiCcCtrl15Coarse,
	AkMidiCcGenSlider1,
	AkMidiCcGenSlider2,
	AkMidiCcGenSlider3,
	AkMidiCcGenSlider4,
	AkMidiCcCtrl20Coarse,
	AkMidiCcCtrl21Coarse,
	AkMidiCcCtrl22Coarse,
	AkMidiCcCtrl23Coarse,
	AkMidiCcCtrl24Coarse,
	AkMidiCcCtrl25Coarse,
	AkMidiCcCtrl26Coarse,
	AkMidiCcCtrl27Coarse,
	AkMidiCcCtrl28Coarse,
	AkMidiCcCtrl29Coarse,
	AkMidiCcCtrl30Coarse,
	AkMidiCcCtrl31Coarse,
	AkMidiCcBankSelectFine,
	AkMidiCcModWheelFine,
	AkMidiCcBreathCtrlFine,
	AkMidiCcCtrl3Fine,
	AkMidiCcFootPedalFine,
	AkMidiCcPortamentoFine,
	AkMidiCcDataEntryFine,
	AkMidiCcVolumeFine,
	AkMidiCcBalanceFine,
	AkMidiCcCtrl9Fine,
	AkMidiCcPanPositionFine,
	AkMidiCcExpressionFine,
	AkMidiCcEffectCtrl1Fine,
	AkMidiCcEffectCtrl2Fine,
	AkMidiCcCtrl14Fine,
	AkMidiCcCtrl15Fine,
	AkMidiCcCtrl20Fine,
	AkMidiCcCtrl21Fine,
	AkMidiCcCtrl22Fine,
	AkMidiCcCtrl23Fine,
	AkMidiCcCtrl24Fine,
	AkMidiCcCtrl25Fine,
	AkMidiCcCtrl26Fine,
	AkMidiCcCtrl27Fine,
	AkMidiCcCtrl28Fine,
	AkMidiCcCtrl29Fine,
	AkMidiCcCtrl30Fine,
	AkMidiCcCtrl31Fine,
	AkMidiCcHoldPedal,
	AkMidiCcPortamentoOnOff,
	AkMidiCcSustenutoPedal,
	AkMidiCcSoftPedal,
	AkMidiCcLegatoPedal,
	AkMidiCcHoldPedal2,
	AkMidiCcSoundVariation,
	AkMidiCcSoundTimbre,
	AkMidiCcSoundReleaseTime,
	AkMidiCcSoundAttackTime,
	AkMidiCcSoundBrightness,
	AkMidiCcSoundCtrl6,
	AkMidiCcSoundCtrl7,
	AkMidiCcSoundCtrl8,
	AkMidiCcSoundCtrl9,
	AkMidiCcSoundCtrl10,
	AkMidiCcGeneralButton1,
	AkMidiCcGeneralButton2,
	AkMidiCcGeneralButton3,
	AkMidiCcGeneralButton4,
	AkMidiCcReverbLevel,
	AkMidiCcTremoloLevel,
	AkMidiCcChorusLevel,
	AkMidiCcCelesteLevel,
	AkMidiCcPhaserLevel,
	AkMidiCcDataButtonP1,
	AkMidiCcDataButtonM1,
	AkMidiCcNonRegisterCoarse,
	AkMidiCcNonRegisterFine,
	AkMidiCcAllSoundOff,
	AkMidiCcAllControllersOff,
	AkMidiCcLocalKeyboard,
	AkMidiCcAllNotesOff,
	AkMidiCcOmniModeOff,
	AkMidiCcOmniModeOn,
	AkMidiCcOmniMonophonicOn,
	AkMidiCcOmniPolyphonicOn,
	EAkMidiCcValues_MAX,
};

// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8 {
	AkMidiEventTypeInvalid,
	AkMidiEventTypeNoteOff,
	AkMidiEventTypeNoteOn,
	AkMidiEventTypeNoteAftertouch,
	AkMidiEventTypeController,
	AkMidiEventTypeProgramChange,
	AkMidiEventTypeChannelAftertouch,
	AkMidiEventTypePitchBend,
	AkMidiEventTypeSysex,
	AkMidiEventTypeEscape,
	AkMidiEventTypeMeta,
	EAkMidiEventType_MAX,
};

// Enum AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8 {
	Default,
	Global,
	GameObject,
	PlayingID,
	Unavailable,
	ERTPCValueType_MAX,
};

// Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8 {
	Log3,
	Sine,
	Log1,
	InvSCurve,
	Linear,
	SCurve,
	Exp1,
	SineRecip,
	Exp3,
	LastFadeCurve,
	Constant,
	EAkCurveInterpolation_MAX,
};

// Enum AkAudio.AkActionOnEventType
enum class AkActionOnEventType : uint8 {
	Stop,
	Pause,
	Resume,
	Break,
	ReleaseEnvelope,
	AkActionOnEventType_MAX,
};

// Enum AkAudio.AkMultiPositionType
enum class AkMultiPositionType : uint8 {
	SingleSource,
	MultiSources,
	MultiDirections,
	AkMultiPositionType_MAX,
};

// Enum AkAudio.AkSpeakerConfiguration
enum class AkSpeakerConfiguration : uint8 {
	Ak_Speaker_Front_Left,
	Ak_Speaker_Front_Right,
	Ak_Speaker_Front_Center,
	Ak_Speaker_Low_Frequency,
	Ak_Speaker_Back_Left,
	Ak_Speaker_Back_Right,
	Ak_Speaker_Back_Center,
	Ak_Speaker_Side_Left,
	Ak_Speaker_Side_Right,
	Ak_Speaker_Top,
	Ak_Speaker_Height_Front_Left,
	Ak_Speaker_Height_Front_Center,
	Ak_Speaker_Height_Front_Right,
	Ak_Speaker_Height_Back_Left,
	Ak_Speaker_Height_Back_Center,
	Ak_Speaker_Height_Back_Right,
	Ak_Speaker_MAX,
};

// Enum AkAudio.AkChannelConfiguration
enum class AkChannelConfiguration : uint8 {
	Ak_Parent,
	Ak_LFE,
	Ak_1_1,
	Ak_2_1,
	Ak_2_2,
	Ak_3_1,
	Ak_3_2,
	Ak_4_1,
	Ak_4_2,
	Ak_5_1,
	Ak_5_2,
	Ak_7_2,
	Ak_5_1_3,
	Ak_7_1_3,
	Ak_7_1_5,
	Ak_Auro_9_2,
	Ak_Auro_10_2,
	Ak_Auro_11_2,
	Ak_Auro_13_2,
	Ak_Ambisonics_1st_order,
	Ak_Ambisonics_2nd_order,
	Ak_Ambisonics_3rd_order,
	Ak_MAX,
};

// Enum AkAudio.AkAcousticPortalState
enum class AkAcousticPortalState : uint8 {
	Closed,
	Open,
	AkAcousticPortalState_MAX,
};

// Enum AkAudio.PanningRule
enum class PanningRule : uint8 {
	PanningRule_Speakers,
	PanningRule_Headphones,
	PanningRule_MAX,
};

// Enum AkAudio.AkMeshType
enum class AkMeshType : uint8 {
	StaticMesh,
	CollisionMesh,
	AkMeshType_MAX,
};

// Enum AkAudio.EAkHololensAudioAPI
enum class EAkHololensAudioAPI : uint8 {
	Wasapi,
	XAudio2,
	DirectSound,
	EAkHololensAudioAPI_MAX,
};

// Enum AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8 {
	Socket,
	HTCS,
	EAkCommSystem_MAX,
};

// Enum AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8 {
	FrontLeft,
	FrontRight,
	FrontCenter,
	LowFrequency,
	BackLeft,
	BackRight,
	BackCenter,
	SideLeft,
	SideRight,
	Top,
	HeightFrontLeft,
	HeightFrontCenter,
	HeightFrontRight,
	HeightBackLeft,
	HeightBackCenter,
	HeightBackRight,
	EAkChannelMask_MAX,
};

// Enum AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8 {
	Anonymous,
	Standard,
	Ambisonic,
	EAkChannelConfigType_MAX,
};

// Enum AkAudio.EAkDiffractionFlags
enum class EAkDiffractionFlags : uint8 {
	UseBuiltInParam,
	UseObstruction,
	CalcEmitterVirtualPosition,
	EAkDiffractionFlags_MAX,
};

// Enum AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8 {
	Speakers,
	Headphones,
	EAkPanningRule_MAX,
};

// Enum AkAudio.EAkWindowsAudioAPI
enum class EAkWindowsAudioAPI : uint8 {
	Wasapi,
	XAudio2,
	DirectSound,
	EAkWindowsAudioAPI_MAX,
};

// ScriptStruct AkAudio.AKWaapiJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FAKWaapiJsonObject {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkWaapiSubscriptionId
// Size: 0x08 (Inherited: 0x00)
struct FAkWaapiSubscriptionId {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// Size: 0x01 (Inherited: 0x00)
struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x00(0x01)
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettings
// Size: 0x34 (Inherited: 0x00)
struct FAkAdvancedInitializationSettings {
	uint32_t IO_MemorySize; // 0x00(0x04)
	uint32_t IO_Granularity; // 0x04(0x04)
	float TargetAutoStreamBufferLength; // 0x08(0x04)
	bool UseStreamCache; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	uint32_t MaximumPinnedBytesInCache; // 0x10(0x04)
	bool EnableGameSyncPreparation; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	uint32_t ContinuousPlaybackLookAhead; // 0x18(0x04)
	uint32_t MonitorQueuePoolSize; // 0x1c(0x04)
	uint32_t MaximumHardwareTimeoutMs; // 0x20(0x04)
	bool DebugOutOfRangeCheckEnabled; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float DebugOutOfRangeLimit; // 0x28(0x04)
	struct FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x2c(0x08)
};

// ScriptStruct AkAudio.AkAdvancedSpatialAudioSettings
// Size: 0x08 (Inherited: 0x00)
struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x00(0x04)
	float DiffractionShadowDegrees; // 0x04(0x04)
};

// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
// Size: 0x38 (Inherited: 0x34)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38(0x04)
	bool RoundFrameSizeToHardwareSize; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct AkAudio.AkAudioSession
// Size: 0x0c (Inherited: 0x00)
struct FAkAudioSession {
	enum class EAkAudioSessionCategory AudioSessionCategory; // 0x00(0x04)
	uint32_t AudioSessionCategoryOptions; // 0x04(0x04)
	enum class EAkAudioSessionMode AudioSessionMode; // 0x08(0x04)
};

// ScriptStruct AkAudio.AkExternalSourceInfo
// Size: 0x38 (Inherited: 0x00)
struct FAkExternalSourceInfo {
	struct FString ExternalSrcName; // 0x00(0x10)
	enum class AkCodecId CodecID; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Filename; // 0x18(0x10)
	struct UAkExternalMediaAsset* ExternalSourceAsset; // 0x28(0x08)
	bool IsStreamed; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct AkAudio.AkSegmentInfo
// Size: 0x24 (Inherited: 0x00)
struct FAkSegmentInfo {
	int32_t CurrentPosition; // 0x00(0x04)
	int32_t PreEntryDuration; // 0x04(0x04)
	int32_t ActiveDuration; // 0x08(0x04)
	int32_t PostExitDuration; // 0x0c(0x04)
	int32_t RemainingLookAheadTime; // 0x10(0x04)
	float BeatDuration; // 0x14(0x04)
	float BarDuration; // 0x18(0x04)
	float GridDuration; // 0x1c(0x04)
	float GridOffset; // 0x20(0x04)
};

// ScriptStruct AkAudio.AkMidiEventBase
// Size: 0x02 (Inherited: 0x00)
struct FAkMidiEventBase {
	enum class EAkMidiEventType Type; // 0x00(0x01)
	char Chan; // 0x01(0x01)
};

// ScriptStruct AkAudio.AkMidiProgramChange
// Size: 0x03 (Inherited: 0x02)
struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x02(0x01)
};

// ScriptStruct AkAudio.AkMidiChannelAftertouch
// Size: 0x03 (Inherited: 0x02)
struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x02(0x01)
};

// ScriptStruct AkAudio.AkMidiNoteAftertouch
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x02(0x01)
	char Value; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkMidiPitchBend
// Size: 0x08 (Inherited: 0x02)
struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x02(0x01)
	char ValueMsb; // 0x03(0x01)
	int32_t FullValue; // 0x04(0x04)
};

// ScriptStruct AkAudio.AkMidiCc
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiCc : FAkMidiEventBase {
	enum class EAkMidiCcValues Cc; // 0x02(0x01)
	char Value; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkMidiNoteOnOff
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x02(0x01)
	char Velocity; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkMidiGeneric
// Size: 0x04 (Inherited: 0x02)
struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x02(0x01)
	char Param2; // 0x03(0x01)
};

// ScriptStruct AkAudio.AkChannelMask
// Size: 0x04 (Inherited: 0x00)
struct FAkChannelMask {
	int32_t ChannelMask; // 0x00(0x04)
};

// ScriptStruct AkAudio.AkGeometrySurfaceOverride
// Size: 0x10 (Inherited: 0x00)
struct FAkGeometrySurfaceOverride {
	struct UAkAcousticTexture* AcousticTexture; // 0x00(0x08)
	char bEnableOcclusionOverride : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float OcclusionValue; // 0x0c(0x04)
};

// ScriptStruct AkAudio.AkGeometryData
// Size: 0x50 (Inherited: 0x00)
struct FAkGeometryData {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FAkAcousticSurface> Surfaces; // 0x10(0x10)
	struct TArray<struct FAkTriangle> Triangles; // 0x20(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30(0x10)
	struct TArray<struct UPhysicalMaterial*> ToOverrideOcclusion; // 0x40(0x10)
};

// ScriptStruct AkAudio.AkTriangle
// Size: 0x08 (Inherited: 0x00)
struct FAkTriangle {
	uint16_t Point0; // 0x00(0x02)
	uint16_t Point1; // 0x02(0x02)
	uint16_t Point2; // 0x04(0x02)
	uint16_t Surface; // 0x06(0x02)
};

// ScriptStruct AkAudio.AkAcousticSurface
// Size: 0x18 (Inherited: 0x00)
struct FAkAcousticSurface {
	uint32_t Texture; // 0x00(0x04)
	float Occlusion; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
};

// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38(0x04)
	bool GlobalFocus; // 0x3c(0x01)
	bool UseHeadMountedDisplayAudioDevice; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct AkAudio.AkPluginInfo
// Size: 0x28 (Inherited: 0x00)
struct FAkPluginInfo {
	struct FString Name; // 0x00(0x10)
	uint32_t PluginID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString dll; // 0x18(0x10)
};

// ScriptStruct AkAudio.AkCommonInitializationSettings
// Size: 0x60 (Inherited: 0x00)
struct FAkCommonInitializationSettings {
	uint32_t MaximumNumberOfMemoryPools; // 0x00(0x04)
	uint32_t MaximumNumberOfPositioningPaths; // 0x04(0x04)
	uint32_t CommandQueueSize; // 0x08(0x04)
	uint32_t SamplesPerFrame; // 0x0c(0x04)
	struct FAkMainOutputSettings MainOutputSettings; // 0x10(0x28)
	float StreamingLookAheadRatio; // 0x38(0x04)
	uint16_t NumberOfRefillsInVoice; // 0x3c(0x02)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct FAkSpatialAudioSettings SpatialAudioSettings; // 0x40(0x20)
};

// ScriptStruct AkAudio.AkSpatialAudioSettings
// Size: 0x20 (Inherited: 0x00)
struct FAkSpatialAudioSettings {
	uint32_t MaxSoundPropagationDepth; // 0x00(0x04)
	uint32_t DiffractionFlags; // 0x04(0x04)
	float MovementThreshold; // 0x08(0x04)
	uint32_t NumberOfPrimaryRays; // 0x0c(0x04)
	uint32_t ReflectionOrder; // 0x10(0x04)
	bool EnableDiffractionOnReflections; // 0x14(0x01)
	bool EnableDirectPathDiffraction; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float MaximumPathLength; // 0x18(0x04)
	bool EnableTransmission; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct AkAudio.AkMainOutputSettings
// Size: 0x28 (Inherited: 0x00)
struct FAkMainOutputSettings {
	struct FString AudioDeviceShareset; // 0x00(0x10)
	uint32_t DeviceID; // 0x10(0x04)
	enum class EAkPanningRule PanningRule; // 0x14(0x04)
	enum class EAkChannelConfigType ChannelConfigType; // 0x18(0x04)
	uint32_t ChannelMask; // 0x1c(0x04)
	uint32_t NumberOfChannels; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
// Size: 0x68 (Inherited: 0x60)
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct AkAudio.AkCommunicationSettings
// Size: 0x20 (Inherited: 0x00)
struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x00(0x04)
	uint16_t DiscoveryBroadcastPort; // 0x04(0x02)
	uint16_t CommandPort; // 0x06(0x02)
	uint16_t NotificationPort; // 0x08(0x02)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FString NetworkName; // 0x10(0x10)
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	enum class EAkCommSystem CommunicationSystem; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
// Size: 0x28 (Inherited: 0x20)
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct AkAudio.AkBoolPropertyToControl
// Size: 0x10 (Inherited: 0x00)
struct FAkBoolPropertyToControl {
	struct FString ItemProperty; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkPropertyToControl
// Size: 0x10 (Inherited: 0x00)
struct FAkPropertyToControl {
	struct FString ItemProperty; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38(0x04)
	bool UseHardwareCodecLowLatencyMode; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
// Size: 0x30 (Inherited: 0x00)
struct FAkGeometrySurfacePropertiesToMap {
	struct TSoftObjectPtr<struct UAkAcousticTexture> AcousticTexture; // 0x00(0x28)
	float OcclusionValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct AkAudio.AkWwiseItemToControl
// Size: 0x40 (Inherited: 0x00)
struct FAkWwiseItemToControl {
	struct FAkWwiseObjectDetails ItemPicked; // 0x00(0x30)
	struct FString ItemPath; // 0x30(0x10)
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
// Size: 0x30 (Inherited: 0x00)
struct FAkWwiseObjectDetails {
	struct FString ItemName; // 0x00(0x10)
	struct FString ItemPath; // 0x10(0x10)
	struct FString ItemId; // 0x20(0x10)
};

// ScriptStruct AkAudio.AkPoly
// Size: 0x10 (Inherited: 0x00)
struct FAkPoly {
	struct UAkAcousticTexture* Texture; // 0x00(0x08)
	float Occlusion; // 0x08(0x04)
	bool EnableSurface; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct AkAudio.AkWaapiFieldNames
// Size: 0x10 (Inherited: 0x00)
struct FAkWaapiFieldNames {
	struct FString FieldName; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkWaapiUri
// Size: 0x10 (Inherited: 0x00)
struct FAkWaapiUri {
	struct FString Uri; // 0x00(0x10)
};

// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
// Size: 0x40 (Inherited: 0x38)
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38(0x04)
	bool GlobalFocus; // 0x3c(0x01)
	bool UseHeadMountedDisplayAudioDevice; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
// Size: 0x08 (Inherited: 0x00)
struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x00(0x04)
	uint32_t NonCachedSize; // 0x04(0x04)
};

// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
// Size: 0x3c (Inherited: 0x38)
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38(0x02)
	bool UseHardwareCodecLowLatencyMode; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// Size: 0x20 (Inherited: 0x00)
struct FAkAudioEventTrackKey {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAkAudioEvent* AkAudioEvent; // 0x08(0x08)
	struct FString EventName; // 0x10(0x10)
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioEventSection* Section; // 0x20(0x08)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	struct UMovieSceneAkAudioRTPCSection* Section; // 0x20(0x08)
};

// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneFloatChannelSerializationHelper {
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x00(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<int32_t> Times; // 0x08(0x10)
	struct TArray<struct FMovieSceneFloatValueSerializationHelper> Values; // 0x18(0x10)
	float DefaultValue; // 0x28(0x04)
	bool bHasDefaultValue; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
// Size: 0x1c (Inherited: 0x00)
struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x00(0x04)
	enum class ERichCurveInterpMode InterpMode; // 0x04(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FMovieSceneTangentDataSerializationHelper Tangent; // 0x08(0x14)
};

// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
// Size: 0x14 (Inherited: 0x00)
struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x00(0x04)
	float LeaveTangent; // 0x04(0x04)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float ArriveTangentWeight; // 0x0c(0x04)
	float LeaveTangentWeight; // 0x10(0x04)
};

