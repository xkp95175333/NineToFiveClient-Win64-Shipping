// Class AutoSettings.InputLabel
// Size: 0x290 (Inherited: 0x260)
struct UInputLabel : UUserWidget {
	int32_t MappingGroup; // 0x260(0x04)
	struct FGameplayTag KeyGroup; // 0x264(0x08)
	bool bUsePlayerKeyGroup; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct FGameplayTagContainer IconTags; // 0x270(0x20)

	void UpdateLabel(); // Function AutoSettings.InputLabel.UpdateLabel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x9fc3b0
	void MappingsChanged(struct APlayerController* Player); // Function AutoSettings.InputLabel.MappingsChanged // (Final|Native|Private) // @ game+0x9fb540
};

// Class AutoSettings.ActionLabel
// Size: 0x2f8 (Inherited: 0x290)
struct UActionLabel : UInputLabel {
	struct FName ActionName; // 0x290(0x08)
	struct UKeyLabel* KeyLabelWidgetClass; // 0x298(0x08)
	struct UWidget* KeySeparatorWidgetClass; // 0x2a0(0x08)
	struct UPanelWidget* KeyContainer; // 0x2a8(0x08)
	struct UKeyLabel* PrimaryKeyLabel; // 0x2b0(0x08)
	struct UKeyLabel* ShiftLabel; // 0x2b8(0x08)
	struct UKeyLabel* CtrlLabel; // 0x2c0(0x08)
	struct UKeyLabel* AltLabel; // 0x2c8(0x08)
	struct UKeyLabel* CmdLabel; // 0x2d0(0x08)
	struct UWidget* ShiftSeparator; // 0x2d8(0x08)
	struct UWidget* CtrlSeparator; // 0x2e0(0x08)
	struct UWidget* AltSeparator; // 0x2e8(0x08)
	struct UWidget* CmdSeparator; // 0x2f0(0x08)
};

// Class AutoSettings.InputMapping
// Size: 0x298 (Inherited: 0x260)
struct UInputMapping : UUserWidget {
	int32_t MappingGroup; // 0x260(0x04)
	struct FGameplayTag KeyGroup; // 0x264(0x08)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FGameplayTagContainer IconTags; // 0x270(0x20)
	struct UBindCaptureButton* BindCaptureButton; // 0x290(0x08)

	void UpdateMapping(); // Function AutoSettings.InputMapping.UpdateMapping // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x9fc3d0
	void UpdateLabel(); // Function AutoSettings.InputMapping.UpdateLabel // (Native|Event|Protected|BlueprintEvent) // @ game+0x9fc3b0
	void ChordCaptured(struct FInputChord InChord); // Function AutoSettings.InputMapping.ChordCaptured // (Final|Native|Private) // @ game+0x9fa310
	void BindChord(struct FInputChord InChord); // Function AutoSettings.InputMapping.BindChord // (Native|Public|BlueprintCallable) // @ game+0x9fa050
};

// Class AutoSettings.ActionMapping
// Size: 0x2a8 (Inherited: 0x298)
struct UActionMapping : UInputMapping {
	struct FName ActionName; // 0x298(0x08)
	struct UActionLabel* ActionLabel; // 0x2a0(0x08)
};

// Class AutoSettings.AutoSettingsConfig
// Size: 0x1b0 (Inherited: 0x38)
struct UAutoSettingsConfig : UDeveloperSettings {
	struct FString SettingsIniName; // 0x38(0x10)
	struct FString SettingsSectionName; // 0x48(0x10)
	bool bAutoInitializePlayerInputOverrides; // 0x58(0x01)
	bool AllowModifierKeys; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FText ShiftModifierOverrideText; // 0x60(0x18)
	struct FText CtrlModifierOverrideText; // 0x78(0x18)
	struct FText AltModifierOverrideText; // 0x90(0x18)
	struct FText CmdModifierOverrideText; // 0xa8(0x18)
	struct TArray<struct FInputMappingPreset> InputPresets; // 0xc0(0x10)
	bool AllowMultipleBindingsPerKey; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FMappingGroupLink> MappingGroupLinks; // 0xd8(0x10)
	struct TArray<struct FName> PreservedActions; // 0xe8(0x10)
	struct TArray<struct FName> PreservedAxes; // 0xf8(0x10)
	struct TArray<struct FKeyIconSet> KeyIconSets; // 0x108(0x10)
	struct TArray<struct FKeyFriendlyName> KeyFriendlyNames; // 0x118(0x10)
	struct TArray<struct FKeyGroup> KeyGroups; // 0x128(0x10)
	struct TArray<struct FKey> AllowedKeys; // 0x138(0x10)
	struct TArray<struct FKey> DisallowedKeys; // 0x148(0x10)
	struct TArray<struct FKey> BindingEscapeKeys; // 0x158(0x10)
	struct TArray<struct FKey> UnbindingKeys; // 0x168(0x10)
	float MouseMoveCaptureDistance; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct FAxisAssociation> AxisAssociations; // 0x180(0x10)
	struct TArray<struct FName> BlacklistedActions; // 0x190(0x10)
	struct TArray<struct FName> BlacklistedAxes; // 0x1a0(0x10)

