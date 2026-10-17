// RVA 0x1d1990 | Placemaker.Ui.BetterScrollRect.Context$$.ctor
// PDB: Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD
// Body: [[101d1990, 101d1d30]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1480 AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
// 101d1490 AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662cd0 Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
// 10662d00 Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
// 10662e40 Rect_set_max_m9A2F73801AEADD3BB4AFBBD48B871CEB25CFDF21
// 10662e70 Rect_set_min_mA8355C8B487BCC8399BB0971F7202B1C8C62EC35
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f120 Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
Context__ctor_m05CE0CDB31FF30D1963F60DC9ADD6BF213F365DD
          (Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 *param_1,
          BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_2,MethodInfo *param_3)

{
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar1;
  uint uVar2;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar3;
  float fVar4;
  float fVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  bool bVar10;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar11;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar12;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar13;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar15;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar16;
  float fVar17;
  undefined1 local_30 [16];
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_20;
  float local_18;
  undefined1 local_14 [8];
  float local_c;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_8;

  if (DAT_1151af39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151af39 = '\x01';
  }
  VVar16 = stack0xfffffff0;
  if (param_2 != (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *)0x0) {
    pTVar11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                         (MethodInfo *)0x0);
    uVar2 = param_2->___mode_4;
    if (pTVar11 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      param_1->___contentRt_0 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
      VVar16 = stack0xfffffff0;
    }
    else {
      pTVar12 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
      if (*(Il2CppClass **)pTVar11 ==
          RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
        pTVar12 = pTVar11;
      }
      param_1->___contentRt_0 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar12;
      pTVar12 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                          (pTVar11,(MethodInfo *)0x0);
      pTVar11 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
      if ((pTVar12 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
         (*(Il2CppClass **)pTVar12 ==
          RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
        pTVar11 = pTVar12;
      }
      param_1->___parentRt_1 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar11;
      VVar16 = stack0xfffffff0;
      if (param_1->___contentRt_0 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
      {
        pRVar13 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                            ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_30,
                             param_1->___contentRt_0,(MethodInfo *)0x0);
        pRVar1 = &param_1->___contentRect_2;
        fVar17 = pRVar13->___m_YMin_1;
        fVar4 = pRVar13->___m_Width_2;
        fVar5 = pRVar13->___m_Height_3;
        pRVar3 = param_1->___parentRt_1;
        pRVar1->___m_XMin_0 = pRVar13->___m_XMin_0;
        (param_1->___contentRect_2).___m_YMin_1 = fVar17;
        (param_1->___contentRect_2).___m_Width_2 = fVar4;
        (param_1->___contentRect_2).___m_Height_3 = fVar5;
        VVar16 = stack0xfffffff0;
        if (pRVar3 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
          pRVar14 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                              ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_30,pRVar3,
                               (MethodInfo *)0x0);
          pRVar13 = &param_1->___parentRect_3;
          fVar17 = pRVar14->___m_YMin_1;
          fVar4 = pRVar14->___m_Width_2;
          fVar5 = pRVar14->___m_Height_3;
          local_8 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___contentRt_0;
          pRVar13->___m_XMin_0 = pRVar14->___m_XMin_0;
          (param_1->___parentRect_3).___m_YMin_1 = fVar17;
          (param_1->___parentRect_3).___m_Width_2 = fVar4;
          (param_1->___parentRect_3).___m_Height_3 = fVar5;
          VVar16 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(pRVar1,(MethodInfo *)0x0);
          local_c = VVar16.___y_1;
          local_20.___y_1 = local_c;
          local_20.___x_0 = (float)local_14._4_4_;
          local_18 = 0.0;
          if (local_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            VVar6.___y_3 = local_c;
            VVar6.___x_2 = (float)local_14._4_4_;
            VVar6.___z_4 = 0.0;
            unique0x10000728 = VVar16;
            pVVar15 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_14,
                                 local_8,VVar6,(MethodInfo *)0x0);
            local_30._4_4_ = pVVar15->___x_2;
            local_30._8_4_ = pVVar15->___y_3;
            local_18 = pVVar15->___z_4;
            local_20 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_;
            unique0x10000730 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_;
            Rect_set_min_mA8355C8B487BCC8399BB0971F7202B1C8C62EC35
                      (pRVar1,(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_,
                       (MethodInfo *)0x0);
            local_8 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___contentRt_0
            ;
            VVar16 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
                               (pRVar1,(MethodInfo *)0x0);
            fVar17 = local_14._4_4_;
            local_c = VVar16.___y_1;
            local_20 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)CONCAT44(local_c,fVar17);
            local_18 = 0.0;
            if (local_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              VVar7.___y_3 = local_c;
              VVar7.___x_2 = fVar17;
              VVar7.___z_4 = 0.0;
              unique0x10000738 = VVar16;
              pVVar15 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_14,
                                   local_8,VVar7,(MethodInfo *)0x0);
              local_30._4_4_ = pVVar15->___x_2;
              local_30._8_4_ = pVVar15->___y_3;
              local_18 = pVVar15->___z_4;
              local_20 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_;
              unique0x10000740 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_;
              Rect_set_max_m9A2F73801AEADD3BB4AFBBD48B871CEB25CFDF21
                        (pRVar1,(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_,
                         (MethodInfo *)0x0);
              local_8 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                        param_1->___parentRt_1;
              VVar16 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
                                 (pRVar13,(MethodInfo *)0x0);
              fVar17 = local_14._4_4_;
              local_c = VVar16.___y_1;
              local_20 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)CONCAT44(local_c,fVar17)
              ;
              local_18 = 0.0;
              if (local_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                VVar8.___y_3 = local_c;
                VVar8.___x_2 = fVar17;
                VVar8.___z_4 = 0.0;
                unique0x10000748 = VVar16;
                pVVar15 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_14,
                                     local_8,VVar8,(MethodInfo *)0x0);
                local_30._4_4_ = pVVar15->___x_2;
                local_30._8_4_ = pVVar15->___y_3;
                local_18 = pVVar15->___z_4;
                local_20 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_;
                unique0x10000750 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_
                ;
                Rect_set_min_mA8355C8B487BCC8399BB0971F7202B1C8C62EC35
                          (pRVar13,(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_
                           ,(MethodInfo *)0x0);
                local_8 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          param_1->___parentRt_1;
                VVar16 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
                                   (pRVar13,(MethodInfo *)0x0);
                fVar17 = local_14._4_4_;
                local_c = VVar16.___y_1;
                local_20 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                           CONCAT44(local_c,fVar17);
                local_18 = 0.0;
                if (local_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  VVar9.___y_3 = local_c;
                  VVar9.___x_2 = fVar17;
                  VVar9.___z_4 = 0.0;
                  unique0x10000758 = VVar16;
                  pVVar15 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_14
                                       ,local_8,VVar9,(MethodInfo *)0x0);
                  local_30._4_4_ = pVVar15->___x_2;
                  local_30._8_4_ = pVVar15->___y_3;
                  local_c = local_30._8_4_;
                  local_20 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)local_30._4_8_;
                  local_14._4_4_ = local_30._4_4_;
                  Rect_set_max_m9A2F73801AEADD3BB4AFBBD48B871CEB25CFDF21
                            (pRVar13,(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                     local_30._4_8_,(MethodInfo *)0x0);
                  if ((uVar2 & 1) == 0) {
                    bVar10 = false;
                  }
                  else {
                    local_c = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)
                                         pRVar13,(MethodInfo *)0x0);
                    local_8 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                              AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)
                                         pRVar1,(MethodInfo *)0x0);
                    bVar10 = local_c < (float)local_8;
                  }
                  param_1->___horizontalNow_4 = bVar10;
                  if ((uVar2 & 2) == 0) {
                    param_1->___verticalNow_5 = false;
                    return;
                  }
                  local_c = AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                                      ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)
                                       pRVar13,(MethodInfo *)0x0);
                  fVar17 = AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                                     ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)pRVar1
                                      ,(MethodInfo *)0x0);
                  param_1->___verticalNow_5 = local_c < fVar17;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  stack0xfffffff0 = VVar16;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
