// RVA 0x11461d0 | FuryStudios.FurySDK.Noop.NoopPlatformSDK$$GetLeaderboard
// PDB: NoopPlatformSDK_GetLeaderboard_m8BB4E89ACEAFDE51B52E6488A566296DD8B01A1A
// Body: [[111461d0, 11146219]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1092ecf0 NoopAsyncRequest_1__ctor_mD8B22BB2ED9D345F8FD29B23A039B3372787C40F_gshared

Il2CppObject * __cdecl
NoopPlatformSDK_GetLeaderboard_m8BB4E89ACEAFDE51B52E6488A566296DD8B01A1A
          (NoopPlatformSDK_tA104E858FC242EF96C85577FCDBCD109DE2D4EF4 *param_1,
          StatID_t49358985665638845884309A782C9128E571E796 param_2,MethodInfo *param_3)

{
  NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *pNVar1;

  if (DAT_11524704 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1__ctor_m414DE1BCE9ED1570413465629A22C08FCBBB2329_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1_t2C1407A8E5F5C7B3C2474C2F22953DBDCEF3C905_il2cpp_TypeInfo_var
              );
    DAT_11524704 = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *)
           il2cpp_codegen_object_new
                     (
                     NoopAsyncRequest_1_t2C1407A8E5F5C7B3C2474C2F22953DBDCEF3C905_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest_1__ctor_mD8B22BB2ED9D345F8FD29B23A039B3372787C40F_gshared
            (pNVar1,0x10,
             NoopAsyncRequest_1__ctor_m414DE1BCE9ED1570413465629A22C08FCBBB2329_RuntimeMethod_var);
  return (Il2CppObject *)pNVar1;
}
