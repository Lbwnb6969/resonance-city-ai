// RVA 0x1142830 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$SetRichPresence
// PDB: StandalonePCPlatformSDK_SetRichPresence_m23D90299FFB8C09B8858B2C09D8FD5FCCC37A6D3
// Body: [[11142830, 1114286b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1110cae0 NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012

Il2CppObject * __cdecl
StandalonePCPlatformSDK_SetRichPresence_m23D90299FFB8C09B8858B2C09D8FD5FCCC37A6D3
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,
          RichPresenceID_t8C87FE2686D772BD5D4036D9D7A4536A4B699F87 param_2,
          StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A *param_3,MethodInfo *param_4)

{
  NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *pNVar1;

  if (DAT_1152461d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
              );
    DAT_1152461d = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *)
           il2cpp_codegen_object_new
                     (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012(pNVar1,8,(MethodInfo *)0x0);
  return (Il2CppObject *)pNVar1;
}
