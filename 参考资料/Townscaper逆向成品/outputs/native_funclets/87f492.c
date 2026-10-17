// RVA 0x87f492 | Recovered.function.called_by_87f380
// PDB: FUN_1087f492
// Body: [[1087f492, 1087f4bf] [1087f4c5, 1087f4cc]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void FUN_1087f492(void)

{
  int unaff_EBP;
  Exception_t *unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x24),
             Enumerator_Dispose_m78986E4D25A26D9942245F4117AA6FDD1C3D6B7E_RuntimeMethod_var);
  if (unaff_EDI == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_EDI,(MethodInfo *)0x0);
}
