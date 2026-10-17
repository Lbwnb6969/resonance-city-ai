// RVA 0x110e0fc | Recovered.function.called_by_110e001
// PDB: FUN_1110e0fc
// Body: [[1110e0fc, 1110e164]]
// Direct callees:
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1110e18f FUN_1110e18f

void FUN_1110e0fc(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int unaff_EDI;

  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x88),
             Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x14) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x38 + unaff_EDI * 4) == 0x11f)) {
    unaff_EDI = unaff_EDI + -1;
    *(int *)(unaff_EBP + -0x24) = unaff_EDI;
  }
  piVar1 = *(int **)(unaff_EBP + -0x18);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x1b4))(piVar1,*(undefined4 *)(*piVar1 + 0x1b8));
    *(undefined4 *)(unaff_EBP + -0x34 + unaff_EDI * 4) = 0x13d;
    *(undefined4 *)(unaff_EBP + -0x40) = uVar2;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_1110e18f();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
