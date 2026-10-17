// RVA 0x1142730 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$OpenURL
// PDB: StandalonePCPlatformSDK_OpenURL_mAC08500C869B89AAE3BEB245277A6246EDD1ECAC
// Body: [[11142730, 1114278e]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1052d6c0 Comparer__ctor_m8606A9229E243F0863D5256ABDE7DD145F43D87E
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE

Il2CppObject * __cdecl
StandalonePCPlatformSDK_OpenURL_mAC08500C869B89AAE3BEB245277A6246EDD1ECAC
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,
          String_t *param_2,MethodInfo *param_3)

{
  Comparer_tEDD9ACE3DE237FE0628C183D9DD66A8BE3182A57 *pCVar1;

  if (DAT_11524620 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&OpenURLRequest_t816CEF2337735AED176EED2EB1726950A5A61157_il2cpp_TypeInfo_var
              );
    DAT_11524620 = '\x01';
  }
  pCVar1 = (Comparer_tEDD9ACE3DE237FE0628C183D9DD66A8BE3182A57 *)
           il2cpp_codegen_object_new
                     (OpenURLRequest_t816CEF2337735AED176EED2EB1726950A5A61157_il2cpp_TypeInfo_var);
  Comparer__ctor_m8606A9229E243F0863D5256ABDE7DD145F43D87E(pCVar1,(MethodInfo *)0x0);
  pCVar1[2].___m_compareInfo_0 = (CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 *)param_2;
  if (param_1->___systemRequestScheduler_13 !=
      (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
              (param_1->___systemRequestScheduler_13,(Il2CppObject *)pCVar1,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
