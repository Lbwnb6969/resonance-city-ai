// RVA 0xe75002 | Recovered.function.called_by_e74b90
// PDB: FUN_10e75002
// Body: [[10e75002, 10e75033] [10e75039, 10e75040]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void FUN_10e75002(void)

{
  int unaff_EBP;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x19),
             (MethodInfo *)0x0);
  if (*(Exception_t **)(unaff_EBP + -0x20) == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x20),(MethodInfo *)0x0);
}
