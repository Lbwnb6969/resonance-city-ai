// RVA 0x3e5400 | Placemaker.Ui.UiMaster$$ApplySafeAreaToRt
// PDB: UiMaster_ApplySafeAreaToRt_m615EC8FE35FA7150E59627A1B9E91B8ED371C19C
// Body: [[103e5400, 103e5576]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10662090 RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
// 106622e0 RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
// 10662cd0 Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78
// 10662d00 Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6
// 106677e0 Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE
// 10667850 Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
// 10667890 Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C
// 1066e470 Transform_GetRoot_mAB553501306732D17B508521058BD5D22A759CF0
// 1066e660 Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4

void __cdecl
UiMaster_ApplySafeAreaToRt_m615EC8FE35FA7150E59627A1B9E91B8ED371C19C
          (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *param_1,MethodInfo *param_2)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar6;
  int iVar7;
  int iVar8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar9;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 local_3c;
  undefined1 local_2c [8];
  float fStack_24;
  float local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10 [8];
  float local_8;

  VVar9 = stack0xfffffff4;
  if (param_1 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
    pTVar4 = Transform_GetRoot_mAB553501306732D17B508521058BD5D22A759CF0
                       ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1,
                        (MethodInfo *)0x0);
    pRVar5 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_2c,(MethodInfo *)0x0
                       );
    local_3c.___m_XMin_0 = pRVar5->___m_XMin_0;
    local_3c.___m_YMin_1 = pRVar5->___m_YMin_1;
    local_3c.___m_Width_2 = pRVar5->___m_Width_2;
    local_3c.___m_Height_3 = pRVar5->___m_Height_3;
    VVar9 = Rect_get_min_mAB48143A34188D0C92C811E6BCE3684FC81F29B6(&local_3c,(MethodInfo *)0x0);
    local_8 = VVar9.___y_1;
    local_1c = CONCAT44(local_8,local_10._4_4_);
    local_14 = 0;
    if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar2.___y_3 = local_8;
      VVar2.___x_2 = (float)local_10._4_4_;
      VVar2.___z_4 = 0.0;
      unique0x100002a3 = VVar9;
      pVVar6 = Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_2c + 4),pTVar4
                          ,VVar2,(MethodInfo *)0x0);
      local_1c._0_4_ = pVVar6->___x_2;
      local_1c._4_4_ = pVVar6->___y_3;
      join_0x00000008_0x00000000_ =
           Rect_get_max_mD553C13D7CBC8CD7DB0D7FD0D7D2B703734EAC78(&local_3c,(MethodInfo *)0x0);
      iVar7 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
      iVar8 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
      local_20 = 0.0;
      VVar3.___y_3 = local_8 - (float)iVar8;
      VVar3.___x_2 = (float)local_10._4_4_ - (float)iVar7;
      VVar3.___z_4 = 0.0;
      pVVar6 = Transform_InverseTransformVector_mAE27324FC01E136CF80D1A414AC10BA7616024C4
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_10,pTVar4,VVar3
                          ,(MethodInfo *)0x0);
      local_2c._4_4_ = pVVar6->___x_2;
      fStack_24 = pVVar6->___y_3;
      local_8 = local_1c._4_4_ * __real_3e99999a;
      local_10._4_4_ = (float)local_1c * __real_3e99999a;
      VVar1.___y_1 = local_1c._4_4_ * __real_3e99999a;
      VVar1.___x_0 = (float)local_1c * __real_3e99999a;
      RectTransform_set_offsetMin_m86D7818770137C150B70A3842EBF03F494C34271
                (param_1,VVar1,(MethodInfo *)0x0);
      local_8 = fStack_24 * __real_3e99999a;
      local_10._4_4_ = (float)local_2c._4_4_ * __real_3e99999a;
      VVar9.___y_1 = fStack_24 * __real_3e99999a;
      VVar9.___x_0 = (float)local_2c._4_4_ * __real_3e99999a;
      RectTransform_set_offsetMax_m5FDE1063C8BA1EC98D3C57C58DD2A1B9B721A8BF
                (param_1,VVar9,(MethodInfo *)0x0);
      return;
    }
  }
  stack0xfffffff4 = VVar9;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
