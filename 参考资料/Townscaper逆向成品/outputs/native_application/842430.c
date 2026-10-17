// RVA 0x842430 | Placemaker.Ui.GenericControlsMenu$$Close
// PDB: GenericControlsMenu_Close_m4CD4A956921B00A71AE36C5C2D24753B2DF763F5
// Body: [[10842430, 108424af]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 10a088e0 SettingsMenu_Open_mB5FE994CFB9EF3BBE107407151014769059F77E3

void __cdecl
GenericControlsMenu_Close_m4CD4A956921B00A71AE36C5C2D24753B2DF763F5
          (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *param_1,bool param_2,
          MethodInfo *param_3)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *pSVar2;

  if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_5,false,(MethodInfo *)0x0);
    pUVar1 = param_1->___master_4;
    if (param_2) {
      if ((pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pUVar1->___dim_10 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
        Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
                  (pUVar1->___dim_10,1,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pSVar2 = param_1->___master_4->___settingsMenu_7,
           pSVar2 != (SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *)0x0)) {
          SettingsMenu_Open_mB5FE994CFB9EF3BBE107407151014769059F77E3(pSVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
            (pUVar1->___dim_10 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
      Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pUVar1->___dim_10,0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
