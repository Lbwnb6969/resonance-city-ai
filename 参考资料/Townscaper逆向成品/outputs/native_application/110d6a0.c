// RVA 0x110d6a0 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$Update
// PDB: PlatformPlayerPrefs_Update_m5BA527EE0045C7846C982E0EDD3B73B4E6ACBAFA
// Body: [[1110d6a0, 1110d6be]]
// Direct callees:
// 1110af40 AsyncRequestScheduler_Update_mDF3396F465202C332D1D1212ED20743F433B1D73

void __cdecl
PlatformPlayerPrefs_Update_m5BA527EE0045C7846C982E0EDD3B73B4E6ACBAFA
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,
          MethodInfo *param_2)

{
  if (param_1->___scheduler_3 !=
      (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    AsyncRequestScheduler_Update_mDF3396F465202C332D1D1212ED20743F433B1D73
              (param_1->___scheduler_3,(MethodInfo *)0x0);
    return;
  }
  return;
}
