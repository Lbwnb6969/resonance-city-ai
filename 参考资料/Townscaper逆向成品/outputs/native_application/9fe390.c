// RVA 0x9fe390 | Placemaker.Ui.SaveMenu$$Close
// PDB: SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689
// Body: [[109fe390, 109fe3c2]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5930 MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
// 10a00660 SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727

void __cdecl
SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,MethodInfo *param_2)

{
  if (param_1->___menuMusic_24 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0) {
    MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
              (param_1->___menuMusic_24,1.0,(MethodInfo *)0x0);
    SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727(param_1,'\0',(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
