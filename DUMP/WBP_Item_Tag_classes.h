// WidgetBlueprintGeneratedClass WBP_Item_Tag.WBP_Item_Tag_C
// Size: 0x2b0 (Inherited: 0x268)
struct UWBP_Item_Tag_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_Label_C* DescLabel; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* TagLabel; // 0x278(0x08)
	struct FText TagText; // 0x280(0x18)
	struct FText DescriptionText; // 0x298(0x18)

	void Construct(); // Function WBP_Item_Tag.WBP_Item_Tag_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Item_Tag(int32_t EntryPoint); // Function WBP_Item_Tag.WBP_Item_Tag_C.ExecuteUbergraph_WBP_Item_Tag // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

