// RVA 0x836a20 | Os.Utils.ExtraMath$$InvBilinear
// PDB: ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
// Body: [[10836a20, 10836ca1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10196010 _libm_sse2_sqrt_precise

Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 __cdecl
ExtraMath_InvBilinear_m958988E58F72A3A502C48394AAB1B4D3A2C7657F
          (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_3,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_4,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_5,MethodInfo *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar10;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar11;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar12;

  if (DAT_1151f3c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151f3c5 = '\x01';
  }
  fVar1 = param_2.___x_0 - param_1.___x_0;
  fVar2 = param_4.___x_0 - param_1.___x_0;
  fVar9 = (param_3.___x_0 + (param_1.___x_0 - param_2.___x_0)) - param_4.___x_0;
  fVar3 = (param_3.___y_1 + (param_1.___y_1 - param_2.___y_1)) - param_4.___y_1;
  fVar6 = param_5.___x_0 - param_1.___x_0;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  fVar7 = fVar9 * (param_4.___y_1 - param_1.___y_1) - fVar3 * fVar2;
  fVar5 = (fVar1 * (param_4.___y_1 - param_1.___y_1) - (param_2.___y_1 - param_1.___y_1) * fVar2) +
          (fVar6 * fVar3 - (param_5.___y_1 - param_1.___y_1) * fVar9);
  fVar3 = fVar5 * fVar5 -
          (fVar6 * (param_2.___y_1 - param_1.___y_1) - (param_5.___y_1 - param_1.___y_1) * fVar1) *
          __real_40800000 * fVar7;
  if (0.0 <= fVar3) {
    dVar4 = (double)fVar3;
    _libm_sse2_sqrt_precise();
    fVar8 = ((float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000) - (float)dVar4) /
            (fVar7 + fVar7);
    fVar3 = (fVar6 - fVar2 * fVar8) / (fVar9 * fVar8 + fVar1);
    if ((((0.0 <= fVar8) && (fVar8 <= __real_3f800000)) && (0.0 <= fVar3)) &&
       (fVar3 <= __real_3f800000)) {
      VVar10.___y_1 = fVar8;
      VVar10.___x_0 = fVar3;
      return VVar10;
    }
    fVar3 = ((float)((uint)fVar5 ^ __xmm_80000000800000008000000080000000) + (float)dVar4) /
            (fVar7 + fVar7);
    fVar1 = (fVar6 - fVar2 * fVar3) / (fVar9 * fVar3 + fVar1);
    if (((0.0 <= fVar3) && (fVar3 <= __real_3f800000)) &&
       ((0.0 <= fVar1 && (fVar1 <= __real_3f800000)))) {
      VVar11.___y_1 = fVar3;
      VVar11.___x_0 = fVar1;
      return VVar11;
    }
  }
  VVar12.___y_1 = -1.0;
  VVar12.___x_0 = -1.0;
  return VVar12;
}
