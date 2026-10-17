// RVA 0x3d4dc0 | Placemaker.Ui.MasterClicker$$UnityEngine.EventSystems.IPointerDownHandler.OnPointerDown
// PDB: MasterClicker_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_m309B9541F3F247A8A32C4DFB698C32776469340F
// Body: [[103d4dc0, 103d4ef4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d4110 MasterClicker_MaybeUpdateHover_mC50B3FFA52A35B45561A7B28E53AFA93E79F92F3
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e76a0 UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
// 103efec0 VoxelBobEffect_SetPressed_mB4A34778C81FB02765F1E4842AE3E9DC0878B1B5
// 10411420 HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
MasterClicker_UnityEngine_EventSystems_IPointerDownHandler_OnPointerDown_m309B9541F3F247A8A32C4DFB698C32776469340F
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *param_2,MethodInfo *param_3)

{
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar1;
  bool bVar2;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar3;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  float fVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (DAT_1151c85e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c85e = '\x01';
  }
  if (param_2 != (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)0x0) {
    if (-1 < param_2->___U3CpointerIdU3Ek__BackingField_12) {
      return;
    }
    local_10.___y_3 = (param_2->___U3CpositionU3Ek__BackingField_13).___x_0;
    local_10.___z_4 = (param_2->___U3CpositionU3Ek__BackingField_13).___y_1;
    MasterClicker_MaybeUpdateHover_mC50B3FFA52A35B45561A7B28E53AFA93E79F92F3
              (param_1,param_2->___U3CpositionU3Ek__BackingField_13,(MethodInfo *)0x0);
    param_1->___pointerPressed_13 = true;
    param_1->___pointerPressUsed_14 = false;
    fVar6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    param_1->___pointerPressTime_15 = fVar6;
    if ((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                           (param_1->___master_7,(MethodInfo *)0x0),
       pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
      pVVar1 = pHVar3->___voxel_9;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar1,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pVVar4 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                           (param_1->___master_7,(MethodInfo *)0x0);
        if (((param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
            (pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                (param_1->___master_7,(MethodInfo *)0x0),
            pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) &&
           (pVVar5 = HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
                               (&local_10,pHVar3,(MethodInfo *)0x0),
           pVVar4 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
          VoxelBobEffect_SetPressed_mB4A34778C81FB02765F1E4842AE3E9DC0878B1B5
                    (pVVar4,*pVVar5,(MethodInfo *)0x0);
          param_1->___bobbing_10 = true;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
