// RVA 0x1de910 | Placemaker.Ui.PaletteMenu.<>c__DisplayClass30_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__3
// PDB: U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m63866B49353085E14136443C50FF4BC8A89F5966
// Body: [[101de910, 101de9fe] [101dea05, 101dea74]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8550 UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
// 1074e9f0 PaletteMenu_OnDimensionsChange_m0C7C90566F5A54D88EEC8EFCAF52DA799710CA03
// 1074f130 PaletteMenu_SelectPicker_m28CA7372D3A143994038A7623C92A08A48C029FA
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
U3CU3Ec__DisplayClass30_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_m63866B49353085E14136443C50FF4BC8A89F5966
          (U3CU3Ec__DisplayClass30_0_t43D67C24E6AA83F89AA6674E144B4F676C86BC90 *param_1,
          MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar3;
  PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *pPVar4;
  List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *pLVar5;
  PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 *pPVar6;
  bool bVar7;

  if (DAT_1151aff0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8C5A2EC8B25FBE7B6ECA8BED2EAACEB1CB67E88A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151aff0 = '\x01';
  }
  if ((param_1->___master_3 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pWVar1 = param_1->___master_3->___worldMaster_5,
     pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
    pSVar2 = pWVar1->___saveSystem_35;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar2,(MethodInfo *)0x0)
    ;
    if (bVar7) {
      if ((((param_1->___master_3 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
           (pWVar1 = param_1->___master_3->___worldMaster_5,
           pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
          (pSVar2 = pWVar1->___saveSystem_35,
          pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
         ((pSVar3 = pSVar2->___settingsData_10,
          pSVar3 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0 ||
          (param_1->___U3CU3E4__this_1 ==
           (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)))) goto LAB_101dea70;
      param_1->___U3CU3E4__this_1->___selectedPickerIndex_6 = pSVar3->___currentColor_2;
    }
    else {
      if (param_1->___U3CU3E4__this_1 ==
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0) goto LAB_101dea70;
      param_1->___U3CU3E4__this_1->___selectedPickerIndex_6 = '\0';
    }
    pPVar4 = param_1->___U3CU3E4__this_1;
    if ((pPVar4 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0) &&
       (pLVar5 = pPVar4->___palettePickers_7,
       pLVar5 != (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0)) {
      if ((uint)pLVar5->____size_2 <= (uint)(int)pPVar4->___selectedPickerIndex_6) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if (pPVar4 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0) {
        pPVar6 = *(PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 **)
                  (pLVar5->____items_1 + pPVar4->___selectedPickerIndex_6 * 4 + 0x10);
        PaletteMenu_SelectPicker_m28CA7372D3A143994038A7623C92A08A48C029FA
                  (pPVar4,pPVar6,(MethodInfo *)0x0);
        if ((pPVar6 != (PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 *)0x0) &&
           (pPVar6->___selectedState_6 !=
            (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
          UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
                    (pPVar6->___selectedState_6,1.0,(MethodInfo *)0x0);
          if (param_1->___U3CU3E4__this_1 !=
              (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0) {
            param_1->___U3CU3E4__this_1->___snap_26 = true;
            if (param_1->___U3CU3E4__this_1 !=
                (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0) {
              param_1->___U3CU3E4__this_1->___updating_25 = true;
              if (param_1->___U3CU3E4__this_1 !=
                  (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0) {
                PaletteMenu_OnDimensionsChange_m0C7C90566F5A54D88EEC8EFCAF52DA799710CA03
                          (param_1->___U3CU3E4__this_1,param_1->___rt_2,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_101dea70:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