	struct FGameplayTag GetKeyGroupStatic(struct FKey Key); // Function AutoSettings.AutoSettingsConfig.GetKeyGroupStatic // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9f5ab0
	struct FText GetKeyFriendlyNameStatic(struct FKey Key); // Function AutoSettings.AutoSettingsConfig.GetKeyFriendlyNameStatic // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9f5950
};

// Class AutoSettings.AutoSettingsInputSubsystem
// Size: 0x38 (Inherited: 0x30)
struct UAutoSettingsInputSubsystem : UGameInstanceSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class AutoSettings.AutoSettingsPlayer
// Size: 0x28 (Inherited: 0x28)
struct UAutoSettingsPlayer : UInterface {

	void SaveInputMappings(struct FPlayerInputMappings InputMappings); // Function AutoSettings.AutoSettingsPlayer.SaveInputMappings // (Native|Event|Public|BlueprintEvent) // @ game+0x9f5f70
	struct FString GetUniquePlayerIdentifier(); // Function AutoSettings.AutoSettingsPlayer.GetUniquePlayerIdentifier // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x9f5c70
	bool GetInputMappings(struct FPlayerInputMappings InputMappings); // Function AutoSettings.AutoSettingsPlayer.GetInputMappings // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x9f57e0
	struct FInputMappingPreset GetDefaultInputMappingPreset(); // Function AutoSettings.AutoSettingsPlayer.GetDefaultInputMappingPreset // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x9f56d0
};

// Class AutoSettings.AutoSettingsValidationSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UAutoSettingsValidationSubsystem : UGameInstanceSubsystem {
};

// Class AutoSettings.AutoSettingWidget
// Size: 0x2b0 (Inherited: 0x260)
struct UAutoSettingWidget : UUserWidget {
	struct FName CVarName; // 0x260(0x08)
	struct USettingValueMask* ValueMask; // 0x268(0x08)
	bool bAutoSave; // 0x270(0x01)
	bool bAutoApply; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct FGameplayTagContainer SettingTags; // 0x278(0x20)
	struct FString CurrentValue; // 0x298(0x10)
	bool bHasUnappliedChange; // 0x2a8(0x01)
	bool bHasUnsavedChange; // 0x2a9(0x01)
	bool bUpdatingSettingSelection; // 0x2aa(0x01)
	char pad_2AB[0x5]; // 0x2ab(0x05)

	void UpdateSelection(struct FString Value); // Function AutoSettings.AutoSettingWidget.UpdateSelection // (Native|Event|Protected|BlueprintEvent) // @ game+0x9f6430
	void Save(); // Function AutoSettings.AutoSettingWidget.Save // (Final|Native|Public|BlueprintCallable) // @ game+0x9f5f50
	bool HasUnsavedChange(); // Function AutoSettings.AutoSettingWidget.HasUnsavedChange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9f5d10
	bool HasUnappliedChange(); // Function AutoSettings.AutoSettingWidget.HasUnappliedChange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9f5cf0
	void Cancel(); // Function AutoSettings.AutoSettingWidget.Cancel // (Final|Native|Public|BlueprintCallable) // @ game+0x9f5330
	void ApplySettingValue(struct FString Value, bool bSaveIfPossible); // Function AutoSettings.AutoSettingWidget.ApplySettingValue // (Final|Native|Protected|BlueprintCallable) // @ game+0x9f5200
	void Apply(); // Function AutoSettings.AutoSettingWidget.Apply // (Final|Native|Public|BlueprintCallable) // @ game+0x9f51e0
};

