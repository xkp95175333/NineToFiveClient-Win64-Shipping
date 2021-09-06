// WidgetBlueprintGeneratedClass WBP_Armory2_Sockets.WBP_Armory2_Sockets_C
// Size: 0x4b5 (Inherited: 0x268)
struct UWBP_Armory2_Sockets_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* ShowSockets; // 0x270(0x08)
	struct UWidgetAnimation* HideSockets; // 0x278(0x08)
	struct UCanvasPanel* SocketContainer; // 0x280(0x08)
	struct TMap<enum class EHWWeaponPartType, struct FVector> SocketLocations; // 0x288(0x50)
	struct UHWArmoryWeaponItem* CurrentWeaponItem; // 0x2d8(0x08)
	struct AHWWeapon* CurrentWeaponInstance; // 0x2e0(0x08)
	struct UBP_WeaponCameraComponent_C* WeaponCameraComponent; // 0x2e8(0x08)
	struct FMulticastInlineDelegate OnWeaponSocketClicked; // 0x2f0(0x10)
	struct TArray<enum class EHWWeaponPartType> PartTypes; // 0x300(0x10)
	int32_t SocketResolvingIterations; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct TArray<enum class EHWWeaponPartType> AllPartTypes; // 0x318(0x10)
	struct TArray<enum class EHWWeaponPartType> UnlockedPartTypes; // 0x328(0x10)
	struct FHWWeaponInfo CurrentWeaponInfo; // 0x338(0xb0)
	struct TMap<enum class EHWWeaponPartType, struct UWBP_Armory_Weapon_Socket_C*> SocketWidgets; // 0x3e8(0x50)
	struct TMap<enum class EHWWeaponPartType, struct FName> DefaultPartIds; // 0x438(0x50)
	struct FTimerHandle SocketUpdateTimer; // 0x488(0x08)
	bool IsManualRotation; // 0x490(0x01)
	char pad_491[0x3]; // 0x491(0x03)
	struct FRotator ManualRotation; // 0x494(0x0c)
	struct FRotator DefaultRotation; // 0x4a0(0x0c)
	struct FVector2D DragStartPosition; // 0x4ac(0x08)
	bool CreateSockets; // 0x4b4(0x01)

	void UpdateSocketLocations1(); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.UpdateSocketLocations1 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetPartLocationsWithSkin(struct TMap<enum class EHWWeaponPartType, struct FVector> Result); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.GetPartLocationsWithSkin // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetManualRotationMode(bool Enabled); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.SetManualRotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetRelativeLocationForSocket(enum class EHWWeaponPartType PartType, struct FVector2D Loc); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.GetRelativeLocationForSocket // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWeaponData(); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.ClearWeaponData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResolvePartId(enum class EHWWeaponPartType PartType, struct FName WeaponPartId); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.ResolvePartId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void FindUnlockedSockets(struct TArray<enum class EHWWeaponPartType> Input, struct TArray<enum class EHWWeaponPartType> Sockets); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.FindUnlockedSockets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetStateForSocket(enum class EHWWeaponPartType PartType, enum class BPE_Armory_Weapon_Socket_State State); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.GetStateForSocket // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void CreateSocketWidget(enum class EHWWeaponPartType WeaponPart, struct FVector2D Location, struct FName InstalledPart); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.CreateSocketWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FVector2D Get2DLocation(struct FVector WorldPosition); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.Get2DLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void IsWeaponValid(struct FHWWeaponInfo Weapon, bool IsValid); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.IsWeaponValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetRelativeLocationOnCanvas(struct FVector2D Location, struct UCanvasPanelSlot* Slot); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.SetRelativeLocationOnCanvas // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Update Sockets(); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.Update Sockets // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSocketClicked(enum class EHWWeaponPartType PartType, struct UWBP_Armory_Weapon_Socket_C* Widget); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.OnSocketClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Foo(); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.Foo // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoRenderWeapon(struct FHWWeaponInfo WeaponInfo); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.DoRenderWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToPart(enum class EHWWeaponPartType Part); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.ZoomToPart // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void InvokeSocketUpdate(); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.InvokeSocketUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Destruct(); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ClearSockets(); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.ClearSockets // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory2_Sockets(int32_t EntryPoint); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.ExecuteUbergraph_WBP_Armory2_Sockets // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void OnWeaponSocketClicked__DelegateSignature(enum class EHWWeaponPartType PartType, struct UWBP_Armory_Weapon_Socket_C* Widget); // Function WBP_Armory2_Sockets.WBP_Armory2_Sockets_C.OnWeaponSocketClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

