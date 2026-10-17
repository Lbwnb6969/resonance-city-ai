// RVA 0x3e6d70 | Placemaker.Ui.UiMaster$$UpdateAntialiasing
// PDB: UiMaster_UpdateAntialiasing_mE1EE9F4B3CE3285B60960266F0627E2FB10A7484
// Body: [[103e6d70, 103e6e7f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f360 QualitySettings_set_antiAliasing_m1725DEB8969C730FB10E0BCB373A372492582772
// 10667770 Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90

void __cdecl
UiMaster_UpdateAntialiasing_mE1EE9F4B3CE3285B60960266F0627E2FB10A7484
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar1;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar2;
  bool bVar3;
  float fVar4;

  if (DAT_1151c8b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c8b6 = '\x01';
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
      goto LAB_103e6e7b;
      if (pSVar2->___antiAliasing_4 == false) {
        QualitySettings_set_antiAliasing_m1725DEB8969C730FB10E0BCB373A372492582772
                  (1,(MethodInfo *)0x0);
        return;
      }
    }
    fVar4 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
    if (fVar4 <= __real_43b40000) {
      fVar4 = Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
      QualitySettings_set_antiAliasing_m1725DEB8969C730FB10E0BCB373A372492582772
                ((uint)(fVar4 <= __real_43340000) * 2 + 2,(MethodInfo *)0x0);
      return;
    }
    QualitySettings_set_antiAliasing_m1725DEB8969C730FB10E0BCB373A372492582772(1,(MethodInfo *)0x0);
    return;
  }
LAB_103e6e7b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