// Class AutoSettings.AxisLabel
// Size: 0x2a8 (Inherited: 0x290)
struct UAxisLabel : UInputLabel {
	struct FName AxisName; // 0x290(0x08)
	float Scale; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UKeyLabel* KeyLabel; // 0x2a0(0x08)
};

// Class AutoSettings.AxisMapping
// Size: 0x2b0 (Inherited: 0x298)
struct UAxisMapping : UInputMapping {
	struct FName AxisName; // 0x298(0x08)
	float Scale; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct UAxisLabel* AxisLabel; // 0x2a8(0x08)
};

// Class AutoSettings.BindCaptureButton
// Size: 0x290 (Inherited: 0x260)
struct UBindCaptureButton : UUserWidget {
	struct FGameplayTag KeyGroup; // 0x260(0x08)
	struct UBindCapturePrompt* BindCapturePromptClass; // 0x268(0x08)
	int32_t CapturePromptZOrder; // 0x270(0x04)
	char pad_274[0x14]; // 0x274(0x14)
	struct UBindCapturePrompt* Prompt; // 0x288(0x08)

	struct UBindCapturePrompt* StartCapture(); // Function AutoSettings.BindCaptureButton.StartCapture // (Final|Native|Public|BlueprintCallable) // @ game+0x9f6400
	void InitializePrompt(struct UBindCapturePrompt* PromptWidget); // Function AutoSettings.BindCaptureButton.InitializePrompt // (Native|Event|Protected|BlueprintEvent) // @ game+0x9f5d30
	void ChordCaptured(struct FInputChord Chord); // Function AutoSettings.BindCaptureButton.ChordCaptured // (Final|Native|Private) // @ game+0x9f5400
};

// Class AutoSettings.BindCapturePrompt
// Size: 0x2c0 (Inherited: 0x260)
struct UBindCapturePrompt : UUserWidget {
	bool bIgnoreGameViewportInputWhileCapturing; // 0x260(0x01)
	bool bRestrictKeyGroup; // 0x261(0x01)
	enum class EBindingCaptureMode CaptureMode; // 0x262(0x01)
	char pad_263[0x1]; // 0x263(0x01)
	struct FGameplayTag KeyGroup; // 0x264(0x08)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FMulticastInlineDelegate OnChordCaptured; // 0x270(0x10)
	struct FMulticastInlineDelegate OnChordRejected; // 0x280(0x10)
	struct FMulticastInlineDelegate OnCapturePromptClosed; // 0x290(0x10)
	struct TArray<struct FKey> KeysDown; // 0x2a0(0x10)
	bool PreviousIgnoreInput; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FVector2D AccumulatedMouseDelta; // 0x2b4(0x08)
	char pad_2BC[0x4]; // 0x2bc(0x04)

	bool IsKeyAllowed(struct FKey PrimaryKey); // Function AutoSettings.BindCapturePrompt.IsKeyAllowed // (Native|Event|Protected|BlueprintEvent) // @ game+0x9f5e50
	struct FGameplayTag GetKeyGroup(); // Function AutoSettings.BindCapturePrompt.GetKeyGroup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9f5a90
	void Cancel(); // Function AutoSettings.BindCapturePrompt.Cancel // (Final|Native|Public|BlueprintCallable) // @ game+0x9f5350
};

// Class AutoSettings.ToggleSetting
// Size: 0x2b0 (Inherited: 0x2b0)
struct UToggleSetting : UAutoSettingWidget {

	void UpdateToggleState(bool State); // Function AutoSettings.ToggleSetting.UpdateToggleState // (Native|Event|Protected|BlueprintEvent) // @ game+0x9ffab0
	void ToggleStateUpdated(bool State); // Function AutoSettings.ToggleSetting.ToggleStateUpdated // (Final|Native|Protected|BlueprintCallable) // @ game+0x9f5370
};

// Class AutoSettings.CheckBoxSetting
// Size: 0x2b8 (Inherited: 0x2b0)
struct UCheckBoxSetting : UToggleSetting {
	struct UCheckBox* CheckBox; // 0x2b0(0x08)

	void CheckBoxStateChanged(bool IsChecked); // Function AutoSettings.CheckBoxSetting.CheckBoxStateChanged // (Final|Native|Private) // @ game+0x9f5370
};

