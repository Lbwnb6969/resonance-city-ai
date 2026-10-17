// RVA 0x9ca900 | Placemaker.Ui.SoundButton.<>c__DisplayClass8_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__3
// PDB: U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m91A2E221F96CCD7BBB83C5989D2D67D580A043D3
// Body: [[109ca900, 109ca9c3]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102f9980 Slider_SetValue_mA38AA36AAF6EC1840DD9C8C03B6E96BB58FD4BAF
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m91A2E221F96CCD7BBB83C5989D2D67D580A043D3
          (U3CU3Ec__DisplayClass8_0_tA679BCD3A12CB562D9F61334788E5D22912A406D *param_1,
          MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar3;
  bool bVar4;

  if (DAT_1151ff36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ff36 = '\x01';
  }
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pWVar1 = param_1->___master_4->___worldMaster_5,
     pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
    pSVar2 = pWVar1->___saveSystem_35;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar2,(MethodInfo *)0x0)
    ;
    if (bVar4) {
      if ((((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
           (pWVar1 = param_1->___master_4->___worldMaster_5,
           pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
          (pSVar2 = pWVar1->___saveSystem_35,
          pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
         ((pSVar3 = pSVar2->___settingsData_10,
          pSVar3 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 ||
          (param_1->___slider_1 == (Slider_tD8A2D42879D86E2025759D2A26C7F53F08A56B6D *)0x0))))
      goto LAB_109ca9bf;
      Slider_SetValue_mA38AA36AAF6EC1840DD9C8C03B6E96BB58FD4BAF
                (param_1->___slider_1,(float)(pSVar3->___audioVolume_3 & 0x7f) * ___real_3c010204,
                 (MethodInfo *)0x0);
    }
    return;
  }
LAB_109ca9bf:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
