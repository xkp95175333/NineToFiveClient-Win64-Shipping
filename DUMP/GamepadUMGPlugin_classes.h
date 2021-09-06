// Class GamepadUMGPlugin.GamepadCursorSettings
// Size: 0xf8 (Inherited: 0x38)
struct UGamepadCursorSettings : UDeveloperSettings {
	struct FRuntimeFloatCurve AnalogCursorAccelerationCurve; // 0x38(0x88)
	float MaxAnalogCursorSpeed; // 0xc0(0x04)
	float MaxAnalogCursorSpeedWhenHovered; // 0xc4(0x04)
	float AnalogCursorDragCoefficient; // 0xc8(0x04)
	float AnalogCursorDragCoefficientWhenHovered; // 0xcc(0x04)
	float MinAnalogCursorSpeed; // 0xd0(0x04)
	float AnalogCursorDeadZone; // 0xd4(0x04)
	float AnalogCursorAccelerationMultiplier; // 0xd8(0x04)
	float AnalogCursorSize; // 0xdc(0x04)
	bool bUseEngineAnalogCursor; // 0xe0(0x01)
	bool bAnalogCursorNoAcceleration; // 0xe1(0x01)
	char pad_E2[0x16]; // 0xe2(0x16)
};

// Class GamepadUMGPlugin.VirtualCursorFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UVirtualCursorFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsCursorOverInteractableWidget(); // Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xb32270
	void EnableVirtualCursor(struct APlayerController* PC); // Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb321f0
	void DisableVirtualCursor(struct APlayerController* PC); // Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xb32170
};