// Class AutoSettings.SelectSetting
// Size: 0x2d0 (Inherited: 0x2b0)
struct USelectSetting : UAutoSettingWidget {
	struct TArray<struct FSettingOption> Options; // 0x2b0(0x10)
	struct USettingOptionFactory* OptionFactory; // 0x2c0(0x08)
	bool bUpdatingSettingOptions; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)

	void UpdateOptions(struct TArray<struct FSettingOption> InOptions); // Function AutoSettings.SelectSetting.UpdateOptions // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x9fc3f0
	void RegenerateOptions(); // Function AutoSettings.SelectSetting.RegenerateOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x9fb840
};

// Class AutoSettings.ComboBoxSetting
// Size: 0x2d8 (Inherited: 0x2d0)
struct UComboBoxSetting : USelectSetting {
	struct UComboBoxString* ComboBox; // 0x2d0(0x08)

	void ComboBoxSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged // (Final|Native|Private) // @ game+0x9f5510
};

// Class AutoSettings.ConsoleUtils
// Size: 0x28 (Inherited: 0x28)
struct UConsoleUtils : UBlueprintFunctionLibrary {

	void SetStringCVar(struct FName Name, struct FString Value); // Function AutoSettings.ConsoleUtils.SetStringCVar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f62e0
	void SetIntCVar(struct FName Name, int32_t Value); // Function AutoSettings.ConsoleUtils.SetIntCVar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f6220
	void SetFloatCVar(struct FName Name, float Value); // Function AutoSettings.ConsoleUtils.SetFloatCVar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f6160
	void SetBoolCVar(struct FName Name, bool Value); // Function AutoSettings.ConsoleUtils.SetBoolCVar // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f60a0
	bool IsCVarRegistered(struct FName Name); // Function AutoSettings.ConsoleUtils.IsCVarRegistered // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9f5dc0
	struct FString GetStringCVar(struct FName Name); // Function AutoSettings.ConsoleUtils.GetStringCVar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9f5ba0
	int32_t GetIntCVar(struct FName Name); // Function AutoSettings.ConsoleUtils.GetIntCVar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9f58c0
	float GetFloatCVar(struct FName Name); // Function AutoSettings.ConsoleUtils.GetFloatCVar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9f5750
	bool GetBoolCVar(struct FName Name); // Function AutoSettings.ConsoleUtils.GetBoolCVar // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9f5640
};

// Class AutoSettings.CVarChangeListener
// Size: 0x80 (Inherited: 0x28)
struct UCVarChangeListener : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class AutoSettings.CVarChangeListenerManager
// Size: 0x78 (Inherited: 0x28)
struct UCVarChangeListenerManager : UObject {
	struct TMap<struct FName, struct UCVarChangeListener*> Listeners; // 0x28(0x50)

	void AddStringCVarCallbackStatic(struct FName Name, struct FDelegate ChangedCallback, bool CallbackImmediately); // Function AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f50c0
	void AddIntCVarCallbackStatic(struct FName Name, struct FDelegate ChangedCallback, bool CallbackImmediately); // Function AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4fa0
	void AddFloatCVarCallbackStatic(struct FName Name, struct FDelegate ChangedCallback, bool CallbackImmediately); // Function AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4e80
	void AddBoolCVarCallbackStatic(struct FName Name, struct FDelegate ChangedCallback, bool CallbackImmediately); // Function AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f4d60
};

// Class AutoSettings.GlobalKeyIconTagManager
// Size: 0x58 (Inherited: 0x28)
struct UGlobalKeyIconTagManager : UObject {
	struct FMulticastInlineDelegate OnGlobalKeyIconTagsModified; // 0x28(0x10)
	struct FGameplayTagContainer GlobalKeyIconTags; // 0x38(0x20)

	void SetGlobalKeyIconTags(struct FGameplayTagContainer InGlobalIconTags); // Function AutoSettings.GlobalKeyIconTagManager.SetGlobalKeyIconTags // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fba10
	struct UTexture* GetIconForKey(struct FKey InKey, struct FGameplayTagContainer IconTags, float AxisScale); // Function AutoSettings.GlobalKeyIconTagManager.GetIconForKey // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa970
};

