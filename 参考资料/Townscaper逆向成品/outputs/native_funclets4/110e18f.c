// RVA 0x110e18f | Recovered.function.continuation
// PDB: FUN_1110e18f
// Body: [[1110e18f, 1110e1af]]
// Direct callees:
// 1003e420 Invoke
// 1110e1c7 FUN_1110e1c7

void FUN_1110e18f(void)

{
  int unaff_EBP;
  Il2CppObject *unaff_ESI;

  if (unaff_ESI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_ESI
              );
  }
  if (*(Exception_t **)(unaff_EBP + -0x14) == (Exception_t *)0x0) {
    FUN_1110e1c7();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
}
