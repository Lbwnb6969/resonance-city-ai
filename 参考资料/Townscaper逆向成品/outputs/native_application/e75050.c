// RVA 0xe75050 | Placemaker.Graphs.Graph$$SampleNormalCoverage
// PDB: Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6
// Body: [[10e75050, 10e7541e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10808710 Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F
// 10836a20 ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e43f20 ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
// 10e6c7c0 Graph_GetQubeWithContext_m1AB9E36B533D6589695CA0C585871DD372EB9B2F
// 10e7543f FUN_10e7543f

ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 * __cdecl
Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6
          (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *__return_storage_ptr__,
          Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  float fVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  String_t *pSVar6;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  bool bVar10;
  ValueTuple_7_t9E702C94737AB5D89BBB1744452B740BC47D95E3 *pVVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar12;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar14;
  ValueTuple_7_t9E702C94737AB5D89BBB1744452B740BC47D95E3 local_110;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_dc;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_bc;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_b0;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_9c;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_7c;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_70;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_60;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined1 local_40 [12];
  float fStack_34;
  float local_30;
  undefined1 local_29 [21];
  undefined4 local_14;

  local_29._5_4_ = &stack0xfffffffc;
  local_14 = 0xffffffff;
  local_29._17_4_ =
       &__ehhandler__Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6;
  local_29._13_4_ = ExceptionList;
  local_29._9_4_ = &stack0xfffffee0;
  ExceptionList = local_29 + 0xd;
  puVar8 = &stack0xfffffffc;
  puVar9 = &stack0xfffffee0;
  if (DAT_11522843 == '\0') {
    ExceptionList = local_29 + 0xd;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9524BC26517BEAFFAA3F68ADB118FB3B10E4F516);
    DAT_11522843 = '\x01';
    puVar8 = (undefined1 *)local_29._5_4_;
    puVar9 = (undefined1 *)local_29._9_4_;
  }
  local_29._9_4_ = puVar9;
  local_29._5_4_ = puVar8;
  pSVar6 = _stringLiteral9524BC26517BEAFFAA3F68ADB118FB3B10E4F516;
  local_44 = 0;
  local_29[0] = 0;
  (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
  (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
  (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
  __return_storage_ptr__->___Item2_1 = 0.0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_29,
             (MethodInfo *)pSVar6);
  local_14 = 0;
  pVVar11 = Graph_GetQubeWithContext_m1AB9E36B533D6589695CA0C585871DD372EB9B2F
                      (&local_110,param_1,param_2,(MethodInfo *)0x0);
  local_dc = pVVar11->___Item1_0;
  pSStack_d8 = pVVar11->___Item2_1;
  fStack_d4 = (pVVar11->___Item3_2).___x_0;
  fStack_d0 = (pVVar11->___Item3_2).___y_1;
  local_30 = (float)pVVar11->___Item7_6;
  unique0x100007a0 = pVVar11->___Item3_2;
  local_cc = (pVVar11->___Item4_3).___x_0;
  fStack_c8 = (pVVar11->___Item4_3).___y_1;
  fStack_c4 = (pVVar11->___Item5_4).___x_0;
  fStack_c0 = (pVVar11->___Item5_4).___y_1;
  local_bc = pVVar11->___Item6_5;
  local_60.___Item1_0.___z_4 = (pVVar11->___Item4_3).___x_0;
  local_60.___Item2_1 = (pVVar11->___Item4_3).___y_1;
  local_70.___Item1_0.___z_4 = (pVVar11->___Item5_4).___x_0;
  local_70.___Item2_1 = (pVVar11->___Item5_4).___y_1;
  local_9c = pVVar11->___Item1_0;
  pSStack_98 = pVVar11->___Item2_1;
  fStack_94 = (pVVar11->___Item3_2).___x_0;
  fStack_90 = (pVVar11->___Item3_2).___y_1;
  local_8c = (pVVar11->___Item4_3).___x_0;
  fStack_88 = (pVVar11->___Item4_3).___y_1;
  fStack_84 = (pVVar11->___Item5_4).___x_0;
  fStack_80 = (pVVar11->___Item5_4).___y_1;
  local_7c = pVVar11->___Item6_5;
  local_4c = local_7c.___x_0;
  local_48 = local_7c.___y_1;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  pQVar7 = local_dc;
  bVar10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_dc,(MethodInfo *)0x0
                     );
  if (!bVar10) {
    if (param_2.___y_3 <= __real_3f000000) {
      pVVar12 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                          (&local_60.___Item1_0,(MethodInfo *)0x0);
      local_40._8_4_ = pVVar12->___x_2;
      fStack_34 = pVVar12->___y_3;
      fVar1 = pVVar12->___z_4;
      local_30 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                           (__real_3f000000 - param_2.___y_3,(MethodInfo *)0x0);
      local_70.___Item1_0.___x_2 = 0.0;
      local_70.___Item1_0.___y_3 = 0.0;
      local_70.___Item1_0.___z_4 = 0.0;
      local_70.___Item2_1 = 0.0;
      VVar5.___z_4 = fVar1;
      VVar5.___x_2 = (float)local_40._8_4_;
      VVar5.___y_3 = fStack_34;
      ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
                (&local_70,VVar5,local_30,
                 ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
      (__return_storage_ptr__->___Item1_0).___x_2 = local_70.___Item1_0.___x_2;
      (__return_storage_ptr__->___Item1_0).___y_3 = local_70.___Item1_0.___y_3;
      (__return_storage_ptr__->___Item1_0).___z_4 = local_70.___Item1_0.___z_4;
      __return_storage_ptr__->___Item2_1 = local_70.___Item2_1;
      pVVar13 = (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)FUN_10e7543f();
      return pVVar13;
    }
    pVVar12 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_40,
                         (MethodInfo *)0x0);
    local_60.___Item1_0.___x_2 = 0.0;
    local_60.___Item1_0.___y_3 = 0.0;
    local_60.___Item1_0.___z_4 = 0.0;
    local_60.___Item2_1 = 0.0;
    ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
              (&local_60,*pVVar12,0.0,
               ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
    (__return_storage_ptr__->___Item1_0).___x_2 = local_60.___Item1_0.___x_2;
    (__return_storage_ptr__->___Item1_0).___y_3 = local_60.___Item1_0.___y_3;
    (__return_storage_ptr__->___Item1_0).___z_4 = local_60.___Item1_0.___z_4;
    __return_storage_ptr__->___Item2_1 = local_60.___Item2_1;
    pVVar13 = (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)FUN_10e7543f();
    return pVVar13;
  }
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  fVar14 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                     ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D)param_2,(MethodInfo *)0x0);
  VVar2.___y_1 = local_60.___Item2_1;
  VVar2.___x_0 = local_60.___Item1_0.___z_4;
  VVar3.___y_1 = local_70.___Item2_1;
  VVar3.___x_0 = local_70.___Item1_0.___z_4;
  VVar4.___y_1 = local_48;
  VVar4.___x_0 = local_4c;
  join_0x00000008_0x00000000_ =
       ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
                 (stack0xffffffc8,VVar2,VVar3,VVar4,
                  (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)fVar14,(MethodInfo *)0x0);
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_40,(float)local_40._8_4_,
             (param_2.___y_3 + __real_3f000000) - (float)(int)local_30,fStack_34,(MethodInfo *)0x0);
  if (pQVar7 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
    pVVar13 = Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F
                        ((ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)local_40,pQVar7,
                         *extraout_EAX,(MethodInfo *)0x0);
    local_b0.___Item1_0.___x_2 = 0.0;
    local_b0.___Item1_0.___y_3 = 0.0;
    local_b0.___Item1_0.___z_4 = 0.0;
    local_b0.___Item2_1 = 0.0;
    ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
              (&local_b0,pVVar13->___Item1_0,pVVar13->___Item2_1,
               ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
    (__return_storage_ptr__->___Item1_0).___x_2 = local_b0.___Item1_0.___x_2;
    (__return_storage_ptr__->___Item1_0).___y_3 = local_b0.___Item1_0.___y_3;
    (__return_storage_ptr__->___Item1_0).___z_4 = local_b0.___Item1_0.___z_4;
    __return_storage_ptr__->___Item2_1 = local_b0.___Item2_1;
    pVVar13 = (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)FUN_10e7543f();
    return pVVar13;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