// Class AutoSettings.InputMappingManager
// Size: 0x58 (Inherited: 0x28)
struct UInputMappingManager : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct FPlayerInputMappings> PlayerInputOverrides; // 0x38(0x10)
	struct TArray<struct APlayerController*> RegisteredPlayerControllers; // 0x48(0x10)

	void SetPlayerKeyGroupStatic(struct APlayerController* Player, struct FGameplayTag KeyGroup); // Function AutoSettings.InputMappingManager.SetPlayerKeyGroupStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fc070
	void SetPlayerInputPresetStatic(struct APlayerController* Player, struct FInputMappingPreset Preset); // Function AutoSettings.InputMappingManager.SetPlayerInputPresetStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fbeb0
	void SetPlayerInputPresetByTag(struct APlayerController* Player, struct FGameplayTag PresetTag); // Function AutoSettings.InputMappingManager.SetPlayerInputPresetByTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fbdf0
	void OnRegisteredPlayerControllerDestroyed(struct AActor* DestroyedActor); // Function AutoSettings.InputMappingManager.OnRegisteredPlayerControllerDestroyed // (Final|Native|Private) // @ game+0x9fb6c0
	bool InitializePlayerInputOverridesStatic(struct APlayerController* Player); // Function AutoSettings.InputMappingManager.InitializePlayerInputOverridesStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fb4b0
	struct FPlayerInputMappings GetPlayerInputMappingsStatic(struct APlayerController* Player); // Function AutoSettings.InputMappingManager.GetPlayerInputMappingsStatic // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fb160
	struct FInputAxisKeyMapping GetPlayerAxisMappingStatic(struct APlayerController* Player, struct FName AxisName, float Scale, int32_t MappingGroup); // Function AutoSettings.InputMappingManager.GetPlayerAxisMappingStatic // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fafa0
	struct FInputActionKeyMapping GetPlayerActionMappingStatic(struct APlayerController* Player, struct FName ActionName, int32_t MappingGroup); // Function AutoSettings.InputMappingManager.GetPlayerActionMappingStatic // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fae00
	struct TArray<struct FInputMappingPreset> GetDefaultInputPresets(); // Function AutoSettings.InputMappingManager.GetDefaultInputPresets // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa6d0
	void AddPlayerAxisOverrideStatic(struct APlayerController* Player, struct FInputAxisKeyMapping NewMapping, int32_t MappingGroup, bool bAnyKeyGroup); // Function AutoSettings.InputMappingManager.AddPlayerAxisOverrideStatic // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9f9db0
	void AddPlayerAxisOverride(struct APlayerController* Player, struct FInputAxisKeyMapping NewMapping, int32_t MappingGroup, bool bAnyKeyGroup); // Function AutoSettings.InputMappingManager.AddPlayerAxisOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9f9bb0
	void AddPlayerActionOverrideStatic(struct APlayerController* Player, struct FInputActionKeyMapping NewMapping, int32_t MappingGroup, bool bAnyKeyGroup); // Function AutoSettings.InputMappingManager.AddPlayerActionOverrideStatic // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9f99d0
	void AddPlayerActionOverride(struct APlayerController* Player, struct FInputActionKeyMapping NewMapping, int32_t MappingGroup, bool bAnyKeyGroup); // Function AutoSettings.InputMappingManager.AddPlayerActionOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9f97e0
};

// Class AutoSettings.KeyLabel
// Size: 0x2d0 (Inherited: 0x260)
struct UKeyLabel : UUserWidget {
	struct FText KeyInvalidText; // 0x260(0x18)
	struct FText LabelOverride; // 0x278(0x18)
	struct FKey Key; // 0x290(0x18)
	float AxisScale; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FGameplayTagContainer IconTags; // 0x2b0(0x20)

	void UpdateKeyLabel(); // Function AutoSettings.KeyLabel.UpdateKeyLabel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnGlobalKeyIconTagsModified(); // Function AutoSettings.KeyLabel.OnGlobalKeyIconTagsModified // (Final|Native|Private) // @ game+0x9fb6a0
	bool HasValidKey(); // Function AutoSettings.KeyLabel.HasValidKey // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fb480
	bool HasIcon(); // Function AutoSettings.KeyLabel.HasIcon // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fb450
	enum class ESlateVisibility GetIconVisibility(); // Function AutoSettings.KeyLabel.GetIconVisibility // (Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x9fab30
	struct FSlateBrush GetIconBrush(); // Function AutoSettings.KeyLabel.GetIconBrush // (Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x9fa8c0
	struct UTexture* GetIcon(); // Function AutoSettings.KeyLabel.GetIcon // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fa890
	enum class ESlateVisibility GetDisplayNameVisibility(); // Function AutoSettings.KeyLabel.GetDisplayNameVisibility // (Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x9fa860
	struct FText GetDisplayName(); // Function AutoSettings.KeyLabel.GetDisplayName // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fa7c0
};

