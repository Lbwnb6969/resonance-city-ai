// RVA 0xa03d3c | Recovered.function.called_by_a03c40
// PDB: FUN_10a03d3c
// Body: [[10a03d3c, 10a03d57] [10a03d5d, 10a03d64]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception

void FUN_10a03d3c(void)

{
  int unaff_EBP;
  Exception_t *unaff_ESI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_ESI == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_ESI,(MethodInfo *)0x0);
}
