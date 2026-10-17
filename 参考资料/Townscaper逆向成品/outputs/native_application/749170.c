// RVA 0x749170 | Placemaker.Ui.OrbitalCamera$$BoundsUpdated
// PDB: OrbitalCamera_BoundsUpdated_m339B5A48359744B29231BAB101DAF5627F40582F
// Body: [[10749170, 1074944b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1074c960 OrbitalCamera_RemapPans_mD62459BF5811847D3E9C1096F9B3EEB7AC2980D4
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e79e40 Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD

void __cdecl
OrbitalCamera_BoundsUpdated_m339B5A48359744B29231BAB101DAF5627F40582F
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *pGVar5;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float3x2_t0D922384417AC3A91D9C89C83E8A4B004CB2D0A7 fVar11;
  float3x2_t0D922384417AC3A91D9C89C83E8A4B004CB2D0A7 fVar12;
  bool bVar13;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar14;
  float fVar15;
  int local_3c;
  int iStack_38;

  if (DAT_1151ebd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ebd2 = '\x01';
  }
  if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pGVar14 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                        ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4,
                         (MethodInfo *)0x0);
    if (pGVar14 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
      bVar13 = Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD
                         (pGVar14,(MethodInfo *)0x0);
      if (bVar13) {
        if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
        goto LAB_10749447;
        pGVar5 = param_1->___master_4->___gamepadScreenCursor_18;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar13 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                           ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pGVar5,
                            (MethodInfo *)0x0);
        if (bVar13) {
          pUVar6 = param_1->___master_4;
          if ((pUVar6 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
             (pUVar6->___gamepadScreenCursor_18 ==
              (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0))
          goto LAB_10749447;
          if (pUVar6->___gamepadScreenCursor_18->___isAdding_15 != false) {
            fVar12 = param_1->___boundsTarget_21;
            pGVar14 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                                ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)pUVar6,
                                 (MethodInfo *)0x0);
            if (pGVar14 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)
            goto LAB_10749447;
            iVar7 = (pGVar14->___bounds_28).___c0_0.___x_0;
            iVar8 = (pGVar14->___bounds_28).___c0_0.___y_1;
            iVar9 = (pGVar14->___bounds_28).___c0_0.___z_2;
            iVar10 = (pGVar14->___bounds_28).___c1_1.___x_0;
            uVar1 = (pGVar14->___bounds_28).___c1_1.___y_1;
            uVar3 = (pGVar14->___bounds_28).___c1_1.___z_2;
            fVar15 = param_1->___heightTarget_23;
            if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
            goto LAB_10749447;
            pGVar14 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                                ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)
                                 param_1->___master_4,(MethodInfo *)0x0);
            if (pGVar14 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)
            goto LAB_10749447;
            fVar11.___c1_1.___z_2 = (float)(int)uVar3;
            fVar11.___c1_1.___y_1 = (float)(int)uVar1;
            fVar11.___c0_0.___y_1 = (float)iVar8;
            fVar11.___c0_0.___x_0 = (float)iVar7;
            fVar11.___c0_0.___z_2 = (float)iVar9;
            fVar11.___c1_1.___x_0 = (float)iVar10;
            OrbitalCamera_RemapPans_mD62459BF5811847D3E9C1096F9B3EEB7AC2980D4
                      (param_1,fVar12,fVar11,fVar15,(float)pGVar14->___boundsHeight_27,
                       (MethodInfo *)0x0);
          }
        }
        if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
        goto LAB_10749447;
        pGVar14 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                            ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4
                             ,(MethodInfo *)0x0);
        if (pGVar14 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) goto LAB_10749447;
        iVar7 = (pGVar14->___bounds_28).___c0_0.___y_1;
        iVar8 = (pGVar14->___bounds_28).___c0_0.___z_2;
        iVar9 = (pGVar14->___bounds_28).___c1_1.___x_0;
        uVar2 = (pGVar14->___bounds_28).___c1_1.___y_1;
        uVar4 = (pGVar14->___bounds_28).___c1_1.___z_2;
        (param_1->___boundsTarget_21).___c0_0.___x_0 = (float)(pGVar14->___bounds_28).___c0_0.___x_0
        ;
        (param_1->___boundsTarget_21).___c0_0.___y_1 = (float)iVar7;
        (param_1->___boundsTarget_21).___c0_0.___z_2 = (float)iVar8;
        (param_1->___boundsTarget_21).___c1_1.___x_0 = (float)iVar9;
        (param_1->___boundsTarget_21).___c1_1.___y_1 = (float)(int)uVar2;
        (param_1->___boundsTarget_21).___c1_1.___z_2 = (float)(int)uVar4;
        fVar15 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
        param_1->___lastBoundsChangeTime_30 = fVar15;
      }
      if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pGVar14 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                            ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4
                             ,(MethodInfo *)0x0);
        if (pGVar14 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
          param_1->___heightTarget_23 = (float)pGVar14->___boundsHeight_27;
          return;
        }
      }
    }
  }
LAB_10749447:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
