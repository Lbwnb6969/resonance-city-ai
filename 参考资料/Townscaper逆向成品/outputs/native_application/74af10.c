// RVA 0x74af10 | Placemaker.Ui.OrbitalCamera$$OnDrawGizmos
// PDB: OrbitalCamera_OnDrawGizmos_m89EF00ED1CFA86F0AF82004D1A62FF159AC041AF
// Body: [[1074af10, 1074b893]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 1074d190 OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
// 10a35d00 Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e5d0 Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a45150 Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
// 10a452c0 Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5
// 10a45eb0 Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
OrbitalCamera_OnDrawGizmos_m89EF00ED1CFA86F0AF82004D1A62FF159AC041AF
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,MethodInfo *param_2)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  float fVar2;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar6;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar14;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar15;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar16;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar17;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  bool bVar22;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar23;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar25;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar26;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_f0;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_b0;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_a0;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_90;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_80;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_70;
  float local_60;
  undefined8 uStack_5c;
  float fStack_54;
  float local_50;
  undefined8 uStack_4c;
  float fStack_44;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_40;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  float fStack_1c;
  undefined8 local_18;

  if (DAT_1151ebd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ebd9 = '\x01';
  }
  pUVar1 = param_1->___master_4;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pUVar1,(MethodInfo *)0x0);
  if (bVar22) {
    bVar22 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567((MethodInfo *)0x0);
    if (bVar22) {
      if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      pGVar23 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                          ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4,
                           (MethodInfo *)0x0);
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                         ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pGVar23,
                          (MethodInfo *)0x0);
      if (bVar22) {
        local_70.___m_Left_0 = 0.0;
        local_70.___m_Right_1 = 0.0;
        local_70.___m_Top_2 = 0.0;
        local_70.___m_Bottom_3 = 0.0;
        local_40.___x_0 = __real_3f800000;
        local_40.___y_1 = 0.0;
        local_40.___z_2 = 0.0;
        local_40.___w_3 = 0.0;
        TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                  (&local_70,1.0,1.0,1.0,0.2,(MethodInfo *)0x0);
        CVar14.___g_1 = local_70.___m_Right_1;
        CVar14.___r_0 = local_70.___m_Left_0;
        CVar14.___b_2 = local_70.___m_Top_2;
        CVar14.___a_3 = local_70.___m_Bottom_3;
        Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar14,(MethodInfo *)0x0);
        fStack_1c = 1.0;
        VVar19.___y_3 = 0.0;
        VVar19.___x_2 = local_40.___x_0;
        VVar19.___z_4 = 1.0;
        pMVar24 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
                            (&local_f0,VVar19,(MethodInfo *)0x0);
        Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar24,(MethodInfo *)0x0);
        pMVar24 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
                            (&local_f0,(MethodInfo *)0x0);
        Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar24,(MethodInfo *)0x0);
        local_80.___m_Left_0 = 0.0;
        local_80.___m_Right_1 = 0.0;
        local_80.___m_Top_2 = 0.0;
        local_80.___m_Bottom_3 = 0.0;
        TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                  (&local_80,1.0,0.0,0.0,1.0,(MethodInfo *)0x0);
        CVar15.___g_1 = local_80.___m_Right_1;
        CVar15.___r_0 = local_80.___m_Left_0;
        CVar15.___b_2 = local_80.___m_Top_2;
        CVar15.___a_3 = local_80.___m_Bottom_3;
        Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar15,(MethodInfo *)0x0);
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            (&local_28,param_1,param_1->___panHexCurrentX_12,
                             param_1->___panHexCurrentY_13,0.0,(MethodInfo *)0x0);
        local_18._0_4_ = pVVar25->___x_2;
        local_18._4_4_ = pVVar25->___y_3;
        fVar2 = pVVar25->___z_4;
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            (&local_28,param_1,param_1->___panHexCurrentX_12,0.0,0.0,
                             (MethodInfo *)0x0);
        VVar8.___z_4 = fVar2;
        VVar8.___x_2 = (float)(undefined4)local_18;
        VVar8.___y_3 = (float)local_18._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar8,*pVVar25,(MethodInfo *)0x0);
        local_90.___m_Left_0 = 0.0;
        local_90.___m_Right_1 = 0.0;
        local_90.___m_Top_2 = 0.0;
        local_90.___m_Bottom_3 = 0.0;
        TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                  (&local_90,0.0,1.0,0.0,1.0,(MethodInfo *)0x0);
        CVar16.___g_1 = local_90.___m_Right_1;
        CVar16.___r_0 = local_90.___m_Left_0;
        CVar16.___b_2 = local_90.___m_Top_2;
        CVar16.___a_3 = local_90.___m_Bottom_3;
        Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar16,(MethodInfo *)0x0);
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            (&local_28,param_1,param_1->___panHexCurrentX_12,
                             param_1->___panHexCurrentY_13,0.0,(MethodInfo *)0x0);
        local_18._0_4_ = pVVar25->___x_2;
        local_18._4_4_ = pVVar25->___y_3;
        fVar2 = pVVar25->___z_4;
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            (&local_28,param_1,0.0,param_1->___panHexCurrentY_13,0.0,
                             (MethodInfo *)0x0);
        VVar9.___z_4 = fVar2;
        VVar9.___x_2 = (float)(undefined4)local_18;
        VVar9.___y_3 = (float)local_18._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar9,*pVVar25,(MethodInfo *)0x0);
        local_a0.___m_Left_0 = 0.0;
        local_a0.___m_Right_1 = 0.0;
        local_a0.___m_Top_2 = 0.0;
        local_a0.___m_Bottom_3 = 0.0;
        TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                  (&local_a0,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
        CVar17.___g_1 = local_a0.___m_Right_1;
        CVar17.___r_0 = local_a0.___m_Left_0;
        CVar17.___b_2 = local_a0.___m_Top_2;
        CVar17.___a_3 = local_a0.___m_Bottom_3;
        Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar17,(MethodInfo *)0x0);
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            (&local_28,param_1,param_1->___panHexCurrentX_12,
                             param_1->___panHexCurrentY_13,0.0,(MethodInfo *)0x0);
        local_18._0_4_ = pVVar25->___x_2;
        local_18._4_4_ = pVVar25->___y_3;
        fVar2 = pVVar25->___z_4;
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            (&local_28,param_1,0.0,0.0,0.0,(MethodInfo *)0x0);
        VVar10.___z_4 = fVar2;
        VVar10.___x_2 = (float)(undefined4)local_18;
        VVar10.___y_3 = (float)local_18._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar10,*pVVar25,(MethodInfo *)0x0)
        ;
        local_b0.___m_Left_0 = 0.0;
        local_b0.___m_Right_1 = 0.0;
        local_b0.___m_Top_2 = 0.0;
        local_b0.___m_Bottom_3 = 0.0;
        TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                  (&local_b0,1.0,1.0,1.0,1.0,(MethodInfo *)0x0);
        CVar18.___g_1 = local_b0.___m_Right_1;
        CVar18.___r_0 = local_b0.___m_Left_0;
        CVar18.___b_2 = local_b0.___m_Top_2;
        CVar18.___a_3 = local_b0.___m_Bottom_3;
        Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar18,(MethodInfo *)0x0);
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            (&local_28,param_1,param_1->___panHexCurrentX_12,
                             param_1->___panHexCurrentY_13,0.0,(MethodInfo *)0x0);
        local_18._0_4_ = pVVar25->___x_2;
        local_18._4_4_ = pVVar25->___y_3;
        fVar2 = pVVar25->___z_4;
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            (&local_28,param_1,param_1->___panHexCurrentX_12,
                             param_1->___panHexCurrentY_13,param_1->___panHeightCurrent_14,
                             (MethodInfo *)0x0);
        VVar11.___z_4 = fVar2;
        VVar11.___x_2 = (float)(undefined4)local_18;
        VVar11.___y_3 = (float)local_18._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar11,*pVVar25,(MethodInfo *)0x0)
        ;
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            (&local_28,param_1,param_1->___panHexCurrentX_12,
                             param_1->___panHexCurrentY_13,param_1->___panHeightCurrent_14,
                             (MethodInfo *)0x0);
        local_18._0_4_ = pVVar25->___x_2;
        local_18._4_4_ = pVVar25->___y_3;
        fVar2 = pVVar25->___z_4;
        pQVar26 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                            (&local_40,90.0,0.0,0.0,(MethodInfo *)0x0);
        local_40.___x_0 = pQVar26->___x_0;
        local_40.___y_1 = pQVar26->___y_1;
        local_40.___z_2 = pQVar26->___z_2;
        local_40.___w_3 = pQVar26->___w_3;
        pVVar25 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                            (&local_28,(MethodInfo *)0x0);
        VVar4.___z_4 = fVar2;
        VVar4.___x_2 = (float)(undefined4)local_18;
        VVar4.___y_3 = (float)local_18._4_4_;
        QVar6.___y_1 = local_40.___y_1;
        QVar6.___x_0 = local_40.___x_0;
        QVar6.___z_2 = local_40.___z_2;
        QVar6.___w_3 = local_40.___w_3;
        pMVar24 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5
                            (&local_f0,VVar4,QVar6,*pVVar25,(MethodInfo *)0x0);
        local_40.___x_0 = pMVar24->___m00_0;
        local_40.___y_1 = pMVar24->___m10_1;
        local_40.___z_2 = pMVar24->___m20_2;
        local_40.___w_3 = pMVar24->___m30_3;
        local_28.___x_2 = pMVar24->___m01_4;
        local_28.___y_3 = pMVar24->___m11_5;
        local_28.___z_4 = pMVar24->___m21_6;
        fStack_1c = pMVar24->___m31_7;
        local_60 = pMVar24->___m02_8;
        uStack_5c._0_4_ = pMVar24->___m12_9;
        uStack_5c._4_4_ = pMVar24->___m22_10;
        fStack_54 = pMVar24->___m32_11;
        local_50 = pMVar24->___m03_12;
        uStack_4c._0_4_ = pMVar24->___m13_13;
        uStack_4c._4_4_ = pMVar24->___m23_14;
        fStack_44 = pMVar24->___m33_15;
        if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
        }
        MVar3.___m10_1 = local_40.___y_1;
        MVar3.___m00_0 = local_40.___x_0;
        MVar3.___m20_2 = local_40.___z_2;
        MVar3.___m30_3 = local_40.___w_3;
        MVar3.___m01_4 = local_28.___x_2;
        MVar3.___m11_5 = local_28.___y_3;
        MVar3.___m21_6 = local_28.___z_4;
        MVar3.___m31_7 = fStack_1c;
        MVar3.___m02_8 = local_60;
        MVar3.___m12_9 = (float)uStack_5c;
        MVar3.___m22_10 = uStack_5c._4_4_;
        MVar3.___m32_11 = fStack_54;
        MVar3.___m03_12 = local_50;
        MVar3.___m13_13 = (float)uStack_4c;
        MVar3.___m23_14 = uStack_4c._4_4_;
        MVar3.___m33_15 = fStack_44;
        pMVar24 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                            (&local_f0,MVar3,
                             *(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                              ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                                    ->static_fields + 0x1c),(MethodInfo *)0x0);
        Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar24,(MethodInfo *)0x0);
        pVVar25 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                            (&local_28,(MethodInfo *)0x0);
        local_18._0_4_ = pVVar25->___x_2;
        local_18._4_4_ = pVVar25->___y_3;
        fVar2 = pVVar25->___z_4;
        pVVar25 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_40,
                             (MethodInfo *)0x0);
        uStack_5c._0_4_ = pVVar25->___x_2;
        uStack_5c._4_4_ = pVVar25->___y_3;
        fStack_44 = pVVar25->___z_4;
        local_28.___y_3 = pVVar25->___x_2;
        local_28.___z_4 = pVVar25->___y_3;
        fStack_1c = fStack_44 * __real_3e4ccccd;
        VVar12.___z_4 = fVar2;
        VVar12.___x_2 = (float)(undefined4)local_18;
        VVar12.___y_3 = (float)local_18._4_4_;
        VVar20.___y_3 = uStack_5c._4_4_ * __real_3e4ccccd;
        VVar20.___x_2 = (float)uStack_5c * __real_3e4ccccd;
        VVar20.___z_4 = fStack_1c;
        uStack_4c = uStack_5c;
        Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
                  (VVar12,VVar20,(MethodInfo *)0x0);
        pVVar25 = OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_40,param_1,
                             param_1->___panHexCurrentX_12,param_1->___panHexCurrentY_13,0.0,
                             (MethodInfo *)0x0);
        local_18._0_4_ = pVVar25->___x_2;
        local_18._4_4_ = pVVar25->___y_3;
        fVar2 = pVVar25->___z_4;
        pQVar26 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                            (&local_40,90.0,0.0,0.0,(MethodInfo *)0x0);
        local_28.___x_2 = pQVar26->___x_0;
        local_28.___y_3 = pQVar26->___y_1;
        local_28.___z_4 = pQVar26->___z_2;
        fStack_1c = pQVar26->___w_3;
        pVVar25 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_40,
                             (MethodInfo *)0x0);
        VVar5.___z_4 = fVar2;
        VVar5.___x_2 = (float)(undefined4)local_18;
        VVar5.___y_3 = (float)local_18._4_4_;
        QVar7.___y_1 = local_28.___y_3;
        QVar7.___x_0 = local_28.___x_2;
        QVar7.___z_2 = local_28.___z_4;
        QVar7.___w_3 = fStack_1c;
        pMVar24 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5
                            (&local_f0,VVar5,QVar7,*pVVar25,(MethodInfo *)0x0);
        pMVar24 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                            (&local_f0,*pMVar24,
                             *(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                              ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                                    ->static_fields + 0x1c),(MethodInfo *)0x0);
        Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar24,(MethodInfo *)0x0);
        pVVar25 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_40,
                             (MethodInfo *)0x0);
        local_18._0_4_ = pVVar25->___x_2;
        local_18._4_4_ = pVVar25->___y_3;
        fVar2 = pVVar25->___z_4;
        pVVar25 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_40,
                             (MethodInfo *)0x0);
        uStack_5c._0_4_ = pVVar25->___x_2;
        uStack_5c._4_4_ = pVVar25->___y_3;
        fStack_44 = pVVar25->___z_4;
        uStack_4c._0_4_ = pVVar25->___x_2;
        uStack_4c._4_4_ = pVVar25->___y_3;
        fStack_1c = fStack_44 * __real_3f000000;
        VVar13.___z_4 = fVar2;
        VVar13.___x_2 = (float)(undefined4)local_18;
        VVar13.___y_3 = (float)local_18._4_4_;
        VVar21.___y_3 = uStack_5c._4_4_ * __real_3f000000;
        VVar21.___x_2 = (float)uStack_5c * __real_3f000000;
        VVar21.___z_4 = fStack_1c;
        local_28._4_8_ = uStack_5c;
        Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
                  (VVar13,VVar21,(MethodInfo *)0x0);
      }
    }
  }
  return;
}
