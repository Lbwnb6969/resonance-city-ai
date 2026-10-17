// RVA 0x9ffb10 | Placemaker.Ui.SaveMenu$$Open
// PDB: SaveMenu_Open_m28E20C434F4F4CF8B3FD82AA9974A5F4B3CD69D4
// Body: [[109ffb10, 109ffb5d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5740 MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
// 10a03020 SaveSystem_OnSaveMenuOpen_m0D4E5FF00837DAEF190CBE78A2D6B4A166E1DBC3

void __cdecl
SaveMenu_Open_m28E20C434F4F4CF8B3FD82AA9974A5F4B3CD69D4
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;

  if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pWVar1 = param_1->___master_4->___worldMaster_5,
      pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
     (pSVar2 = pWVar1->___saveSystem_35,
     pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
    SaveSystem_OnSaveMenuOpen_m0D4E5FF00837DAEF190CBE78A2D6B4A166E1DBC3(pSVar2,(MethodInfo *)0x0);
    if (param_1->___menuMusic_24 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0) {
      MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
                (param_1->___menuMusic_24,(MethodInfo *)0x0);
      SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
                (param_1,'\x01',(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
