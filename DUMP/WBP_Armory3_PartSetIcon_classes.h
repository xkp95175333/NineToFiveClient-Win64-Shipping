// WidgetBlueprintGeneratedClass WBP_Armory3_PartSetIcon.WBP_Armory3_PartSetIcon_C
// Size: 0x284 (Inherited: 0x260)
struct UWBP_Armory3_PartSetIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UScaleBox* ScaleBox_1; // 0x270(0x08)
	struct UImage* SetIcon; // 0x278(0x08)
	float Scale; // 0x280(0x04)

	void SetContent(struct UTexture2D* Background, struct UTexture2D* SetIcon, bool ShowIcon, float Scale); // Function WBP_Armory3_PartSetIcon.WBP_Armory3_PartSetIcon_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Armory3_PartSetIcon.WBP_Armory3_PartSetIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateScale(); // Function WBP_Armory3_PartSetIcon.WBP_Armory3_PartSetIcon_C.UpdateScale // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_PartSetIcon(int32_t EntryPoint); // Function WBP_Armory3_PartSetIcon.WBP_Armory3_PartSetIcon_C.ExecuteUbergraph_WBP_Armory3_PartSetIcon // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

