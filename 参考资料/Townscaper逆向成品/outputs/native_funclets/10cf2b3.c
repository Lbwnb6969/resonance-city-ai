// RVA 0x10cf2b3 | Recovered.function.called_by_10cef90
// PDB: FUN_110cf2b3
// Body: [[110cf2b3, 110cf310] [110cf31d, 110cf324]]
// Direct callees:
// 1003e420 Invoke
// 1018e500 IsInst
// 1018eab0 il2cpp_codegen_raise_exception

undefined1 FUN_110cf2b3(void)

{
  undefined1 uVar1;
  Il2CppObject *pIVar2;
  int unaff_EBP;
  Il2CppObject *unaff_ESI;
  int unaff_EDI;

  uVar1 = *(undefined1 *)(unaff_EBP + -0x11);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pIVar2 = IsInst(unaff_ESI,
                  IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
  if (pIVar2 != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,pIVar2);
  }
  if (*(Exception_t **)(unaff_EBP + -0x18) == (Exception_t *)0x0) {
    if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x38 + unaff_EDI * 4) == 0xad)) {
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar1;
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x18),(MethodInfo *)0x0);
}
