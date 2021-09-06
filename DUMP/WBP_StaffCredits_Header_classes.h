// WidgetBlueprintGeneratedClass WBP_StaffCredits_Header.WBP_StaffCredits_Header_C
// Size: 0x290 (Inherited: 0x260)
struct UWBP_StaffCredits_Header_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Header; // 0x268(0x08)
	struct UImage* Line; // 0x270(0x08)
	struct FText HeaderVariable; // 0x278(0x18)

	void PreConstruct(bool IsDesignTime); // Function WBP_StaffCredits_Header.WBP_StaffCredits_Header_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetHeaderText(struct FText Header); // Function WBP_StaffCredits_Header.WBP_StaffCredits_Header_C.SetHeaderText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_StaffCredits_Header(int32_t EntryPoint); // Function WBP_StaffCredits_Header.WBP_StaffCredits_Header_C.ExecuteUbergraph_WBP_StaffCredits_Header // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

