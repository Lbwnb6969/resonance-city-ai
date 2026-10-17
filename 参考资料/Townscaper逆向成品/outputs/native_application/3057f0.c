// RVA 0x3057f0 | Placemaker.Ui.ToolsButton$$Update
// PDB: ToolsButton_Update_m7A0F5F61D94A5ABCDEA8AE60EE72DEB488782840
// Body: [[103057f0, 10305c0d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10196230 _libm_sse2_exp_precise
// 104c5370 DistanceFieldSettings_set_cutoff_mCCA6827FE1F9FF80FBEF75D31B1A0C7BB0F00F69
// 1066d890 Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066ff00 Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ToolsButton_Update_m7A0F5F61D94A5ABCDEA8AE60EE72DEB488782840
          (ToolsButton_t82FD1730196D131A12C4C86C08ACDAA30952BF26 *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *pDVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  double dVar11;
  float fVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  float local_1c;
  undefined4 local_18;
  float fStack_14;
  float local_10;
  undefined8 local_c;

  fVar12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
  local_c = CONCAT44(fVar12,(undefined4)local_c);
  dVar11 = (double)((float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000) *
                   ___real_41800000);
  _libm_sse2_exp_precise();
  local_c._4_4_ = (float)dVar11;
  fVar12 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                     ((float)(param_1->___hovered_4 != false),param_1->___hoverLerp_8,(float)dVar11,
                      (MethodInfo *)0x0);
  param_1->___hoverLerp_8 = fVar12;
  fVar12 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                     ((float)(param_1->___down_5 != false),param_1->___downLerp_9,local_c._4_4_,
                      (MethodInfo *)0x0);
  param_1->___downLerp_9 = fVar12;
  fVar12 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                     ((float)(param_1->___selected_6 != false),param_1->___selectedLerp_10,
                      local_c._4_4_,(MethodInfo *)0x0);
  param_1->___selectedLerp_10 = fVar12;
  bVar3 = param_1->___disabled_7;
  local_10 = param_1->___disabledLerp_11;
  fVar12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
  local_c = CONCAT44(fVar12,(undefined4)local_c);
  dVar11 = (double)((float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000) *
                   ___real_41c00000);
  _libm_sse2_exp_precise();
  fVar12 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                     ((float)(bVar3 != false),local_10,(float)dVar11,(MethodInfo *)0x0);
  local_18 = 0;
  param_1->___disabledLerp_11 = fVar12;
  fStack_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                        (0.0,-1.0,param_1->___downLerp_9,(MethodInfo *)0x0);
  local_10 = 0.0;
  if (param_1->___backround_12 !=
      (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
    pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___backround_12,(MethodInfo *)0x0);
    fVar12 = local_10;
    if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      VVar5.___y_3 = fStack_14;
      VVar5.___x_2 = (float)local_18;
      VVar5.___z_4 = local_10;
      Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                (pTVar9,VVar5,(MethodInfo *)0x0);
      if (param_1->___foreground_13 !=
          (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
        pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___foreground_13,(MethodInfo *)0x0);
        if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          VVar6.___y_3 = fStack_14;
          VVar6.___x_2 = (float)local_18;
          VVar6.___z_4 = fVar12;
          Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC
                    (pTVar9,VVar6,(MethodInfo *)0x0);
          if (param_1->___foreground_13 !=
              (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
            pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                param_1->___foreground_13,(MethodInfo *)0x0);
            if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              pVVar10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                  (&local_30,pTVar9,(MethodInfo *)0x0);
              uVar1 = pVVar10->___x_2;
              uVar2 = pVVar10->___y_3;
              local_1c = pVVar10->___z_4;
              fStack_14 = (float)uVar1;
              local_10 = (float)uVar2;
              if (param_1->___backround_12 !=
                  (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
                pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                    param_1->___backround_12,(MethodInfo *)0x0);
                if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  pVVar10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                      (&local_30,pTVar9,(MethodInfo *)0x0);
                  local_c._0_4_ = pVVar10->___x_2;
                  local_c._4_4_ = pVVar10->___y_3;
                  local_1c = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                       (param_1->___hoverLerp_8 * __real_3f4ccccd + __real_3f99999a,
                                        0.9,param_1->___disabledLerp_11,(MethodInfo *)0x0);
                  fVar12 = param_1->___hoverLerp_8;
                  local_1c = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                       (param_1->___selectedLerp_10 * __real_3e4ccccd + local_1c,0.9
                                        ,param_1->___disabledLerp_11,(MethodInfo *)0x0);
                  local_30.___z_4 =
                       fVar12 * __real_3dcccccd + __real_3f666666 +
                       param_1->___selectedLerp_10 * __real_3dcccccd;
                  if (param_1->___foreground_13 !=
                      (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
                    pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        param_1->___foreground_13,(MethodInfo *)0x0);
                    if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                      VVar7.___y_3 = local_10;
                      VVar7.___x_2 = fStack_14;
                      VVar7.___z_4 = local_1c;
                      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                                (pTVar9,VVar7,(MethodInfo *)0x0);
                      if (param_1->___backround_12 !=
                          (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0) {
                        pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                            param_1->___backround_12,(MethodInfo *)0x0);
                        if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                          VVar8.___z_4 = local_30.___z_4;
                          VVar8.___x_2 = (float)(undefined4)local_c;
                          VVar8.___y_3 = local_c._4_4_;
                          Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                                    (pTVar9,VVar8,(MethodInfo *)0x0);
                          fVar12 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                             (0.5,0.4,param_1->___hoverLerp_8,(MethodInfo *)0x0);
                          pDVar4 = param_1->___foreground_13;
                          if (pDVar4 != (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0
                                         *)0x0) {
                            if (pDVar4->____cutoff_5 != fVar12) {
                              DistanceFieldSettings_set_cutoff_mCCA6827FE1F9FF80FBEF75D31B1A0C7BB0F00F69
                                        (pDVar4,fVar12,(MethodInfo *)0x0);
                              if (param_1->___backround_12 ==
                                  (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *
                                  )0x0) goto LAB_10305c09;
                              DistanceFieldSettings_set_cutoff_mCCA6827FE1F9FF80FBEF75D31B1A0C7BB0F00F69
                                        (param_1->___backround_12,fVar12,(MethodInfo *)0x0);
                            }
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
  }
LAB_10305c09:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
