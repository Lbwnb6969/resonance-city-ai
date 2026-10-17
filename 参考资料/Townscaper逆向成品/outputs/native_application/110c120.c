// RVA 0x110c120 | FuryStudios.FurySDK.Internal.BaseStorageRequest$$FuryStudios.FurySDK.IAsyncRequest<System.String>.get_Result
// PDB: BaseStorageRequest_FuryStudios_FurySDK_IAsyncRequestU3CSystem_StringU3E_get_Result_mC6664551D91AC544127C4B4890FA59F6F8EBF734
// Body: [[1110c120, 1110c184]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10b232f0 Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E

String_t * __cdecl
BaseStorageRequest_FuryStudios_FurySDK_IAsyncRequestU3CSystem_StringU3E_get_Result_mC6664551D91AC544127C4B4890FA59F6F8EBF734
          (BaseStorageRequest_tBC8212ED3DF780412B306CA05C6629CFC0F20AFB *param_1,MethodInfo *param_2
          )

{
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar1;
  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *pEVar2;
  String_t *pSVar3;

  pBVar1 = param_1->___U3CBytesU3Ek__BackingField_8;
  if (DAT_11523e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&String_t_il2cpp_TypeInfo_var);
    DAT_11523e8e = '\x01';
  }
  if (pBVar1 == (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0) {
    return *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
  }
  pEVar2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E((MethodInfo *)0x0);
  if (pEVar2 != (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)0x0) {
    pSVar3 = (String_t *)
             (**(code **)(pEVar2->_padding_ + 0x1cc))
                       (pEVar2,pBVar1,*(undefined4 *)(pEVar2->_padding_ + 0x1d0));
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
