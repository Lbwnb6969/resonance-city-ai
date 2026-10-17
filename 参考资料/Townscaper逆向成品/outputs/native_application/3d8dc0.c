// RVA 0x3d8dc0 | Placemaker.ModuleBuilder$$MultiplyPoint
// PDB: ModuleBuilder_MultiplyPoint_m115DCC249253236A86D2A25CFA90AE820A806866
// Body: [[103d8dc0, 103d8fc9]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
ModuleBuilder_MultiplyPoint_m115DCC249253236A86D2A25CFA90AE820A806866
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_1,
          Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,MethodInfo *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  undefined1 auVar7 [12];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_94;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  float fStack_60;
  undefined8 local_58;
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 local_34;
  undefined8 local_28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  ulonglong local_10;
  undefined4 local_8;

  local_10 = (ulonglong)(uint)param_3.___y_3 << 0x20;
  local_8 = 0;
  if (param_1 != (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) {
    auVar7._4_8_ = 0;
    auVar7._0_4_ = param_3.___y_3;
    pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                       (&param_3,&param_1->___m0_12,
                        (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)(auVar7 << 0x20),
                        (MethodInfo *)0x0);
    local_4c._0_4_ = pVVar8->___x_2;
    local_4c._4_4_ = pVVar8->___y_3;
    local_74 = pVVar8->___z_4;
    local_7c._0_4_ = pVVar8->___x_2;
    local_7c._4_4_ = pVVar8->___y_3;
    VVar4.___z_4 = 0.0;
    VVar4.___x_2 = (float)(undefined4)local_10;
    VVar4.___y_3 = (float)local_10._4_4_;
    local_28 = local_4c;
    pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                       (&local_1c,&param_1->___m1_13,VVar4,(MethodInfo *)0x0);
    local_40._0_4_ = pVVar8->___x_2;
    local_40._4_4_ = pVVar8->___y_3;
    param_3.___z_4 = pVVar8->___z_4;
    local_70._0_4_ = pVVar8->___x_2;
    local_70._4_4_ = pVVar8->___y_3;
    VVar5.___z_4 = 0.0;
    VVar5.___x_2 = (float)(undefined4)local_10;
    VVar5.___y_3 = (float)local_10._4_4_;
    param_3.___x_2 = (float)(undefined4)local_40;
    param_3.___y_3 = local_40._4_4_;
    local_68 = param_3.___z_4;
    pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                       (&local_1c,&param_1->___m2_14,VVar5,(MethodInfo *)0x0);
    local_58._0_4_ = pVVar8->___x_2;
    local_58._4_4_ = pVVar8->___y_3;
    local_80 = pVVar8->___z_4;
    local_88._0_4_ = pVVar8->___x_2;
    local_88._4_4_ = pVVar8->___y_3;
    VVar6.___z_4 = 0.0;
    VVar6.___x_2 = (float)(undefined4)local_10;
    VVar6.___y_3 = (float)local_10._4_4_;
    local_34 = local_58;
    pVVar8 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                       (&local_94,&param_1->___m3_15,VVar6,(MethodInfo *)0x0);
    uVar1 = pVVar8->___x_2;
    uVar2 = pVVar8->___y_3;
    fVar3 = pVVar8->___z_4;
    __return_storage_ptr__->___x_2 =
         param_2.___y_2 * param_3.___x_2 + (float)local_28 * param_2.___x_1 +
         param_2.___z_3 * (float)local_34 + param_2.___w_4 * (float)uVar1;
    __return_storage_ptr__->___y_3 =
         param_2.___y_2 * local_40._4_4_ + local_4c._4_4_ * param_2.___x_1 +
         param_2.___z_3 * local_58._4_4_ + param_2.___w_4 * (float)uVar2;
    __return_storage_ptr__->___z_4 =
         param_2.___y_2 * local_68 + local_74 * param_2.___x_1 + param_2.___z_3 * local_80 +
         param_2.___w_4 * fVar3;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
