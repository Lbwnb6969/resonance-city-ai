// RVA 0x11466f0 | FuryStudios.FurySDK.Noop.NoopStorageContainer$$SaveText
// PDB: NoopStorageContainer_SaveText_m3F44CACD4C4B60B796A5DE05011AD175D78DEF2E
// Body: [[111466f0, 11146739]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1110cb70 NoopAsyncRequest__ctor_m56AB82DF07797BF16930EDACAACDF8D1006D1420

Il2CppObject * __cdecl
NoopStorageContainer_SaveText_m3F44CACD4C4B60B796A5DE05011AD175D78DEF2E
          (NoopStorageContainer_tB52E4E21D5652B2559DBBC530A48A6D554B87C83 *param_1,String_t *param_2
          ,String_t *param_3,MethodInfo *param_4)

{
  NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *pNVar1;

  if (DAT_11524708 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F);
    DAT_11524708 = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *)
           il2cpp_codegen_object_new
                     (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest__ctor_m56AB82DF07797BF16930EDACAACDF8D1006D1420
            (pNVar1,_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F,(MethodInfo *)0x0);
  return (Il2CppObject *)pNVar1;
}
