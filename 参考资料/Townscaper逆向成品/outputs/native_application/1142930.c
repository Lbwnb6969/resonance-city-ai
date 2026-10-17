// RVA 0x1142930 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$SignIn
// PDB: StandalonePCPlatformSDK_SignIn_m46C94CCDF6573EA61B3EC174E248B24D6434131A
// Body: [[11142930, 1114296e]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1110cae0 NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012

Il2CppObject * __cdecl
StandalonePCPlatformSDK_SignIn_m46C94CCDF6573EA61B3EC174E248B24D6434131A
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,int param_2,
          MethodInfo *param_3)

{
  NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *pNVar1;

  if (DAT_11524614 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
              );
    DAT_11524614 = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *)
           il2cpp_codegen_object_new
                     (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012(pNVar1,0x200,(MethodInfo *)0x0);
  return (Il2CppObject *)pNVar1;
}
