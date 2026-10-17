// RVA 0x42114d | Recovered.function.called_by_420f41
// PDB: FUN_1042114d
// Body: [[1042114d, 1042117a] [10421198, 1042119f]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void FUN_1042114d(void)

{
  int unaff_EBP;
  Exception_t *unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x48),
             Enumerator_Dispose_mCC070A6CF25532BF99D3FC625D7FB52024B786B3_RuntimeMethod_var);
  if (unaff_EDI == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_EDI,(MethodInfo *)0x0);
}
