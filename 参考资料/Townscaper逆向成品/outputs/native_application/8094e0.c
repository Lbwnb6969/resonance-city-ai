// RVA 0x8094e0 | Placemaker.Graphs.Qube$$Test
// PDB: Qube_Test_m03E4991435065CF24FD5394F3004CBB7429397AC
// Body: [[108094e0, 108097b9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d8920 ModuleBuilder_GetTs_m1A7BC1970FA6EA3FE1AB7D1CE412DC962A8A5271
// 103d8dc0 ModuleBuilder_MultiplyPoint_m115DCC249253236A86D2A25CFA90AE820A806866
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f880 Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
// 10674430 Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
// 10808710 Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3e520 Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
Qube_Test_m03E4991435065CF24FD5394F3004CBB7429397AC
          (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *param_1,MethodInfo *param_2)

{
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  float fVar6;
  bool bVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar9;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar10;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar11;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar13;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_fc;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 local_bc;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_ac;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_9c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_90;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_5c;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined8 local_40;
  undefined8 local_34;
  float local_28;
  float fStack_24;
  float local_20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_1151f1fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f1fc = '\x01';
  }
  pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pTVar8 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B(pTVar8,(MethodInfo *)0x0)
    ;
    if (pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pSVar9 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar8,
                          Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
                         );
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar9,
                         (MethodInfo *)0x0);
      if (bVar7) {
        pTVar8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                            (MethodInfo *)0x0);
        if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_108097b5;
        pMVar10 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                            (&local_fc,pTVar8,(MethodInfo *)0x0);
        Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar10,(MethodInfo *)0x0);
        local_10 = 0.0;
        do {
          local_c = 0.0;
          local_28 = local_10;
          do {
            local_8 = 0.0;
            fStack_24 = local_c;
            do {
              fVar6 = local_8;
              VVar2.___y_3 = fStack_24;
              VVar2.___x_2 = local_28;
              VVar2.___z_4 = local_8;
              local_20 = local_8;
              pVVar11 = ModuleBuilder_GetTs_m1A7BC1970FA6EA3FE1AB7D1CE412DC962A8A5271
                                  (&local_ac,VVar2,(MethodInfo *)0x0);
              local_84 = pVVar11->___x_1;
              fStack_80 = pVVar11->___y_2;
              fStack_7c = pVVar11->___z_3;
              fStack_78 = pVVar11->___w_4;
              VVar3.___y_3 = fStack_24;
              VVar3.___x_2 = local_28;
              VVar3.___z_4 = fVar6;
              pVVar12 = Qube_SampleNormalCoverage_m484FBAC5DA1586BAB9451351CE3E58E71407465F
                                  (&local_bc,param_1,VVar3,(MethodInfo *)0x0);
              local_74 = (pVVar12->___Item1_0).___x_2;
              fStack_70 = (pVVar12->___Item1_0).___y_3;
              local_1c.___x_2 = (pVVar12->___Item1_0).___x_2;
              local_1c.___y_3 = (pVVar12->___Item1_0).___y_3;
              fStack_6c = (pVVar12->___Item1_0).___z_4;
              fStack_68 = pVVar12->___Item2_1;
              local_1c.___z_4 = fStack_6c;
              pVVar13 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                                  (&local_90,&local_1c,(MethodInfo *)0x0);
              local_40._0_4_ = pVVar13->___x_2;
              local_40._4_4_ = pVVar13->___y_3;
              local_44 = pVVar13->___z_4;
              local_4c._0_4_ = pVVar13->___x_2;
              local_4c._4_4_ = pVVar13->___y_3;
              local_50 = local_44 * fStack_68;
              local_1c.___y_3 = (float)local_40._4_4_ * fStack_68;
              local_1c.___x_2 = fStack_68 * (float)(undefined4)local_40;
              VVar1.___y_2 = fStack_80;
              VVar1.___x_1 = local_84;
              VVar1.___z_3 = fStack_7c;
              VVar1.___w_4 = fStack_78;
              VVar4.___y_3 = fStack_24;
              VVar4.___x_2 = local_28;
              VVar4.___z_4 = fVar6;
              local_34 = local_40;
              local_1c.___z_4 = local_50;
              pVVar13 = ModuleBuilder_MultiplyPoint_m115DCC249253236A86D2A25CFA90AE820A806866
                                  (&local_9c,pSVar9,VVar1,VVar4,(MethodInfo *)0x0);
              local_5c = local_1c.___z_4 * __real_3ecccccd;
              VVar5.___y_3 = local_1c.___y_3 * __real_3ecccccd;
              VVar5.___x_2 = local_1c.___x_2 * __real_3ecccccd;
              VVar5.___z_4 = local_5c;
              Gizmos_DrawRay_m6A6A84BA24E9F945D0FE25D984DCE409FB756431
                        (*pVVar13,VVar5,(MethodInfo *)0x0);
              local_8 = local_8 + __real_3e800000;
            } while (local_8 < __real_3f8147ae);
            local_c = local_c + __real_3e800000;
          } while (local_c < __real_3f8147ae);
          local_10 = local_10 + __real_3e800000;
        } while (local_10 < __real_3f8147ae);
      }
      return;
    }
  }
LAB_108097b5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
