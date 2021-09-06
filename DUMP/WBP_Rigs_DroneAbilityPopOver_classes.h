// WidgetBlueprintGeneratedClass WBP_Rigs_DroneAbilityPopOver.WBP_Rigs_DroneAbilityPopOver_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_Rigs_DroneAbilityPopOver_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Icon; // 0x268(0x08)
	struct UWBP_TooltipSectionHeader_C* Label_ActivePassive; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Label_Description; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Label_Name; // 0x280(0x08)
	struct FName AbilityId; // 0x288(0x08)

	void SetData(struct FName AbilityId); // Function WBP_Rigs_DroneAbilityPopOver.WBP_Rigs_DroneAbilityPopOver_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Rigs_DroneAbilityPopOver.WBP_Rigs_DroneAbilityPopOver_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Rigs_DroneAbilityPopOver(int32_t EntryPoint); // Function WBP_Rigs_DroneAbilityPopOver.WBP_Rigs_DroneAbilityPopOver_C.ExecuteUbergraph_WBP_Rigs_DroneAbilityPopOver // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

