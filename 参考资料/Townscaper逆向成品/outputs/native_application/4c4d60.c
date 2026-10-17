// RVA 0x4c4d60 | Placemaker.Ui.DistanceFieldMask$$ModifyMesh
// PDB: DistanceFieldMask_ModifyMesh_mD121230D93A12E8D3C49B03BAC4B4255224F9CDC
// Body: [[104c4d60, 104c4f81]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 101d1470 AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 10662d70 Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
// 10674300 Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43e60 Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
// 10f7f8e0 VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555
// 10f7fac0 VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E
// 10f7ff00 VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807

void __cdecl
DistanceFieldMask_ModifyMesh_mD121230D93A12E8D3C49B03BAC4B4255224F9CDC
          (DistanceFieldMask_t24D3AF7EA4ACC3024F916C27CA2EA096B36D22B2 *param_1,
          VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 *param_2,MethodInfo *param_3)

{
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar3;
  int iVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  int iVar6;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar7;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A *pUVar8;
  int iVar9;
  float *pfVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_stack_fffffee8 [80];
  undefined4 uVar16;
  undefined4 uVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__;
  undefined4 uVar18;
  VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 *pVVar19;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A *pUVar20;
  MethodInfo *pMVar21;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A local_98;
  undefined1 local_2c [16];
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float local_8;

  if (DAT_1151d135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    DAT_1151d135 = '\x01';
  }
  memset((uchar *)&local_98,'\0',0x6c);
  pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0;
    if (*(Il2CppClass **)pTVar2 ==
        RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var) {
      pRVar7 = (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar2;
    }
    if (pRVar7 != (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) {
      pRVar3 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                         ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_2c,pRVar7,
                          (MethodInfo *)0x0);
      local_1c = pRVar3->___m_XMin_0;
      fStack_18 = pRVar3->___m_YMin_1;
      fStack_14 = pRVar3->___m_Width_2;
      fStack_10 = pRVar3->___m_Height_3;
      local_c = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                          ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&local_1c,
                           (MethodInfo *)0x0);
      local_8 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                          ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_1c,
                           (MethodInfo *)0x0);
      Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                (local_c,local_8,(param_1->___anchor_6).___x_1,(MethodInfo *)0x0);
      local_8 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                          ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_1c,
                           (MethodInfo *)0x0);
      local_c = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                          ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_1c,
                           (MethodInfo *)0x0);
      Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                (local_8,local_c,(param_1->___anchor_6).___y_2,(MethodInfo *)0x0);
      local_8 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                          ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&local_1c,
                           (MethodInfo *)0x0);
      local_c = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                          ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_1c,
                           (MethodInfo *)0x0);
      Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                (local_8,local_c,(param_1->___anchor_6).___z_3,(MethodInfo *)0x0);
      local_8 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                          ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_1c,
                           (MethodInfo *)0x0);
      pRVar3 = (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_1c;
      uVar16 = 0x104c4ed1;
      local_c = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3(pRVar3,(MethodInfo *)0x0);
      Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                (local_8,local_c,(param_1->___anchor_6).___w_4,(MethodInfo *)0x0);
      iVar9 = 0;
      if (param_2 != (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 *)0x0) {
        while( true ) {
          iVar4 = VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807
                            (param_2,(MethodInfo *)0x0);
          if (iVar4 <= iVar9) break;
          pUVar20 = &local_98;
          pVVar19 = param_2;
          VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555
                    (param_2,pUVar20,iVar9,(MethodInfo *)0x0);
          __return_storage_ptr__ =
               (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_2c + 4);
          uVar18 = 0;
          uVar17 = 0x104c4f3b;
          pVVar5 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90
                             (__return_storage_ptr__,(MethodInfo *)0x0);
          pMVar21 = (MethodInfo *)0x0;
          local_98.___normal_1.___x_2 = pVVar5->___x_2;
          local_98.___normal_1.___y_3 = pVVar5->___y_3;
          local_98.___normal_1.___z_4 = pVVar5->___z_4;
          pUVar8 = &local_98;
          pfVar10 = (float *)&stack0xfffffee8;
          iVar4 = iVar9;
          for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
            *pfVar10 = (pUVar8->___position_0).___x_2;
            pUVar8 = (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A *)
                     &(pUVar8->___position_0).___y_3;
            pfVar10 = pfVar10 + 1;
          }
          UVar1.___uv2_6.___y_2 = (float)uVar16;
          auVar11 = in_stack_fffffee8._0_12_;
          auVar12 = in_stack_fffffee8._12_12_;
          auVar13 = in_stack_fffffee8._24_16_;
          auVar14 = in_stack_fffffee8._44_16_;
          auVar15 = in_stack_fffffee8._60_16_;
          UVar1.___position_0.___x_2 = (float)auVar11._0_4_;
          UVar1.___position_0.___y_3 = (float)auVar11._4_4_;
          UVar1.___position_0.___z_4 = (float)auVar11._8_4_;
          UVar1.___normal_1.___x_2 = (float)auVar12._0_4_;
          UVar1.___normal_1.___y_3 = (float)auVar12._4_4_;
          UVar1.___normal_1.___z_4 = (float)auVar12._8_4_;
          UVar1.___tangent_2.___x_1 = (float)auVar13._0_4_;
          UVar1.___tangent_2.___y_2 = (float)auVar13._4_4_;
          UVar1.___tangent_2.___z_3 = (float)auVar13._8_4_;
          UVar1.___tangent_2.___w_4 = (float)auVar13._12_4_;
          UVar1.___color_3.field0_0x0 =
               (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)in_stack_fffffee8._40_4_;
          UVar1.___uv0_4.___x_1 = (float)auVar14._0_4_;
          UVar1.___uv0_4.___y_2 = (float)auVar14._4_4_;
          UVar1.___uv0_4.___z_3 = (float)auVar14._8_4_;
          UVar1.___uv0_4.___w_4 = (float)auVar14._12_4_;
          UVar1.___uv1_5.___x_1 = (float)auVar15._0_4_;
          UVar1.___uv1_5.___y_2 = (float)auVar15._4_4_;
          UVar1.___uv1_5.___z_3 = (float)auVar15._8_4_;
          UVar1.___uv1_5.___w_4 = (float)auVar15._12_4_;
          UVar1.___uv2_6.___x_1 = (float)in_stack_fffffee8._76_4_;
          UVar1.___uv2_6.___z_3 = (float)pRVar3;
          UVar1.___uv2_6.___w_4 = (float)uVar17;
          UVar1.___uv3_7.___x_1 = (float)__return_storage_ptr__;
          UVar1.___uv3_7.___y_2 = (float)uVar18;
          UVar1.___uv3_7.___z_3 = (float)pVVar19;
          UVar1.___uv3_7.___w_4 = (float)pUVar20;
          VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E
                    (param_2,UVar1,iVar4,pMVar21);
          iVar9 = iVar9 + 1;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
