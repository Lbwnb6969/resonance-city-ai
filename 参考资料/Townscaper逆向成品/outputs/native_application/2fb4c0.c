// RVA 0x2fb4c0 | Placemaker.Graphs.Square$$OnDrawGizmos
// PDB: Square_OnDrawGizmos_m61BE526AA3BE13803360C60511FA13582E449769
// Body: [[102fb4c0, 102fb945]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C

void __cdecl
Square_OnDrawGizmos_m61BE526AA3BE13803360C60511FA13582E449769
          (Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  float fVar14;
  float fVar15;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar17;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_c0;
  float local_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a0;
  undefined8 local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_70;
  undefined4 uStack_64;
  undefined8 local_5c;
  float local_54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_1c;
  float local_18;
  float local_14;

  local_c0.___m_Left_0 = 0.0;
  local_c0.___m_Right_1 = 0.0;
  local_c0.___m_Top_2 = 0.0;
  local_c0.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_c0,0.0,0.0,0.0,0.8,(MethodInfo *)0x0);
  CVar9.___g_1 = local_c0.___m_Right_1;
  CVar9.___r_0 = local_c0.___m_Left_0;
  CVar9.___b_2 = local_c0.___m_Top_2;
  CVar9.___a_3 = local_c0.___m_Bottom_3;
  Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar9,(MethodInfo *)0x0);
  if (param_1->___c0_8 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) {
    pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___c0_8,
                         (MethodInfo *)0x0);
    if (pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                          (&local_50,pTVar16,(MethodInfo *)0x0);
      uVar1 = pVVar17->___x_2;
      uVar3 = pVVar17->___y_3;
      fStack_24 = pVVar17->___z_4;
      fStack_2c = (float)uVar1;
      fStack_28 = (float)uVar3;
      if (param_1->___c1_9 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) {
        pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___c1_9
                             ,(MethodInfo *)0x0);
        if (pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pVVar17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                              (&local_50,pTVar16,(MethodInfo *)0x0);
          uVar2 = pVVar17->___x_2;
          uVar4 = pVVar17->___y_3;
          fStack_34 = pVVar17->___z_4;
          fStack_3c = (float)uVar2;
          fStack_38 = (float)uVar4;
          if (param_1->___c2_10 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) {
            pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                 param_1->___c2_10,(MethodInfo *)0x0);
            if (pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              pVVar17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&local_50,pTVar16,(MethodInfo *)0x0);
              local_5c._0_4_ = pVVar17->___x_2;
              local_5c._4_4_ = pVVar17->___y_3;
              local_54 = pVVar17->___z_4;
              if (param_1->___c3_11 != (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) {
                pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     param_1->___c3_11,(MethodInfo *)0x0);
                if (pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  pVVar17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                      (&local_70,pTVar16,(MethodInfo *)0x0);
                  local_94._0_4_ = pVVar17->___x_2;
                  local_94._4_4_ = pVVar17->___y_3;
                  local_a0.___z_4 = pVVar17->___z_4;
                  local_a0.___x_2 = pVVar17->___x_2;
                  local_a0.___y_3 = pVVar17->___y_3;
                  local_70.___x_2 =
                       (fStack_2c + fStack_3c + (float)local_5c + (float)(undefined4)local_94) *
                       __real_3e800000;
                  local_70.___y_3 = 0.0;
                  local_70.___z_4 = 0.0;
                  uStack_64 = 0;
                  local_18 = (fStack_38 + fStack_28 + local_5c._4_4_ + local_a0.___y_3) *
                             __real_3e800000;
                  local_1c = (fStack_34 + fStack_24 + local_54 + local_a0.___z_4) * __real_3e800000;
                  local_8c = local_a0.___z_4;
                  local_7c = local_94;
                  local_74 = local_a0.___z_4;
                  local_50._0_8_ = local_a0._0_8_;
                  local_50.___z_4 = local_a0.___z_4;
                  local_14 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                                       (0.2,(MethodInfo *)0x0);
                  local_b0 = (local_70.___x_2 - fStack_2c) * local_14 + fStack_2c;
                  local_50.___z_4 = (local_1c - fStack_24) * local_14 + fStack_24;
                  fStack_ac = 0.0;
                  uStack_a8 = 0.0;
                  uStack_a4 = 0;
                  local_84 = (local_18 - fStack_28) * local_14 + fStack_28;
                  local_14 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                                       (0.2,(MethodInfo *)0x0);
                  local_30 = (local_70.___x_2 - fStack_3c) * local_14 + fStack_3c;
                  local_a0.___z_4 = (local_1c - fStack_34) * local_14 + fStack_34;
                  fStack_2c = 0.0;
                  fStack_28 = 0.0;
                  fStack_24 = 0.0;
                  local_80 = (local_18 - fStack_38) * local_14 + fStack_38;
                  local_14 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                                       (0.2,(MethodInfo *)0x0);
                  local_88 = (local_18 - local_5c._4_4_) * local_14 + local_5c._4_4_;
                  local_40 = (local_70.___x_2 - (float)local_5c) * local_14 + (float)local_5c;
                  fStack_3c = 0.0;
                  fStack_38 = 0.0;
                  fStack_34 = 0.0;
                  local_8c = (local_1c - local_54) * local_14 + local_54;
                  local_14 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                                       (0.2,(MethodInfo *)0x0);
                  fStack_28 = fStack_2c;
                  fVar14 = local_a0.___z_4;
                  uStack_a8 = fStack_ac;
                  local_70.___x_2 = (local_70.___x_2 - (float)local_7c) * local_14 + (float)local_7c
                  ;
                  local_18 = (local_18 - local_7c._4_4_) * local_14 + local_7c._4_4_;
                  local_74 = (local_1c - local_74) * local_14 + local_74;
                  fStack_2c = local_80;
                  fStack_24 = 0.0;
                  fStack_ac = local_84;
                  uStack_a4 = 0;
                  VVar5.___y_3 = local_84;
                  VVar5.___x_2 = local_b0;
                  VVar5.___z_4 = local_50.___z_4;
                  VVar10.___y_3 = local_80;
                  VVar10.___x_2 = local_30;
                  VVar10.___z_4 = local_a0.___z_4;
                  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                            (VVar5,VVar10,(MethodInfo *)0x0);
                  fStack_38 = fStack_3c;
                  fVar15 = local_8c;
                  fStack_3c = local_88;
                  fStack_34 = 0.0;
                  VVar6.___y_3 = fStack_2c;
                  VVar6.___x_2 = local_30;
                  VVar6.___z_4 = fVar14;
                  VVar11.___y_3 = local_88;
                  VVar11.___x_2 = local_40;
                  VVar11.___z_4 = local_8c;
                  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                            (VVar6,VVar11,(MethodInfo *)0x0);
                  local_70.___z_4 = local_70.___y_3;
                  fVar14 = local_74;
                  local_70.___y_3 = local_18;
                  uStack_64 = 0;
                  VVar7.___y_3 = fStack_3c;
                  VVar7.___x_2 = local_40;
                  VVar7.___z_4 = fVar15;
                  VVar12.___y_3 = local_18;
                  VVar12.___x_2 = local_70.___x_2;
                  VVar12.___z_4 = local_74;
                  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                            (VVar7,VVar12,(MethodInfo *)0x0);
                  VVar8.___y_3 = local_70.___y_3;
                  VVar8.___x_2 = local_70.___x_2;
                  VVar8.___z_4 = fVar14;
                  VVar13.___y_3 = fStack_ac;
                  VVar13.___x_2 = local_b0;
                  VVar13.___z_4 = local_50.___z_4;
                  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                            (VVar8,VVar13,(MethodInfo *)0x0);
                  return;
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