// Class AutoSettings.SliderSetting
// Size: 0x2b8 (Inherited: 0x2b0)
struct USliderSetting : UAutoSettingWidget {
	float LeftValue; // 0x2b0(0x04)
	float RightValue; // 0x2b4(0x04)

	void UpdateSliderValue(float NormalizedValue, float RawValue); // Function AutoSettings.SliderSetting.UpdateSliderValue // (Native|Event|Protected|BlueprintEvent) // @ game+0x9ff9e0
	void SliderValueUpdated(float NormalizedValue); // Function AutoSettings.SliderSetting.SliderValueUpdated // (Final|Native|Protected|BlueprintCallable) // @ game+0x9ff960
	bool ShouldSaveCurrentValue(); // Function AutoSettings.SliderSetting.ShouldSaveCurrentValue // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x9fab30
	float RawValueToNormalized(float RawValue); // Function AutoSettings.SliderSetting.RawValueToNormalized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fe940
	void OnSliderValueUpdated(float NormalizedValue, float RawValue); // Function AutoSettings.SliderSetting.OnSliderValueUpdated // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	float NormalizedValueToRaw(float NormalizedValue); // Function AutoSettings.SliderSetting.NormalizedValueToRaw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fe730
	float ClampRawValue(float RawValue); // Function AutoSettings.SliderSetting.ClampRawValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fe200
};

// Class AutoSettings.NativeSliderSetting
// Size: 0x2c8 (Inherited: 0x2b8)
struct UNativeSliderSetting : USliderSetting {
	struct USlider* Slider; // 0x2b8(0x08)
	bool bMouseCaptureInProgress; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)

	void SliderValueChanged(float NewValue); // Function AutoSettings.NativeSliderSetting.SliderValueChanged // (Final|Native|Private) // @ game+0x9fc310
	void SliderMouseCaptureEnd(); // Function AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd // (Final|Native|Private) // @ game+0x9fc2f0
	void SliderMouseCaptureBegin(); // Function AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin // (Final|Native|Private) // @ game+0x9fc2d0
};

// Class AutoSettings.RadioButton
// Size: 0x2a0 (Inherited: 0x260)
struct URadioButton : UUserWidget {
	struct FMulticastInlineDelegate OnSelected; // 0x260(0x10)
	struct FText Label; // 0x270(0x18)
	struct FString Value; // 0x288(0x10)
	bool Selected; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)

	void UpdateSelected(bool InSelected); // Function AutoSettings.RadioButton.UpdateSelected // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateLabel(struct FText InLabel); // Function AutoSettings.RadioButton.UpdateLabel // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void TriggerSelection(); // Function AutoSettings.RadioButton.TriggerSelection // (Final|Native|Protected|BlueprintCallable) // @ game+0x9fc390
	void SetValue(struct FString InValue); // Function AutoSettings.RadioButton.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x9fc1c0
	void SetSelected(bool InSelected); // Function AutoSettings.RadioButton.SetSelected // (Final|Native|Public|BlueprintCallable) // @ game+0x9fc130
	void SetLabel(struct FText InLabel); // Function AutoSettings.RadioButton.SetLabel // (Final|Native|Public|BlueprintCallable) // @ game+0x9fbae0
	struct FString GetValue(); // Function AutoSettings.RadioButton.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fb390
	bool GetSelected(); // Function AutoSettings.RadioButton.GetSelected // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fb370
	struct FText GetLabel(); // Function AutoSettings.RadioButton.GetLabel // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fab60
};

// Class AutoSettings.RadioSelect
// Size: 0x2a0 (Inherited: 0x260)
struct URadioSelect : UUserWidget {
	struct TArray<struct FSettingOption> Options; // 0x260(0x10)
	struct URadioButton* RadioButtonClass; // 0x270(0x08)
	struct FMulticastInlineDelegate SelectionChangedEvent; // 0x278(0x10)
	struct UPanelWidget* ButtonContainer; // 0x288(0x08)
	struct TArray<struct URadioButton*> RadioButtons; // 0x290(0x10)

