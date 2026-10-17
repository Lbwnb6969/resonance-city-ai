// RVA 0x304d90 | Placemaker.Ui.ToggleButton$$ImportValue
// PDB: ToggleButton_ImportValue_mF514BBAC5333196FDEA44015C0DCEA6E2971B037
// Body: [[10304d90, 10304f70]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199

void __cdecl
ToggleButton_ImportValue_mF514BBAC5333196FDEA44015C0DCEA6E2971B037
          (ToggleButton_t0028E2EF6E2D8992A3D68C313C828C517C5D9C41 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar3;

  if (DAT_1151c230 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral1A7AC5824B83EB5BA5D89B25F18BAE2101E973DA);
    DAT_1151c230 = '\x01';
  }
  switch(param_1->___function_9) {
  case 1:
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pWVar1 = param_1->___master_4->___worldMaster_5,
        pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
       ((pSVar2 = pWVar1->___saveSystem_35,
        pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0 &&
        ((pSVar3 = pSVar2->___settingsData_10,
         pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 &&
         (param_1->___enabledState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
         )))))) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___enabledState_5,(pSVar3->___axis_5).___rotationXInverted_0,
                 (MethodInfo *)0x0);
      return;
    }
    break;
  case 2:
    if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pWVar1 = param_1->___master_4->___worldMaster_5,
         pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
        (pSVar2 = pWVar1->___saveSystem_35,
        pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
       ((pSVar3 = pSVar2->___settingsData_10,
        pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 &&
        (param_1->___enabledState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
        ))) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___enabledState_5,(pSVar3->___axis_5).___rotationYInverted_1,
                 (MethodInfo *)0x0);
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
    return;
  case 4:
    if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pWVar1 = param_1->___master_4->___worldMaster_5,
         pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
        (pSVar2 = pWVar1->___saveSystem_35,
        pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
       ((pSVar3 = pSVar2->___settingsData_10,
        pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 &&
        (param_1->___enabledState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
        ))) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___enabledState_5,pSVar3->___fullscreen_7,(MethodInfo *)0x0);
      return;
    }
    break;
  case 5:
    if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pWVar1 = param_1->___master_4->___worldMaster_5,
        pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
       ((pSVar2 = pWVar1->___saveSystem_35,
        pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0 &&
        ((pSVar3 = pSVar2->___settingsData_10,
         pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 &&
         (param_1->___enabledState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
         )))))) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___enabledState_5,pSVar3->___vSync_6,(MethodInfo *)0x0);
      return;
    }
    break;
  case 6:
    if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pWVar1 = param_1->___master_4->___worldMaster_5,
         pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
        (pSVar2 = pWVar1->___saveSystem_35,
        pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) &&
       ((pSVar3 = pSVar2->___settingsData_10,
        pSVar3 != (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 &&
        (param_1->___enabledState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
        ))) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___enabledState_5,pSVar3->___antiAliasing_4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
