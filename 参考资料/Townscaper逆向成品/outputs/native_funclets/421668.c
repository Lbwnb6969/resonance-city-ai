// RVA 0x421668 | Recovered.function.called_by_421260
// PDB: FUN_10421668
// Body: [[10421668, 104216a7] [104216c2, 104216c7]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10420c40 KeyboardAndMouseControlRemap_RefreshControls_m13ED4C5DE37B41139DB961C2C42330D333E342AE

void FUN_10421668(void)

{
  KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *pKVar1;
  int unaff_EBP;
  Exception_t *unaff_ESI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x38),
             Enumerator_Dispose_mCC070A6CF25532BF99D3FC625D7FB52024B786B3_RuntimeMethod_var);
  if (unaff_ESI == (Exception_t *)0x0) {
    pKVar1 = *(KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 **)
              (unaff_EBP + 8);
    KeyboardAndMouseControlRemap_RefreshControls_m13ED4C5DE37B41139DB961C2C42330D333E342AE
              (pKVar1,(MethodInfo *)0x0);
    pKVar1->___hasSetup_20 = true;
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_exception(unaff_ESI,(MethodInfo *)0x0);
}
