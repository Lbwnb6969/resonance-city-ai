// RVA 0x1146640 | FuryStudios.FurySDK.Noop.NoopStorageContainer$$LoadText
// PDB: NoopStorageContainer_LoadText_mF713E3EBC558F7F6E50B8E41BF132D4939004012
// Body: [[11146640, 11146697]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1092ecb0 NoopAsyncRequest_1__ctor_m1AA8D8DA75239A618D049D0D475477B19CA84115_gshared

Il2CppObject * __cdecl
NoopStorageContainer_LoadText_mF713E3EBC558F7F6E50B8E41BF132D4939004012
          (NoopStorageContainer_tB52E4E21D5652B2559DBBC530A48A6D554B87C83 *param_1,String_t *param_2
          ,MethodInfo *param_3)

{
  NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *pNVar1;

  if (DAT_11524706 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1__ctor_mE9D85BE4DFAF12ECAFFC3369132E2276EAD051C9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_1_t54F1FBA1A2F3F295A507B5969E8A3C673959B98D_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F);
    DAT_11524706 = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_1_tAD8702BB43D7D842A0EB52203C81D3D7633A0DD1 *)
           il2cpp_codegen_object_new
                     (
                     NoopAsyncRequest_1_t54F1FBA1A2F3F295A507B5969E8A3C673959B98D_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest_1__ctor_m1AA8D8DA75239A618D049D0D475477B19CA84115_gshared
            (pNVar1,_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F,
             NoopAsyncRequest_1__ctor_mE9D85BE4DFAF12ECAFFC3369132E2276EAD051C9_RuntimeMethod_var);
  return (Il2CppObject *)pNVar1;
}
