// WidgetBlueprintGeneratedClass WBP_Diag_PlayerEffects.WBP_Diag_PlayerEffects_C
// Size: 0x270 (Inherited: 0x260)
struct UWBP_Diag_PlayerEffects_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* text1; // 0x268(0x08)

	void GetPPBlendValues(struct FString Ret); // Function WBP_Diag_PlayerEffects.WBP_Diag_PlayerEffects_C.GetPPBlendValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Diag_PlayerEffects.WBP_Diag_PlayerEffects_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Diag_PlayerEffects.WBP_Diag_PlayerEffects_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnDiagDisplayChanged(bool State); // Function WBP_Diag_PlayerEffects.WBP_Diag_PlayerEffects_C.OnDiagDisplayChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Diag_PlayerEffects(int32_t EntryPoint); // Function WBP_Diag_PlayerEffects.WBP_Diag_PlayerEffects_C.ExecuteUbergraph_WBP_Diag_PlayerEffects // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

