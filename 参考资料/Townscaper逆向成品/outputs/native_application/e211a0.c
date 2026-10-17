// RVA 0xe211a0 | Placemaker.GroundClicker$$UnityEngine.EventSystems.IPointerUpHandler.OnPointerUp
// PDB: GroundClicker_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m19F97CB42A1A12E4A2CAF7FCB5CA3734657E0EF4
// Body: [[10e211a0, 10e21207]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103eff20 VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 11143db0 AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F

void __cdecl
GroundClicker_UnityEngine_EventSystems_IPointerUpHandler_OnPointerUp_m19F97CB42A1A12E4A2CAF7FCB5CA3734657E0EF4
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar2;
  float fVar3;

  param_1->___pressed_7 = false;
  fVar3 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  param_1->___bobbing_9 = false;
  param_1->___pressTime_11 = fVar3;
  if (param_1->___aboutToRemove_10 != false) {
    param_1->___aboutToRemove_10 = false;
    if (param_1->___pressSource_14 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
    goto LAB_10e21203;
    AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F
              (param_1->___pressSource_14,(MethodInfo *)0x0);
  }
  if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
      (pWVar1 = param_1->___master_4->___worldMaster_5,
      pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
     (pVVar2 = pWVar1->___voxelBobEffect_15,
     pVVar2 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
    VoxelBobEffect_StopPressing_m1361F9C8732B2B96694642B3BBB58917EA59D95A
              (pVVar2,0.0,(MethodInfo *)0x0);
    return;
  }
LAB_10e21203:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
