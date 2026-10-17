// RVA 0x74e9f0 | Placemaker.Ui.PaletteMenu$$OnDimensionsChange
// PDB: PaletteMenu_OnDimensionsChange_m0C7C90566F5A54D88EEC8EFCAF52DA799710CA03
// Body: [[1074e9f0, 1074ea96] [1074ea9a, 1074ead4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1480 AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
// 101d1490 AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 1074e6c0 PaletteMenu_ClampTargetScroll_m61F5EE326BFC397883B251B3BD992D94DF95FB77
// 1074e7f0 PaletteMenu_FramePicker_m73A96E6A4CFDB6A67B3418C344A207658CDBE5E4
// 1074f430 PaletteMenu_UpdateAnchors_mDA81138BE5DB7ACFBEFA3FFDA5E7968B2031B1B5
// 1074f590 PaletteMenu_Update_mD25F822128D9A8A9BD88297FFD0CADAE9074A8E6
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
PaletteMenu_OnDimensionsChange_m0C7C90566F5A54D88EEC8EFCAF52DA799710CA03
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,
          RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *param_2,MethodInfo *param_3)

{
  List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *pLVar1;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar2;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar3;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar4;
  float fVar5;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_28;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float local_8;

  if (DAT_1151ebeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8C5A2EC8B25FBE7B6ECA8BED2EAACEB1CB67E88A_RuntimeMethod_var)
    ;
    DAT_1151ebeb = '\x01';
  }
  if (param_2 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    pRVar2 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                       (&local_28,param_2,(MethodInfo *)0x0);
    local_18 = pRVar2->___m_XMin_0;
    fStack_14 = pRVar2->___m_YMin_1;
    fStack_10 = pRVar2->___m_Width_2;
    fStack_c = pRVar2->___m_Height_3;
    fVar5 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                      ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_18,
                       (MethodInfo *)0x0);
    local_8 = AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_18,
                         (MethodInfo *)0x0);
    if (local_8 < fVar5) {
      pRVar3 = param_1->___verticalAnchor1_13;
      pRVar4 = param_1->___verticalAnchor0_12;
    }
    else {
      pRVar3 = param_1->___horizontalAnchor1_15;
      pRVar4 = param_1->___horizontalAnchor0_14;
    }
    param_1->___t0_10 = pRVar4;
    param_1->___t1_11 = pRVar3;
    PaletteMenu_UpdateAnchors_mDA81138BE5DB7ACFBEFA3FFDA5E7968B2031B1B5(param_1,(MethodInfo *)0x0);
    pLVar1 = param_1->___palettePickers_7;
    if (pLVar1 != (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)0x0) {
      if ((uint)pLVar1->____size_2 <= (uint)(int)param_1->___selectedPickerIndex_6) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      PaletteMenu_FramePicker_m73A96E6A4CFDB6A67B3418C344A207658CDBE5E4
                (param_1,*(PalettePicker_t7DE72AF9D552804578E6E75218808113F2153103 **)
                          (pLVar1->____items_1 + param_1->___selectedPickerIndex_6 * 4 + 0x10),
                 (MethodInfo *)0x0);
      PaletteMenu_ClampTargetScroll_m61F5EE326BFC397883B251B3BD992D94DF95FB77
                (param_1,(MethodInfo *)0x0);
      param_1->___currentScroll_9 = param_1->___targetScroll_8;
      param_1->___updating_25 = true;
      PaletteMenu_Update_mD25F822128D9A8A9BD88297FFD0CADAE9074A8E6(param_1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
