// WidgetBlueprintGeneratedClass WBP_Item_Tag_Container.WBP_Item_Tag_Container_C
// Size: 0x278 (Inherited: 0x268)
struct UWBP_Item_Tag_Container_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UHorizontalBox* ContainerHB; // 0x270(0x08)

	void Clear All Tags(); // Function WBP_Item_Tag_Container.WBP_Item_Tag_Container_C.Clear All Tags // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddTag(struct FText Tag, struct FText Description); // Function WBP_Item_Tag_Container.WBP_Item_Tag_Container_C.AddTag // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddUpgradePointsTag(int32_t Points); // Function WBP_Item_Tag_Container.WBP_Item_Tag_Container_C.AddUpgradePointsTag // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Item_Tag_Container(int32_t EntryPoint); // Function WBP_Item_Tag_Container.WBP_Item_Tag_Container_C.ExecuteUbergraph_WBP_Item_Tag_Container // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

