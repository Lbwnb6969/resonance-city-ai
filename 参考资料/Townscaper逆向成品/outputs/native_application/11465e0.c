// RVA 0x11465e0 | FuryStudios.FurySDK.Noop.NoopStorageContainer$$LoadBytes
// PDB: NoopStorageContainer_LoadBytes_m2E31492C096D51A1096259757AC22BDE7BC33150
// Body: [[111465e0, 11146637]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1092ecb0 NoopAsyncRequest_1__ctor_m1AA8D8DA75239A618D049D0D475477B19CA84115_gshared

Il2CppObject * __cdecl
NoopStorageContainer_LoadBytes_m2E31492C096D51A1096259757AC22BDE7BC33150
          (NoopStorageContainer_tB52E4E21D5652B2559DBBC530A48A6D554B87C83 *param_1,String_t *param_2
          ,MethodInfo *param_3)

{
  NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *pNVar1;

  if (DAT_11524705 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1__ctor_m82AD2FEC714564C62C80B9F4EA430F1ECB2D14F3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1_t5569F00252499EDA6FD3A0FD4CE60F5A9B4FD42B_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F);
    DAT_11524705 = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *)
           il2cpp_codegen_object_new
                     (
                     NoopAsyncRequest_1_t5569F00252499EDA6FD3A0FD4CE60F5A9B4FD42B_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest_1__ctor_m1AA8D8DA75239A618D049D0D475477B19CA84115_gshared
            (pNVar1,_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F,
             NoopAsyncRequest_1__ctor_m82AD2FEC714564C62C80B9F4EA430F1ECB2D14F3_RuntimeMethod_var);
  return (Il2CppObject *)pNVar1;
}
