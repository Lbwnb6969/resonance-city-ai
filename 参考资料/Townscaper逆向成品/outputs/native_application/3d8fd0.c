// RVA 0x3d8fd0 | Placemaker.ModuleBuilder$$MultiplyVector
// PDB: ModuleBuilder_MultiplyVector_mBA4ACACA37F5D18331013ADB06BC4F745E13D98D
// Body: [[103d8fd0, 103d91c7]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a44f60 Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
ModuleBuilder_MultiplyVector_mBA4ACACA37F5D18331013ADB06BC4F745E13D98D
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_1,
          Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,MethodInfo *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a0;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  float fStack_6c;
  undefined8 local_64;
  undefined8 local_58;
  undefined8 local_4c;
  float local_40;
  undefined8 local_34;
  undefined8 local_28;
  undefined8 local_1c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (param_1 != (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) {
    pVVar4 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                       (&local_10,&param_1->___m0_12,param_3,(MethodInfo *)0x0);
    local_58._0_4_ = pVVar4->___x_2;
    local_58._4_4_ = pVVar4->___y_3;
    local_80 = pVVar4->___z_4;
    local_88._0_4_ = pVVar4->___x_2;
    local_88._4_4_ = pVVar4->___y_3;
    local_28 = local_58;
    pVVar4 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                       (&local_10,&param_1->___m1_13,param_3,(MethodInfo *)0x0);
    local_4c._0_4_ = pVVar4->___x_2;
    local_4c._4_4_ = pVVar4->___y_3;
    local_74 = pVVar4->___z_4;
    local_7c._0_4_ = pVVar4->___x_2;
    local_7c._4_4_ = pVVar4->___y_3;
    local_1c = local_4c;
    pVVar4 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                       (&local_10,&param_1->___m2_14,param_3,(MethodInfo *)0x0);
    local_64._0_4_ = pVVar4->___x_2;
    local_64._4_4_ = pVVar4->___y_3;
    local_8c = pVVar4->___z_4;
    local_94._0_4_ = pVVar4->___x_2;
    local_94._4_4_ = pVVar4->___y_3;
    local_34 = local_64;
    pVVar4 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                       (&local_a0,&param_1->___m3_15,param_3,(MethodInfo *)0x0);
    uVar1 = pVVar4->___x_2;
    uVar2 = pVVar4->___y_3;
    fVar3 = pVVar4->___z_4;
    __return_storage_ptr__->___x_2 =
         param_2.___y_2 * (float)local_1c + (float)local_28 * param_2.___x_1 +
         param_2.___z_3 * (float)local_34 + param_2.___w_4 * (float)uVar1;
    __return_storage_ptr__->___y_3 =
         param_2.___y_2 * local_4c._4_4_ + local_58._4_4_ * param_2.___x_1 +
         param_2.___z_3 * local_64._4_4_ + param_2.___w_4 * (float)uVar2;
    __return_storage_ptr__->___z_4 =
         param_2.___y_2 * local_74 + local_80 * param_2.___x_1 + param_2.___z_3 * local_8c +
         param_2.___w_4 * fVar3;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
