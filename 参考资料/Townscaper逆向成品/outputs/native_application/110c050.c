// RVA 0x110c050 | FuryStudios.FurySDK.Internal.BaseStorageRequest$$ConvertBytesToText
// PDB: BaseStorageRequest_ConvertBytesToText_m599EE3069E80A9CA45E522CC3563690018145128
// Body: [[1110c050, 1110c0af]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10b232f0 Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E

String_t * __cdecl
BaseStorageRequest_ConvertBytesToText_m599EE3069E80A9CA45E522CC3563690018145128
          (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *param_1,MethodInfo *param_2)

{
  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *pEVar1;
  String_t *pSVar2;

  if (DAT_11523e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata((uint *)&String_t_il2cpp_TypeInfo_var);
    DAT_11523e8e = '\x01';
  }
  if (param_1 == (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0) {
    return *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
  }
  pEVar1 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E((MethodInfo *)0x0);
  if (pEVar1 != (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)0x0) {
    pSVar2 = (String_t *)
             (**(code **)(pEVar1->_padding_ + 0x1cc))
                       (pEVar1,param_1,*(undefined4 *)(pEVar1->_padding_ + 0x1d0));
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
