// RVA 0xe210a0 | Placemaker.GroundClicker$$UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown
// PDB: GroundClicker_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_mF3B7E17B7211B3AA8847EA40B930A254123A8AB7
// Body: [[10e210a0, 10e2115b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103efec0 VoxelBobEffect_SetPressed_mB4A34778C81FB02765F1E4842AE3E9DC0878B1B5
// 10411420 HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10e20570 GroundClicker_MaybeUpdateHover_m32CA79F19E4D417388DFEC905D3716F00FC96E1C

void __cdecl
GroundClicker_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_mF3B7E17B7211B3AA8847EA40B930A254123A8AB7
          (GroundClicker_t4891E4F1FD705CD7457F4C0C4A563825C9EFA4EA *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar2;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  float fVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if (0 < param_2->___U3CpointerIdU3Ek__BackingField_12) {
      return;
    }
    local_10.___y_3 = (param_2->___U3CpositionU3Ek__BackingField_13).___x_0;
    local_10.___z_4 = (param_2->___U3CpositionU3Ek__BackingField_13).___y_1;
    GroundClicker_MaybeUpdateHover_m32CA79F19E4D417388DFEC905D3716F00FC96E1C
              (param_1,param_2->___U3CpositionU3Ek__BackingField_13,(MethodInfo *)0x0);
    param_1->___pressUsed_8 = false;
    param_1->___bobbing_9 = true;
    param_1->___pressed_7 = true;
    fVar5 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    pUVar1 = param_1->___master_4;
    param_1->___pressTime_11 = fVar5;
    if ((pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pUVar1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
      pVVar2 = pUVar1->___worldMaster_5->___voxelBobEffect_15;
      pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                         (pUVar1,(MethodInfo *)0x0);
      if ((pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) &&
         (pVVar4 = HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
                             (&local_10,pHVar3,(MethodInfo *)0x0),
         pVVar2 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
        VoxelBobEffect_SetPressed_mB4A34778C81FB02765F1E4842AE3E9DC0878B1B5
                  (pVVar2,*pVVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
