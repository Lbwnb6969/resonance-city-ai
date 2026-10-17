// RVA 0x3f0980 | Placemaker.VoxelBounceEffect$$.cctor
// PDB: VoxelBounceEffect__cctor_mC5CEE7A084CC31FBD272DB46092AC01FACD81FEE
// Body: [[103f0980, 103f09e5]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 106682f0 Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F

void __cdecl VoxelBounceEffect__cctor_mC5CEE7A084CC31FBD272DB46092AC01FACD81FEE(MethodInfo *param_1)

{
  int iVar1;

  if (DAT_1151c914 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5DEFE55FFFCB3BBEE144EC1A652270FA56AA77A6);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD45247B2F0746DD72FC7A523CD1DA26A756D7C6F);
    DAT_1151c914 = '\x01';
  }
  iVar1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F
                    (_stringLiteral5DEFE55FFFCB3BBEE144EC1A652270FA56AA77A6,(MethodInfo *)0x0);
  *(int *)VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var->
          static_fields = iVar1;
  iVar1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F
                    (_stringLiteralD45247B2F0746DD72FC7A523CD1DA26A756D7C6F,(MethodInfo *)0x0);
  *(int *)((int)VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98_il2cpp_TypeInfo_var->
                static_fields + 4) = iVar1;
  return;
}
