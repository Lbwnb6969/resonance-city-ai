// RVA 0x8753a0 | Placemaker.Ui.BetterScrollRect$$LateUpdate
// PDB: BetterScrollRect_LateUpdate_mE2E5A905DD18AAFD956DD748B8F9FEC7464F2AAE
// Body: [[108753a0, 1087592d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10196230 _libm_sse2_exp_precise
// 101d1990 Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 1066d890 Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 108360d0 ExtraMath_Clamp01_mA0E4F5A88B54C564A4C6AEDB7ED05FF6CDF7CF3F
// 10874e80 BetterScrollRect_GetNormalizedPos_m3381B10AC1601983094FB2D9B6D31E1CEFEAA777
// 108750f0 BetterScrollRect_GetWorldPos_m51CD07824F2738CB5141AF658372D107A2C41649
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 1113f280 Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
BetterScrollRect_LateUpdate_mE2E5A905DD18AAFD956DD748B8F9FEC7464F2AAE
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_1,MethodInfo *param_2)

{
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 CVar4;
  Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 CVar5;
  Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 CVar6;
  Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 CVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar11;
  int iVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar16;
  MethodInfo *pMVar17;
  Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 local_9c;
  float local_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_60;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_54;
  undefined1 local_48 [8];
  float local_40;
  float local_34;
  float local_30;
  undefined4 uStack_2c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_28;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_1c;
  float local_14;

  if (DAT_1151f5ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var);
    DAT_1151f5ab = '\x01';
  }
  memset((uchar *)&local_9c,'\0',0x2c);
  if (param_1->___dragging_11 != false) {
    return;
  }
  Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD(&local_9c,param_1,(MethodInfo *)0x0);
  pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                       (MethodInfo *)0x0);
  if (pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_48,pTVar10,
                         (MethodInfo *)0x0);
    local_60.___x_2 = pVVar11->___x_2;
    local_60.___y_3 = pVVar11->___y_3;
    local_60.___z_4 = pVVar11->___z_4;
    local_54._0_8_ = local_60._0_8_;
    local_54.___z_4 = local_60.___z_4;
    local_1c.___y_1 =
         Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
    local_14 = (param_1->___normPosTarget_8).___x_0;
    local_34 = (param_1->___normPosTarget_8).___y_1;
    VStack_28.___y_1 = (param_1->___normPosCurrent_7).___x_0;
    local_40 = (param_1->___normPosCurrent_7).___y_1;
    pMVar17 = (MethodInfo *)0x0;
    dVar14 = (double)((float)((uint)local_1c.___y_1 ^ __xmm_80000000800000008000000080000000) *
                     ___real_41300000);
    _libm_sse2_exp_precise();
    local_1c.___y_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C((float)dVar14,pMVar17)
    ;
    local_48._4_4_ = (VStack_28.___y_1 - local_14) * local_1c.___y_1 + local_14;
    local_40 = (local_40 - local_34) * local_1c.___y_1 + local_34;
    (param_1->___normPosCurrent_7).___x_0 = (float)local_48._4_4_;
    (param_1->___normPosCurrent_7).___y_1 = local_40;
    VVar16.___y_1 = local_40;
    VVar16.___x_0 = (float)local_48._4_4_;
    CVar4.___parentRt_1 = local_9c.___parentRt_1;
    CVar4.___contentRt_0 = local_9c.___contentRt_0;
    CVar4.___contentRect_2.___m_XMin_0 = local_9c.___contentRect_2.___m_XMin_0;
    CVar4.___contentRect_2.___m_YMin_1 = local_9c.___contentRect_2.___m_YMin_1;
    CVar4.___contentRect_2.___m_Width_2 = local_9c.___contentRect_2.___m_Width_2;
    CVar4.___contentRect_2.___m_Height_3 = local_9c.___contentRect_2.___m_Height_3;
    CVar4.___parentRect_3.___m_XMin_0 = local_9c.___parentRect_3.___m_XMin_0;
    CVar4.___parentRect_3.___m_YMin_1 = local_9c.___parentRect_3.___m_YMin_1;
    CVar4.___parentRect_3.___m_Width_2 = local_9c.___parentRect_3.___m_Width_2;
    CVar4.___parentRect_3.___m_Height_3 = local_9c.___parentRect_3.___m_Height_3;
    CVar4.___horizontalNow_4 = local_9c.___horizontalNow_4;
    CVar4.___verticalNow_5 = local_9c.___verticalNow_5;
    CVar4._42_2_ = local_9c._42_2_;
    BetterScrollRect_GetWorldPos_m51CD07824F2738CB5141AF658372D107A2C41649
              (param_1,VVar16,&local_60,CVar4,(MethodInfo *)0x0);
    unique0x10000e5f = param_1->___normPosTarget_8;
    CVar5.___parentRt_1 = local_9c.___parentRt_1;
    CVar5.___contentRt_0 = local_9c.___contentRt_0;
    CVar5.___contentRect_2.___m_XMin_0 = local_9c.___contentRect_2.___m_XMin_0;
    CVar5.___contentRect_2.___m_YMin_1 = local_9c.___contentRect_2.___m_YMin_1;
    CVar5.___contentRect_2.___m_Width_2 = local_9c.___contentRect_2.___m_Width_2;
    CVar5.___contentRect_2.___m_Height_3 = local_9c.___contentRect_2.___m_Height_3;
    CVar5.___parentRect_3.___m_XMin_0 = local_9c.___parentRect_3.___m_XMin_0;
    CVar5.___parentRect_3.___m_YMin_1 = local_9c.___parentRect_3.___m_YMin_1;
    CVar5.___parentRect_3.___m_Width_2 = local_9c.___parentRect_3.___m_Width_2;
    CVar5.___parentRect_3.___m_Height_3 = local_9c.___parentRect_3.___m_Height_3;
    CVar5.___horizontalNow_4 = local_9c.___horizontalNow_4;
    CVar5.___verticalNow_5 = local_9c.___verticalNow_5;
    CVar5._42_2_ = local_9c._42_2_;
    BetterScrollRect_GetWorldPos_m51CD07824F2738CB5141AF658372D107A2C41649
              (param_1,param_1->___normPosTarget_8,&local_54,CVar5,(MethodInfo *)0x0);
    if (param_1->___hovered_12 != false) {
      join_0x00000008_0x00000000_ =
           Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7((MethodInfo *)0x0);
      local_14 = (float)((uint)local_48._4_4_ ^ __xmm_80000000800000008000000080000000);
      local_1c.___y_1 = (float)((uint)local_48._8_4_ ^ __xmm_80000000800000008000000080000000);
      VVar16 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
      fVar15 = local_14 - (float)local_48._4_4_;
      local_40 = VVar16.___y_1;
      fVar13 = local_1c.___y_1 - local_40;
      unique0x10000fe0 = VVar16;
      if (__real_2edbe6fe <= fVar13 * fVar13 + fVar15 * fVar15) {
        iVar12 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
        fVar15 = local_14 * (float)iVar12 * __real_3dcccccd;
        fVar13 = (float)iVar12 * __real_3dcccccd * local_1c.___y_1;
        if (local_9c.___horizontalNow_4 == false) {
          fVar15 = 0.0;
        }
        if (local_9c.___verticalNow_5 == false) {
          fVar13 = 0.0;
        }
        local_54.___z_4 = local_54.___z_4 + 0.0;
        local_40 = local_54.___z_4;
        local_54.___y_3 = local_54.___y_3 + fVar13;
        local_54.___x_2 = local_54.___x_2 + fVar15;
        pOVar1 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 param_1->___onScroll_16;
        (param_1->___velocity_9).___x_0 = fVar15 + (param_1->___velocity_9).___x_0;
        (param_1->___velocity_9).___y_1 = fVar13 + (param_1->___velocity_9).___y_1;
        if (pOVar1 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0)
        goto LAB_10875929;
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  (pOVar1,(MethodInfo *)0x0);
      }
    }
    local_40 = (param_1->___velocity_9).___x_0;
    local_34 = (param_1->___velocity_9).___y_1;
    VVar16 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    VStack_28.___y_1 = VVar16.___y_1;
    if ((local_34 - VStack_28.___y_1) * (local_34 - VStack_28.___y_1) +
        (local_40 - VStack_28.___x_0) * (local_40 - VStack_28.___x_0) < __real_2edbe6fe) {
      local_70 = local_60.___x_2;
      fStack_6c = local_60.___y_3;
      uStack_68 = 0;
      uStack_64 = 0;
      fVar13 = local_60.___z_4;
      VStack_28 = VVar16;
    }
    else {
      if (local_9c.___horizontalNow_4 == false) {
        (param_1->___velocity_9).___x_0 = 0.0;
      }
      if (local_9c.___verticalNow_5 == false) {
        (param_1->___velocity_9).___y_1 = 0.0;
      }
      local_34 = (param_1->___velocity_9).___x_0;
      VStack_28.___y_1 = (param_1->___velocity_9).___y_1;
      VStack_28.___x_0 = VVar16.___x_0;
      fVar15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
      local_40 = VStack_28.___y_1 * fVar15;
      fVar13 = local_60.___z_4 + 0.0;
      local_70 = local_60.___x_2 + local_34 * fVar15;
      fStack_6c = local_60.___y_3 + local_40;
      uStack_68 = 0;
      uStack_64 = 0;
      local_30 = local_54.___x_2 + local_34 * fVar15;
      uStack_2c = 0;
      VStack_28.___x_0 = 0.0;
      VStack_28.___y_1 = 0.0;
      local_40 = local_54.___y_3 + local_40;
      local_60.___z_4 = local_54.___z_4 + 0.0;
      VVar2.___y_3 = fStack_6c;
      VVar2.___x_2 = local_70;
      VVar2.___z_4 = fVar13;
      CVar6.___parentRt_1 = local_9c.___parentRt_1;
      CVar6.___contentRt_0 = local_9c.___contentRt_0;
      CVar6.___contentRect_2.___m_XMin_0 = local_9c.___contentRect_2.___m_XMin_0;
      CVar6.___contentRect_2.___m_YMin_1 = local_9c.___contentRect_2.___m_YMin_1;
      CVar6.___contentRect_2.___m_Width_2 = local_9c.___contentRect_2.___m_Width_2;
      CVar6.___contentRect_2.___m_Height_3 = local_9c.___contentRect_2.___m_Height_3;
      CVar6.___parentRect_3.___m_XMin_0 = local_9c.___parentRect_3.___m_XMin_0;
      CVar6.___parentRect_3.___m_YMin_1 = local_9c.___parentRect_3.___m_YMin_1;
      CVar6.___parentRect_3.___m_Width_2 = local_9c.___parentRect_3.___m_Width_2;
      CVar6.___parentRect_3.___m_Height_3 = local_9c.___parentRect_3.___m_Height_3;
      CVar6.___horizontalNow_4 = local_9c.___horizontalNow_4;
      CVar6.___verticalNow_5 = local_9c.___verticalNow_5;
      CVar6._42_2_ = local_9c._42_2_;
      BetterScrollRect_GetNormalizedPos_m3381B10AC1601983094FB2D9B6D31E1CEFEAA777
                (param_1,VVar2,&param_1->___normPosCurrent_7,CVar6,(MethodInfo *)0x0);
      VVar3.___y_3 = local_40;
      VVar3.___x_2 = local_30;
      VVar3.___z_4 = local_60.___z_4;
      CVar7.___parentRt_1 = local_9c.___parentRt_1;
      CVar7.___contentRt_0 = local_9c.___contentRt_0;
      CVar7.___contentRect_2.___m_XMin_0 = local_9c.___contentRect_2.___m_XMin_0;
      CVar7.___contentRect_2.___m_YMin_1 = local_9c.___contentRect_2.___m_YMin_1;
      CVar7.___contentRect_2.___m_Width_2 = local_9c.___contentRect_2.___m_Width_2;
      CVar7.___contentRect_2.___m_Height_3 = local_9c.___contentRect_2.___m_Height_3;
      CVar7.___parentRect_3.___m_XMin_0 = local_9c.___parentRect_3.___m_XMin_0;
      CVar7.___parentRect_3.___m_YMin_1 = local_9c.___parentRect_3.___m_YMin_1;
      CVar7.___parentRect_3.___m_Width_2 = local_9c.___parentRect_3.___m_Width_2;
      CVar7.___parentRect_3.___m_Height_3 = local_9c.___parentRect_3.___m_Height_3;
      CVar7.___horizontalNow_4 = local_9c.___horizontalNow_4;
      CVar7.___verticalNow_5 = local_9c.___verticalNow_5;
      CVar7._42_2_ = local_9c._42_2_;
      BetterScrollRect_GetNormalizedPos_m3381B10AC1601983094FB2D9B6D31E1CEFEAA777
                (param_1,VVar3,&param_1->___normPosTarget_8,CVar7,(MethodInfo *)0x0);
      local_48._4_4_ = (param_1->___normPosTarget_8).___x_0;
      local_40 = (param_1->___normPosTarget_8).___y_1;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      VVar9.___y_1 = local_40;
      VVar9.___x_0 = (float)local_48._4_4_;
      VVar16 = ExtraMath_Clamp01_mA0E4F5A88B54C564A4C6AEDB7ED05FF6CDF7CF3F(VVar9,(MethodInfo *)0x0);
      (param_1->___normPosTarget_8).___x_0 = (float)local_48._4_4_;
      local_40 = VVar16.___y_1;
      (param_1->___normPosTarget_8).___y_1 = local_40;
      unique0x10000fd0 = VVar16;
      local_1c = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
      local_40 = (param_1->___velocity_9).___x_0;
      VStack_28.___y_1 = (param_1->___velocity_9).___y_1;
      local_34 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                           (*(float *)((int)WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_il2cpp_TypeInfo_var
                                            ->static_fields + 4),(MethodInfo *)0x0);
      (param_1->___velocity_9).___x_0 = (local_40 - local_1c.___x_0) * local_34 + local_1c.___x_0;
      (param_1->___velocity_9).___y_1 =
           (VStack_28.___y_1 - local_1c.___y_1) * local_34 + local_1c.___y_1;
    }
    pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         (MethodInfo *)0x0);
    if (pTVar10 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar8.___y_3 = fStack_6c;
      VVar8.___x_2 = local_70;
      VVar8.___z_4 = fVar13;
      Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                (pTVar10,VVar8,(MethodInfo *)0x0);
      return;
    }
  }
LAB_10875929:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
