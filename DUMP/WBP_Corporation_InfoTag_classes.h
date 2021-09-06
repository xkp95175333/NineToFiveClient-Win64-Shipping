// WidgetBlueprintGeneratedClass WBP_Corporation_InfoTag.WBP_Corporation_InfoTag_C
// Size: 0x298 (Inherited: 0x260)
struct UWBP_Corporation_InfoTag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Tag_Icon; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Tag_Name; // 0x270(0x08)
	struct FText Name; // 0x278(0x18)
	struct UTexture2D* Image; // 0x290(0x08)

	void SetInfo(struct FText Labeltext, struct UTexture2D* Image); // Function WBP_Corporation_InfoTag.WBP_Corporation_InfoTag_C.SetInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Corporation_InfoTag.WBP_Corporation_InfoTag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Corporation_InfoTag(int32_t EntryPoint); // Function WBP_Corporation_InfoTag.WBP_Corporation_InfoTag_C.ExecuteUbergraph_WBP_Corporation_InfoTag // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

