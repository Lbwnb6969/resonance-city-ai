// RVA 0x110dbaa | Recovered.function.called_by_110db72
// PDB: FUN_1110dbaa
// Body: [[1110dbaa, 1110dbdc] [1110dbea, 1110dbf1]]
// Direct callees:
// 1003e420 Invoke
// 1018eab0 il2cpp_codegen_raise_exception

void FUN_1110dbaa(void)

{
  Il2CppObject *in_EAX;
  int unaff_EBP;
  Exception_t *unaff_ESI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (in_EAX != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,in_EAX);
  }
  if (unaff_ESI == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_ESI,(MethodInfo *)0x0);
}
