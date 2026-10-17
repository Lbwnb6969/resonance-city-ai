// RVA 0x1146270 | FuryStudios.FurySDK.Noop.NoopPlatformSDK$$LockAchievement
// PDB: NoopPlatformSDK_LockAchievement_m7C51124D15666230F427C3506281796CCB628D99
// Body: [[11146270, 111462ae]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1110cae0 NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012

Il2CppObject * __cdecl
NoopPlatformSDK_LockAchievement_m7C51124D15666230F427C3506281796CCB628D99
          (NoopPlatformSDK_tA104E858FC242EF96C85577FCDBCD109DE2D4EF4 *param_1,
          AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D param_2,MethodInfo *param_3)

{
  NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *pNVar1;

  if (DAT_115246ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
              );
    DAT_115246ff = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *)
           il2cpp_codegen_object_new
                     (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest__ctor_m3C80465D24380685B9B878DEF161559A5603C012(pNVar1,0x8000,(MethodInfo *)0x0);
  return (Il2CppObject *)pNVar1;
}
