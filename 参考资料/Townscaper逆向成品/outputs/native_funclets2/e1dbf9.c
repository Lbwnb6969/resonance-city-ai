// RVA 0xe1dbf9 | Recovered.function.called_by_e1d3de
// PDB: FUN_10e1dbf9
// Body: [[10e1dbf9, 10e1de2c] [10e1de3a, 10e1de41]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a45150 Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F

void FUN_10e1dbf9(void)

{
  undefined8 uVar1;
  Exception_t *pEVar2;
  void *pvVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  float fVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar11;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar12;
  int unaff_EBP;

  pEVar2 = *(Exception_t **)(unaff_EBP + -0x8c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x240),
             Enumerator_Dispose_m58DEA16F051C468A0E0FDC14C5A2AA18967974BF_RuntimeMethod_var);
  if (pEVar2 == (Exception_t *)0x0) {
    if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    }
    pvVar3 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
    uVar5 = *(undefined4 *)((int)pvVar3 + 0xa0);
    uVar6 = *(undefined4 *)((int)pvVar3 + 0xa4);
    uVar7 = *(undefined4 *)((int)pvVar3 + 0xa8);
    *(undefined4 *)(unaff_EBP + -0x220) = *(undefined4 *)((int)pvVar3 + 0x9c);
    *(undefined4 *)(unaff_EBP + -0x21c) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x218) = uVar6;
    *(undefined4 *)(unaff_EBP + -0x214) = uVar7;
    uVar5 = *(undefined4 *)((int)pvVar3 + 0xb0);
    uVar6 = *(undefined4 *)((int)pvVar3 + 0xb4);
    uVar7 = *(undefined4 *)((int)pvVar3 + 0xb8);
    *(undefined4 *)(unaff_EBP + -0x210) = *(undefined4 *)((int)pvVar3 + 0xac);
    *(undefined4 *)(unaff_EBP + -0x20c) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x208) = uVar6;
    *(undefined4 *)(unaff_EBP + -0x204) = uVar7;
    uVar5 = *(undefined4 *)((int)pvVar3 + 0xc0);
    uVar6 = *(undefined4 *)((int)pvVar3 + 0xc4);
    uVar7 = *(undefined4 *)((int)pvVar3 + 200);
    *(undefined4 *)(unaff_EBP + -0x200) = *(undefined4 *)((int)pvVar3 + 0xbc);
    *(undefined4 *)(unaff_EBP + -0x1fc) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x1f8) = uVar6;
    *(undefined4 *)(unaff_EBP + -500) = uVar7;
    uVar5 = *(undefined4 *)((int)pvVar3 + 0xd0);
    uVar6 = *(undefined4 *)((int)pvVar3 + 0xd4);
    uVar7 = *(undefined4 *)((int)pvVar3 + 0xd8);
    *(undefined4 *)(unaff_EBP + -0x298) = *(undefined4 *)((int)pvVar3 + 0xcc);
    *(undefined4 *)(unaff_EBP + -0x294) = uVar5;
    *(undefined4 *)(unaff_EBP + -0x290) = uVar6;
    *(undefined4 *)(unaff_EBP + -0x28c) = uVar7;
    pVVar11 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x178),
                         (MethodInfo *)0x0);
    fVar10 = __real_3df925fe;
    uVar1._0_4_ = pVVar11->___x_2;
    uVar1._4_4_ = pVVar11->___y_3;
    fVar4 = pVVar11->___z_4;
    *(undefined8 *)(unaff_EBP + -0xd0) = uVar1;
    *(undefined8 *)(unaff_EBP + -0x11c) = uVar1;
    *(undefined8 *)(unaff_EBP + -0x128) = *(undefined8 *)pVVar11;
    *(float *)(unaff_EBP + -0x120) = fVar4;
    *(float *)(unaff_EBP + -200) = fVar4;
    *(float *)(unaff_EBP + -200) = *(float *)(unaff_EBP + -0x120) * fVar10;
    VVar9.___y_3 = *(float *)(unaff_EBP + -0x118) * fVar10;
    VVar9.___x_2 = *(float *)(unaff_EBP + -0xd0) * fVar10;
    VVar9.___z_4 = *(float *)(unaff_EBP + -200);
    pMVar12 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
                        ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(unaff_EBP + -0x3a8)
                         ,VVar9,(MethodInfo *)0x0);
    MVar8.___m03_12 = (float)*(undefined4 *)(unaff_EBP + -0x298);
    MVar8._0_48_ = *(undefined1 (*) [48])(unaff_EBP + -0x220);
    MVar8.___m13_13 = (float)*(undefined4 *)(unaff_EBP + -0x294);
    MVar8.___m23_14 = (float)*(undefined4 *)(unaff_EBP + -0x290);
    MVar8.___m33_15 = *(float *)(unaff_EBP + -0x28c);
    pMVar12 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                        ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(unaff_EBP + -0x3a8)
                         ,MVar8,*pMVar12,(MethodInfo *)0x0);
    pMVar12 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                        ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(unaff_EBP + -0x578)
                         ,*pMVar12,
                         *(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                          ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                                ->static_fields + 0x1c),(MethodInfo *)0x0);
    Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar12,(MethodInfo *)0x0);
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar2,(MethodInfo *)0x0);
}
