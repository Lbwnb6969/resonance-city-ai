// RVA 0x74e7f0 | Placemaker.Ui.PaletteMenu$$FramePicker
// PDB: PaletteMenu_FramePicker_m73A96E6A4CFDB6A67B3418C344A207658CDBE5E4
// Body: [[1074e7f0, 1074e907]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
// 10a43fd0 Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 11032cc0 List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared

void __cdecl
PaletteMenu_FramePicker_m73A96E6A4CFDB6A67B3418C344A207658CDBE5E4
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,
          PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 *param_2,MethodInfo *param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;

  if (DAT_1151ebe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_m4FD94BF1E49067E93DED385AEE040B02C31A9046_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAF30185BDC4E1A6471192007DCBA7E2AA1D1AC20_RuntimeMethod_var
              );
    DAT_1151ebe8 = '\x01';
  }
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___palettePickers_7 !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    iVar3 = List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                       param_1->___palettePickers_7,(Il2CppObject *)param_2,
                       List_1_IndexOf_m4FD94BF1E49067E93DED385AEE040B02C31A9046_RuntimeMethod_var);
    fVar5 = param_1->___dist_20;
    cVar2 = (char)iVar3;
    param_1->___selectedPickerIndex_6 = cVar2;
    if (param_1->___palettePickers_7 != (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) {
      iVar3 = param_1->___palettePickers_7->____size_2;
      iVar4 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(cVar2 + -1,0,(MethodInfo *)0x0);
      fVar1 = param_1->___pickerSize_21;
      iVar3 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
                        (cVar2 + 1,iVar3 + -1,(MethodInfo *)0x0);
      fVar5 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                        (param_1->___targetScroll_8,(float)iVar3 * param_1->___pickerSize_21 - fVar5
                         ,(float)iVar4 * fVar1 -
                          (float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000),
                         (MethodInfo *)0x0);
      if (fVar5 != param_1->___targetScroll_8) {
        param_1->___targetScroll_8 = fVar5;
        param_1->___updating_25 = true;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
