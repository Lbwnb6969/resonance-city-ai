// RVA 0x11426e0 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$OnDestroy
// PDB: StandalonePCPlatformSDK_OnDestroy_m3378988742AB45EFB335A9A4F61D59A54062291E
// Body: [[111426e0, 11142727]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110ad20 AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81

void __cdecl
StandalonePCPlatformSDK_OnDestroy_m3378988742AB45EFB335A9A4F61D59A54062291E
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,
          MethodInfo *param_2)

{
  if (param_1->___systemRequestScheduler_13 !=
      (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81
              (param_1->___systemRequestScheduler_13,(MethodInfo *)0x0);
    if (param_1->___storageRequestScheduler_14 !=
        (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
      AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81
                (param_1->___storageRequestScheduler_14,(MethodInfo *)0x0);
      if (param_1->___statsRequestScheduler_15 !=
          (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
        AsyncRequestScheduler_AbortAll_m501FD1B21C4DB4C803A820892A512710CE05AE81
                  (param_1->___statsRequestScheduler_15,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
