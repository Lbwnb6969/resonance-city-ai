// RVA 0x3001a0 | Placemaker.Ui.SunSlider$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
// PDB: SunSlider_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_mA85B22FF1A37184A99D58AEF086CF932CC6F4E86
// Body: [[103001a0, 103001b6]]
// Direct callees:
// 10300210 SunSlider_UpdateAnim_mE2F9AE707417E88B93EF9DC1FE6F6F710B5C9330

void __cdecl
SunSlider_UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit_mA85B22FF1A37184A99D58AEF086CF932CC6F4E86
          (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  param_1->___hover_10 = false;
  SunSlider_UpdateAnim_mE2F9AE707417E88B93EF9DC1FE6F6F710B5C9330(param_1,(MethodInfo *)0x0);
  return;
}