	void SetOptions(struct TArray<struct FSettingOption> InOptions); // Function AutoSettings.RadioSelect.SetOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x9fbc00
	void Select(struct FString Value); // Function AutoSettings.RadioSelect.Select // (Final|Native|Public|BlueprintCallable) // @ game+0x9fb920
	void OnButtonCreated(struct URadioButton* Button, struct UPanelSlot* NewSlot); // Function AutoSettings.RadioSelect.OnButtonCreated // (Native|Event|Protected|BlueprintEvent) // @ game+0x9fb5d0
	struct TArray<struct URadioButton*> GetRadioButtonWidgets(); // Function AutoSettings.RadioSelect.GetRadioButtonWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fb2b0
	struct TArray<struct FSettingOption> GetOptions(); // Function AutoSettings.RadioSelect.GetOptions // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fac10
	void ButtonSelected(struct FString Value); // Function AutoSettings.RadioSelect.ButtonSelected // (Final|Native|Private) // @ game+0x9fa160
};

// Class AutoSettings.RadioSelectSetting
// Size: 0x2e0 (Inherited: 0x2d0)
struct URadioSelectSetting : USelectSetting {
	struct URadioButton* RadioButtonClass; // 0x2d0(0x08)
	struct URadioSelect* RadioSelect; // 0x2d8(0x08)

	void RadioSelectionChanged(struct FString Value); // Function AutoSettings.RadioSelectSetting.RadioSelectionChanged // (Final|Native|Private) // @ game+0x9fb750
};

// Class AutoSettings.SettingOptionFactory
// Size: 0x28 (Inherited: 0x28)
struct USettingOptionFactory : UObject {

	struct TArray<struct FSettingOption> ConstructOptions(); // Function AutoSettings.SettingOptionFactory.ConstructOptions // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x9fe2a0
};

// Class AutoSettings.ResolutionOptionFactory
// Size: 0x28 (Inherited: 0x28)
struct UResolutionOptionFactory : USettingOptionFactory {
};

// Class AutoSettings.ResolutionStringUtils
// Size: 0x28 (Inherited: 0x28)
struct UResolutionStringUtils : UBlueprintFunctionLibrary {
};

// Class AutoSettings.SettingValueMask
// Size: 0x28 (Inherited: 0x28)
struct USettingValueMask : UObject {

	struct FString RecombineValues(struct FString SettingValue, struct FString ConsoleValue); // Function AutoSettings.SettingValueMask.RecombineValues // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x9fe9e0
	struct FString MaskValue(struct FString ConsoleValue); // Function AutoSettings.SettingValueMask.MaskValue // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x9fe620
};

// Class AutoSettings.ResolutionValueMask
// Size: 0x28 (Inherited: 0x28)
struct UResolutionValueMask : USettingValueMask {
};

// Class AutoSettings.SettingContainerUtils
// Size: 0x28 (Inherited: 0x28)
struct USettingContainerUtils : UBlueprintFunctionLibrary {

	void SaveChildSettings(struct UUserWidget* UserWidget, struct UWidget* Parent); // Function AutoSettings.SettingContainerUtils.SaveChildSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fb860
	struct TArray<struct UAutoSettingWidget*> GetChildSettings(struct UUserWidget* UserWidget, struct UWidget* Parent); // Function AutoSettings.SettingContainerUtils.GetChildSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa5c0
	bool DoesAnyChildSettingHaveUnsavedChange(struct UUserWidget* UserWidget, struct UWidget* Parent); // Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa4f0
	bool DoesAnyChildSettingHaveUnappliedChange(struct UUserWidget* UserWidget, struct UWidget* Parent); // Function AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fa420
	void CancelChildSettings(struct UUserWidget* UserWidget, struct UWidget* Parent); // Function AutoSettings.SettingContainerUtils.CancelChildSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fa250
	void ApplyChildSettings(struct UUserWidget* UserWidget, struct UWidget* Parent); // Function AutoSettings.SettingContainerUtils.ApplyChildSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9f9f90
};

// Class AutoSettings.SettingsManager
// Size: 0x48 (Inherited: 0x28)
struct USettingsManager : UObject {
	struct FMulticastInlineDelegate OnSettingSaved; // 0x28(0x10)
	struct FString IniFilename; // 0x38(0x10)

