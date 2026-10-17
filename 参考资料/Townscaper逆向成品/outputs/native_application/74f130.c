// RVA 0x74f130 | Placemaker.Ui.PaletteMenu$$SelectPicker
// PDB: PaletteMenu_SelectPicker_m28CA7372D3A143994038A7623C92A08A48C029FA
// Body: [[1074f130, 1074f18a] [1074f18e, 1074f2f1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 1074e7f0 PaletteMenu_FramePicker_m73A96E6A4CFDB6A67B3418C344A207658CDBE5E4
// 10a037d0 SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11032cc0 List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared

void __cdecl
PaletteMenu_SelectPicker_m28CA7372D3A143994038A7623C92A08A48C029FA
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,
          PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 *param_2,MethodInfo *param_3)

{
  char cVar1;
  List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *pLVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;
  MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *pMVar4;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar5;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar6;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar7;
  bool bVar8;
  int iVar9;

  if (DAT_1151ebe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_m4FD94BF1E49067E93DED385AEE040B02C31A9046_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8C5A2EC8B25FBE7B6ECA8BED2EAACEB1CB67E88A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ebe7 = '\x01';
  }
  cVar1 = param_1->___selectedPickerIndex_6;
  if (cVar1 != -1) {
    pLVar2 = param_1->___palettePickers_7;
    if (pLVar2 == (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) goto LAB_1074f2ed;
    if ((uint)pLVar2->____size_2 <= (uint)(int)cVar1) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    if ((*(int *)(pLVar2->____items_1 + cVar1 * 4 + 0x10) == 0) ||
       (pUVar3 = *(UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C **)
                  (*(int *)(pLVar2->____items_1 + cVar1 * 4 + 0x10) + 0x14),
       pUVar3 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_1074f2ed;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar3,false,(MethodInfo *)0x0);
  }
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,(MethodInfo *)0x0);
  if (!bVar8) {
    param_1->___selectedPickerIndex_6 = -1;
    return;
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___palettePickers_7 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    iVar9 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                       param_1->___palettePickers_7,(Il2CppObject *)param_2,
                       List_1_IndexOf_m4FD94BF1E49067E93DED385AEE040B02C31A9046_RuntimeMethod_var);
    param_1->___selectedPickerIndex_6 = (schar)iVar9;
    if ((param_2 != (PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 *)0x0) &&
       (param_2->___selectedState_6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
       ) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_2->___selectedState_6,true,(MethodInfo *)0x0);
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pMVar4 = param_1->___master_4->___masterClicker_16,
         pMVar4 != (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *)0x0)) {
        pMVar4->___currentVoxelType_8 = param_1->___selectedPickerIndex_6;
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pWVar5 = param_1->___master_4->___worldMaster_5,
           pWVar5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
          pSVar6 = pWVar5->___saveSystem_35;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar6,
                             (MethodInfo *)0x0);
          if (bVar8) {
            if ((((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0
                  ) || (pWVar5 = param_1->___master_4->___worldMaster_5,
                       pWVar5 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
                (pSVar6 = pWVar5->___saveSystem_35,
                pSVar6 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
               (pSVar7 = pSVar6->___settingsData_10,
               pSVar7 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
            goto LAB_1074f2ed;
            if (pSVar7->___currentColor_2 != param_1->___selectedPickerIndex_6) {
              pSVar7->___currentColor_2 = param_1->___selectedPickerIndex_6;
              if (((param_1->___master_4 ==
                    (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
                  (pWVar5 = param_1->___master_4->___worldMaster_5,
                  pWVar5 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
                 (pSVar6 = pWVar5->___saveSystem_35,
                 pSVar6 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0))
              goto LAB_1074f2ed;
              SaveSystem_SetSettingsDirty_mD4FFF1F8BED42A5DBE32A3F956E5B0BC9B9F5219
                        (pSVar6,(MethodInfo *)0x0);
            }
          }
          PaletteMenu_FramePicker_m73A96E6A4CFDB6A67B3418C344A207658CDBE5E4
                    (param_1,param_2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_1074f2ed:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
