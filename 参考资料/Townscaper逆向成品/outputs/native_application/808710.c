// RVA 0x808710 | Placemaker.Graphs.Qube$$SampleNormalCoverage
// PDB: Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F
// Body: [[10808710, 108094dc]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10675130 Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44a80 Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
// 10e43f20 ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared

ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 * __cdecl
Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F
          (ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *__return_storage_ptr__,
          Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  undefined8 uVar1;
  uchar uVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  undefined8 *extraout_EAX;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  Il2CppObject *pIVar7;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_e0;
  float local_d8;
  undefined1 local_cc [16];
  float local_bc;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uchar local_1e;
  uchar local_1d;
  uchar local_1c;
  uchar local_1b;
  uchar local_1a;
  uchar local_19;
  float local_18;
  uchar local_11;
  undefined8 local_10;
  float local_8;

  if (DAT_1151f1fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var
              );
    DAT_1151f1fb = '\x01';
  }
  if (param_1->___voxelCount_4 == '\0') {
    pVVar5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_cc + 4),
                        (MethodInfo *)0x0);
    uVar1._0_4_ = pVVar5->___x_2;
    uVar1._4_4_ = pVVar5->___y_3;
    fVar9 = pVVar5->___z_4;
    (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
    (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
    (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
    __return_storage_ptr__->___Item2_1 = 0.0;
    fVar11 = 0.0;
  }
  else {
    if (param_1->___voxelCount_4 != 0xff) {
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_cc + 4),param_2.___x_2,
                 param_2.___y_3,param_2.___z_4,(MethodInfo *)0x0);
      local_b8 = *extraout_EAX;
      local_10._0_4_ = (float)local_b8;
      local_24 = __real_3f800000 - (float)local_10;
      fStack_e0 = (float)((ulonglong)*extraout_EAX >> 0x20);
      local_bc = __real_3f800000 - fStack_e0;
      local_b0 = *(float *)(extraout_EAX + 1);
      local_2c = local_24 * local_24;
      local_88 = local_bc * local_bc;
      local_28 = __real_3f800000 - local_b0;
      local_94 = *extraout_EAX;
      local_ac = *extraout_EAX;
      local_d8 = (float)*extraout_EAX;
      local_4c = local_d8 * local_d8;
      local_48 = __real_3f800000 - local_2c;
      local_10._4_4_ = (float)((ulonglong)local_94 >> 0x20);
      local_84 = local_10._4_4_ * local_10._4_4_;
      local_70 = local_b0 * local_b0;
      local_80 = __real_3f800000 - local_88;
      local_40 = local_28 * local_28;
      local_6c = __real_3f800000 - local_40;
      local_5c = __real_3f800000 - local_4c;
      local_30 = __real_3f800000 - local_84;
      local_44 = __real_3f800000 - local_70;
      local_18 = 0.0;
      local_a4 = local_b0;
      local_a0 = local_ac;
      local_98 = local_b0;
      local_8c = local_b0;
      local_10 = local_94;
      local_8 = local_b0;
      pVVar5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_cc + 4),
                          (MethodInfo *)0x0);
      local_10._0_4_ = pVVar5->___x_2;
      local_10._4_4_ = pVVar5->___y_3;
      local_8 = pVVar5->___z_4;
      uVar2 = (param_1->___cornerValues_13).___v0_0;
      local_19 = (param_1->___cornerValues_13).___v1_1;
      local_1c = (param_1->___cornerValues_13).___v2_2;
      local_11 = (param_1->___cornerValues_13).___v3_3;
      local_1a = (param_1->___cornerValues_13).___v4_4;
      local_1b = (param_1->___cornerValues_13).___v5_5;
      local_1d = (param_1->___cornerValues_13).___v6_6;
      local_1e = (param_1->___cornerValues_13).___v7_7;
      pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (((pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
          (pTVar6 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                              (pTVar6,(MethodInfo *)0x0),
          pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) &&
         (pIVar7 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar6,
                              Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
                             ), pIVar7 != (Il2CppObject *)0x0)) {
        pVVar8 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                           ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_cc,
                            (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                            &pIVar7[7].monitor,0,(MethodInfo *)0x0);
        pVVar5 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                           ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_cc + 4),
                            *pVVar8,(MethodInfo *)0x0);
        local_ac._0_4_ = pVVar5->___x_2;
        local_ac._4_4_ = pVVar5->___y_3;
        local_8c = pVVar5->___z_4;
        local_94._0_4_ = pVVar5->___x_2;
        local_94._4_4_ = pVVar5->___y_3;
        local_34 = (float)((undefined4)local_ac ^ __xmm_80000000800000008000000080000000);
        local_38 = (float)(local_ac._4_4_ ^ __xmm_80000000800000008000000080000000);
        local_3c = (float)((uint)local_8c ^ __xmm_80000000800000008000000080000000);
        local_a0 = local_ac;
        pVVar8 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                           ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_cc,
                            (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                            &pIVar7[0x17].monitor,0,(MethodInfo *)0x0);
        pVVar5 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                           ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_cc + 4),
                            *pVVar8,(MethodInfo *)0x0);
        local_ac._0_4_ = pVVar5->___x_2;
        local_ac._4_4_ = pVVar5->___y_3;
        local_8c = pVVar5->___z_4;
        local_94._0_4_ = pVVar5->___x_2;
        local_94._4_4_ = pVVar5->___y_3;
        local_60 = (float)((undefined4)local_ac ^ __xmm_80000000800000008000000080000000);
        local_64 = (float)(local_ac._4_4_ ^ __xmm_80000000800000008000000080000000);
        local_68 = (float)((uint)local_8c ^ __xmm_80000000800000008000000080000000);
        local_a0 = local_ac;
        pVVar8 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                           ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_cc,
                            (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                            &pIVar7[7].monitor,2,(MethodInfo *)0x0);
        pVVar5 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                           ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_cc + 4),
                            *pVVar8,(MethodInfo *)0x0);
        local_ac._0_4_ = pVVar5->___x_2;
        local_ac._4_4_ = pVVar5->___y_3;
        local_8c = pVVar5->___z_4;
        local_94._0_4_ = pVVar5->___x_2;
        local_94._4_4_ = pVVar5->___y_3;
        local_74 = (float)((undefined4)local_ac ^ __xmm_80000000800000008000000080000000);
        local_78 = (float)(local_ac._4_4_ ^ __xmm_80000000800000008000000080000000);
        local_7c = (float)((uint)local_8c ^ __xmm_80000000800000008000000080000000);
        local_a0 = local_ac;
        pVVar8 = Matrix4x4_GetColumn_m5CAA237D7FD65AA772B84A1134E8B0551F9F8480
                           ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_cc,
                            (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                            &pIVar7[0xf].monitor,2,(MethodInfo *)0x0);
        pVVar5 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B
                           ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_cc + 4),
                            *pVVar8,(MethodInfo *)0x0);
        local_ac._0_4_ = pVVar5->___x_2;
        local_ac._4_4_ = pVVar5->___y_3;
        local_8c = pVVar5->___z_4;
        local_94._0_4_ = pVVar5->___x_2;
        local_94._4_4_ = pVVar5->___y_3;
        local_50 = (float)((undefined4)local_ac ^ __xmm_80000000800000008000000080000000);
        local_54 = (float)(local_ac._4_4_ ^ __xmm_80000000800000008000000080000000);
        local_58 = (float)((uint)local_8c ^ __xmm_80000000800000008000000080000000);
        fVar9 = local_10._4_4_;
        fVar11 = (float)local_10;
        if (uVar2 == '\x12') {
          fVar10 = 0.0;
        }
        else {
          if (local_19 == '\x12') {
            fVar10 = local_2c * local_bc * local_28 - local_5c * local_bc * local_28;
            fVar11 = fVar10 * local_34 + (float)local_10;
            fVar9 = fVar10 * local_38 + local_10._4_4_;
            local_8 = fVar10 * local_3c + local_8;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_11 == '\x12') {
            fVar10 = local_bc * local_24 * local_40 - local_bc * local_24 * local_44;
            fVar11 = fVar11 + local_74 * fVar10;
            fVar9 = fVar9 + local_78 * fVar10;
            local_10 = CONCAT44(fVar9,fVar11);
            local_8 = local_8 + local_7c * fVar10;
          }
          if (local_1a == '\x12') {
            fVar9 = fVar9 - (local_88 * local_24 * local_28 - local_30 * local_24 * local_28);
            local_10 = CONCAT44(fVar9,(float)local_10);
          }
          local_18 = local_bc * local_24 * local_28 + 0.0;
          fVar10 = local_18;
        }
        if (local_19 != '\x12') {
          if (uVar2 == '\x12') {
            fVar10 = local_48 * local_bc * local_28 - local_4c * local_bc * local_28;
            fVar11 = fVar11 + fVar10 * local_34;
            fVar9 = fVar9 + fVar10 * local_38;
            local_8 = local_8 + fVar10 * local_3c;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_1c == '\x12') {
            fVar10 = local_bc * (float)local_b8 * local_40 - local_bc * (float)local_b8 * local_44;
            fVar11 = fVar11 + local_50 * fVar10;
            fVar9 = fVar9 + local_54 * fVar10;
            local_10 = CONCAT44(fVar9,fVar11);
            local_8 = local_8 + local_58 * fVar10;
          }
          if (local_1b == '\x12') {
            fVar9 = fVar9 - (local_88 * (float)local_b8 * local_28 -
                            local_30 * (float)local_b8 * local_28);
            local_10 = CONCAT44(fVar9,(float)local_10);
          }
          local_18 = local_18 + local_bc * (float)local_b8 * local_28;
          fVar10 = local_18;
        }
        if (local_1c != '\x12') {
          if (local_11 == '\x12') {
            fVar10 = local_48 * local_bc * local_b0 - local_bc * local_4c * local_b0;
            fVar11 = fVar11 + local_60 * fVar10;
            fVar9 = fVar9 + local_64 * fVar10;
            local_10 = CONCAT44(fVar9,fVar11);
            local_8 = local_8 + local_68 * fVar10;
          }
          if (local_19 == '\x12') {
            fVar10 = local_bc * (float)local_b8 * local_6c - local_bc * (float)local_b8 * local_70;
            fVar11 = fVar11 + local_50 * fVar10;
            fVar9 = fVar9 + fVar10 * local_54;
            local_8 = local_8 + fVar10 * local_58;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_1d == '\x12') {
            fVar9 = fVar9 - (local_88 * (float)local_b8 * local_b0 -
                            local_30 * (float)local_b8 * local_b0);
            local_10 = CONCAT44(fVar9,(float)local_10);
          }
          local_18 = local_18 + local_bc * (float)local_b8 * local_b0;
          fVar10 = local_18;
        }
        if (local_11 != '\x12') {
          if (local_1c == '\x12') {
            fVar10 = local_2c * local_bc * local_b0 - local_5c * local_bc * local_b0;
            fVar11 = fVar11 + local_60 * fVar10;
            fVar9 = fVar9 + fVar10 * local_64;
            local_8 = local_8 + fVar10 * local_68;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (uVar2 == '\x12') {
            fVar10 = local_6c * local_bc * local_24 - local_70 * local_bc * local_24;
            fVar11 = fVar11 + fVar10 * local_74;
            fVar9 = fVar9 + fVar10 * local_78;
            local_8 = local_8 + fVar10 * local_7c;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_1e == '\x12') {
            fVar9 = fVar9 - (local_88 * local_24 * local_b0 - local_30 * local_24 * local_b0);
            local_10 = CONCAT44(fVar9,(float)local_10);
          }
          local_18 = local_18 + local_bc * local_24 * local_b0;
          fVar10 = local_18;
        }
        if (local_1a != '\x12') {
          if (local_1b == '\x12') {
            fVar10 = local_b8._4_4_ * local_2c * local_28 - local_5c * local_b8._4_4_ * local_28;
            fVar11 = fVar11 + fVar10 * local_34;
            fVar9 = fVar9 + fVar10 * local_38;
            local_8 = local_8 + fVar10 * local_3c;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_1e == '\x12') {
            fVar10 = local_b8._4_4_ * local_24 * local_40 - local_b8._4_4_ * local_24 * local_44;
            fVar11 = fVar11 + fVar10 * local_74;
            fVar9 = fVar9 + fVar10 * local_78;
            local_8 = local_8 + fVar10 * local_7c;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (uVar2 == '\x12') {
            fVar9 = fVar9 - (local_80 * local_24 * local_28 - local_84 * local_24 * local_28);
            local_10 = CONCAT44(fVar9,(float)local_10);
          }
          local_18 = local_18 + local_b8._4_4_ * local_24 * local_28;
          fVar10 = local_18;
        }
        if (local_1b != '\x12') {
          if (local_1a == '\x12') {
            fVar10 = local_48 * local_b8._4_4_ * local_28 - local_b8._4_4_ * local_4c * local_28;
            fVar11 = fVar11 + fVar10 * local_34;
            fVar9 = fVar9 + fVar10 * local_38;
            local_8 = local_8 + fVar10 * local_3c;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_1d == '\x12') {
            fVar10 = local_b8._4_4_ * (float)local_b8 * local_40 -
                     local_b8._4_4_ * (float)local_b8 * local_44;
            fVar11 = fVar11 + fVar10 * local_50;
            fVar9 = fVar9 + fVar10 * local_54;
            local_8 = local_8 + fVar10 * local_58;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_19 == '\x12') {
            fVar9 = fVar9 - (local_80 * (float)local_b8 * local_28 -
                            local_84 * (float)local_b8 * local_28);
            local_10 = CONCAT44(fVar9,(float)local_10);
          }
          local_18 = local_18 + local_b8._4_4_ * (float)local_b8 * local_28;
          fVar10 = local_18;
        }
        if (local_1d != '\x12') {
          if (local_1e == '\x12') {
            fVar10 = local_48 * local_b8._4_4_ * local_b0 - local_b8._4_4_ * local_4c * local_b0;
            fVar11 = fVar11 + local_60 * fVar10;
            fVar9 = fVar9 + fVar10 * local_64;
            local_8 = local_8 + fVar10 * local_68;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_1b == '\x12') {
            fVar10 = local_b8._4_4_ * (float)local_b8 * local_6c -
                     local_b8._4_4_ * (float)local_b8 * local_70;
            fVar11 = fVar11 + fVar10 * local_50;
            fVar9 = fVar9 + fVar10 * local_54;
            local_8 = local_8 + fVar10 * local_58;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_1c == '\x12') {
            fVar9 = fVar9 - (local_80 * (float)local_b8 * local_b0 -
                            local_84 * (float)local_b8 * local_b0);
            local_10 = CONCAT44(fVar9,(float)local_10);
          }
          local_18 = local_18 + local_b8._4_4_ * (float)local_b8 * local_b0;
          fVar10 = local_18;
        }
        if (local_1e != '\x12') {
          if (local_1d == '\x12') {
            fVar10 = local_b8._4_4_ * local_2c * local_b0 - local_5c * local_b8._4_4_ * local_b0;
            fVar11 = fVar11 + fVar10 * local_60;
            fVar9 = fVar9 + fVar10 * local_64;
            local_8 = local_8 + fVar10 * local_68;
            local_10 = CONCAT44(fVar9,fVar11);
          }
          if (local_1a == '\x12') {
            fVar10 = local_b8._4_4_ * local_24 * local_6c - local_b8._4_4_ * local_24 * local_70;
            fVar9 = fVar9 + fVar10 * local_78;
            local_8 = fVar10 * local_7c + local_8;
            local_10 = CONCAT44(fVar9,fVar10 * local_74 + fVar11);
          }
          if (local_11 == '\x12') {
            local_10 = CONCAT44(fVar9 - (local_80 * local_24 * local_b0 -
                                        local_84 * local_24 * local_b0),(float)local_10);
          }
          fVar10 = local_18 + local_b8._4_4_ * local_24 * local_b0;
        }
        (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
        (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
        (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
        __return_storage_ptr__->___Item2_1 = 0.0;
        VVar3.___z_4 = local_8;
        VVar3.___x_2 = (float)local_10;
        VVar3.___y_3 = local_10._4_4_;
        local_a0 = local_ac;
        ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
                  (__return_storage_ptr__,VVar3,fVar10,
                   ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
        return __return_storage_ptr__;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pVVar5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_cc + 4),
                        (MethodInfo *)0x0);
    uVar1._0_4_ = pVVar5->___x_2;
    uVar1._4_4_ = pVVar5->___y_3;
    fVar9 = pVVar5->___z_4;
    (__return_storage_ptr__->___Item1_0).___x_2 = 0.0;
    (__return_storage_ptr__->___Item1_0).___y_3 = 0.0;
    (__return_storage_ptr__->___Item1_0).___z_4 = 0.0;
    __return_storage_ptr__->___Item2_1 = 0.0;
    fVar11 = 1.0;
  }
  VVar4.___z_4 = fVar9;
  VVar4.___x_2 = (float)(int)uVar1;
  VVar4.___y_3 = (float)(int)((ulonglong)uVar1 >> 0x20);
  ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_gshared
            (__return_storage_ptr__,VVar4,fVar11,
             ValueTuple_2__ctor_m45EE36F31D536F1D167669C66C61F554CA6DE909_RuntimeMethod_var);
  return __return_storage_ptr__;
}
