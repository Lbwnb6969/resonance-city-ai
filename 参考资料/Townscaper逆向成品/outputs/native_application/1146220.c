// RVA 0x1146220 | FuryStudios.FurySDK.Noop.NoopPlatformSDK$$IsAchievementUnlocked
// PDB: NoopPlatformSDK_IsAchievementUnlocked_mB586A7D28EF3BEBF2239D01E19D3BD14DA171E0D
// Body: [[11146220, 11146269]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1092ec40 NoopAsyncRequest_1__ctor_m06B99BD6DA2AF54A637613A7174A9A4094C9F2A5_gshared

Il2CppObject * __cdecl
NoopPlatformSDK_IsAchievementUnlocked_mB586A7D28EF3BEBF2239D01E19D3BD14DA171E0D
          (NoopPlatformSDK_tA104E858FC242EF96C85577FCDBCD109DE2D4EF4 *param_1,
          AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D param_2,MethodInfo *param_3)

{
  NoopAsyncRequest_1_t26F788763B1B2E6AD205B99EEF60051983D11A26 *pNVar1;

  if (DAT_115246fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1__ctor_m06B99BD6DA2AF54A637613A7174A9A4094C9F2A5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1_t26F788763B1B2E6AD205B99EEF60051983D11A26_il2cpp_TypeInfo_var
              );
    DAT_115246fd = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_1_t26F788763B1B2E6AD205B99EEF60051983D11A26 *)
           il2cpp_codegen_object_new
                     (
                     NoopAsyncRequest_1_t26F788763B1B2E6AD205B99EEF60051983D11A26_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest_1__ctor_m06B99BD6DA2AF54A637613A7174A9A4094C9F2A5_gshared
            (pNVar1,2,
             NoopAsyncRequest_1__ctor_m06B99BD6DA2AF54A637613A7174A9A4094C9F2A5_RuntimeMethod_var);
  return (Il2CppObject *)pNVar1;
}
