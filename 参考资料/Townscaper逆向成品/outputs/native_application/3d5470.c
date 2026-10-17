// RVA 0x3d5470 | Placemaker.MaterialMaster$$OnStart
// PDB: MaterialMaster_OnStart_m98413D7DE9960BC8F457384C5E8D2D076325B413
// Body: [[103d5470, 103d54e9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 10668580 Shader_SetGlobalVector_m0887A74FF8E1A2586B2D9ABEC6D6A06245923C7C

void __cdecl
MaterialMaster_OnStart_m98413D7DE9960BC8F457384C5E8D2D076325B413
          (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *param_1,MethodInfo *param_2)

{
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar1;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_14;

  if (DAT_1151c869 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral55B5136158148DAAA50B101AFE927849F7DB5A0E);
    DAT_1151c869 = '\x01';
  }
  local_14.___m_Left_0 = 0.0;
  local_14.___m_Right_1 = 0.0;
  local_14.___m_Top_2 = 0.0;
  local_14.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_14,1.0,1.0,1.0,0.0,(MethodInfo *)0x0);
  VVar1.___y_2 = local_14.___m_Right_1;
  VVar1.___x_1 = local_14.___m_Left_0;
  VVar1.___z_3 = local_14.___m_Top_2;
  VVar1.___w_4 = local_14.___m_Bottom_3;
  Shader_SetGlobalVector_m0887A74FF8E1A2586B2D9ABEC6D6A06245923C7C
            (_stringLiteral55B5136158148DAAA50B101AFE927849F7DB5A0E,VVar1,(MethodInfo *)0x0);
  return;
}
