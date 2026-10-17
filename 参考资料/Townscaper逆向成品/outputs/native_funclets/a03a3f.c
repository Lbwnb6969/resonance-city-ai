// RVA 0xa03a3f | Recovered.function.called_by_a03880
// PDB: FUN_10a03a3f
// Body: [[10a03a3f, 10a03a5a] [10a03a60, 10a03a67]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception

void FUN_10a03a3f(void)

{
  Exception_t *unaff_EBX;
  int unaff_EBP;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EBX == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_EBX,(MethodInfo *)0x0);
}
