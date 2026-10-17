// RVA 0x3f8fa8 | WorldMaster.Update.exception_tail
// PDB: FUN_103f8fa8
// Body: [[103f8fa8, 103f9072]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10278920 Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63
// 103d2bb0 ManySoundsManager_OnUpdate_m767E2749F0A12DC7A9ACAD40E4271DB6CF98479C
// 103f4470 WaveFunctionCollapse_LaterUpdate_mEC567391A3F73207189D4A88AF7EE72C7819D49A
// 1087aea0 BirdFlock_OnUpdate_m2AB5A63F1903F87173EB103C40C42F276829D78E
// 108811c0 ButterflyFlock_OnUpdate_mC9722E8936069B6D6F6355C7720DAECA0EF39F0A

void FUN_103f8fa8(void)

{
  byte bVar1;
  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *pLVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int unaff_EBP;
  int unaff_ESI;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *unaff_EDI;

  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x11),
             (MethodInfo *)0x0);
  if (*(Exception_t **)(unaff_EBP + -0x1c) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x1c),(MethodInfo *)0x0);
  }
  if (unaff_ESI == 0) {
LAB_103f8ef1:
    bVar4 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                      (unaff_EDI,(MethodInfo *)0x0);
    if (bVar4) {
      pLVar2 = unaff_EDI->___stateStrings_58;
      bVar1 = unaff_EDI->___state_57;
      *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(unaff_EBP + -0x18) = pLVar2;
      if (pLVar2 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
        uVar5 = (uint)bVar1;
        *(uint *)(unaff_EBP + -0x20) = uVar5;
        if ((uint)pLVar2->____size_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                  ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                   (unaff_EBP + -0x11),(MethodInfo *)pLVar2->____items_1->m_Items[uVar5]);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        bVar4 = WorldMaster_Iterate_mAB1D38EDB8394C82044F067D5E245C0CD7D91844
                          (unaff_EDI,(MethodInfo *)0x0);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (bVar4) {
          *(undefined4 *)(unaff_EBP + -0x30 + unaff_ESI * 4) = 0x105;
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
          FUN_103f8fa8();
          return;
        }
        *(undefined4 *)(unaff_EBP + -0x30 + unaff_ESI * 4) = 0x10d;
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
        FUN_103f8fa8();
        return;
      }
      goto LAB_103f9066;
    }
  }
  else {
    iVar3 = *(int *)(unaff_EBP + -0x34 + unaff_ESI * 4);
    if (iVar3 != 0x10d) {
      if (iVar3 == 0x105) {
        unaff_ESI = unaff_ESI + -1;
        *(int *)(unaff_EBP + -0x28) = unaff_ESI;
      }
      goto LAB_103f8ef1;
    }
  }
  if (0x12 < unaff_EDI->___state_57) {
    if (unaff_EDI->___waveFunctionCollapse_10 ==
        (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0) goto LAB_103f9066;
    WaveFunctionCollapse_LaterUpdate_mEC567391A3F73207189D4A88AF7EE72C7819D49A
              (unaff_EDI->___waveFunctionCollapse_10,(MethodInfo *)0x0);
  }
  if (unaff_EDI->___flock_21 != (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)0x0) {
    BirdFlock_OnUpdate_m2AB5A63F1903F87173EB103C40C42F276829D78E
              (unaff_EDI->___flock_21,(MethodInfo *)0x0);
    if (unaff_EDI->___butterflyFlock_30 !=
        (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *)0x0) {
      ButterflyFlock_OnUpdate_mC9722E8936069B6D6F6355C7720DAECA0EF39F0A
                (unaff_EDI->___butterflyFlock_30,(MethodInfo *)0x0);
      if (unaff_EDI->___manySoundsManager_32 !=
          (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *)0x0) {
        ManySoundsManager_OnUpdate_m767E2749F0A12DC7A9ACAD40E4271DB6CF98479C
                  (unaff_EDI->___manySoundsManager_32,(MethodInfo *)0x0);
        unaff_EDI->___startedCounting_41 = false;
        if (unaff_EDI->___stopwatch_40 != (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0
           ) {
          Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63
                    (unaff_EDI->___stopwatch_40,(MethodInfo *)0x0);
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
      }
    }
  }
LAB_103f9066:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
