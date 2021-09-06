// BlueprintGeneratedClass HeldItemData_Base.HeldItemData_Base_C
// Size: 0x69 (Inherited: 0x28)
struct UHeldItemData_Base_C : UHWHeldItemDataObject {
	enum class Enum_HeldItemTypesAnim ItemType; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UCurveVector* CV_Offset; // 0x30(0x08)
	struct UAnimSequence* Equip; // 0x38(0x08)
	struct UAnimSequence* IdleLoop; // 0x40(0x08)
	struct UAnimSequence* Unequip; // 0x48(0x08)
	struct UAnimSequence* UnequipQuick; // 0x50(0x08)
	struct UAnimSequence* ActionNormal; // 0x58(0x08)
	struct UAnimSequence* ActionQuick; // 0x60(0x08)
	bool TickHeldItemData; // 0x68(0x01)
};

