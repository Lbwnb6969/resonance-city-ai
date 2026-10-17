// RVA 0xa08840 | Placemaker.Ui.SettingsMenu$$Close
// PDB: SettingsMenu_Close_mAD78BE74AA9D8B6BB6934BF23EB03FE29BCC74E3
// Body: [[10a08840, 10a088d0]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7

void __cdecl
SettingsMenu_Close_mAD78BE74AA9D8B6BB6934BF23EB03FE29BCC74E3
          (SettingsMenu_t1EC6DCE29962C6E664E545119A311235E69FC28C *param_1,bool param_2,
          MethodInfo *param_3)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;

  if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_5,false,(MethodInfo *)0x0);
    pUVar1 = param_1->___master_4;
    if (param_2) {
      if ((pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pUVar1->___dim_10 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
        Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
                  (pUVar1->___dim_10,0,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           ((pSVar2 = param_1->___master_4->___sideMenu_8,
            pSVar2 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0 &&
            (pUVar3 = pSVar2->___openState_8,
            pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)))) {
          UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                    (pUVar3,true,(MethodInfo *)0x0);
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
