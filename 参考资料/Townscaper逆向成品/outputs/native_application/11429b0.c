// RVA 0x11429b0 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$Update
// PDB: StandalonePCPlatformSDK_Update_mFEFFE57B7F62B499DCA71DEFB765CB9F32A5EF0E
// Body: [[111429b0, 11142a02]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1110af40 AsyncRequestScheduler_Update_mDF3396F465202C332D1D1212ED20743F433B1D73
// 1110bb50 BasePlatformSDK_Update_mD15ADB6F5A4BE6B0534C52C50BE5503842928551

void __cdecl
StandalonePCPlatformSDK_Update_mFEFFE57B7F62B499DCA71DEFB765CB9F32A5EF0E
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,
          MethodInfo *param_2)

{
  BasePlatformSDK_Update_mD15ADB6F5A4BE6B0534C52C50BE5503842928551
            ((BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *)param_1,(MethodInfo *)0x0)
  ;
  if (param_1->___systemRequestScheduler_13 !=
      (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    AsyncRequestScheduler_Update_mDF3396F465202C332D1D1212ED20743F433B1D73
              (param_1->___systemRequestScheduler_13,(MethodInfo *)0x0);
    if (param_1->___storageRequestScheduler_14 !=
        (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
      AsyncRequestScheduler_Update_mDF3396F465202C332D1D1212ED20743F433B1D73
                (param_1->___storageRequestScheduler_14,(MethodInfo *)0x0);
      if (param_1->___statsRequestScheduler_15 !=
          (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
        AsyncRequestScheduler_Update_mDF3396F465202C332D1D1212ED20743F433B1D73
                  (param_1->___statsRequestScheduler_15,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
