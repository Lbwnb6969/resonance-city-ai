// RVA 0x9fe1e0 | Placemaker.Ui.SaveMenu$$Button_SideCancel
// PDB: SaveMenu_Button_SideCancel_mB9C762E51B68B785C251D2774CB4EC0F8DAC05BD
// Body: [[109fe1e0, 109fe274]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5930 MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727

void __cdecl
SaveMenu_Button_SideCancel_mB9C762E51B68B785C251D2774CB4EC0F8DAC05BD
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,
          BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_2,MethodInfo *param_3)

{
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar1;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;

  if ((param_2 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) &&
     (param_2->___eventData_8 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0))
  {
    if (param_2->___eventData_8->___U3CdraggingU3Ek__BackingField_22 != false) {
      return;
    }
    if (param_1->___menuMusic_24 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0) {
      MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
                (param_1->___menuMusic_24,1.0,(MethodInfo *)0x0);
      SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727(param_1,'\0',(MethodInfo *)0x0);
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pDVar1 = param_1->___master_4->___dim_10,
         pDVar1 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
        Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar1,0,(MethodInfo *)0x0);
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
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
