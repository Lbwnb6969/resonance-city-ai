// RVA 0x1142a10 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$.ctor
// PDB: StandalonePCPlatformSDK__ctor_m783E27D7E91422C7D09B9C429AC160411A4B9EEF
// Body: [[11142a10, 11142a8b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 1110b0e0 AsyncRequestScheduler__ctor_mF42B9955507A73C2CA60A0C617E90B72C16F816D

void __cdecl
StandalonePCPlatformSDK__ctor_m783E27D7E91422C7D09B9C429AC160411A4B9EEF
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,
          MethodInfo *param_2)

{
  AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *pAVar1;

  if (DAT_11524621 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80_il2cpp_TypeInfo_var
              );
    DAT_11524621 = '\x01';
  }
  pAVar1 = (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)
           il2cpp_codegen_object_new
                     (
                     AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80_il2cpp_TypeInfo_var
                     );
  AsyncRequestScheduler__ctor_mF42B9955507A73C2CA60A0C617E90B72C16F816D(pAVar1,(MethodInfo *)0x0);
  param_1->___systemRequestScheduler_13 = pAVar1;
  pAVar1 = (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)
           il2cpp_codegen_object_new
                     (
                     AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80_il2cpp_TypeInfo_var
                     );
  AsyncRequestScheduler__ctor_mF42B9955507A73C2CA60A0C617E90B72C16F816D(pAVar1,(MethodInfo *)0x0);
  param_1->___storageRequestScheduler_14 = pAVar1;
  pAVar1 = (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)
           il2cpp_codegen_object_new
                     (
                     AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80_il2cpp_TypeInfo_var
                     );
  AsyncRequestScheduler__ctor_mF42B9955507A73C2CA60A0C617E90B72C16F816D(pAVar1,(MethodInfo *)0x0);
  param_1->___statsRequestScheduler_15 = pAVar1;
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
