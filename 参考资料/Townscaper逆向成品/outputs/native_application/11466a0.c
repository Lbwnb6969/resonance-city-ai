// RVA 0x11466a0 | FuryStudios.FurySDK.Noop.NoopStorageContainer$$SaveBytes
// PDB: NoopStorageContainer_SaveBytes_mEA408E57D214CAA30681A55AAA9AF12372162B99
// Body: [[111466a0, 111466e9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1110cb70 NoopAsyncRequest__ctor_m56AB82DF07797BF16930EDACAACDF8D1006D1420

Il2CppObject * __cdecl
NoopStorageContainer_SaveBytes_mEA408E57D214CAA30681A55AAA9AF12372162B99
          (NoopStorageContainer_tB52E4E21D5652B2559DBBC530A48A6D554B87C83 *param_1,String_t *param_2
          ,ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *param_3,MethodInfo *param_4)

{
  NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *pNVar1;

  if (DAT_11524707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F);
    DAT_11524707 = '\x01';
  }
  pNVar1 = (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF *)
           il2cpp_codegen_object_new
                     (NoopAsyncRequest_t296DDE12458AAFA3139CCFF71314560B97E8F5BF_il2cpp_TypeInfo_var
                     );
  NoopAsyncRequest__ctor_m56AB82DF07797BF16930EDACAACDF8D1006D1420
            (pNVar1,_stringLiteral2BA56D0D1C3A2EDD48EBF73C282E074B9D2F685F,(MethodInfo *)0x0);
  return (Il2CppObject *)pNVar1;
}
