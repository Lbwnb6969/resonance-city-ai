// RVA 0x874e80 | Placemaker.Ui.BetterScrollRect$$GetNormalizedPos
// PDB: BetterScrollRect_GetNormalizedPos_m3381B10AC1601983094FB2D9B6D31E1CEFEAA777
// Body: [[10874e80, 1087505c]]
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

void __cdecl
BetterScrollRect_GetNormalizedPos_m3381B10AC1601983094FB2D9B6D31E1CEFEAA777
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *param_3,
          Context_tF9BF19177ADB327138B851A6543B2973E6EA7EC6 param_4,MethodInfo *param_5)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 local_48 [16];
  undefined1 local_38 [28];
  undefined8 local_1c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_10;
  float local_8;

  local_38._0_4_ = param_4.___contentRect_2.___m_XMin_0;
  local_38._4_4_ = param_4.___contentRect_2.___m_YMin_1;
  local_38._8_4_ = param_4.___contentRect_2.___m_Width_2;
  local_38._12_4_ = param_4.___contentRect_2.___m_Height_3;
  local_48._0_4_ = param_4.___parentRect_3.___m_XMin_0;
  local_48._4_4_ = param_4.___parentRect_3.___m_YMin_1;
  local_48._8_4_ = param_4.___parentRect_3.___m_Width_2;
  local_48._12_4_ = param_4.___parentRect_3.___m_Height_3;
  local_10 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_38,(MethodInfo *)0x0
                       );
  if (param_4.___contentRt_0 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    pVVar2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_38 + 0x10),
                        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                        param_4.___contentRt_0,(MethodInfo *)0x0);
    local_1c._0_4_ = pVVar2->___x_2;
    local_1c._4_4_ = pVVar2->___y_3;
    VVar1.___y_1 = local_10.___y_1 - (float)local_1c._4_4_;
    VVar1.___x_0 = local_10.___x_0 - (float)(undefined4)local_1c;
    Rect_set_position_m25716C90100155ED807D2812E24D2880D7D89D0D
              ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_38,VVar1,(MethodInfo *)0x0);
    fVar3 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                      ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_38,
                       (MethodInfo *)0x0);
    local_8 = AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_48,
                         (MethodInfo *)0x0);
    if (local_8 < fVar3) {
      local_8 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                          ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_48,
                           (MethodInfo *)0x0);
      fVar3 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                        ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_38,
                         (MethodInfo *)0x0);
      local_10.___y_1 = fVar3;
      fVar4 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_48,
                         (MethodInfo *)0x0);
      fVar5 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_38,
                         (MethodInfo *)0x0);
      fVar3 = (fVar4 - fVar5) - (local_8 - local_10.___y_1);
      if (fVar3 != 0.0) {
        param_3->___x_0 = __real_3f800000 - ((fVar4 - fVar5) - param_2.___x_2) / fVar3;
      }
    }
    fVar3 = AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                      ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_38,
                       (MethodInfo *)0x0);
    fVar4 = AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                      ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_48,
                       (MethodInfo *)0x0);
    local_10.___y_1 = fVar4;
    if (fVar4 < fVar3) {
      fVar3 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_48,
                         (MethodInfo *)0x0);
      local_10.___y_1 = fVar3;
      local_8 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                          ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_38,
                           (MethodInfo *)0x0);
      fVar4 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_48,
                         (MethodInfo *)0x0);
      fVar5 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_38,
                         (MethodInfo *)0x0);
      fVar3 = (fVar4 - fVar5) - (local_10.___y_1 - local_8);
      if (fVar3 != 0.0) {
        param_3->___y_1 = __real_3f800000 - ((fVar4 - fVar5) - param_2.___y_3) / fVar3;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
