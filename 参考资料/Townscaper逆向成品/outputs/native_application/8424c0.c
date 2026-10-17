// RVA 0x8424c0 | Placemaker.Ui.GenericControlsMenu$$Open
// PDB: GenericControlsMenu_Open_m40F0C3EEE25592B8B4F32310670016AF6569182D
// Body: [[108424c0, 10842518]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 10a08840 SettingsMenu_Close_mAD78BE74AA9D8B6BB6934BF23EB03FE29BCC74E3

void __cdecl
GenericControlsMenu_Open_m40F0C3EEE25592B8B4F32310670016AF6569182D
          (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *param_1,
          MethodInfo *param_2)

{
  SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *pSVar1;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar2;

  if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_5,true,(MethodInfo *)0x0);
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pSVar1 = param_1->___master_4->___settingsMenu_7,
       pSVar1 != (SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *)0x0)) {
      SettingsMenu_Close_mAD78BE74AA9D8B6BB6934BF23EB03FE29BCC74E3(pSVar1,false,(MethodInfo *)0x0);
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pDVar2 = param_1->___master_4->___dim_10,
         pDVar2 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
        Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar2,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