	void SaveSettingStatic(struct FAutoSettingData SettingData); // Function AutoSettings.SettingsManager.SaveSettingStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ff6a0
	void RegisterStringCVarSettingWithCallback(struct FName Name, struct FString DefaultValue, struct FString Help, struct FDelegate ChangedCallback, bool CallbackImmediately); // Function AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ff4e0
	void RegisterStringCVarSetting(struct FName Name, struct FString DefaultValue, struct FString Help); // Function AutoSettings.SettingsManager.RegisterStringCVarSetting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ff3b0
	void RegisterIntCVarSettingWithCallback(struct FName Name, int32_t DefaultValue, struct FString Help, struct FDelegate ChangedCallback, bool CallbackImmediately); // Function AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ff200
	void RegisterIntCVarSetting(struct FName Name, int32_t DefaultValue, struct FString Help); // Function AutoSettings.SettingsManager.RegisterIntCVarSetting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ff0f0
	void RegisterFloatCVarSettingWithCallback(struct FName Name, float DefaultValue, struct FString Help, struct FDelegate ChangedCallback, bool CallbackImmediately); // Function AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fef30
	void RegisterFloatCVarSetting(struct FName Name, float DefaultValue, struct FString Help); // Function AutoSettings.SettingsManager.RegisterFloatCVarSetting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fee10
	void RegisterBoolCVarSettingWithCallback(struct FName Name, bool DefaultValue, struct FString Help, struct FDelegate ChangedCallback, bool CallbackImmediately); // Function AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fec60
	void RegisterBoolCVarSetting(struct FName Name, bool DefaultValue, struct FString Help); // Function AutoSettings.SettingsManager.RegisterBoolCVarSetting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9feb30
	struct FString GetValue(struct FName Key, bool bPreferConfigValue); // Function AutoSettings.SettingsManager.GetValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9fe4b0
	void AutoDetectSettingsStatic(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier); // Function AutoSettings.SettingsManager.AutoDetectSettingsStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fe100
	void ApplySettingStatic(struct FAutoSettingData SettingData); // Function AutoSettings.SettingsManager.ApplySettingStatic // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9fdfc0
};

// Class AutoSettings.Spinner
// Size: 0x290 (Inherited: 0x260)
struct USpinner : UUserWidget {
	struct TArray<struct FSettingOption> Options; // 0x260(0x10)
	bool bAllowWrapping; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct FMulticastInlineDelegate SelectionChangedEvent; // 0x278(0x10)
	char pad_288[0x8]; // 0x288(0x08)

	void SelectValue(struct FString Value); // Function AutoSettings.Spinner.SelectValue // (Final|Native|Public|BlueprintCallable) // @ game+0x9ff870
	void SelectIndex(int32_t Index); // Function AutoSettings.Spinner.SelectIndex // (Final|Native|Public|BlueprintCallable) // @ game+0x9ff7e0
	void Previous(); // Function AutoSettings.Spinner.Previous // (Final|Native|Public|BlueprintCallable) // @ game+0x9fe920
	void OnSelectionChanged(struct FSettingOption SelectedOption); // Function AutoSettings.Spinner.OnSelectionChanged // (Native|Event|Public|BlueprintEvent) // @ game+0x9fe7d0
	void Next(); // Function AutoSettings.Spinner.Next // (Final|Native|Public|BlueprintCallable) // @ game+0x9fe710
	bool HasValidPrevious(); // Function AutoSettings.Spinner.HasValidPrevious // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fe5f0
	bool HasValidNext(); // Function AutoSettings.Spinner.HasValidNext // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fe5c0
	struct FSettingOption GetCurrentOption(); // Function AutoSettings.Spinner.GetCurrentOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fe3d0
	int32_t GetCurrentIndex(); // Function AutoSettings.Spinner.GetCurrentIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9fe3b0
};

// Class AutoSettings.SpinnerSetting
// Size: 0x2d8 (Inherited: 0x2d0)
struct USpinnerSetting : USelectSetting {
	struct USpinner* Spinner; // 0x2d0(0x08)

	void SpinnerSelectionChanged(struct FString Value); // Function AutoSettings.SpinnerSetting.SpinnerSelectionChanged // (Final|Native|Private) // @ game+0x9fb750
};

// Class AutoSettings.WindowModeValueMask
// Size: 0x28 (Inherited: 0x28)
struct UWindowModeValueMask : USettingValueMask {
};

