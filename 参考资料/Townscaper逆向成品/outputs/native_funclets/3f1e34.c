// RVA 0x3f1e34 | Recovered.function.called_by_3f12c0
// PDB: FUN_103f1e34
// Body: [[103f1e34, 103f1e60] [103f1e6e, 103f1e75]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

undefined4 FUN_103f1e34(void)

{
  int unaff_EBP;
  Exception_t *unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x14),
             (MethodInfo *)0x0);
  if (unaff_EDI == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return *(undefined4 *)(unaff_EBP + -0x18);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_EDI,(MethodInfo *)0x0);
}
