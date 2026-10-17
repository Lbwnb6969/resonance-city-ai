// RVA 0x11425f0 | FuryStudios.FurySDK.StandalonePC.StandalonePCPlatformSDK$$GetLeaderboard
// PDB: StandalonePCPlatformSDK_GetLeaderboard_m7F837F86245CFF3ECE587DAEF785EC4094AEE087
// Body: [[111425f0, 11142639]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1092ecf0 NoopAsyncRequest_1__ctor_mD8B22BB2ED9D345F8FD29B23A039B3372787C40F_gshared

Il2CppObject * __cdecl
StandalonePCPlatformSDK_GetLeaderboard_m7F837F86245CFF3ECE587DAEF785EC4094AEE087
          (StandalonePCPlatformSDK_t24871025FAC7FBBC11D1170D0FC553FC113E3754 *param_1,
          StatID_t49358985665638845884309A782C9128E571E796 param_2,MethodInfo *param_3)

{
  NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *pNVar1;

  if (DAT_1152461f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1__ctor_m414DE1BCE9ED1570413465629A22C08FCBBB2329_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1_t2C1407A8E5F5C7B3C2474C2F22953DBDCEF3C905_il2cpp_TypeInfo_var
              );
    DAT_1152461f = '\x01';
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
