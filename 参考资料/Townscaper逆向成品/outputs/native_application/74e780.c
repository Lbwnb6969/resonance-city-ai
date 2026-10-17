// RVA 0x74e780 | Placemaker.Ui.PaletteMenu$$ColorPick
// PDB: PaletteMenu_ColorPick_m0B2FA6B175B31D370C9F85343C365ED03F2E6597
// Body: [[1074e780, 1074e7c3] [1074e7c7, 1074e7e2]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1074f130 PaletteMenu_SelectPicker_m28CA7372D3A143994038A7623C92A08A48C029FA
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
PaletteMenu_ColorPick_m0B2FA6B175B31D370C9F85343C365ED03F2E6597
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_2,MethodInfo *param_3)

{
  List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *pLVar1;

  if (DAT_1151ebe6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8C5A2EC8B25FBE7B6ECA8BED2EAACEB1CB67E88A_RuntimeMethod_var)
    ;
    DAT_1151ebe6 = '\x01';
  }
  if (param_2 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
    pLVar1 = param_1->___palettePickers_7;
    if (pLVar1 != (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) {
      if ((uint)pLVar1->____size_2 <= (uint)(int)param_2->___type_4) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      PaletteMenu_SelectPicker_m28CA7372D3A143994038A7623C92A08A48C029FA
                (param_1,*(PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 **)
                          (pLVar1->____items_1 + param_2->___type_4 * 4 + 0x10),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
