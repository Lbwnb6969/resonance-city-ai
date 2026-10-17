// RVA 0xa06ed0 | Placemaker.Ui.ScreenshotFrame$$UpdateSize
// PDB: ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA
// Body: [[10a06ed0, 10a073d2]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1470 AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 10661ba0 RectTransform_get_offsetMax_m27465B00CD222399CC8B3BB53A4A68CF342319C6
// 10661cc0 RectTransform_get_offsetMin_m6573EC7E31B25028A35C21D4195D96EA94645E5C
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10661fa0 RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
// 10662000 RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
// 10662090 RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
// 106622e0 RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
// 10662550 RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
// 10662d30 Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 10662d70 Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44170 Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14

void __cdecl
ScreenshotFrame_UpdateSize_mF4ACB817AA882E83291BBE90B00198474B59A5EA
          (ScreenshotFrame_t8DAC4269F3A291128EB54EA2741416DBF9981E45 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar6;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar9;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar10;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar11;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar12;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar13;
  float fVar14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar15;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_68;
  undefined1 local_58 [24];
  float local_40;
  float local_38;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_30;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_115201cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_115201cc = '\x01';
  }
  pTVar11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                       (MethodInfo *)0x0);
  VVar15.___y_1 = local_30.___y_1;
  VVar15.___x_0 = local_30.___x_0;
  if (pTVar11 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pRVar13 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
    if (*(Il2CppClass **)pTVar11 ==
        RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
      pRVar13 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar11;
    }
    local_30 = VVar15;
    if (pRVar13 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
      pRVar12 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                          ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(local_58 + 0x10),
                           pRVar13,(MethodInfo *)0x0);
      local_58._0_4_ = pRVar12->___m_XMin_0;
      local_58._4_4_ = pRVar12->___m_YMin_1;
      local_58._8_4_ = pRVar12->___m_Width_2;
      local_58._12_4_ = pRVar12->___m_Height_3;
      if (param_1->___margins_6 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
        pRVar12 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                            ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(local_58 + 0x10),
                             param_1->___margins_6,(MethodInfo *)0x0);
        local_68.___m_XMin_0 = pRVar12->___m_XMin_0;
        local_68.___m_YMin_1 = pRVar12->___m_YMin_1;
        local_68.___m_Width_2 = pRVar12->___m_Width_2;
        local_68.___m_Height_3 = pRVar12->___m_Height_3;
        local_28 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00
                             (&local_68,(MethodInfo *)0x0);
        local_1c = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                             (local_28.___x_0 / (float)param_1->___width_11,
                              local_28.___y_1 / (float)param_1->___height_12,(MethodInfo *)0x0);
        local_c = (float)param_1->___width_11 * local_1c;
        local_8 = (float)param_1->___height_12 * local_1c;
        local_10 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                             ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_58,
                              (MethodInfo *)0x0);
        if (param_1->___margins_6 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
        {
          VVar15 = RectTransform_get_offsetMin_m6573EC7E31B25028A35C21D4195D96EA94645E5C
                             (param_1->___margins_6,(MethodInfo *)0x0);
          local_38 = VVar15.___x_0;
          local_20 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                               ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_58,
                                (MethodInfo *)0x0);
          if (param_1->___margins_6 !=
              (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
            VVar15 = RectTransform_get_offsetMax_m27465B00CD222399CC8B3BB53A4A68CF342319C6
                               (param_1->___margins_6,(MethodInfo *)0x0);
            local_40 = VVar15.___x_0;
            local_1c = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                                 ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_58,
                                  (MethodInfo *)0x0);
            if (param_1->___margins_6 !=
                (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
              local_30 = RectTransform_get_offsetMin_m6573EC7E31B25028A35C21D4195D96EA94645E5C
                                   (param_1->___margins_6,(MethodInfo *)0x0);
              local_18 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                                   ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_58,
                                    (MethodInfo *)0x0);
              if (param_1->___margins_6 !=
                  (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                VVar15 = RectTransform_get_offsetMax_m27465B00CD222399CC8B3BB53A4A68CF342319C6
                                   (param_1->___margins_6,(MethodInfo *)0x0);
                local_28.___y_1 =
                     (local_30.___y_1 + local_1c + local_18 + VVar15.___y_1) * __real_3f000000;
                local_14 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                                     ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)
                                      local_58,(MethodInfo *)0x0);
                fVar14 = (local_38 + local_10 + local_20 + local_40) * __real_3f000000;
                local_1c = fVar14 - local_c * __real_3f000000;
                local_c = local_c * __real_3f000000 + fVar14;
                local_18 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                                     ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_58,
                                      (MethodInfo *)0x0);
                local_20 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                                     ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)
                                      local_58,(MethodInfo *)0x0);
                local_10 = local_28.___y_1 - local_8 * __real_3f000000;
                local_8 = local_8 * __real_3f000000 + local_28.___y_1;
                local_28.___y_1 =
                     Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                               ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_58,
                                (MethodInfo *)0x0);
                pRVar13 = param_1->___center_5;
                VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                   ((MethodInfo *)0x0);
                if (pRVar13 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                  RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
                            (pRVar13,VVar15,(MethodInfo *)0x0);
                  VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                     ((MethodInfo *)0x0);
                  RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                            (pRVar13,VVar15,(MethodInfo *)0x0);
                  VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                     ((MethodInfo *)0x0);
                  RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                            (pRVar13,VVar15,(MethodInfo *)0x0);
                  local_30.___x_0 = local_1c;
                  local_30.___y_1 = local_10;
                  VVar1.___y_1 = local_10;
                  VVar1.___x_0 = local_1c;
                  RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
                            (pRVar13,VVar1,(MethodInfo *)0x0);
                  local_30.___x_0 = local_c;
                  local_30.___y_1 = local_8;
                  VVar6.___y_1 = local_8;
                  VVar6.___x_0 = local_c;
                  RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
                            (pRVar13,VVar6,(MethodInfo *)0x0);
                  pRVar13 = param_1->___bottom_8;
                  VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                     ((MethodInfo *)0x0);
                  if (pRVar13 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                    RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
                              (pRVar13,VVar15,(MethodInfo *)0x0);
                    VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                       ((MethodInfo *)0x0);
                    RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                              (pRVar13,VVar15,(MethodInfo *)0x0);
                    VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                       ((MethodInfo *)0x0);
                    RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                              (pRVar13,VVar15,(MethodInfo *)0x0);
                    local_30.___x_0 = local_14;
                    local_30.___y_1 = local_20;
                    VVar2.___y_1 = local_20;
                    VVar2.___x_0 = local_14;
                    RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
                              (pRVar13,VVar2,(MethodInfo *)0x0);
                    local_30.___x_0 = local_18;
                    local_30.___y_1 = local_10;
                    VVar7.___y_1 = local_10;
                    VVar7.___x_0 = local_18;
                    RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
                              (pRVar13,VVar7,(MethodInfo *)0x0);
                    pRVar13 = param_1->___top_7;
                    VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                       ((MethodInfo *)0x0);
                    if (pRVar13 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                      RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
                                (pRVar13,VVar15,(MethodInfo *)0x0);
                      VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                         ((MethodInfo *)0x0);
                      RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                                (pRVar13,VVar15,(MethodInfo *)0x0);
                      VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                         ((MethodInfo *)0x0);
                      RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                                (pRVar13,VVar15,(MethodInfo *)0x0);
                      local_30.___x_0 = local_14;
                      local_30.___y_1 = local_8;
                      VVar3.___y_1 = local_8;
                      VVar3.___x_0 = local_14;
                      RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
                                (pRVar13,VVar3,(MethodInfo *)0x0);
                      local_30.___x_0 = local_18;
                      local_30.___y_1 = local_28.___y_1;
                      VVar8.___y_1 = local_28.___y_1;
                      VVar8.___x_0 = local_18;
                      RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
                                (pRVar13,VVar8,(MethodInfo *)0x0);
                      pRVar13 = param_1->___left_9;
                      VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                         ((MethodInfo *)0x0);
                      if (pRVar13 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0)
                      {
                        RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
                                  (pRVar13,VVar15,(MethodInfo *)0x0);
                        VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                           ((MethodInfo *)0x0);
                        RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                                  (pRVar13,VVar15,(MethodInfo *)0x0);
                        VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                           ((MethodInfo *)0x0);
                        RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                                  (pRVar13,VVar15,(MethodInfo *)0x0);
                        local_30.___x_0 = local_14;
                        local_30.___y_1 = local_10;
                        VVar4.___y_1 = local_10;
                        VVar4.___x_0 = local_14;
                        RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
                                  (pRVar13,VVar4,(MethodInfo *)0x0);
                        local_30.___x_0 = local_1c;
                        local_30.___y_1 = local_8;
                        VVar9.___y_1 = local_8;
                        VVar9.___x_0 = local_1c;
                        RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
                                  (pRVar13,VVar9,(MethodInfo *)0x0);
                        pRVar13 = param_1->___right_10;
                        VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                           ((MethodInfo *)0x0);
                        if (pRVar13 !=
                            (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
                          RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
                                    (pRVar13,VVar15,(MethodInfo *)0x0);
                          VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                             ((MethodInfo *)0x0);
                          RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                                    (pRVar13,VVar15,(MethodInfo *)0x0);
                          VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                             ((MethodInfo *)0x0);
                          RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                                    (pRVar13,VVar15,(MethodInfo *)0x0);
                          local_30.___x_0 = local_c;
                          local_30.___y_1 = local_10;
                          VVar5.___y_1 = local_10;
                          VVar5.___x_0 = local_c;
                          RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
                                    (pRVar13,VVar5,(MethodInfo *)0x0);
                          local_30.___x_0 = local_18;
                          local_30.___y_1 = local_8;
                          VVar10.___y_1 = local_8;
                          VVar10.___x_0 = local_18;
                          RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
                                    (pRVar13,VVar10,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
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
