// RVA 0x882811 | Recovered.function.called_by_8811c0
// PDB: FUN_10882811
// Body: [[10882811, 10882db5]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1043efe0 Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1065f9e0 Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1
// 1065ff40 Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
// 10660420 Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
// 106604d0 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
// 1066f1a0 Transform_TransformVector_m7C5F87858E82A686A233D1866443ACAEA296AA2B
// 1066f480 Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066fc20 Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10882ddb FUN_10882ddb
// 108833e0 ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c030 Debug_DrawLine_mA85118FC8F0D6DF41CBF0AC95DB19CE2F2DB5149
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void FUN_10882811(void)

{
  undefined8 uVar1;
  float fVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar5;
  bool bVar6;
  Il2CppObject *in_EAX;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar8;
  int unaff_EBX;
  int unaff_EBP;
  Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *unaff_ESI;
  int unaff_EDI;

  if (in_EAX != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,in_EAX);
  }
  if (*(Exception_t **)(unaff_EBP + -0x54) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x54),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x9c + unaff_EDI * 4) == 0x6d2)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x78) = unaff_EDI;
  }
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x40),
                     (MethodInfo *)0x0);
  if (bVar6) {
    if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(unaff_EBP + -0x40) !=
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
      pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                           (unaff_EBP + -0x40),(MethodInfo *)0x0);
      if (pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                           ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                            (unaff_EBP + -0x640),pTVar7,(MethodInfo *)0x0);
        fVar2 = pVVar8->___z_4;
        *(undefined8 *)(unaff_EBP + -0x28) = *(undefined8 *)pVVar8;
        *(float *)(unaff_EBP + -0x3c) = fVar2;
        pTVar7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                             (unaff_EBP + -100),(MethodInfo *)0x0);
        if (pTVar7 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pVVar8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                             ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                              (unaff_EBP + -0x650),pTVar7,(MethodInfo *)0x0);
          uVar1 = *(undefined8 *)pVVar8;
          *(float *)(unaff_EBP + -0x44) = pVVar8->___z_4;
          *(undefined8 *)(unaff_EBP + -0xb0) = uVar1;
          *(undefined4 *)(unaff_EBP + -0x4d8) = 0;
          *(undefined4 *)(unaff_EBP + -0x4d4) = 0;
          *(undefined4 *)(unaff_EBP + -0x4d0) = 0;
          *(undefined4 *)(unaff_EBP + -0x4cc) = 0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)(unaff_EBP + -0x4d8),
                     0.0,1.0,0.0,0.4,(MethodInfo *)0x0);
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          VVar3.___z_4 = *(float *)(unaff_EBP + -0x3c);
          VVar3._0_8_ = *(undefined8 *)(unaff_EBP + -0x28);
          VVar4.___z_4 = *(float *)(unaff_EBP + -0x44);
          VVar4._0_8_ = *(undefined8 *)(unaff_EBP + -0xb0);
          CVar5.___a_3._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x4cc) >> 0x10);
          CVar5._0_14_ = *(undefined1 (*) [14])(unaff_EBP + -0x4d8);
          Debug_DrawLine_mA85118FC8F0D6DF41CBF0AC95DB19CE2F2DB5149
                    (VVar3,VVar4,CVar5,1.0,(MethodInfo *)0x0);
          ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
                    (*(ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD **)(unaff_EBX + 8),
                     unaff_ESI,
                     *(ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B **)
                      (unaff_EBP + -0x40),(MethodInfo *)0x0);
          goto LAB_10882ca7;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
LAB_10882ca7:
  *(undefined4 *)(unaff_EBP + -0x98 + unaff_EDI * 4) = 0x788;
  *(int *)(unaff_EBP + -0x78) = *(int *)(unaff_EBP + -0x78) + 1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x35),
             (MethodInfo *)0x0);
  if (*(Exception_t **)(unaff_EBP + -0x54) == (Exception_t *)0x0) {
    FUN_10882ddb();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x54),(MethodInfo *)0x0);
}
