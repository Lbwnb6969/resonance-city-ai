// RVA 0x74d360 | Placemaker.Ui.OrbitalCamera$$WASDCamera
// PDB: OrbitalCamera_WASDCamera_m8ABA519BE3A243A7A068DD40800AA49016169197
// Body: [[1074d360, 1074da0b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 103f8b00 WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040da30 HexMath_HexClamp_m353980FFEA59E5119D6BEC5D1D8C07BFA6CE03DB
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 10660030 Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 10e13a30 GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
// 10e77fa0 Graph_SetEmptyBoundsCenter_m9D03266BF4FA7332EF802EA72E1E234E64194C58
// 10e79e40 Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD

void __cdecl
OrbitalCamera_WASDCamera_m8ABA519BE3A243A7A068DD40800AA49016169197
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar16;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar17;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar18;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar19;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar22;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar23;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar24;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar25;
  bool bVar26;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar27;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar28;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar29;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar30;
  int iVar31;
  undefined8 uVar32;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar33;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar34;
  float fVar35;
  MethodInfo *pMVar36;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_90;
  undefined4 uStack_84;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_80;
  undefined8 local_70;
  float local_68;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_64;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_58;
  undefined8 local_48;
  float local_40;
  float local_38;
  float local_34;
  MethodInfo *local_30;
  float fStack_2c;
  float local_28;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_20;

  if (DAT_1151ebd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151ebd7 = '\x01';
  }
  local_64.___x_0 = (param_1->___boundsCurrent_20).___c0_0.___x_0;
  local_64.___y_1 = (param_1->___boundsCurrent_20).___c0_0.___y_1;
  local_64.___z_2 = (param_1->___boundsCurrent_20).___c0_0.___z_2;
  local_70._0_4_ = (param_1->___boundsCurrent_20).___c1_1.___x_0;
  local_70._4_4_ = (param_1->___boundsCurrent_20).___c1_1.___y_1;
  local_20.___w_3 = param_1->___nonDollyDist_29;
  local_68 = (param_1->___boundsCurrent_20).___c1_1.___z_2;
  local_58._0_8_ = local_64._0_8_;
  local_48 = local_70;
  local_38 = local_64.___z_2;
  local_34 = local_68;
  local_80.___z_2 =
       Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
  local_90.___x_0 = param_2.___x_2 * local_20.___w_3 * local_80.___z_2;
  local_28 = param_2.___y_3 * local_20.___w_3 * local_80.___z_2;
  local_80.___z_2 = param_2.___z_4 * local_20.___w_3 * local_80.___z_2;
  local_90.___x_0 = local_90.___x_0 + local_90.___x_0;
  local_28 = local_28 + local_28;
  local_80.___z_2 = local_80.___z_2 + local_80.___z_2;
  local_90.___y_1 = 0.0;
  local_90.___z_2 = 0.0;
  uStack_84 = 0;
  pQVar27 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                      (&local_20,0.0,param_1->___rotationY_10 * __real_43b40000,0.0,
                       (MethodInfo *)0x0);
  VVar21.___y_3 = local_28;
  VVar21.___x_2 = local_90.___x_0;
  VVar21.___z_4 = local_80.___z_2;
  pVVar28 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_80,*pQVar27,
                       VVar21,(MethodInfo *)0x0);
  uVar1 = pVVar28->___x_2;
  uVar8 = pVVar28->___y_3;
  fVar35 = pVVar28->___z_4;
  local_30 = (MethodInfo *)uVar1;
  fStack_2c = (float)uVar8;
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pGVar29 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                          ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4,
                           (MethodInfo *)0x0),
     pGVar29 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    bVar26 = Graph_get_anyVoxels_m9D90C592308B99A9264FA727570D36E17E0AC7FD
                       (pGVar29,(MethodInfo *)0x0);
    if (bVar26) {
      if (((local_64.___x_0 != (float)local_70) || (local_64.___y_1 != local_70._4_4_)) ||
         (local_64.___z_2 != local_68)) {
        uVar2 = (param_1->___boundsTarget_21).___c1_1.___x_0;
        uVar9 = (param_1->___boundsTarget_21).___c1_1.___y_1;
        local_20.___y_1 = (float)uVar2;
        local_20.___z_2 = (float)uVar9;
        if ((param_1->___boundsTarget_21).___c0_0.___x_0 == (float)uVar2) {
          uVar3 = (param_1->___boundsTarget_21).___c1_1.___x_0;
          uVar10 = (param_1->___boundsTarget_21).___c1_1.___y_1;
          local_20.___y_1 = (float)uVar3;
          local_20.___z_2 = (float)uVar10;
          if ((param_1->___boundsTarget_21).___c0_0.___y_1 == (float)uVar10) {
            uVar4 = (param_1->___boundsTarget_21).___c1_1.___x_0;
            uVar11 = (param_1->___boundsTarget_21).___c1_1.___y_1;
            local_20.___w_3 = (param_1->___boundsTarget_21).___c1_1.___z_2;
            local_20.___y_1 = (float)uVar4;
            local_20.___z_2 = (float)uVar11;
            if ((param_1->___boundsTarget_21).___c0_0.___z_2 == local_20.___w_3) goto LAB_1074d79a;
          }
        }
        local_90.___x_0 =
             ((float)local_70 - local_64.___x_0) * param_1->___panHexTargetX_15 + local_64.___x_0;
        local_90.___y_1 =
             (local_70._4_4_ - local_64.___y_1) * param_1->___panHexTargetY_16 + local_64.___y_1;
        local_80.___z_2 = (local_68 - local_64.___z_2) * 0.0 + local_64.___z_2;
        local_20.___w_3 =
             (float)((uint)local_90.___x_0 ^ __xmm_80000000800000008000000080000000) -
             local_90.___y_1;
        local_90.___z_2 = 0.0;
        uStack_84 = 0;
        if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
        }
        fVar22.___y_1 = local_90.___y_1;
        fVar22.___x_0 = local_90.___x_0;
        fVar22.___z_2 = local_20.___w_3;
        fVar33 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                           (fVar22,(MethodInfo *)0x0);
        local_20.___z_2 = fVar33.___x_0;
        local_20.___w_3 = fVar33.___y_1;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        fVar23.___y_1 = fStack_2c;
        fVar23.___x_0 = (float)local_30;
        fVar23.___z_2 = fVar35;
        pMVar36 = local_30;
        fVar33 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                           (fVar23,(MethodInfo *)0x0);
        iVar18.___z_2 = 0;
        iVar18.___x_0 = (int)fVar33.___x_0;
        iVar18.___y_1 = (int)fVar33.___y_1;
        iVar34 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar18,pMVar36);
        local_28 = local_28 + local_20.___w_3;
        fStack_2c = (float)iVar34.___x_0;
        fStack_2c = fStack_2c + local_20.___z_2;
        fVar33.___y_1 = local_28;
        fVar33.___x_0 = fStack_2c;
        pfVar30 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                            (&local_80,fVar33,(MethodInfo *)0x0);
        uVar32._0_4_ = pfVar30->___x_0;
        uVar32._4_4_ = pfVar30->___y_1;
        fVar35 = pfVar30->___z_2;
        local_30 = (MethodInfo *)(undefined4)uVar32;
        fStack_2c = (float)uVar32._4_4_;
        if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
          uVar32 = CONCAT44(fStack_2c,local_30);
        }
        fVar17.___z_2 = fVar35;
        fVar17.___x_0 = (float)(int)uVar32;
        fVar17.___y_1 = (float)(int)((ulonglong)uVar32 >> 0x20);
        fVar19.___z_2 = local_38;
        fVar19.___x_0 = local_58.___x_0;
        fVar19.___y_1 = local_58.___y_1;
        fVar24.___z_2 = local_34;
        fVar24.___x_0 = (float)(undefined4)local_48;
        fVar24.___y_1 = (float)local_48._4_4_;
        pfVar30 = HexMath_HexClamp_m353980FFEA59E5119D6BEC5D1D8C07BFA6CE03DB
                            (&local_80,fVar17,fVar19,fVar24,(MethodInfo *)0x0);
        local_58.___x_0 = pfVar30->___x_0;
        local_58.___y_1 = pfVar30->___y_1;
        if ((local_64.___x_0 != (float)local_70) &&
           ((param_1->___boundsTarget_21).___c0_0.___x_0 !=
            (param_1->___boundsTarget_21).___c1_1.___x_0)) {
          fVar35 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                             (local_64.___x_0,(float)local_70,local_58.___x_0,(MethodInfo *)0x0);
          param_1->___panHexTargetX_15 = fVar35;
        }
        if ((local_64.___y_1 != local_70._4_4_) &&
           ((param_1->___boundsTarget_21).___c0_0.___y_1 !=
            (param_1->___boundsTarget_21).___c1_1.___y_1)) {
          fVar35 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                             (local_64.___y_1,local_70._4_4_,local_58.___y_1,(MethodInfo *)0x0);
          param_1->___panHexTargetY_16 = fVar35;
        }
      }
