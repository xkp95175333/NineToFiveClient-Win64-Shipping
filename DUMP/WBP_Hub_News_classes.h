// WidgetBlueprintGeneratedClass WBP_Hub_News.WBP_Hub_News_C
// Size: 0x2a8 (Inherited: 0x260)
struct UWBP_Hub_News_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_MainButton_C* Buy_Button; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* Description_Heading_Large; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Heading_Large; // 0x278(0x08)
	struct UVerticalBox* Newscontent; // 0x280(0x08)
	struct UWidgetSwitcher* NewsThrobberSwitcher; // 0x288(0x08)
	struct UCircularThrobber* Throbber; // 0x290(0x08)
	struct UImage* Top_Image; // 0x298(0x08)
	struct UWBP_Box_C* WBP_Box; // 0x2a0(0x08)

	void Construct(); // Function WBP_Hub_News.WBP_Hub_News_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void On News found(struct FHWNewsResponse Response); // Function WBP_Hub_News.WBP_Hub_News_C.On News found // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Hub_News(int32_t EntryPoint); // Function WBP_Hub_News.WBP_Hub_News_C.ExecuteUbergraph_WBP_Hub_News // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

