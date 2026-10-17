// RVA 0x236d20 | Placemaker.Ui.ControlLegend$$Open
// PDB: ControlLegend_Open_m83C3AFC5161EBD9BB146AB45A99C7AE18B7DCD39
// Body: [[10236d20, 10236d99]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 104ee9c0 KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428

void __cdecl
ControlLegend_Open_m83C3AFC5161EBD9BB146AB45A99C7AE18B7DCD39
          (ControlLegend_tB336AC9E8DC444437364CA0FDD6C0BBEFB647025 *param_1,MethodInfo *param_2)

{
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar3;
  bool bVar4;

  if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pSVar1 = param_1->___master_4->___sideMenu_8,
      pSVar1 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) &&
     (pUVar2 = pSVar1->___openState_8,
     pUVar2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    bVar4 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (pUVar2,(MethodInfo *)0x0);
    param_1->___wasSideMenuOpen_6 = bVar4;
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pSVar1 = param_1->___master_4->___sideMenu_8,
       pSVar1 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) {
      KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428
                ((KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *)pSVar1,
                 (MethodInfo *)0x0);
      if (param_1->___openState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (param_1->___openState_5,true,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pDVar3 = param_1->___master_4->___dim_10,
           pDVar3 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
          Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar3,2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
