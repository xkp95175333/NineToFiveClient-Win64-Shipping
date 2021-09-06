// BlueprintGeneratedClass BP_MissionTypeItem.BP_MissionTypeItem_C
// Size: 0x41 (Inherited: 0x28)
struct UBP_MissionTypeItem_C : UObject {
	enum class EHWMissionKind MissionType; // 0x28(0x01)
	bool Selected; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FMulticastInlineDelegate SelectionChanged; // 0x30(0x10)
	bool Hovered; // 0x40(0x01)

	void SelectionChanged__DelegateSignature(); // Function BP_MissionTypeItem.BP_MissionTypeItem_C.SelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

