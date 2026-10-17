// RVA 0x3d4660 | Placemaker.Ui.MasterClicker$$TouchDown
// PDB: MasterClicker_TouchDown_m418AA225F6548AEED5EDD73BC6B34F9E49067B26
// Body: [[103d4660, 103d47a4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e7660 UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
// 103e7680 UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
// 103e76a0 UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
// 103efec0 VoxelBobEffect_SetPressed_mB4A34778C81FB02765F1E4842AE3E9DC0878B1B5
// 10411420 HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
// 10411e50 HoverData_SetHover_m80183E8480285A26E93F2AB4687CBF649D7F15C4
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
MasterClicker_TouchDown_m418AA225F6548AEED5EDD73BC6B34F9E49067B26
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,MethodInfo *param_3)

{
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar1;
  bool bVar2;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar3;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar4;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  float fVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (DAT_1151c85d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c85d = '\x01';
  }
  if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                       (param_1->___master_7,(MethodInfo *)0x0);
    if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
      pMVar4 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                         (param_1->___master_7,(MethodInfo *)0x0);
      if ((pMVar4 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) &&
         (pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
        HoverData_SetHover_m80183E8480285A26E93F2AB4687CBF649D7F15C4
                  (pHVar3,param_2,pMVar4->___actionId_10,(MethodInfo *)0x0);
        if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                             (param_1->___master_7,(MethodInfo *)0x0);
          if (pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) {
            pVVar1 = pHVar3->___voxel_9;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                              ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar1,
                               (MethodInfo *)0x0);
            if (!bVar2) {
LAB_103d4789:
              param_1->___pointerPressUsed_14 = false;
              fVar7 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                                ((MethodInfo *)0x0);
              param_1->___pointerPressTime_15 = fVar7;
              return;
            }
            if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
              pVVar5 = UiMaster_get_voxelBobEffect_m51EC36C5A06DE54DA15A4FB5E0F6945155F68C7D
                                 (param_1->___master_7,(MethodInfo *)0x0);
              if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
              {
                pHVar3 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                                   (param_1->___master_7,(MethodInfo *)0x0);
                if (pHVar3 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) {
                  pVVar6 = HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
                                     (&local_10,pHVar3,(MethodInfo *)0x0);
                  if (pVVar5 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0) {
                    VoxelBobEffect_SetPressed_mB4A34778C81FB02765F1E4842AE3E9DC0878B1B5
                              (pVVar5,*pVVar6,(MethodInfo *)0x0);
                    param_1->___bobbing_10 = true;
                    goto LAB_103d4789;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