LAB_1074d79a:
      if (0.0 < param_1->___heightCurrent_22) {
        fVar35 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                           ((float)uVar8 / param_1->___heightCurrent_22 +
                            param_1->___panHeightTarget_17,(MethodInfo *)0x0);
        param_1->___panHeightTarget_17 =
             (fVar35 - param_1->___panHeightTarget_17) + param_1->___panHeightTarget_17;
      }
      return;
    }
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    fVar25.___y_1 = fStack_2c;
    fVar25.___x_0 = (float)local_30;
    fVar25.___z_2 = fVar35;
    pMVar36 = local_30;
    fVar33 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                       (fVar25,(MethodInfo *)0x0);
    iVar20.___z_2 = 0;
    iVar20.___x_0 = (int)fVar33.___x_0;
    iVar20.___y_1 = (int)fVar33.___y_1;
    fVar33 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
             HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar20,pMVar36);
    if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    }
    pfVar30 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                        (&local_90,fVar33,(MethodInfo *)0x0);
    local_70._0_4_ = pfVar30->___x_0;
    local_70._4_4_ = pfVar30->___y_1;
    local_68 = pfVar30->___z_2;
    local_20.___w_3 = pfVar30->___z_2;
    uVar5 = (param_1->___boundsTarget_21).___c0_0.___x_0;
    uVar6 = pfVar30->___x_0;
    uVar12 = pfVar30->___y_1;
    uVar13 = (param_1->___boundsTarget_21).___c0_0.___y_1;
    uVar14 = pfVar30->___y_1;
    local_48._0_4_ = (param_1->___boundsTarget_21).___c0_0.___x_0;
    local_48._4_4_ = (param_1->___boundsTarget_21).___c0_0.___y_1;
    uVar7 = pfVar30->___x_0;
    uVar15 = pfVar30->___y_1;
    local_40 = (param_1->___boundsTarget_21).___c0_0.___z_2;
    local_28 = pfVar30->___z_2;
    (param_1->___boundsTarget_21).___c0_0.___x_0 = (float)uVar6 + (float)uVar5;
    (param_1->___boundsTarget_21).___c0_0.___y_1 = (float)uVar13 + (float)uVar14;
    (param_1->___boundsTarget_21).___c0_0.___z_2 = local_40 + local_28;
    local_80.___x_0 = (param_1->___boundsTarget_21).___c1_1.___x_0;
    local_80.___y_1 = (param_1->___boundsTarget_21).___c1_1.___y_1;
    local_64.___z_2 = (param_1->___boundsTarget_21).___c1_1.___z_2;
    local_64.___x_0 = (param_1->___boundsTarget_21).___c1_1.___x_0;
    local_64.___y_1 = (param_1->___boundsTarget_21).___c1_1.___y_1;
    (param_1->___boundsTarget_21).___c1_1.___x_0 = (float)local_70 + local_80.___x_0;
    (param_1->___boundsTarget_21).___c1_1.___y_1 = local_70._4_4_ + local_80.___y_1;
    (param_1->___boundsTarget_21).___c1_1.___z_2 = local_68 + local_64.___z_2;
    local_58._0_8_ = local_80._0_8_;
    local_30 = (MethodInfo *)uVar7;
    fStack_2c = (float)uVar15;
    local_20.___y_1 = (float)uVar6;
    local_20.___z_2 = (float)uVar12;
    iVar31 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                       (((param_1->___boundsTarget_21).___c1_1.___x_0 +
                        (param_1->___boundsTarget_21).___c0_0.___x_0) * __real_3f000000,
                        (MethodInfo *)0x0);
    local_20.___w_3 =
         (float)Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                          (((param_1->___boundsTarget_21).___c1_1.___y_1 +
                           (param_1->___boundsTarget_21).___c0_0.___y_1) * __real_3f000000,
                           (MethodInfo *)0x0);
    if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pGVar29 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                            ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4
                             ,(MethodInfo *)0x0),
       pGVar29 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
      if (iVar31 == (pGVar29->___bounds_28).___c0_0.___x_0) {
        if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
           (pGVar29 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                                ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)
                                 param_1->___master_4,(MethodInfo *)0x0),
           pGVar29 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1074da07;
        if (local_20.___w_3 == (float)(pGVar29->___bounds_28).___c0_0.___y_1) {
          return;
        }
      }
      if (((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
          (pWVar16 = param_1->___master_4->___worldMaster_5,
          pWVar16 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) &&
         (pGVar29 = pWVar16->___graph_7,
         pGVar29 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
        iVar34.___y_1 = (int)local_20.___w_3;
        iVar34.___x_0 = iVar31;
        Graph_SetEmptyBoundsCenter_m9D03266BF4FA7332EF802EA72E1E234E64194C58
                  (pGVar29,iVar34,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pWVar16 = param_1->___master_4->___worldMaster_5,
           pWVar16 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
          WorldMaster_ResetState_m885E527B49FF6E3386E62D7EE75088F2A5D9958F
                    (pWVar16,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_1074da07:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
