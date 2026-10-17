// RVA 0x10d2690 | FuryStudios.FurySDK.Utils.SafeArea$$RefreshSafeArea
// PDB: SafeArea_RefreshSafeArea_m81C253DC642D727DCA829FB30232F859156D60E2
// Body: [[110d2690, 110d281d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c2050 TMP_Offset_op_Equality_m44A8E12044BBDAB865C2862897C7DC8426AEED2C
// 10661fa0 RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
// 10662000 RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
// 10662090 RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
// 106622e0 RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
// 10662550 RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
// 10662cd0 Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
// 10662d00 Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
// 10670f70 UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5
// 10672c50 Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 110d2390 SafeArea_GetViewportRect_mA13B4482CCF5CB505182EC123B53E94F16F3C5C7
// 11135680 Canvas_get_pixelRect_m54100E80CD719FFD15D1C2A0C15717290C75A3DE

void __cdecl
SafeArea_RefreshSafeArea_m81C253DC642D727DCA829FB30232F859156D60E2
          (SafeArea_t2A5ADA7E8D8C5CF656B470D65FC75AB0603DBB58 *param_1,MethodInfo *param_2)

{
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 TVar5;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 TVar6;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 TVar7;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 TVar8;
  bool bVar9;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar10;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar11;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_24;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_14;

  if (param_1->___parentCanvas_10 != (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA *)0x0) {
    pRVar10 = Canvas_get_pixelRect_m54100E80CD719FFD15D1C2A0C15717290C75A3DE
                        (&local_14,param_1->___parentCanvas_10,(MethodInfo *)0x0);
    local_14.___m_XMin_0 = pRVar10->___m_XMin_0;
    local_14.___m_YMin_1 = pRVar10->___m_YMin_1;
    local_14.___m_Width_2 = pRVar10->___m_Width_2;
    local_14.___m_Height_3 = pRVar10->___m_Height_3;
    TVar7.___m_Left_0 = (param_1->___previousSafeArea_13).___m_XMin_0;
    TVar7.___m_Right_1 = (param_1->___previousSafeArea_13).___m_YMin_1;
    TVar7.___m_Top_2 = (param_1->___previousSafeArea_13).___m_Width_2;
    TVar7.___m_Bottom_3 = (param_1->___previousSafeArea_13).___m_Height_3;
    TVar6.___m_Left_0 = (param_1->___currentSafeArea_12).___m_XMin_0;
    TVar6.___m_Right_1 = (param_1->___currentSafeArea_12).___m_YMin_1;
    TVar6.___m_Top_2 = (param_1->___currentSafeArea_12).___m_Width_2;
    TVar6.___m_Bottom_3 = (param_1->___currentSafeArea_12).___m_Height_3;
    bVar9 = TMP_Offset_op_Equality_m44A8E12044BBDAB865C2862897C7DC8426AEED2C
                      (TVar6,TVar7,(MethodInfo *)0x0);
    if ((bVar9) &&
       (TVar8.___m_Left_0 = (param_1->___previousCanvasScreenRect_14).___m_XMin_0,
       TVar8.___m_Right_1 = (param_1->___previousCanvasScreenRect_14).___m_YMin_1,
       TVar8.___m_Top_2 = (param_1->___previousCanvasScreenRect_14).___m_Width_2,
       TVar8.___m_Bottom_3 = (param_1->___previousCanvasScreenRect_14).___m_Height_3,
       TVar5.___m_Right_1 = local_14.___m_YMin_1, TVar5.___m_Left_0 = local_14.___m_XMin_0,
       TVar5.___m_Top_2 = local_14.___m_Width_2, TVar5.___m_Bottom_3 = local_14.___m_Height_3,
       bVar9 = TMP_Offset_op_Equality_m44A8E12044BBDAB865C2862897C7DC8426AEED2C
                         (TVar5,TVar8,(MethodInfo *)0x0), bVar9)) {
      return;
    }
    fVar2 = (param_1->___currentSafeArea_12).___m_YMin_1;
    fVar3 = (param_1->___currentSafeArea_12).___m_Width_2;
    fVar4 = (param_1->___currentSafeArea_12).___m_Height_3;
    pRVar1 = param_1->___rectTransform_9;
    (param_1->___previousSafeArea_13).___m_XMin_0 = (param_1->___currentSafeArea_12).___m_XMin_0;
    (param_1->___previousSafeArea_13).___m_YMin_1 = fVar2;
    (param_1->___previousSafeArea_13).___m_Width_2 = fVar3;
    (param_1->___previousSafeArea_13).___m_Height_3 = fVar4;
    (param_1->___previousCanvasScreenRect_14).___m_XMin_0 = local_14.___m_XMin_0;
    (param_1->___previousCanvasScreenRect_14).___m_YMin_1 = local_14.___m_YMin_1;
    (param_1->___previousCanvasScreenRect_14).___m_Width_2 = local_14.___m_Width_2;
    (param_1->___previousCanvasScreenRect_14).___m_Height_3 = local_14.___m_Height_3;
    VVar11 = Vector2_get_one_m9B2AFD26404B6DD0F520D19FC7F79371C5C18B42((MethodInfo *)0x0);
    local_14.___m_Width_2 = local_14.___m_Width_2 * __real_3f000000;
    local_14.___m_Height_3 = VVar11.___y_1;
    local_14.___m_Height_3 = local_14.___m_Height_3 * __real_3f000000;
    if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
      VVar11.___y_1 = local_14.___m_Height_3;
      VVar11.___x_0 = local_14.___m_Width_2;
      RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335
                (pRVar1,VVar11,(MethodInfo *)0x0);
      pRVar10 = SafeArea_GetViewportRect_mA13B4482CCF5CB505182EC123B53E94F16F3C5C7
                          (&local_14,param_1->___currentSafeArea_12,(MethodInfo *)0x0);
      pRVar1 = param_1->___rectTransform_9;
      local_24.___m_XMin_0 = pRVar10->___m_XMin_0;
      local_24.___m_YMin_1 = pRVar10->___m_YMin_1;
      local_24.___m_Width_2 = pRVar10->___m_Width_2;
      local_24.___m_Height_3 = pRVar10->___m_Height_3;
      VVar11 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_24,(MethodInfo *)0x0);
      if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
        RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798
                  (pRVar1,VVar11,(MethodInfo *)0x0);
        pRVar1 = param_1->___rectTransform_9;
        VVar11 = Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_24,(MethodInfo *)0x0)
        ;
        if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
          RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D
                    (pRVar1,VVar11,(MethodInfo *)0x0);
          pRVar1 = param_1->___rectTransform_9;
          VVar11 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
          if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
            RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
                      (pRVar1,VVar11,(MethodInfo *)0x0);
            pRVar1 = param_1->___rectTransform_9;
            VVar11 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
            if (pRVar1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
              RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
                        (pRVar1,VVar11,(MethodInfo *)0x0);
              if (param_1->___onChange_5 !=
                  (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)0x0) {
                UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5
                          (param_1->___onChange_5,(MethodInfo *)0x0);
                return;
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
