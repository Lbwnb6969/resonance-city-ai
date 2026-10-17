// RVA 0x3d47b0 | Placemaker.Ui.MasterClicker$$TouchUp
// PDB: MasterClicker_TouchUp_m78BBEBA1E7393FDADE41428C343A1D6B7E61940D
// Body: [[103d47b0, 103d4863]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d36a0 MasterClicker_AddClick_m1D3961B08F73F3D7485F435A010A1D6E2FC5A588
// 103d4480 MasterClicker_RemoveClick_mA593CB9066569DCB72B58C9B4E292EB71AF83DEA
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e76a0 UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
// 103efef0 VoxelBobEffect_StopPressingNoVelocity_mEAA6604ADE0C850668E00036CE282574216C5A69
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 11143db0 AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F

void __cdecl
MasterClicker_TouchUp_m78BBEBA1E7393FDADE41428C343A1D6B7E61940D
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,bool param_2,
          MethodInfo *param_3)

{
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar1;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar2;
  float fVar3;

  if ((param_2) && (param_1->___pointerPressUsed_14 == false)) {
    fVar3 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    if (param_1->___pointerPressTime_15 + __real_3e800000 < fVar3) {
      if ((param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pHVar1 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                             (param_1->___master_7,(MethodInfo *)0x0),
         pHVar1 == (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) goto LAB_103d485f;
      if (pHVar1->___validRemove_21 != false) {
        MasterClicker_RemoveClick_mA593CB9066569DCB72B58C9B4E292EB71AF83DEA
                  (param_1,(MethodInfo *)0x0);
      }
    }
    else {
      MasterClicker_AddClick_m1D3961B08F73F3D7485F435A010A1D6E2FC5A588(param_1,(MethodInfo *)0x0);
    }
  }
  if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pVVar2 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                         (param_1->___master_7,(MethodInfo *)0x0),
     pVVar2 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
    VoxelBobEffect_StopPressingNoVelocity_mEAA6604ADE0C850668E00036CE282574216C5A69
              (pVVar2,(MethodInfo *)0x0);
    param_1->___bobbing_10 = false;
    if (param_1->___aboutToRemove_11 != false) {
      param_1->___aboutToRemove_11 = false;
      if (param_1->___pressSource_20 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0
         ) goto LAB_103d485f;
      AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F
                (param_1->___pressSource_20,(MethodInfo *)0x0);
    }
    return;
  }
LAB_103d485f:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
