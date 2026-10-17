// RVA 0x110c560 | FuryStudios.FurySDK.Internal.DotNetListFiles$$.cctor
// PDB: DotNetListFiles__cctor_mD6CECA471474B46754F7495BA7CD84FBACBCE947
// Body: [[1110c560, 1110c5e4]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl DotNetListFiles__cctor_mD6CECA471474B46754F7495BA7CD84FBACBCE947(MethodInfo *param_1)

{
  uint uVar1;
  Il2CppArray *pIVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;

  if (DAT_11523e94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE_il2cpp_TypeInfo_var
              );
    DAT_11523e94 = '\x01';
  }
  pIVar2 = il2cpp_array_new_specific
                     (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var,2);
  if (pIVar2 == (Il2CppArray *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  uVar1 = pIVar2->max_length;
  if (uVar1 == 0) {
    pMVar4 = (MethodInfo *)0x0;
    pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar3,pMVar4);
  }
  *(undefined2 *)&pIVar2[1]._padding_ = 0x5c;
  if (1 < uVar1) {
    *(undefined2 *)((int)&pIVar2[1]._padding_ + 2) = 0x2f;
    *(Il2CppArray **)
     DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE_il2cpp_TypeInfo_var->static_fields =
         pIVar2;
    return;
  }
  pMVar4 = (MethodInfo *)0x0;
  pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar4);
}
