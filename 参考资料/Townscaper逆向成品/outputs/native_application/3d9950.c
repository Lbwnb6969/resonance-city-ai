// RVA 0x3d9950 | Placemaker.ModuleMath$$AreCornersLinked
// PDB: ModuleMath_AreCornersLinked_mBBD4DE01EC6DB0521AFB829CB1AFFB6F6C13F287
// Body: [[103d9950, 103d99eb]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

bool __cdecl
ModuleMath_AreCornersLinked_mBBD4DE01EC6DB0521AFB829CB1AFFB6F6C13F287
          (int param_1,int param_2,int param_3,MethodInfo *param_4)

{
  int iVar1;
  uint uVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;

  if (DAT_1151c887 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
    DAT_1151c887 = '\x01';
  }
  if ((ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var);
  }
  iVar1 = *(int *)((int)ModuleMath_t6CC60177165DBB9F43C29E7648A722CAFB9A1633_il2cpp_TypeInfo_var->
                        static_fields + 0x30);
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
  if ((uint)param_2 < uVar2) {
    return (1 << ((byte)*(undefined4 *)(iVar1 + 0x10 + (uVar2 * param_1 + param_2) * 4) & 0x1f) &
           param_3) == 1;
  }
  pMVar4 = (MethodInfo *)0x0;
  pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar3,pMVar4);
}
