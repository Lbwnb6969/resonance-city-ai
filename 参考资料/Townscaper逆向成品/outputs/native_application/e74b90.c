// RVA 0xe74b90 | Placemaker.Graphs.Graph$$SampleNormalCoverage
// PDB: Graph_SampleNormalCoverage_m0095268DCEC141F82F1C8A83C831280FD2071713
// Body: [[10e74b90, 10e74fe4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10808710 Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F
// 10836a20 ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10e43f20 ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
// 10e75002 FUN_10e75002

ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 * __cdecl
Graph_SampleNormalCoverage_m0095268DCEC141F82F1C8A83C831280FD2071713
          (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *__return_storage_ptr__,
          Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_3,MethodInfo *param_4)

{
  float fVar1;
  float fVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar7;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar8;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar9;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar10;
  String_t *pSVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar15;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar16;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar17;
  Il2CppObject *pIVar18;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar20;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar21;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar22;
  float fVar23;
  float fVar24;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_8c;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_78;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_68;
  float local_60;
  float local_54;
  float local_50;
  float local_44;
  float local_40;
  float local_34;
  undefined4 local_30;
  undefined1 local_29 [21];
  undefined4 local_14;

  local_29._5_4_ = &stack0xfffffffc;
  local_14 = 0xffffffff;
  local_29._17_4_ =
       &__ehhandler__Graph_SampleNormalCoverage_m0095268DCEC141F82F1C8A83C831280FD2071713;
  local_29._13_4_ = ExceptionList;
  local_29._9_4_ = &stack0xffffff68;
  ExceptionList = local_29 + 0xd;
  puVar12 = &stack0xfffffffc;
  puVar13 = &stack0xffffff68;
  if (DAT_11522845 == '\0') {
    ExceptionList = local_29 + 0xd;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m12D0FE00253459E4AE506B4BABA39D4B32F117CD_RuntimeMethod_var
              );
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
    DAT_11522845 = '\x01';
    puVar12 = (undefined1 *)local_29._5_4_;
    puVar13 = (undefined1 *)local_29._9_4_;
  }
  local_29._9_4_ = puVar13;
  local_29._5_4_ = puVar12;
  pSVar11 = _stringLiteral9524BC26517BEAFFAA3F68ADB118FB3B10E4F516;
  local_30 = 0;
  local_29[0] = 0;
  (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
  (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
  (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
  __return_storage_ptr__->___Item2_1 = 0.0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_29,
             (MethodInfo *)pSVar11);
  local_14 = 0;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar14 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,(MethodInfo *)0x0)
  ;
  fVar22.___y_1 = local_34;
  fVar22.___x_0 = local_40;
  fVar21.___y_1 = local_44;
  fVar21.___x_0 = local_50;
  fVar20.___y_1 = local_54;
  fVar20.___x_0 = local_60;
  if (!bVar14) {
    if (__real_3f000000 < param_2.___y_3) {
      pVVar15 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                          (&local_78.___Item1_0,(MethodInfo *)0x0);
      fVar1 = pVVar15->___x_2;
      fVar2 = pVVar15->___y_3;
      fVar24 = pVVar15->___z_4;
      fVar23 = 0.0;
    }
    else {
      pVVar15 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_68,
                           (MethodInfo *)0x0);
      local_78.___Item1_0.___z_4 = pVVar15->___x_2;
      local_78.___Item2_1 = pVVar15->___y_3;
      fVar24 = pVVar15->___z_4;
      fVar23 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                         (__real_3f000000 - param_2.___y_3,(MethodInfo *)0x0);
      fVar1 = local_78.___Item1_0.___z_4;
      fVar2 = local_78.___Item2_1;
      local_34 = fVar23;
    }
    local_8c.___Item2_1 = 0.0;
    local_8c.___Item1_0.___z_4 = 0.0;
    local_8c.___Item1_0.___y_3 = 0.0;
    local_8c.___Item1_0.___x_2 = 0.0;
    VVar6.___y_3 = fVar2;
    VVar6.___x_2 = fVar1;
    VVar6.___z_4 = fVar24;
    ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
              (&local_8c,VVar6,fVar23,
               ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
    (__return_storage_ptr__->___Item1_0).___x_2 = local_8c.___Item1_0.___x_2;
    (__return_storage_ptr__->___Item1_0).___y_3 = local_8c.___Item1_0.___y_3;
    (__return_storage_ptr__->___Item1_0).___z_4 = local_8c.___Item1_0.___z_4;
    __return_storage_ptr__->___Item2_1 = local_8c.___Item2_1;
    pVVar16 = (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)FUN_10e75002();
    return pVVar16;
  }
  if (param_3 != (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) {
    pTVar17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_3,
                         (MethodInfo *)0x0);
    fVar22.___y_1 = local_34;
    fVar22.___x_0 = local_40;
    fVar21.___y_1 = local_44;
    fVar21.___x_0 = local_50;
    fVar20.___y_1 = local_54;
    fVar20.___x_0 = local_60;
    if (pTVar17 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pTVar17 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                          (pTVar17,(MethodInfo *)0x0);
      fVar22.___y_1 = local_34;
      fVar22.___x_0 = local_40;
      fVar21.___y_1 = local_44;
      fVar21.___x_0 = local_50;
      fVar20.___y_1 = local_54;
      fVar20.___x_0 = local_60;
      if (pTVar17 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pIVar18 = Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar17,
                             Component_GetComponentInParent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m12D0FE00253459E4AE506B4BABA39D4B32F117CD_RuntimeMethod_var
                            );
        fVar10.___y_1 = local_34;
        fVar10.___x_0 = local_40;
        fVar22.___y_1 = local_34;
        fVar22.___x_0 = local_40;
        fVar9.___y_1 = local_44;
        fVar9.___x_0 = local_50;
        fVar21.___y_1 = local_44;
        fVar21.___x_0 = local_50;
        fVar8.___y_1 = local_54;
        fVar8.___x_0 = local_60;
        fVar20.___y_1 = local_54;
        fVar20.___x_0 = local_60;
        if ((pIVar18 != (Il2CppObject *)0x0) &&
           (fVar20 = fVar8, fVar21 = fVar9, fVar22 = fVar10,
           pIVar18[5].monitor != (MonitorData *)0x0)) {
          pTVar17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                               pIVar18[5].monitor,(MethodInfo *)0x0);
          fVar22.___y_1 = local_34;
          fVar22.___x_0 = local_40;
          fVar21.___y_1 = local_44;
          fVar21.___x_0 = local_50;
          fVar20.___y_1 = local_54;
          fVar20.___x_0 = local_60;
          if (pTVar17 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            pVVar15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_68,
                                 pTVar17,(MethodInfo *)0x0);
            local_78.___Item1_0.___z_4 = pVVar15->___x_2;
            local_78.___Item2_1 = pVVar15->___y_3;
            fVar1 = pVVar15->___z_4;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            fVar7.___z_2 = fVar1;
            fVar7.___x_0 = local_78.___Item1_0.___z_4;
            fVar7.___y_1 = local_78.___Item2_1;
            fVar20 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                               (fVar7,(MethodInfo *)0x0);
            fVar22.___y_1 = local_34;
            fVar22.___x_0 = local_40;
            fVar21.___y_1 = local_44;
            fVar21.___x_0 = local_50;
            local_54 = fVar20.___y_1;
            local_60 = fVar20.___x_0;
            if (pIVar18[6].field0_0x0.klass != (Il2CppClass *)0x0) {
              pTVar17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   pIVar18[6].field0_0x0.klass,(MethodInfo *)0x0);
              fVar22.___y_1 = local_34;
              fVar22.___x_0 = local_40;
              fVar21.___y_1 = local_44;
              fVar21.___x_0 = local_50;
              fVar20.___y_1 = local_54;
              fVar20.___x_0 = local_60;
              if (pTVar17 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                pfVar19 = (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                          Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                    (&local_78.___Item1_0,pTVar17,(MethodInfo *)0x0);
                fVar21 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                   (*pfVar19,(MethodInfo *)0x0);
                fVar22.___y_1 = local_34;
                fVar22.___x_0 = local_40;
                fVar20.___y_1 = local_54;
                fVar20.___x_0 = local_60;
                local_44 = fVar21.___y_1;
                local_50 = fVar21.___x_0;
                if (pIVar18[6].monitor != (MonitorData *)0x0) {
                  pTVar17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pIVar18[6].monitor,(MethodInfo *)0x0);
                  fVar22.___y_1 = local_34;
                  fVar22.___x_0 = local_40;
                  fVar21.___y_1 = local_44;
                  fVar21.___x_0 = local_50;
                  fVar20.___y_1 = local_54;
                  fVar20.___x_0 = local_60;
                  if (pTVar17 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                    pfVar19 = (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                              Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                        (&local_78.___Item1_0,pTVar17,(MethodInfo *)0x0);
                    fVar22 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                       (*pfVar19,(MethodInfo *)0x0);
                    fVar21.___y_1 = local_44;
                    fVar21.___x_0 = local_50;
                    fVar20.___y_1 = local_54;
                    fVar20.___x_0 = local_60;
                    local_34 = fVar22.___y_1;
                    local_40 = fVar22.___x_0;
                    if (pIVar18[7].field0_0x0.klass != (Il2CppClass *)0x0) {
                      pTVar17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pIVar18[7].field0_0x0.klass,(MethodInfo *)0x0);
                      fVar22.___y_1 = local_34;
                      fVar22.___x_0 = local_40;
                      fVar21.___y_1 = local_44;
                      fVar21.___x_0 = local_50;
                      fVar20.___y_1 = local_54;
                      fVar20.___x_0 = local_60;
                      if (pTVar17 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                        pfVar19 = (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                                  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                            (&local_78.___Item1_0,pTVar17,(MethodInfo *)0x0);
                        fVar20 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                           (*pfVar19,(MethodInfo *)0x0);
                        fVar1 = (float)Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                                                 (param_2.___y_3,(MethodInfo *)0x0);
                        local_78.___Item2_1 = fVar1;
                        fVar21 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                           ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D)
                                            param_2,(MethodInfo *)0x0);
                        VVar3.___y_1 = local_54;
                        VVar3.___x_0 = local_60;
                        VVar4.___y_1 = local_44;
                        VVar4.___x_0 = local_50;
                        VVar5.___y_1 = local_34;
                        VVar5.___x_0 = local_40;
                        local_68 = ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
                                             (VVar3,VVar4,VVar5,
                                              (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                              fVar20,(
                                                  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                                  fVar21,(MethodInfo *)0x0);
                        fVar1 = (float)(int)local_78.___Item2_1;
                        local_78.___Item2_1 = local_68.___y_1;
                        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                                  (&local_78.___Item1_0,local_68.___x_0,
                                   (param_2.___y_3 + __real_3f000000) - fVar1,local_68.___y_1,
                                   (MethodInfo *)0x0);
                        pVVar16 = Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F
                                            (&local_78,param_3,*extraout_EAX,(MethodInfo *)0x0);
                        local_8c.___Item1_0.___x_2 = 0.0;
                        local_8c.___Item1_0.___y_3 = 0.0;
                        local_8c.___Item1_0.___z_4 = 0.0;
                        local_8c.___Item2_1 = 0.0;
                        ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
                                  (&local_8c,pVVar16->___Item1_0,pVVar16->___Item2_1,
                                   ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var
                                  );
                        (__return_storage_ptr__->___Item1_0).___x_2 = local_8c.___Item1_0.___x_2;
                        (__return_storage_ptr__->___Item1_0).___y_3 = local_8c.___Item1_0.___y_3;
                        (__return_storage_ptr__->___Item1_0).___z_4 = local_8c.___Item1_0.___z_4;
                        __return_storage_ptr__->___Item2_1 = local_8c.___Item2_1;
                        pVVar16 = (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)
                                  FUN_10e75002();
                        return pVVar16;
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
  local_34 = fVar22.___y_1;
  local_40 = fVar22.___x_0;
  local_44 = fVar21.___y_1;
  local_50 = fVar21.___x_0;
  local_54 = fVar20.___y_1;
  local_60 = fVar20.___x_0;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
