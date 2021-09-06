// WidgetBlueprintGeneratedClass WBP_VaultHint.WBP_VaultHint_C
// Size: 0x290 (Inherited: 0x268)
struct UWBP_VaultHint_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Labeltext; // 0x270(0x08)
	struct UWBP_KeyPrompt_C* WBP_KeyPrompt; // 0x278(0x08)
	struct AHWHumanCharacter* Character; // 0x280(0x08)
	struct UCharacterMovementComponent* CharacterMovementComp; // 0x288(0x08)

	void CheckVault(); // Function WBP_VaultHint.WBP_VaultHint_C.CheckVault // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_VaultHint.WBP_VaultHint_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void VaultTimer(); // Function WBP_VaultHint.WBP_VaultHint_C.VaultTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_VaultHint(int32_t EntryPoint); // Function WBP_VaultHint.WBP_VaultHint_C.ExecuteUbergraph_WBP_VaultHint // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

