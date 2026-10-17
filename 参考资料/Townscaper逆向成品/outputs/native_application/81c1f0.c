// RVA 0x81c1f0 | Placemaker.Sandbanker$$UpdateShadeUvs
// PDB: Sandbanker_UpdateShadeUvs_mC1FF726BBF3EB0328F7F008F1BABD13DA9674468
// Body: [[1081c1f0, 1081c296]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1022e320 ByteFloat2_get_fx_mB4C16DDD1EA5CAF398CC4551C69A5F7EDD4C67D4
// 1022e350 ByteFloat2_get_fy_m969AAC2C226E6109D97DC8DE3377702DE051126A
// 10668580 Shader_SetGlobalVector_m0887A74FF8E1A2586B2D9ABEC6D6A06245923C7C

void __cdecl
Sandbanker_UpdateShadeUvs_mC1FF726BBF3EB0328F7F008F1BABD13DA9674468
          (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *param_1,MethodInfo *param_2)

{
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  if (DAT_1151f27c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral429F5402E68422A4FDE1B7A9B0981DA37A30084E);
    DAT_1151f27c = '\x01';
  }
  fVar2 = ByteFloat2_get_fx_mB4C16DDD1EA5CAF398CC4551C69A5F7EDD4C67D4
                    (&param_1->___uvPos_11,(MethodInfo *)0x0);
  fVar3 = ByteFloat2_get_fy_m969AAC2C226E6109D97DC8DE3377702DE051126A
                    (&param_1->___uvPos_11,(MethodInfo *)0x0);
  fVar4 = ByteFloat2_get_fx_mB4C16DDD1EA5CAF398CC4551C69A5F7EDD4C67D4
                    (&param_1->___uvSize_12,(MethodInfo *)0x0);
  fVar5 = ByteFloat2_get_fy_m969AAC2C226E6109D97DC8DE3377702DE051126A
                    (&param_1->___uvSize_12,(MethodInfo *)0x0);
  VVar1.___y_2 = fVar3;
  VVar1.___x_1 = fVar2;
  VVar1.___z_3 = fVar4;
  VVar1.___w_4 = fVar5;
  Shader_SetGlobalVector_m0887A74FF8E1A2586B2D9ABEC6D6A06245923C7C
            (_stringLiteral429F5402E68422A4FDE1B7A9B0981DA37A30084E,VVar1,(MethodInfo *)0x0);
  return;
}
