// RVA 0xa0c4d0 | Placemaker.Ui.SideMenu$$Button_Load
// PDB: SideMenu_Button_Load_m58A5DF1C64772F459B3371849F8ED26E9948FF3C
// Body: [[10a0c4d0, 10a0c541]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5740 MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
// 10a03020 SaveSystem_OnSaveMenuOpen_m0D4E5FF00837DAEF190CBE78A2D6B4A166E1DBC3

void __cdecl
SideMenu_Button_Load_m58A5DF1C64772F459B3371849F8ED26E9948FF3C
          (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *param_1,MethodInfo *param_2)

{
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;

  if ((((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pSVar1 = param_1->___master_4->___saveMenu_6,
       pSVar1 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0)) &&
      (pSVar1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) &&
     ((pWVar2 = pSVar1->___master_4->___worldMaster_5,
      pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
      (pSVar3 = pWVar2->___saveSystem_35,
      pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)))) {
    SaveSystem_OnSaveMenuOpen_m0D4E5FF00837DAEF190CBE78A2D6B4A166E1DBC3(pSVar3,(MethodInfo *)0x0);
    if (pSVar1->___menuMusic_24 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0) {
      MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
                (pSVar1->___menuMusic_24,(MethodInfo *)0x0);
      SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727(pSVar1,'\x01',(MethodInfo *)0x0)
      ;
      if (param_1->___openState_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (param_1->___openState_8,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
