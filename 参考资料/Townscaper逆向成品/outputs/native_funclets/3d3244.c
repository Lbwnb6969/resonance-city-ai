// RVA 0x3d3244 | Recovered.function.called_by_3d2bb0
// PDB: FUN_103d3244
// Body: [[103d3244, 103d3274] [103d327a, 103d3281]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void FUN_103d3244(void)

{
  int unaff_EBP;
  Exception_t *unaff_ESI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0xe8),
             Enumerator_Dispose_m38274BC9AD38A0A3A189A8957781849E06EE70F7_RuntimeMethod_var);
  if (unaff_ESI == (Exception_t *)0x0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_ESI,(MethodInfo *)0x0);
}
