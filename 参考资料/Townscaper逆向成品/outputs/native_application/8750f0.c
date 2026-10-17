// RVA 0x8750f0 | Placemaker.Ui.BetterScrollRect$$GetWorldPos
// PDB: BetterScrollRect_GetWorldPos_m51CD07824F2738CB5141AF658372D107A2C41649
// Body: [[108750f0, 1087538f]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1470 AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
// 101d1480 AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
// 101d1490 AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 10662d00 Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 10662d70 Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
// 10662eb0 Rect_set_position_m25716C90100155ED807D2812E24D2880D7D89D0D
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a43e60 Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E

void __cdecl
BetterScrollRect_GetWorldPos_m51CD07824F2738CB5141AF658372D107A2C41649
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *param_3,
          Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 param_4,MethodInfo *param_5)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 local_4c [16];
  undefined1 local_3c [28];
  undefined8 local_20;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_14;
  float local_c;
  float local_8;

  local_3c._0_4_ = param_4.___contentRect_2.___m_XMin_0;
  local_3c._4_4_ = param_4.___contentRect_2.___m_YMin_1;
  local_3c._8_4_ = param_4.___contentRect_2.___m_Width_2;
  local_3c._12_4_ = param_4.___contentRect_2.___m_Height_3;
  local_4c._0_4_ = param_4.___parentRect_3.___m_XMin_0;
  local_4c._4_4_ = param_4.___parentRect_3.___m_YMin_1;
  local_4c._8_4_ = param_4.___parentRect_3.___m_Width_2;
  local_4c._12_4_ = param_4.___parentRect_3.___m_Height_3;
  local_14 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_3c,(MethodInfo *)0x0
                       );
  if (param_4.___contentRt_0 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    pVVar2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_3c + 0x10),
                        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                        param_4.___contentRt_0,(MethodInfo *)0x0);
    local_20._0_4_ = pVVar2->___x_2;
    local_20._4_4_ = pVVar2->___y_3;
    VVar1.___y_1 = local_14.___y_1 - (float)local_20._4_4_;
    VVar1.___x_0 = local_14.___x_0 - (float)(undefined4)local_20;
    Rect_set_position_m25716C90100155ED807D2812E24D2880D7D89D0D
              ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_3c,VVar1,(MethodInfo *)0x0);
    fVar4 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                      ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_3c,
                       (MethodInfo *)0x0);
    local_8 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_4c,
                         (MethodInfo *)0x0);
    if (local_8 < fVar4) {
      fVar4 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                        ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_4c,
                         (MethodInfo *)0x0);
      local_14.___y_1 = fVar4;
      local_c = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                          ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_3c,
                           (MethodInfo *)0x0);
      fVar4 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_4c,
                         (MethodInfo *)0x0);
      fVar3 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_3c,
                         (MethodInfo *)0x0);
      fVar4 = fVar4 - fVar3;
      fVar3 = local_14.___y_1 - local_c;
    }
    else {
      local_c = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                          ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_4c,
                           (MethodInfo *)0x0);
      fVar4 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                        ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_3c,
                         (MethodInfo *)0x0);
      local_14.___y_1 = fVar4;
      fVar4 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_4c,
                         (MethodInfo *)0x0);
      local_8 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                          ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_3c,
                           (MethodInfo *)0x0);
      param_2.___x_0 = (param_1->___unclampedAnchor_6).___x_0;
      fVar4 = fVar4 - local_8;
      fVar3 = local_c - local_14.___y_1;
    }
    fVar4 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                      (fVar3,fVar4,param_2.___x_0,(MethodInfo *)0x0);
    param_3->___x_2 = fVar4;
    fVar4 = AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                      ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_3c,
                       (MethodInfo *)0x0);
    local_14.___y_1 =
         AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                   ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_4c,
                    (MethodInfo *)0x0);
    if (local_14.___y_1 < fVar4) {
      fVar4 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_4c,
                         (MethodInfo *)0x0);
      local_14.___y_1 = fVar4;
      local_c = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                          ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_3c,
                           (MethodInfo *)0x0);
      fVar4 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_4c,
                         (MethodInfo *)0x0);
      fVar3 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_3c,
                         (MethodInfo *)0x0);
      fVar4 = fVar4 - fVar3;
      fVar3 = local_14.___y_1 - local_c;
    }
    else {
      local_c = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                          ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_4c,
                           (MethodInfo *)0x0);
      local_8 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                          ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_3c,
                           (MethodInfo *)0x0);
      fVar4 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_4c,
                         (MethodInfo *)0x0);
      fVar5 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_3c,
                         (MethodInfo *)0x0);
      param_2.___y_1 = (param_1->___unclampedAnchor_6).___y_1;
      fVar4 = fVar4 - fVar5;
      fVar3 = local_c - local_8;
      local_14.___y_1 = fVar5;
    }
    fVar4 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                      (fVar3,fVar4,param_2.___y_1,(MethodInfo *)0x0);
    param_3->___y_3 = fVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
