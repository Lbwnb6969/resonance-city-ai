// RVA 0x10d0430 | FuryStudios.FurySDK.Utils.NotCondition$$IsSatisfied
// PDB: NotCondition_IsSatisfied_mD301769FBA5034A8AF7F1627DD79D7C7D7808628
// Body: [[110d0430, 110d0476]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

bool __cdecl
NotCondition_IsSatisfied_mD301769FBA5034A8AF7F1627DD79D7C7D7808628
          (NotCondition_t55F7C05349F2807527E454F7B08944F054C24447 *param_1,MethodInfo *param_2)

{
  int iVar1;

  if (DAT_11523a89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ICondition_t82D263874F0091508E7EF216E360728103238913_il2cpp_TypeInfo_var);
    DAT_11523a89 = '\x01';
  }
  if (param_1->___condition_0 != (Il2CppObject *)0x0) {
    iVar1 = InterfaceFuncInvoker0<int>::Invoke
                      (0,ICondition_t82D263874F0091508E7EF216E360728103238913_il2cpp_TypeInfo_var,
                       param_1->___condition_0);
    return (char)iVar1 == '\0';
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
