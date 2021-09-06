// WidgetBlueprintGeneratedClass WBP_Item_Tag_UpgradePoints.WBP_Item_Tag_UpgradePoints_C
// Size: 0x28c (Inherited: 0x268)
struct UWBP_Item_Tag_UpgradePoints_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWBP_Label_C* DescLabel; // 0x270(0x08)
	struct UImage* Image_288; // 0x278(0x08)
	struct UWBP_Label_C* PointsLabel; // 0x280(0x08)
	int32_t PointCount; // 0x288(0x04)

	void Construct(); // Function WBP_Item_Tag_UpgradePoints.WBP_Item_Tag_UpgradePoints_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Item_Tag_UpgradePoints(int32_t EntryPoint); // Function WBP_Item_Tag_UpgradePoints.WBP_Item_Tag_UpgradePoints_C.ExecuteUbergraph_WBP_Item_Tag_UpgradePoints // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

