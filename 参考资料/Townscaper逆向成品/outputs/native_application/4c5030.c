// RVA 0x4c5030 | Placemaker.Ui.DistanceFieldSettings$$ModifyMesh
// PDB: DistanceFieldSettings_ModifyMesh_m25F1213B547BAA28796AF5289D801EA58E2657B7
// Body: [[104c5030, 104c5183]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10674300 Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90
// 106751a0 Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
// 10f7f8e0 VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555
// 10f7fac0 VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E
// 10f7ff00 VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807

void __cdecl
DistanceFieldSettings_ModifyMesh_m25F1213B547BAA28796AF5289D801EA58E2657B7
          (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *param_1,
          VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 *param_2,MethodInfo *param_3)

{
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar3;
  int iVar4;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar5;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A *pUVar8;
  float *pfVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  undefined1 in_stack_fffffec4 [56];
  undefined4 uVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *__return_storage_ptr___00;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 *pVVar21;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A *pUVar22;
  DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *pDVar23;
  MethodInfo *pMVar24;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_bc;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_ac;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A local_9c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  local_8 = param_1->____outline_6 - __real_3f800000;
  local_c = param_1->____shadow_7 - __real_3f800000;
  local_10 = param_1->____cutoff_5 - __real_3f000000;
  local_14 = param_1->____fill_8 - __real_3f800000;
  memset((uchar *)&local_9c,'\0',0x6c);
  param_1 = (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)0x0;
  if (param_2 != (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 *)0x0) {
    while( true ) {
      iVar4 = VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807
                        (param_2,(MethodInfo *)0x0);
      if (iVar4 <= (int)param_1) break;
      pUVar22 = &local_9c;
      pVVar21 = param_2;
      VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555
                (param_2,pUVar22,(int)param_1,(MethodInfo *)0x0);
      __return_storage_ptr___00 = &local_ac;
      local_1c = local_8;
      uVar20 = 0;
      local_18 = local_c;
      VVar3.___y_1 = local_c;
      VVar3.___x_0 = local_8;
      fVar18 = local_8;
      fVar19 = local_c;
      pVVar5 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                         (__return_storage_ptr___00,VVar3,(MethodInfo *)0x0);
      uVar17 = 0;
      local_9c.___uv1_5.___x_1 = pVVar5->___x_1;
      local_9c.___uv1_5.___y_2 = pVVar5->___y_2;
      local_9c.___uv1_5.___z_3 = pVVar5->___z_3;
      local_9c.___uv1_5.___w_4 = pVVar5->___w_4;
      pVVar5 = &local_bc;
      local_24 = local_10;
      local_20 = local_14;
      VVar2.___y_1 = local_14;
      VVar2.___x_0 = local_10;
      fVar15 = local_10;
      fVar16 = local_14;
      pVVar6 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                         (pVVar5,VVar2,(MethodInfo *)0x0);
      uVar14 = 0;
      local_9c.___uv2_6.___x_1 = pVVar6->___x_1;
      local_9c.___uv2_6.___y_2 = pVVar6->___y_2;
      local_9c.___uv2_6.___z_3 = pVVar6->___z_3;
      local_9c.___uv2_6.___w_4 = pVVar6->___w_4;
      __return_storage_ptr__ = &local_30;
      uVar13 = 0x104c5134;
      pVVar7 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90
                         (__return_storage_ptr__,(MethodInfo *)0x0);
      pMVar24 = (MethodInfo *)0x0;
      local_9c.___normal_1.___x_2 = pVVar7->___x_2;
      local_9c.___normal_1.___y_3 = pVVar7->___y_3;
      local_9c.___normal_1.___z_4 = pVVar7->___z_4;
      pUVar8 = &local_9c;
      pfVar9 = (float *)&stack0xfffffec4;
      pDVar23 = param_1;
      for (iVar4 = 0x1b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar9 = (pUVar8->___position_0).___x_2;
        pUVar8 = (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A *)
                 &(pUVar8->___position_0).___y_3;
        pfVar9 = pfVar9 + 1;
      }
      UVar1.___uv0_4.___w_4 = (float)uVar13;
      auVar10 = in_stack_fffffec4._0_12_;
      auVar11 = in_stack_fffffec4._12_12_;
      auVar12 = in_stack_fffffec4._24_16_;
      UVar1.___position_0.___x_2 = (float)auVar10._0_4_;
      UVar1.___position_0.___y_3 = (float)auVar10._4_4_;
      UVar1.___position_0.___z_4 = (float)auVar10._8_4_;
      UVar1.___normal_1.___x_2 = (float)auVar11._0_4_;
      UVar1.___normal_1.___y_3 = (float)auVar11._4_4_;
      UVar1.___normal_1.___z_4 = (float)auVar11._8_4_;
      UVar1.___tangent_2.___x_1 = (float)auVar12._0_4_;
      UVar1.___tangent_2.___y_2 = (float)auVar12._4_4_;
      UVar1.___tangent_2.___z_3 = (float)auVar12._8_4_;
      UVar1.___tangent_2.___w_4 = (float)auVar12._12_4_;
      UVar1.___color_3.field0_0x0 =
           (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)in_stack_fffffec4._40_4_;
      UVar1.___uv0_4.___x_1 = (float)in_stack_fffffec4._44_4_;
      UVar1.___uv0_4.___y_2 = (float)in_stack_fffffec4._48_4_;
      UVar1.___uv0_4.___z_3 = (float)in_stack_fffffec4._52_4_;
      UVar1.___uv1_5.___x_1 = (float)__return_storage_ptr__;
      UVar1.___uv1_5.___y_2 = (float)uVar14;
      UVar1.___uv1_5.___z_3 = (float)pVVar5;
      UVar1.___uv1_5.___w_4 = fVar15;
      UVar1.___uv2_6.___x_1 = fVar16;
      UVar1.___uv2_6.___y_2 = (float)uVar17;
      UVar1.___uv2_6.___z_3 = (float)__return_storage_ptr___00;
      UVar1.___uv2_6.___w_4 = fVar18;
      UVar1.___uv3_7.___x_1 = fVar19;
      UVar1.___uv3_7.___y_2 = (float)uVar20;
      UVar1.___uv3_7.___z_3 = (float)pVVar21;
      UVar1.___uv3_7.___w_4 = (float)pUVar22;
      VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E
                (param_2,UVar1,(int)pDVar23,pMVar24);
      param_1 = (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *)
                ((int)&param_1->_padding_ + 1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
