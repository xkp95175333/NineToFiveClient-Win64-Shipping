// BlueprintGeneratedClass BP_FriendList_Entry_Data.BP_FriendList_Entry_Data_C
// Size: 0x88 (Inherited: 0x28)
struct UBP_FriendList_Entry_Data_C : UObject {
	struct FString PlayerId; // 0x28(0x10)
	struct FString PlayerName; // 0x38(0x10)
	bool IsOnline; // 0x48(0x01)
	bool IsInvite; // 0x49(0x01)
	enum class EHWPlayerStatus PlayerStatus; // 0x4a(0x01)
	enum class EHW_FriendList_ButtonState ButtonState; // 0x4b(0x01)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString TeamId; // 0x50(0x10)
	enum class EHW_Friendlist_EntryState State; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString UniqueId; // 0x68(0x10)
	struct FString PlatformId; // 0x78(0x10)
};

