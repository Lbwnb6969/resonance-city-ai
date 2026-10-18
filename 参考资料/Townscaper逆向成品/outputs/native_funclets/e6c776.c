// RVA 0xe6c776 | Recovered.function.called_by_e6c510
// PDB: FUN_10e6c776
// Body: [[10e6c776, 10e6c7a6] [10e6c7ac, 10e6c7b3]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void FUN_10e6c776(void)

{
  int unaff_EBP;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x11),
             (MethodInfo *)0x0);
  if (*(Exception_t **)(unaff_EBP + -0x18) == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x18),(MethodInfo *)0x0);
}
