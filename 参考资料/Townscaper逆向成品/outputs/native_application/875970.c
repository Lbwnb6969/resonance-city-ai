// RVA 0x875970 | Placemaker.Ui.BetterScrollRect$$OnDrawGizmos
// PDB: BetterScrollRect_OnDrawGizmos_m1B6E73B2E8910F3104FAD4E425E95C0A30789A41
// Body: [[10875970, 10876120]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662cd0 Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
// 10662d00 Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
// 10662e40 Rect_set_max_m9A2F73801AEADD3BB4AFBBD48B871CEB25CFDF21
// 10662e70 Rect_set_min_mA8355C8B487BCC8399BB0971F7202B1C8C62EC35
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f120 Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
// 10a39e70 Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
// 10a39ed0 Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F

void __cdecl
BetterScrollRect_OnDrawGizmos_m1B6E73B2E8910F3104FAD4E425E95C0A30789A41
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar21;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar22;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar23;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar24;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar25;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar26;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar27;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_80;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_70;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_60;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  float fStack_44;
  float local_34;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_30;
  float local_28;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_24;
  float local_1c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_18;

  if (DAT_1151f5aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151f5aa = '\x01';
  }
  pTVar21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                       (MethodInfo *)0x0);
  if (pTVar21 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pTVar21 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                        (pTVar21,(MethodInfo *)0x0);
    pRVar25 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
    if ((pTVar21 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
       (*(Il2CppClass **)pTVar21 ==
        RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
      pRVar25 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar21;
    }
    pTVar21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         (MethodInfo *)0x0);
    pRVar26 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
    if ((pTVar21 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
       (*(Il2CppClass **)pTVar21 ==
        RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
      pRVar26 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar21;
    }
    if (pRVar25 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
      pRVar22 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                          (&local_80,pRVar25,(MethodInfo *)0x0);
      local_60.___m_XMin_0 = pRVar22->___m_XMin_0;
      local_60.___m_YMin_1 = pRVar22->___m_YMin_1;
      local_60.___m_Width_2 = pRVar22->___m_Width_2;
      local_60.___m_Height_3 = pRVar22->___m_Height_3;
      if (pRVar26 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
        pRVar22 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                            (&local_80,pRVar26,(MethodInfo *)0x0);
        local_70.___m_XMin_0 = pRVar22->___m_XMin_0;
        local_70.___m_YMin_1 = pRVar22->___m_YMin_1;
        local_70.___m_Width_2 = pRVar22->___m_Width_2;
        local_70.___m_Height_3 = pRVar22->___m_Height_3;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_60,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_28 = 0.0;
        VVar9.___y_3 = local_18.___y_1;
        VVar9.___x_2 = local_18.___x_0;
        VVar9.___z_4 = 0.0;
        local_18 = VVar27;
        pVVar23 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                            (&local_50,
                             (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pRVar25,VVar9,
                             (MethodInfo *)0x0);
        local_30.___x_0 = pVVar23->___x_2;
        local_30.___y_1 = pVVar23->___y_3;
        local_28 = pVVar23->___z_4;
        local_24 = local_30;
        local_1c = local_28;
        local_18 = local_30;
        Rect_set_min_mA8355C8B487BCC8399BB0971F7202B1C8C62EC35(&local_60,local_30,(MethodInfo *)0x0)
        ;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_60,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_28 = 0.0;
        VVar10.___y_3 = local_18.___y_1;
        VVar10.___x_2 = local_18.___x_0;
        VVar10.___z_4 = 0.0;
        local_18 = VVar27;
        pVVar23 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                            (&local_50,
                             (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pRVar25,VVar10,
                             (MethodInfo *)0x0);
        local_30.___x_0 = pVVar23->___x_2;
        local_30.___y_1 = pVVar23->___y_3;
        local_28 = pVVar23->___z_4;
        local_24 = local_30;
        local_1c = local_28;
        local_18 = local_30;
        Rect_set_max_m9A2F73801AEADD3BB4AFBBD48B871CEB25CFDF21(&local_60,local_30,(MethodInfo *)0x0)
        ;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_70,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_28 = 0.0;
        VVar11.___y_3 = local_18.___y_1;
        VVar11.___x_2 = local_18.___x_0;
        VVar11.___z_4 = 0.0;
        local_18 = VVar27;
        pVVar23 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                            (&local_50,
                             (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pRVar26,VVar11,
                             (MethodInfo *)0x0);
        local_30.___x_0 = pVVar23->___x_2;
        local_30.___y_1 = pVVar23->___y_3;
        local_28 = pVVar23->___z_4;
        local_24 = local_30;
        local_1c = local_28;
        local_18 = local_30;
        Rect_set_min_mA8355C8B487BCC8399BB0971F7202B1C8C62EC35(&local_70,local_30,(MethodInfo *)0x0)
        ;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_70,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_28 = 0.0;
        VVar12.___y_3 = local_18.___y_1;
        VVar12.___x_2 = local_18.___x_0;
        VVar12.___z_4 = 0.0;
        local_18 = VVar27;
        pVVar23 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2
                            (&local_50,
                             (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pRVar26,VVar12,
                             (MethodInfo *)0x0);
        local_30.___x_0 = pVVar23->___x_2;
        local_30.___y_1 = pVVar23->___y_3;
        local_28 = pVVar23->___z_4;
        local_24 = local_30;
        local_1c = local_28;
        local_18 = local_30;
        Rect_set_max_m9A2F73801AEADD3BB4AFBBD48B871CEB25CFDF21(&local_70,local_30,(MethodInfo *)0x0)
        ;
        pCVar24 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
                            ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)&local_80,
                             (MethodInfo *)0x0);
        Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(*pCVar24,(MethodInfo *)0x0);
        local_18 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
                             (&local_60,(MethodInfo *)0x0);
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_60,(MethodInfo *)0x0)
        ;
        local_28 = VVar27.___y_1;
        local_30.___y_1 = VVar27.___x_0;
        local_50.___x_2 = local_18.___x_0;
        local_50.___y_3 = 0.0;
        local_50.___z_4 = 0.0;
        fStack_44 = 0.0;
        local_34 = 0.0;
        local_18 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
                             (&local_60,(MethodInfo *)0x0);
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_60,(MethodInfo *)0x0)
        ;
        local_1c = 0.0;
        VVar1.___y_3 = local_28;
        VVar1.___x_2 = local_50.___x_2;
        VVar1.___z_4 = local_34;
        VVar13.___y_3 = VVar27.___y_1;
        VVar13.___x_2 = local_18.___x_0;
        VVar13.___z_4 = 0.0;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar1,VVar13,(MethodInfo *)0x0);
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_60,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_60,(MethodInfo *)0x0)
        ;
        local_80.___m_XMin_0 = local_30.___y_1;
        local_80.___m_YMin_1 = 0.0;
        local_80.___m_Width_2 = 0.0;
        local_80.___m_Height_3 = 0.0;
        fStack_44 = 0.0;
        local_18.___y_1 = VVar27.___y_1;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_60,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_60,(MethodInfo *)0x0)
        ;
        local_1c = VVar27.___y_1;
        local_34 = 0.0;
        VVar2.___y_3 = local_18.___y_1;
        VVar2.___x_2 = local_80.___m_XMin_0;
        VVar2.___z_4 = fStack_44;
        VVar14.___y_3 = local_1c;
        VVar14.___x_2 = local_30.___y_1;
        VVar14.___z_4 = 0.0;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar2,VVar14,(MethodInfo *)0x0);
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_60,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_60,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_80.___m_XMin_0 = local_30.___y_1;
        local_80.___m_YMin_1 = 0.0;
        local_80.___m_Width_2 = 0.0;
        local_80.___m_Height_3 = 0.0;
        local_34 = 0.0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_60,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_60,(MethodInfo *)0x0)
        ;
        local_1c = VVar27.___y_1;
        fStack_44 = 0.0;
        VVar3.___y_3 = local_18.___y_1;
        VVar3.___x_2 = local_80.___m_XMin_0;
        VVar3.___z_4 = local_34;
        VVar15.___y_3 = local_1c;
        VVar15.___x_2 = local_30.___y_1;
        VVar15.___z_4 = 0.0;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar3,VVar15,(MethodInfo *)0x0);
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_60,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_60,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_80.___m_XMin_0 = local_30.___y_1;
        local_80.___m_YMin_1 = 0.0;
        local_80.___m_Width_2 = 0.0;
        local_80.___m_Height_3 = 0.0;
        local_34 = 0.0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_60,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_60,(MethodInfo *)0x0)
        ;
        local_1c = VVar27.___y_1;
        fStack_44 = 0.0;
        VVar4.___y_3 = local_18.___y_1;
        VVar4.___x_2 = local_80.___m_XMin_0;
        VVar4.___z_4 = local_34;
        VVar16.___y_3 = local_1c;
        VVar16.___x_2 = local_30.___y_1;
        VVar16.___z_4 = 0.0;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar4,VVar16,(MethodInfo *)0x0);
        pCVar24 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1
                            ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)&local_80,
                             (MethodInfo *)0x0);
        Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(*pCVar24,(MethodInfo *)0x0);
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_70,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_70,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_80.___m_XMin_0 = local_30.___y_1;
        local_80.___m_YMin_1 = 0.0;
        local_80.___m_Width_2 = 0.0;
        local_80.___m_Height_3 = 0.0;
        local_34 = 0.0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_70,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_70,(MethodInfo *)0x0)
        ;
        local_1c = VVar27.___y_1;
        fStack_44 = 0.0;
        VVar5.___y_3 = local_18.___y_1;
        VVar5.___x_2 = local_80.___m_XMin_0;
        VVar5.___z_4 = local_34;
        VVar17.___y_3 = local_1c;
        VVar17.___x_2 = local_30.___y_1;
        VVar17.___z_4 = 0.0;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar5,VVar17,(MethodInfo *)0x0);
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_70,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_70,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_80.___m_XMin_0 = local_30.___y_1;
        local_80.___m_YMin_1 = 0.0;
        local_80.___m_Width_2 = 0.0;
        local_80.___m_Height_3 = 0.0;
        local_34 = 0.0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_70,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_70,(MethodInfo *)0x0)
        ;
        local_1c = VVar27.___y_1;
        fStack_44 = 0.0;
        VVar6.___y_3 = local_18.___y_1;
        VVar6.___x_2 = local_80.___m_XMin_0;
        VVar6.___z_4 = local_34;
        VVar18.___y_3 = local_1c;
        VVar18.___x_2 = local_30.___y_1;
        VVar18.___z_4 = 0.0;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar6,VVar18,(MethodInfo *)0x0);
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_70,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_70,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_80.___m_XMin_0 = local_30.___y_1;
        local_80.___m_YMin_1 = 0.0;
        local_80.___m_Width_2 = 0.0;
        local_80.___m_Height_3 = 0.0;
        local_34 = 0.0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_70,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_70,(MethodInfo *)0x0)
        ;
        local_1c = VVar27.___y_1;
        fStack_44 = 0.0;
        VVar7.___y_3 = local_18.___y_1;
        VVar7.___x_2 = local_80.___m_XMin_0;
        VVar7.___z_4 = local_34;
        VVar19.___y_3 = local_1c;
        VVar19.___x_2 = local_30.___y_1;
        VVar19.___z_4 = 0.0;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar7,VVar19,(MethodInfo *)0x0);
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_70,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_70,(MethodInfo *)0x0)
        ;
        local_18.___y_1 = VVar27.___y_1;
        local_80.___m_XMin_0 = local_30.___y_1;
        local_80.___m_YMin_1 = 0.0;
        local_80.___m_Width_2 = 0.0;
        local_80.___m_Height_3 = 0.0;
        local_34 = 0.0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_70,(MethodInfo *)0x0)
        ;
        local_30.___y_1 = VVar27.___x_0;
        VVar27 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_70,(MethodInfo *)0x0)
        ;
        local_1c = VVar27.___y_1;
        fStack_44 = 0.0;
        VVar8.___y_3 = local_18.___y_1;
        VVar8.___x_2 = local_80.___m_XMin_0;
        VVar8.___z_4 = local_34;
        VVar20.___y_3 = local_1c;
        VVar20.___x_2 = local_30.___y_1;
        VVar20.___z_4 = 0.0;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar8,VVar20,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
