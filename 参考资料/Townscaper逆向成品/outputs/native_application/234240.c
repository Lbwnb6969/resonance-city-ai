// RVA 0x234240 | Placemaker.Ui.ControlBinding$$Close
// PDB: ControlBinding_Close_m66A39FAC334B99F1DF9232DA77D843A7F1BE22E9
// Body: [[10234240, 102342c0]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 10a088e0 SettingsMenu_Open_mB5FE994CFB9EF3BBE107407151014769059F77E3
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86

void __cdecl
ControlBinding_Close_m66A39FAC334B99F1DF9232DA77D843A7F1BE22E9
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,bool param_2,
          MethodInfo *param_3)

{
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar1;
  SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *pSVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;

  if (param_1->___openState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_10,false,(MethodInfo *)0x0);
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pDVar1 = param_1->___master_4->___dim_10,
       pDVar1 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
      Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar1,0,(MethodInfo *)0x0);
      if (param_2) {
        if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
           (pSVar2 = param_1->___master_4->___settingsMenu_7,
           pSVar2 == (SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *)0x0))
        goto LAB_102342bc;
        SettingsMenu_Open_mB5FE994CFB9EF3BBE107407151014769059F77E3(pSVar2,(MethodInfo *)0x0);
      }
      pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (pGVar3 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar3,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_102342bc:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
