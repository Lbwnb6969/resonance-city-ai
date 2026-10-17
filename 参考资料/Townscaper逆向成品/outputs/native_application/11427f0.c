// RVA 0x11427f0 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$SetAchievementProgress
// PDB: StandalonePCPlatformSDK_SetAchievementProgress_mB3FF0E577C91483D92FB76A0C3C26E703248A1E7
// Body: [[111427f0, 1114282b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1110cae0 NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012

Il2CppObject * __cdecl
StandalonePCPlatformSDK_SetAchievementProgress_mB3FF0E577C91483D92FB76A0C3C26E703248A1E7
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,
          AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D param_2,float param_3,
          MethodInfo *param_4)

{
  NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *pNVar1;

  if (DAT_11524619 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
              );
    DAT_11524619 = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *)
           il2cpp_codegen_object_new
                     (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012(pNVar1,2,(MethodInfo *)0x0);
  return (Il2CppObject *)pNVar1;
}
