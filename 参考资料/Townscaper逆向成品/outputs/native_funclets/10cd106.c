// RVA 0x10cd106 | Recovered.function.called_by_10ccfb0
// PDB: FUN_110cd106
// Body: [[110cd106, 110cd153] [110cd159, 110cd160]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

undefined4 FUN_110cd106(void)

{
  int unaff_EBP;
  int unaff_ESI;
  Exception_t *unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x34),
             Enumerator_Dispose_m08BF2BF302A2AACEC7079EB6B6B603B691BD8636_RuntimeMethod_var);
  if (unaff_EDI != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(unaff_EDI,(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x28 + unaff_ESI * 4) == 0x4e)) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}
