// RVA 0x74e6c0 | Placemaker.Ui.PaletteMenu$$ClampTargetScroll
// PDB: PaletteMenu_ClampTargetScroll_m61F5EE326BFC397883B251B3BD992D94DF95FB77
// Body: [[1074e6c0, 1074e776]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a43af0 Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87

void __cdecl
PaletteMenu_ClampTargetScroll_m61F5EE326BFC397883B251B3BD992D94DF95FB77
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;

  if (DAT_1151ebee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAF30185BDC4E1A6471192007DCBA7E2AA1D1AC20_RuntimeMethod_var
              );
    DAT_1151ebee = '\x01';
  }
  if (param_1->___palettePickers_7 != (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) {
    fVar1 = param_1->___dist_20;
    fVar5 = (float)(param_1->___palettePickers_7->____size_2 + -1) * param_1->___pickerSize_21;
    fVar6 = fVar5 + (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
    fVar2 = param_1->___targetScroll_8;
    if (fVar1 < fVar6) {
      fVar5 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87
                        (fVar2,fVar1,fVar6,(MethodInfo *)0x0);
      bVar3 = NAN(fVar5) || NAN(param_1->___targetScroll_8);
      bVar4 = fVar5 == param_1->___targetScroll_8;
    }
    else {
      fVar5 = fVar5 * __real_3f000000;
      bVar3 = NAN(fVar5) || NAN(fVar2);
      bVar4 = fVar5 == fVar2;
    }
    if (bVar3 == bVar4) {
      param_1->___targetScroll_8 = fVar5;
      param_1->___updating_25 = true;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
