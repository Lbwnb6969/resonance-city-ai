// RVA 0x3d2b68 | Recovered.function.called_by_3d2950
// PDB: FUN_103d2b68
// Body: [[103d2b68, 103d2b98] [103d2ba5, 103d2bac]]
// Direct callees:
// 1003e420 Invoke
// 1018eab0 il2cpp_codegen_raise_exception

void FUN_103d2b68(void)

{
  Exception_t *unaff_EBX;
  int unaff_EBP;
  Il2CppObject *unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EDI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_EDI
              );
  }
  if (unaff_EBX == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_EBX,(MethodInfo *)0x0);
}
