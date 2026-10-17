// RVA 0x3d9c30 | Placemaker.ModuleMath$$InvertOrientation
// PDB: ModuleMath_InvertOrientation_mA98E2BA0027C83CB9106060CFC49829AF33F4BB8
// Body: [[103d9c30, 103d9c9b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

uchar __cdecl
ModuleMath_InvertOrientation_mA98E2BA0027C83CB9106060CFC49829AF33F4BB8
          (int param_1,MethodInfo *param_2)

{
  int iVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  if (DAT_1151c88a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    DAT_1151c88a = '\x01';
  }
  if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
  }
  iVar1 = *(int *)((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                        static_fields + 0x24);
  if (iVar1 != 0) {
    if ((uint)param_1 < *(uint *)(iVar1 + 0xc)) {
      return *(uchar *)(iVar1 + 0x10 + param_1);
    }
    pMVar3 = (MethodInfo *)0x0;
    pEVar2 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
