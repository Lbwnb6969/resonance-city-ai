// RVA 0xa009d0 | Placemaker.Ui.SaveMenu$$Toggle
// PDB: SaveMenu_Toggle_m27E6699BB9061C9095622A865584F96EAB44BB55
// Body: [[10a009d0, 10a00a5d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5740 MenuMusic_StartPlaying_m1B3147C144240015D6A9D6321210155B71DFC6F9
// 103d5930 MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
// 10a03020 SaveSystem_OnSaveMenuOpen_m0D4E5FF00837DAEF190CBE78A2D6B4A166E1DBC3

void __cdecl
SaveMenu_Toggle_m27E6699BB9061C9095622A865584F96EAB44BB55
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  bool bVar3;

  if (param_1->___openState_29 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar3 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (param_1->___openState_29,(MethodInfo *)0x0);
    if (bVar3) {
      if (param_1->___menuMusic_24 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0) {
        MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
                  (param_1->___menuMusic_24,1.0,(MethodInfo *)0x0);
        SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
                  (param_1,'\0',(MethodInfo *)0x0);
        return;
      }
    }
    else if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
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
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
