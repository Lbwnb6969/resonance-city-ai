// RVA 0x234c50 | Placemaker.Ui.ControlBinding$$Open
// PDB: ControlBinding_Open_m93B0BAF468B17C8C0A3CE8F5BF9A3ECEE8C4C4F7
// Body: [[10234c50, 10234ca8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 10a08840 SettingsMenu_Close_mAD78BE74AA9D8B6BB6934BF23EB03FE29BCC74E3

void __cdecl
ControlBinding_Open_m93B0BAF468B17C8C0A3CE8F5BF9A3ECEE8C4C4F7
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,MethodInfo *param_2)

{
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar1;
  SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *pSVar2;

  if (param_1->___openState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_10,true,(MethodInfo *)0x0);
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pDVar1 = param_1->___master_4->___dim_10,
       pDVar1 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
      Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar1,1,(MethodInfo *)0x0);
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pSVar2 = param_1->___master_4->___settingsMenu_7,
         pSVar2 != (SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *)0x0)) {
        SettingsMenu_Close_mAD78BE74AA9D8B6BB6934BF23EB03FE29BCC74E3(pSVar2,false,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
