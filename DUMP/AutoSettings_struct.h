// Enum AutoSettings.EBindingCaptureMode
enum class EBindingCaptureMode : uint8 {
	OnReleased,
	OnPressed,
	EBindingCaptureMode_MAX,
};

// ScriptStruct AutoSettings.AutoSettingData
// Size: 0x38 (Inherited: 0x00)
struct FAutoSettingData {
	struct FName Key; // 0x00(0x08)
	struct FString Value; // 0x08(0x10)
	struct FGameplayTagContainer Tags; // 0x18(0x20)
};

// ScriptStruct AutoSettings.KeyFriendlyName
// Size: 0x30 (Inherited: 0x00)
struct FKeyFriendlyName {
	struct FKey Key; // 0x00(0x18)
	struct FText FriendlyName; // 0x18(0x18)
};

// ScriptStruct AutoSettings.AxisAssociation
// Size: 0x50 (Inherited: 0x00)
struct FAxisAssociation {
	struct FKey AxisKey; // 0x00(0x18)
	struct FKey AnalogKey; // 0x18(0x18)
	struct TArray<struct FKeyScale> ButtonKeys; // 0x30(0x10)
	struct TArray<struct FKeyScale> BooleanKeys; // 0x40(0x10)
};

// ScriptStruct AutoSettings.KeyScale
// Size: 0x20 (Inherited: 0x00)
struct FKeyScale {
	struct FKey Key; // 0x00(0x18)
	float Scale; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AutoSettings.MappingGroupLink
// Size: 0x10 (Inherited: 0x00)
struct FMappingGroupLink {
	struct TArray<int32_t> MappingGroups; // 0x00(0x10)
};

// ScriptStruct AutoSettings.KeyGroup
// Size: 0x20 (Inherited: 0x00)
struct FKeyGroup {
	struct FGameplayTag KeyGroupTag; // 0x00(0x08)
	bool bUseGamepadKeys; // 0x08(0x01)
	bool bUseNonGamepadKeys; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FKey> Keys; // 0x10(0x10)
};

// ScriptStruct AutoSettings.KeyIconSet
// Size: 0x80 (Inherited: 0x00)
struct FKeyIconSet {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct TMap<struct FKey, struct TSoftObjectPtr<struct UTexture>> IconMap; // 0x20(0x50)
	struct TArray<struct FKeyIconPair> Icons; // 0x70(0x10)
};

// ScriptStruct AutoSettings.KeyIconPair
// Size: 0x20 (Inherited: 0x00)
struct FKeyIconPair {
	struct FKey Key; // 0x00(0x18)
	struct UTexture* Icon; // 0x18(0x08)
};

// ScriptStruct AutoSettings.InputMappingGroup
// Size: 0x40 (Inherited: 0x00)
struct FInputMappingGroup {
	struct TArray<struct FConfigActionKeyMapping> ActionMappings; // 0x00(0x10)
	struct TArray<struct FConfigAxisKeyMapping> AxisMappings; // 0x10(0x10)
	struct TArray<struct FConfigActionKeyMapping> UnboundActionMappings; // 0x20(0x10)
	struct TArray<struct FConfigAxisKeyMapping> UnboundAxisMappings; // 0x30(0x10)
};

// ScriptStruct AutoSettings.ConfigAxisKeyMapping
// Size: 0x28 (Inherited: 0x28)
struct FConfigAxisKeyMapping : FInputAxisKeyMapping {
};

// ScriptStruct AutoSettings.ConfigActionKeyMapping
// Size: 0x28 (Inherited: 0x28)
struct FConfigActionKeyMapping : FInputActionKeyMapping {
};

// ScriptStruct AutoSettings.InputMappingLayout
// Size: 0x10 (Inherited: 0x00)
struct FInputMappingLayout {
	struct TArray<struct FInputMappingGroup> MappingGroups; // 0x00(0x10)
};

// ScriptStruct AutoSettings.InputMappingPreset
// Size: 0x30 (Inherited: 0x00)
struct FInputMappingPreset {
	struct FGameplayTag PresetTag; // 0x00(0x08)
	bool bUseDefaultMappings; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FInputMappingLayout InputLayout; // 0x10(0x10)
	struct TArray<struct FInputMappingGroup> MappingGroups; // 0x20(0x10)
};

// ScriptStruct AutoSettings.PlayerInputMappings
// Size: 0x70 (Inherited: 0x00)
struct FPlayerInputMappings {
	struct FString PlayerId; // 0x00(0x10)
	int32_t PlayerIndex; // 0x10(0x04)
	struct FGameplayTag BasePresetTag; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FInputMappingLayout MappingOverrides; // 0x20(0x10)
	bool Custom; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FInputMappingPreset Preset; // 0x38(0x30)
	struct FGameplayTag PlayerKeyGroup; // 0x68(0x08)
};

// ScriptStruct AutoSettings.SettingOption
// Size: 0x28 (Inherited: 0x00)
struct FSettingOption {
	struct FText Label; // 0x00(0x18)
	struct FString Value; // 0x18(0x10)
};

