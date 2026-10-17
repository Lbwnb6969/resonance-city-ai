// RVA 0x2fdc15 | Recovered.function.called_by_2fdb00
// PDB: FUN_102fdc15
// Body: [[102fdc15, 102fdc50] [102fdc90, 102fdc97]]
// Direct callees:
// 1003e420 Invoke
// 1018eab0 il2cpp_codegen_raise_exception

undefined4 FUN_102fdc15(void)

{
  int unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  Il2CppObject *unaff_EDI;

  if (unaff_EDI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_EDI
              );
  }
  if (*(Exception_t **)(unaff_EBP + -0x14) == (Exception_t *)0x0) {
    if ((unaff_EBX == 0) || (*(int *)(unaff_EBP + -0x38 + unaff_EBX * 4) != 0x2a)) {
      unaff_ESI = 0;
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return unaff_ESI;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
}
