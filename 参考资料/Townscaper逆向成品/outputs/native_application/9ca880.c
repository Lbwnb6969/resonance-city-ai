// RVA 0x9ca880 | Placemaker.Ui.SoundButton.<>c__DisplayClass8_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mAA3DCBCB13366D2BA4B2EC9F203C413E3776455A
// Body: [[109ca880, 109ca8cf]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102f9980 Slider_SetValue_mA38AA36AAF6EC1840DD9C8C03B6E96BB58FD4BAF
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mAA3DCBCB13366D2BA4B2EC9F203C413E3776455A
          (U3CU3Ec__DisplayClass8_0_tA679BCD3A12CB562D9F61334788E5D22912A406D *param_1,int param_2,
          float param_3,MethodInfo *param_4)

{
  Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *pSVar1;
  float fVar2;

  fVar2 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
  if (fVar2 * param_3 != ___real_00000000) {
    pSVar1 = param_1->___slider_1;
    if (pSVar1 == (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    Slider_SetValue_mA38AA36AAF6EC1840DD9C8C03B6E96BB58FD4BAF
              (pSVar1,pSVar1->___oldValue_12 + fVar2 * param_3,(MethodInfo *)0x0);
  }
  return;
}
