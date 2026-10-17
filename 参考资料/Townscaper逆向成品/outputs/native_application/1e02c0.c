// RVA 0x1e02c0 | Placemaker.Ui.PinUiButton.<>c__DisplayClass6_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__1
// PDB: U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mDCABBD2003F258C400C331A054E5FD692091ED54
// Body: [[101e02c0, 101e032b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10750980 PinnedUi_SetPinned_m82A241C8CD27A14FB1DDE9CE8ADF274B5EFC66D9

void __cdecl
U3CU3Ec__DisplayClass6_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_mDCABBD2003F258C400C331A054E5FD692091ED54
          (U3CU3Ec__DisplayClass6_0_tEE0895A37112998F13DA7D38315A008750F6F575 *param_1,float param_2
          ,MethodInfo *param_3)

{
  PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *pPVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar3;
  bool bVar4;

  pPVar1 = param_1->___sidePin_2;
  if ((param_1->___U3CU3E4__this_1 != (PinUiButton_t2DC79017B20F3160890B4C6B99A638ACBBCA49A0 *)0x0)
     && (pUVar2 = param_1->___U3CU3E4__this_1->___state_6,
        pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    bVar4 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (pUVar2,(MethodInfo *)0x0);
    if (bVar4) {
      param_1._0_1_ = true;
    }
    else {
      if (((param_1->___master_3 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
          (pSVar3 = param_1->___master_3->___sideMenu_8,
          pSVar3 == (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) ||
         (pUVar2 = pSVar3->___openState_8,
         pUVar2 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_101e0327;
      param_1._0_1_ =
           UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                     (pUVar2,(MethodInfo *)0x0);
    }
    if (pPVar1 != (PinnedUi_tB33174C851BDAF5FEACAEC23525832619BCB8242 *)0x0) {
      PinnedUi_SetPinned_m82A241C8CD27A14FB1DDE9CE8ADF274B5EFC66D9
                (pPVar1,param_1._0_1_,(MethodInfo *)0x0);
      return;
    }
  }
LAB_101e0327:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
