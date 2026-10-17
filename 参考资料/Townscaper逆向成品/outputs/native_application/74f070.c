// RVA 0x74f070 | Placemaker.Ui.PaletteMenu$$SelectNextPicker
// PDB: PaletteMenu_SelectNextPicker_mE2409D2F531B0AC302F4F2A723155968973938A1
// Body: [[1074f070, 1074f0f4] [1074f0f8, 1074f129]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10873f30 BaseButton_Click_m1FFE7BF8CE93267D334CC4BD0E78336566B1CC28
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
PaletteMenu_SelectNextPicker_mE2409D2F531B0AC302F4F2A723155968973938A1
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,int param_2,
          MethodInfo *param_3)

{
  char cVar1;
  int iVar2;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar3;
  uint uVar4;
  List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *pLVar5;

  if (DAT_1151ebed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAF30185BDC4E1A6471192007DCBA7E2AA1D1AC20_RuntimeMethod_var
              );
    DAT_1151ebed = '\x01';
  }
  pLVar5 = param_1->___palettePickers_7;
  if (pLVar5 != (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) {
    cVar1 = param_1->___selectedPickerIndex_6;
    iVar2 = pLVar5->____size_2;
    if (DAT_1151ebec == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                );
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         List_1_get_Item_m8C5A2EC8B25FBE7B6ECA8BED2EAACEB1CB67E88A_RuntimeMethod_var
                );
      pLVar5 = param_1->___palettePickers_7;
      DAT_1151ebec = '\x01';
    }
    uVar4 = (cVar1 + iVar2 + param_2) % iVar2;
    if (pLVar5 != (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) {
      if ((uint)pLVar5->____size_2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
           (pLVar5->____items_1 + uVar4 * 4 + 0x10) !=
          (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
        pBVar3 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
                 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                           (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                             (pLVar5->____items_1 + uVar4 * 4 + 0x10),
                            Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                           );
        if (pBVar3 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
          BaseButton_Click_m1FFE7BF8CE93267D334CC4BD0E78336566B1CC28(pBVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
