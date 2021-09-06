// WidgetBlueprintGeneratedClass WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWBP_Rigs_DroneAbilityButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_Rigs_ButtonBackground_C* Background; // 0x268(0x08)
	struct UImage* Image_Ability; // 0x270(0x08)
	struct FName AbilityId; // 0x278(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x280(0x10)
	struct FMulticastInlineDelegate OnHover; // 0x290(0x10)

	void SetData(struct FName AbilityId); // Function WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_DroneAbilityButton(int32_t EntryPoint); // Function WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C.ExecuteUbergraph_WBP_Rigs_DroneAbilityButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnHover__DelegateSignature(bool IsHover, struct FName AbilityId); // Function WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnClicked__DelegateSignature(struct UWBP_Rigs_DroneAbilityButton_C* Button); // Function WBP_Rigs_DroneAbilityButton.WBP_Rigs_DroneAbilityButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

