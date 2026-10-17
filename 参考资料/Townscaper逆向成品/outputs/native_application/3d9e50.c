// RVA 0x3d9e50 | Placemaker.ModuleMath$$MulOrientations
// PDB: ModuleMath_MulOrientations_m96F4E40670BC8E6D94ED10CD31432AAA9869F7E8
// Body: [[103d9e50, 103d9edd]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

uchar __cdecl
ModuleMath_MulOrientations_m96F4E40670BC8E6D94ED10CD31432AAA9869F7E8
          (uchar param_1,uchar param_2,MethodInfo *param_3)

{
  int iVar1;
  uint uVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;

  if (DAT_1151c888 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    DAT_1151c888 = '\x01';
  }
  if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
  }
  iVar1 = *(int *)((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                        static_fields + 0x20);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if (**(uint **)(iVar1 + 8) <= (uint)param_1) {
    pMVar4 = (MethodInfo *)0x0;
    pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar3,pMVar4);
  }
  uVar2 = (*(uint **)(iVar1 + 8))[2];
  if (param_2 < uVar2) {
    return *(uchar *)(uVar2 * param_1 + (uint)param_2 + 0x10 + iVar1);
  }
  pMVar4 = (MethodInfo *)0x0;
  pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar4);
}
