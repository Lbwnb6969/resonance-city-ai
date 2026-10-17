// RVA 0x305150 | Placemaker.Ui.ToggleButton$$Toggle
// PDB: ToggleButton_Toggle_mE3B6037766283FA34A761CD7C57957DA69D98730
// Body: [[10305150, 10305484]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10304d90 ToggleButton_ImportValue_mF514BBAC5333196FDEA44015C0DCEA6E2971B037
// 103e6d70 UiMaster_UpdateAntialiasing_mE1EE9F4B3CE3285B60960266F0627E2FB10A7484
// 103e6e90 UiMaster_UpdateFullScreen_mA12775E0F48C9B737DE5298CB061288EA96E225B
// 103e6fa0 UiMaster_UpdateVSync_mC68841C90B1119DA7D6C4D8DA53FDBB6164DBEB7
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10a037d0 SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199

void __cdecl
ToggleButton_Toggle_mE3B6037766283FA34A761CD7C57957DA69D98730
          (ToggleButton_t0028E2EF6E2D8992A3D68C313C828C517C5D9C41 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar3;
  bool bVar4;

  if (DAT_1151c22f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral1A7AC5824B83EB5BA5D89B25F18BAE2101E973DA);
    DAT_1151c22f = '\x01';
  }
  switch(param_1->___function_9) {
  case 1:
    if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
        (pWVar1 = param_1->___master_4->___worldMaster_5,
        pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
       ((pSVar2 = pWVar1->___saveSystem_35,
        pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0 ||
        ((pSVar3 = pSVar2->___settingsData_10,
         pSVar3 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 ||
         (param_1->___enabledState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
         )))))) break;
    bVar4 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___enabledState_5,(MethodInfo *)0x0);
    (pSVar3->___axis_5).___rotationXInverted_0 = !bVar4;
    goto LAB_103051e0;
  case 2:
    if ((((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pWVar1 = param_1->___master_4->___worldMaster_5,
         pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
        (pSVar2 = pWVar1->___saveSystem_35,
        pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
       ((pSVar3 = pSVar2->___settingsData_10,
        pSVar3 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 ||
        (param_1->___enabledState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
        ))) break;
    bVar4 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___enabledState_5,(MethodInfo *)0x0);
    (pSVar3->___axis_5).___rotationYInverted_1 = !bVar4;
LAB_103051e0:
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pWVar1 = param_1->___master_4->___worldMaster_5,
        pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
       (pSVar2 = pWVar1->___saveSystem_35,
       pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
      SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
                (pSVar2,(MethodInfo *)0x0);
      ToggleButton_ImportValue_mF514BBAC5333196FDEA44015C0DCEA6E2971B037(param_1,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
              ((Il2CppObject *)_stringLiteral1A7AC5824B83EB5BA5D89B25F18BAE2101E973DA,
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1,(MethodInfo *)0x0);
    ToggleButton_ImportValue_mF514BBAC5333196FDEA44015C0DCEA6E2971B037(param_1,(MethodInfo *)0x0);
    return;
  case 4:
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pWVar1 = param_1->___master_4->___worldMaster_5,
        pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
       (pSVar2 = pWVar1->___saveSystem_35,
       pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
      pSVar3 = pSVar2->___settingsData_10;
      if ((param_1->___enabledState_5 !=
           (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) &&
         (bVar4 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                            (param_1->___enabledState_5,(MethodInfo *)0x0),
         pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
        pSVar3->___fullscreen_7 = !bVar4;
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           ((pWVar1 = param_1->___master_4->___worldMaster_5,
            pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
            (pSVar2 = pWVar1->___saveSystem_35,
            pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)))) {
          SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
                    (pSVar2,(MethodInfo *)0x0);
          if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            UiMaster_UpdateFullScreen_mA12775E0F48C9B737DE5298CB061288EA96E225B
                      (param_1->___master_4,(MethodInfo *)0x0);
            ToggleButton_ImportValue_mF514BBAC5333196FDEA44015C0DCEA6E2971B037
                      (param_1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    break;
  case 5:
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pWVar1 = param_1->___master_4->___worldMaster_5,
        pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
       (pSVar2 = pWVar1->___saveSystem_35,
       pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
      pSVar3 = pSVar2->___settingsData_10;
      if ((param_1->___enabledState_5 !=
           (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) &&
         (bVar4 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                            (param_1->___enabledState_5,(MethodInfo *)0x0),
         pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
        pSVar3->___vSync_6 = !bVar4;
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           ((pWVar1 = param_1->___master_4->___worldMaster_5,
            pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
            (pSVar2 = pWVar1->___saveSystem_35,
            pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)))) {
          SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
                    (pSVar2,(MethodInfo *)0x0);
          if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            UiMaster_UpdateVSync_mC68841C90B1119DA7D6C4D8DA53FDBB6164DBEB7
                      (param_1->___master_4,(MethodInfo *)0x0);
            ToggleButton_ImportValue_mF514BBAC5333196FDEA44015C0DCEA6E2971B037
                      (param_1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    break;
  case 6:
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pWVar1 = param_1->___master_4->___worldMaster_5,
        pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
       (pSVar2 = pWVar1->___saveSystem_35,
       pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
      pSVar3 = pSVar2->___settingsData_10;
      if ((param_1->___enabledState_5 !=
           (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) &&
         (bVar4 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                            (param_1->___enabledState_5,(MethodInfo *)0x0),
         pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) {
        pSVar3->___antiAliasing_4 = !bVar4;
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           ((pWVar1 = param_1->___master_4->___worldMaster_5,
            pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
            (pSVar2 = pWVar1->___saveSystem_35,
            pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)))) {
          SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
                    (pSVar2,(MethodInfo *)0x0);
          if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            UiMaster_UpdateAntialiasing_mE1EE9F4B3CE3285B60960266F0627E2FB10A7484
                      (param_1->___master_4,(MethodInfo *)0x0);
            ToggleButton_ImportValue_mF514BBAC5333196FDEA44015C0DCEA6E2971B037
                      (param_1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
