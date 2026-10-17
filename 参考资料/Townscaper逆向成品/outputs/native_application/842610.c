// RVA 0x842610 | Placemaker.Ui.GenericControlsMenu$$UpdateControls
// PDB: GenericControlsMenu_UpdateControls_mC2307EF47E28EFB0E484C2F0A724EF30079E78AB
// Body: [[10842610, 10842720]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 10a088e0 SettingsMenu_Open_mB5FE994CFB9EF3BBE107407151014769059F77E3
// 10f1d410 Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96

void __cdecl
GenericControlsMenu_UpdateControls_mC2307EF47E28EFB0E484C2F0A724EF30079E78AB
          (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *param_1,
          MethodInfo *param_2)

{
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar1;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar2;
  SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *pSVar3;
  bool bVar4;

  if (DAT_1151f445 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7);
    DAT_1151f445 = '\x01';
  }
  if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
     (pPVar1 = param_1->___master_4->___player_43,
     pPVar1 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0)) goto LAB_1084271c;
  bVar4 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                    (pPVar1,_stringLiteral5C70E2DF6C4DF3077BF0E77F8FC2F3E1E6FE697B,(MethodInfo *)0x0
                    );
  if (bVar4) {
    if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
    goto LAB_1084271c;
    if ((param_1->___master_4->___menuState_30 & 0x800U) == 0) {
      if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (param_1->___openState_5,false,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pDVar2 = param_1->___master_4->___dim_10,
           pDVar2 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
          Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar2,1,(MethodInfo *)0x0);
          if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pSVar3 = param_1->___master_4->___settingsMenu_7,
             pSVar3 != (SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *)0x0)) {
            SettingsMenu_Open_mB5FE994CFB9EF3BBE107407151014769059F77E3(pSVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto LAB_1084271c;
    }
  }
  bVar4 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                    (pPVar1,_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7,(MethodInfo *)0x0
                    );
  if (!bVar4) {
    return;
  }
  if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_5,false,(MethodInfo *)0x0);
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pDVar2 = param_1->___master_4->___dim_10,
       pDVar2 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
      Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_1084271c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
