// RVA 0x236cc0 | Placemaker.Ui.ControlLegend$$Close
// PDB: ControlLegend_Close_m2D58D146318557B6244EEBA7A047876763F87047
// Body: [[10236cc0, 10236d1c]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 10a0c7d0 SideMenu_Open_mBB91D95970ED849216B1D14742AD330000743CF6

void __cdecl
ControlLegend_Close_m2D58D146318557B6244EEBA7A047876763F87047
          (ControlLegend_tB336AC9E8DC444437364CA0FDD6C0BBEFB647025 *param_1,MethodInfo *param_2)

{
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar1;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar2;

  if (param_1->___wasSideMenuOpen_6 != false) {
    if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (pSVar1 = param_1->___master_4->___sideMenu_8,
       pSVar1 == (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) goto LAB_10236d18;
    SideMenu_Open_mBB91D95970ED849216B1D14742AD330000743CF6(pSVar1,(MethodInfo *)0x0);
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
LAB_10236d18:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
