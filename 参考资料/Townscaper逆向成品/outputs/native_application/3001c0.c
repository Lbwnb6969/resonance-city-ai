// RVA 0x3001c0 | Placemaker.Ui.SunSlider$$UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp
// PDB: SunSlider_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_mA2340C87884389DDE87ADCBEF33D71E6222A0C29
// Body: [[103001c0, 10300206]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10300210 SunSlider_UpdateAnim_mE2F9AE707417E88B93EF9DC1FE6F6F710B5C9330
// 103e4f40 UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9

void __cdecl
SunSlider_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_mA2340C87884389DDE87ADCBEF33D71E6222A0C29
          (SunSlider_t5377A5354C7D2E09BF671D1681C1B608D4007427 *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *pUVar3;

  if ((((param_1->___sunButton_4 != (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *)0x0) &&
       (pUVar1 = param_1->___sunButton_4->___master_4,
       pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) &&
      (pWVar2 = pUVar1->___worldMaster_5,
      pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
     (pUVar3 = pWVar2->___uiAudioSourcePool_24,
     pUVar3 != (UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *)0x0)) {
    UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9
              (pUVar3,param_1->___buttonUpClip_6,true,(MethodInfo *)0x0);
    param_1->___pressed_11 = false;
    SunSlider_UpdateAnim_mE2F9AE707417E88B93EF9DC1FE6F6F710B5C9330(param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
