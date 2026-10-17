// RVA 0x1146520 | FuryStudios.FurySDK.Noop.NoopStorageContainer$$FileExists
// PDB: NoopStorageContainer_FileExists_m3B0DA01D32AA5301C17314EA019456B2560F5056
// Body: [[11146520, 11146577]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1092ecb0 NoopAsyncRequest_1__ctor_m1AA8D8DA75239A618D049D0D475477B19CA84115_gshared

Il2CppObject * __cdecl
NoopStorageContainer_FileExists_m3B0DA01D32AA5301C17314EA019456B2560F5056
          (NoopStorageContainer_tB52E4E21D5652B2559DBBC530A48A6D554B87C83 *param_1,String_t *param_2
          ,MethodInfo *param_3)

{
  NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *pNVar1;

  if (DAT_1152470a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1__ctor_mE32DEE0E1A1FA1C64A7895FCF7FE3C399E2BAABE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1_t26F788763B1B2E6AD205B99EEF60051983D11A26_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F);
    DAT_1152470a = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *)
           il2cpp_codegen_object_new
                     (
                     NoopAsyncRequest_1_t26F788763B1B2E6AD205B99EEF60051983D11A26_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest_1__ctor_m1AA8D8DA75239A618D049D0D475477B19CA84115_gshared
            (pNVar1,_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F,
             NoopAsyncRequest_1__ctor_mE32DEE0E1A1FA1C64A7895FCF7FE3C399E2BAABE_RuntimeMethod_var);
  return (Il2CppObject *)pNVar1;
}
