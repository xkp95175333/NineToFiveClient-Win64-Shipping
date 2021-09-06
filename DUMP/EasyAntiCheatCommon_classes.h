// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UEasyAntiCheatNetComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)

	void ServerMessage(struct TArray<char> Message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0xb51630
	void ClientMessage(struct TArray<char> Message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0xb51590
};

