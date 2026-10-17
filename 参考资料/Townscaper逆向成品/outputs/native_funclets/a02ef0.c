// RVA 0xa02ef0 | Recovered.function.called_by_a02c50
// PDB: FUN_10a02ef0
// Body: [[10a02ef0, 10a02f64]]
// Direct callees:
// 1003e420 Invoke
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258

void FUN_10a02ef0(void)

{
  int iVar1;
  Il2CppObject *unaff_EBX;
  int unaff_EBP;
  Exception_t *unaff_ESI;
  float fVar2;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EBX != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_EBX
              );
  }
  if (unaff_ESI != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(unaff_ESI,(MethodInfo *)0x0);
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  if (*(float *)(iVar1 + 0x28) <= *(float *)(iVar1 + 0x2c)) {
    fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    *(float *)(iVar1 + 0x30) = fVar2;
  }
  fVar2 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  *(float *)(iVar1 + 0x28) = fVar2;
  if (*(int *)(iVar1 + 0x24) != 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    *(undefined4 *)(*(int *)(iVar1 + 0x24) + 8) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
