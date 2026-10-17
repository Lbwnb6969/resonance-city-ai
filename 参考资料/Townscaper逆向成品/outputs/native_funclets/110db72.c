// RVA 0x110db72 | Recovered.function.called_by_110d8d0
// PDB: FUN_1110db72
// Body: [[1110db72, 1110db92]]
// Direct callees:
// 1003e420 Invoke
// 1110dbaa FUN_1110dbaa

void FUN_1110db72(void)

{
  int unaff_EBP;
  Il2CppObject *unaff_ESI;

  if (unaff_ESI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_ESI
              );
  }
  if (*(Exception_t **)(unaff_EBP + -0x18) == (Exception_t *)0x0) {
    FUN_1110dbaa();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x18),(MethodInfo *)0x0);
}
