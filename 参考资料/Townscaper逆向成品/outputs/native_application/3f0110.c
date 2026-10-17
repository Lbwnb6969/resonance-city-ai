// RVA 0x3f0110 | Placemaker.VoxelBobEffect$$.cctor
// PDB: VoxelBobEffect__cctor_mD01F299396BE5CFFCF7F5F30D6F78F0656BCCA56
// Body: [[103f0110, 103f0152]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 106682f0 Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F

void __cdecl VoxelBobEffect__cctor_mD01F299396BE5CFFCF7F5F30D6F78F0656BCCA56(MethodInfo *param_1)

{
  int iVar1;

  if (DAT_1151c90f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral74703F055E1D5CE9C0BE83E58547E37492A6CB27);
    DAT_1151c90f = '\x01';
  }
  iVar1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F
                    (_stringLiteral74703F055E1D5CE9C0BE83E58547E37492A6CB27,(MethodInfo *)0x0);
  *(int *)VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1_il2cpp_TypeInfo_var->
          static_fields = iVar1;
  return;
}
