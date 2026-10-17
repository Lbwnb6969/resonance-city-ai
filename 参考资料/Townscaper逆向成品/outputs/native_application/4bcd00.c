// RVA 0x4bcd00 | Placemaker.Graphs.Corner$$OnDrawGizmos
// PDB: Corner_OnDrawGizmos_m8AD20DE6EC4104D8467196ED683A7458A34B00EC
// Body: [[104bcd00, 104bce50] [104bce54, 104bcfb9] [104bcfbd, 104bd106] [104bd10a, 104bd204] [104bd208, 104bd2f3]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10a39ed0 Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e520 Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431
// 10a3e5d0 Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
Corner_OnDrawGizmos_m8AD20DE6EC4104D8467196ED683A7458A34B00EC
          (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *pCVar7;
  List_1_t569265593A89FA799E916FF2D345C50EFB59729A *pLVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  int iVar11;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar12;
  List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *pLVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_d8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_cc;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_c0;
  float local_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  float local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined8 local_74;
  float local_6c;
  undefined8 local_68;
  undefined8 local_5c;
  float local_48;
  undefined8 local_44;
  float local_3c;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  float local_8;

  pCVar7 = param_1;
  if (DAT_1151d0f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m2D824BA8DB5C08E453D1087232C69DB7E73AB353_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var)
    ;
    DAT_1151d0f4 = '\x01';
  }
  uVar14 = 0;
  pLVar8 = param_1->___flowDatas_8;
  if (pLVar8 != (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0) {
    param_1 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0;
    do {
      if (pLVar8->____size_2 <= (int)uVar14) {
        pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar7,
                            (MethodInfo *)0x0);
        if (pTVar9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          iVar11 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                             (pTVar9,(MethodInfo *)0x0);
          if (iVar11 == 0) {
            return;
          }
          pCVar12 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1
                              ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)local_a8,
                               (MethodInfo *)0x0);
          Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(*pCVar12,(MethodInfo *)0x0);
          pLVar13 = pCVar7->___squares_5;
          uVar14 = 0;
          if (pLVar13 != (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0) {
            param_1 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x10;
            goto LAB_104bd0b3;
          }
        }
        break;
      }
      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar7,
                          (MethodInfo *)0x0);
      if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                          (&local_e4,pTVar9,(MethodInfo *)0x0);
      local_14._0_4_ = pVVar10->___x_2;
      local_14._4_4_ = pVVar10->___y_3;
      local_c = pVVar10->___z_4;
      pVVar10 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                          (&local_c0,(MethodInfo *)0x0);
      local_6c = pVVar10->___z_4;
      local_68._0_4_ = pVVar10->___x_2;
      local_68._4_4_ = pVVar10->___y_3;
      local_8 = (float)(int)uVar14 + __real_3f000000;
      local_74._0_4_ = pVVar10->___x_2;
      local_74._4_4_ = pVVar10->___y_3;
      local_2c = CONCAT44((float)local_68._4_4_ * local_8 + local_14._4_4_,
                          (float)(undefined4)local_68 * local_8 + (float)local_14);
      local_24 = local_6c * local_8 + local_c;
      local_5c = local_68;
      pVVar10 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                          (&local_cc,(MethodInfo *)0x0);
      pLVar8 = pCVar7->___flowDatas_8;
      local_20._0_4_ = pVVar10->___x_2;
      local_20._4_4_ = pVVar10->___y_3;
      local_18 = pVVar10->___z_4;
      if (pLVar8 == (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0) break;
      if ((uint)pLVar8->____size_2 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      fVar16 = (float)(*(uint *)((int)&param_1->_padding_ + (int)pLVar8->____items_1->m_Items) &
                      0xff);
      local_ac = local_18 * fVar16 * __real_3c23d70a;
      VVar1.___z_4 = local_24;
      VVar1.___x_2 = (float)local_2c;
      VVar1.___y_3 = local_2c._4_4_;
      VVar4.___y_3 = local_20._4_4_ * fVar16 * __real_3c23d70a;
      VVar4.___x_2 = (float)local_20 * fVar16 * __real_3c23d70a;
      VVar4.___z_4 = local_ac;
      Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF(VVar1,VVar4,(MethodInfo *)0x0);
      pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar7,
                          (MethodInfo *)0x0);
      if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                          (&local_d8,pTVar9,(MethodInfo *)0x0);
      local_38._0_4_ = pVVar10->___x_2;
      local_38._4_4_ = pVVar10->___y_3;
      local_30 = pVVar10->___z_4;
      pVVar10 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_a8 + 4),
                           (MethodInfo *)0x0);
      local_8c._0_4_ = pVVar10->___x_2;
      local_8c._4_4_ = pVVar10->___y_3;
      local_90 = pVVar10->___z_4;
      local_98._0_4_ = pVVar10->___x_2;
      local_98._4_4_ = pVVar10->___y_3;
      fVar16 = (float)(undefined4)local_8c * local_8 + (float)local_38;
      fVar15 = (float)local_8c._4_4_ * local_8 + local_38._4_4_;
      local_44 = CONCAT44(fVar15,fVar16);
      local_3c = local_90 * local_8 + local_30;
      pLVar8 = pCVar7->___flowDatas_8;
      local_80 = local_8c;
      if (pLVar8 == (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0) break;
      if ((uint)pLVar8->____size_2 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      iVar11 = (int)&pLVar8->____items_1->m_Items[0].___denom_4 + (int)param_1;
      local_48 = *(float *)(iVar11 + 0xc) * __real_3f000000;
      VVar2.___y_3 = fVar15;
      VVar2.___x_2 = fVar16;
      VVar2.___z_4 = local_3c;
      VVar5.___y_3 = *(float *)(iVar11 + 8) * __real_3f000000;
      VVar5.___x_2 = *(float *)(iVar11 + 4) * __real_3f000000;
      VVar5.___z_4 = local_48;
      Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431(VVar2,VVar5,(MethodInfo *)0x0);
      pLVar8 = pCVar7->___flowDatas_8;
      uVar14 = uVar14 + 1;
      param_1 = param_1 + 1;
    } while (pLVar8 != (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0);
  }
LAB_104bd2ef:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
LAB_104bd0b3:
  if (pLVar13->____size_2 <= (int)uVar14) {
    return;
  }
  pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar7,
                      (MethodInfo *)0x0);
  if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_104bd2ef;
  pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_a8 + 4),pTVar9,
                       (MethodInfo *)0x0);
  pLVar13 = pCVar7->___squares_5;
  local_38._0_4_ = pVVar10->___x_2;
  local_38._4_4_ = pVVar10->___y_3;
  local_30 = pVVar10->___z_4;
  if (pLVar13 == (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0) goto LAB_104bd2ef;
  if ((uint)pLVar13->____size_2 <= uVar14) {
                    /* WARNING: Subroutine does not return */
    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
              ((MethodInfo *)0x0);
  }
  if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
        (pLVar13->____items_1 + (int)&param_1->_padding_) ==
       (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
     (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                           (pLVar13->____items_1 + (int)&param_1->_padding_),(MethodInfo *)0x0),
     pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_104bd2ef;
  pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                      (&local_d8,pTVar9,(MethodInfo *)0x0);
  local_44._0_4_ = pVVar10->___x_2;
  local_44._4_4_ = pVVar10->___y_3;
  local_3c = pVVar10->___z_4;
  local_8 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(0.9,(MethodInfo *)0x0);
  local_14 = CONCAT44((local_44._4_4_ - local_38._4_4_) * local_8 + local_38._4_4_,
                      ((float)local_44 - (float)local_38) * local_8 + (float)local_38);
  local_c = (local_3c - local_30) * local_8 + local_30;
  pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar7,
                      (MethodInfo *)0x0);
  if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_104bd2ef;
  pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                      (&local_cc,pTVar9,(MethodInfo *)0x0);
  pLVar13 = pCVar7->___squares_5;
  local_20._0_4_ = pVVar10->___x_2;
  local_20._4_4_ = pVVar10->___y_3;
  local_18 = pVVar10->___z_4;
  if (pLVar13 == (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0) goto LAB_104bd2ef;
  uVar14 = uVar14 + 1;
  local_8 = (float)((int)uVar14 % pLVar13->____size_2);
  if ((uint)pLVar13->____size_2 <= (uint)local_8) {
                    /* WARNING: Subroutine does not return */
    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
              ((MethodInfo *)0x0);
  }
  if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
        (pLVar13->____items_1 + (int)local_8 * 4 + 0x10) ==
       (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
     (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                           (pLVar13->____items_1 + (int)local_8 * 4 + 0x10),(MethodInfo *)0x0),
     pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_104bd2ef;
  pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                      (&local_c0,pTVar9,(MethodInfo *)0x0);
  local_2c._0_4_ = pVVar10->___x_2;
  local_2c._4_4_ = pVVar10->___y_3;
  local_24 = pVVar10->___z_4;
  local_8 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(0.9,(MethodInfo *)0x0);
  local_48 = (local_24 - local_18) * local_8 + local_18;
  VVar3.___z_4 = local_c;
  VVar3.___x_2 = (float)local_14;
  VVar3.___y_3 = local_14._4_4_;
  VVar6.___y_3 = (local_2c._4_4_ - local_20._4_4_) * local_8 + local_20._4_4_;
  VVar6.___x_2 = ((float)local_2c - (float)local_20) * local_8 + (float)local_20;
  VVar6.___z_4 = local_48;
  Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar3,VVar6,(MethodInfo *)0x0);
  param_1 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)&param_1->_padding_;
  pLVar13 = pCVar7->___squares_5;
  if (pLVar13 == (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0) goto LAB_104bd2ef;
  goto LAB_104bd0b3;
}
