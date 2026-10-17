// RVA 0x1dfd84 | Recovered.function.called_by_1dfa10
// PDB: FUN_101dfd84
// Body: [[101dfd84, 101dfdb4] [101dfdba, 101dfdc1]]
// Direct callees:
// 1003e420 Invoke
// 1018eab0 il2cpp_codegen_raise_exception

void FUN_101dfd84(void)

{
  Exception_t *unaff_EBX;
  int unaff_EBP;
  Il2CppObject *unaff_ESI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_ESI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_ESI
              );
  }
  if (unaff_EBX == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_EBX,(MethodInfo *)0x0);
}
