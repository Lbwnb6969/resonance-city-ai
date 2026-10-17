// RVA 0x3e6e90 | Placemaker.Ui.UiMaster$$UpdateFullScreen
// PDB: UiMaster_UpdateFullScreen_mA12775E0F48C9B737DE5298CB061288EA96E225B
// Body: [[103e6e90, 103e6f35]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 106678b0 Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB
// 10880690 BootMaster_DoFullscreen_mF68B1F89BDDB49B46CFBDB4FED9AD9704FB9EA8A
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90

void __cdecl
UiMaster_UpdateFullScreen_mA12775E0F48C9B737DE5298CB061288EA96E225B
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar1;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar2;
  bool bVar3;

  if (DAT_1151c8b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c8b7 = '\x01';
  }
  if (param_1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    pSVar1 = param_1->___worldMaster_5->___saveSystem_35;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar1,
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (((param_1->___worldMaster_5 ==
            (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
          (pSVar1 = param_1->___worldMaster_5->___saveSystem_35,
          pSVar1 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
         (pSVar2 = pSVar1->___settingsData_10,
         pSVar2 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
      goto LAB_103e6f31;
      if (pSVar2->___fullscreen_7 == false) {
        Screen_set_fullScreen_m51C070A017AAD9002C0B9ED5A6ADC76404F5DEDB(false,(MethodInfo *)0x0);
        return;
      }
      BootMaster_DoFullscreen_mF68B1F89BDDB49B46CFBDB4FED9AD9704FB9EA8A((MethodInfo *)0x0);
    }
    return;
  }
LAB_103e6f31:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
