// WidgetBlueprintGeneratedClass WBP_DownedState.WBP_DownedState_C
// Size: 0x2b1 (Inherited: 0x260)
struct UWBP_DownedState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Pulse; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* beingRevivedTxt; // 0x270(0x08)
	struct UImage* BG; // 0x278(0x08)
	struct UWBP_CircularProgressBar_C* Loader; // 0x280(0x08)
	struct UVerticalBox* panel; // 0x288(0x08)
	struct UWidgetSwitcher* ReviveStatus; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* TextIncapacitated; // 0x298(0x08)
	struct UHWInjuryComponent* InjuryComp; // 0x2a0(0x08)
	struct UHWInjuryComponent* InjuryComponent; // 0x2a8(0x08)
	bool IsDowned; // 0x2b0(0x01)

	void OnBeingRevived(bool BeingRevived); // Function WBP_DownedState.WBP_DownedState_C.OnBeingRevived // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDowned(bool Value); // Function WBP_DownedState.WBP_DownedState_C.SetDowned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_DownedState.WBP_DownedState_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_DownedState(int32_t EntryPoint); // Function WBP_DownedState.WBP_DownedState_C.ExecuteUbergraph_WBP_DownedState // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

