// RVA 0x3d4f80 | Placemaker.Ui.MasterClicker$$UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp
// PDB: MasterClicker_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m26502730C9C0BA9427F51EA3BB0694A3677DDFB9
// Body: [[103d4f80, 103d4ff8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e76a0 UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
// 103eff20 VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 11143db0 AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F

void __cdecl
MasterClicker_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m26502730C9C0BA9427F51EA3BB0694A3677DDFB9
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar1;
  float fVar2;

  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if (-1 < param_2->___U3CpointerIdU3Ek__BackingField_12) {
      return;
    }
    param_1->___pointerPressed_13 = false;
    fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    param_1->___bobbing_10 = false;
    param_1->___pointerPressTime_15 = fVar2;
    if (param_1->___aboutToRemove_11 != false) {
      param_1->___aboutToRemove_11 = false;
      if (param_1->___pressSource_20 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0
         ) goto LAB_103d4ff4;
      AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F
                (param_1->___pressSource_20,(MethodInfo *)0x0);
    }
    if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pVVar1 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                           (param_1->___master_7,(MethodInfo *)0x0),
       pVVar1 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
      VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
                (pVVar1,0.0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_103d4ff4:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
