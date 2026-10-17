// RVA 0x87ea4f | Recovered.function.called_by_87aea0
// PDB: FUN_1087ea4f
// Body: [[1087ea4f, 1087ea7e] [1087ea94, 1087ea9b]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void FUN_1087ea4f(void)

{
  Exception_t *pEVar1;
  int unaff_EBP;

  pEVar1 = *(Exception_t **)(unaff_EBP + -0x60);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x53),
             (MethodInfo *)0x0);
  if (pEVar1 == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(pEVar1,(MethodInfo *)0x0);
}
