// RVA 0x110c190 | FuryStudios.FurySDK.Internal.BaseStorageRequest$$SetText
// PDB: BaseStorageRequest_SetText_mF21979EE536D00535416084D6340A639B064200E
// Body: [[1110c190, 1110c203]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10b232f0 Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E

void __cdecl
BaseStorageRequest_SetText_mF21979EE536D00535416084D6340A639B064200E
          (BaseStorageRequest_tBC8212ED3DF780412B306CA05C6629CFC0F20AFB *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar1;
  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *pEVar2;

  if (DAT_11523e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
    DAT_11523e8f = '\x01';
  }
  if (param_2 == (String_t *)0x0) {
    pBVar1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
             il2cpp_array_new_specific
                       (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var,0);
    param_1->___U3CBytesU3Ek__BackingField_8 = pBVar1;
    return;
  }
  pEVar2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E((MethodInfo *)0x0);
  if (pEVar2 != (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)0x0) {
    pBVar1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
             (**(code **)(pEVar2->_padding_ + 0x144))
                       (pEVar2,param_2,*(undefined4 *)(pEVar2->_padding_ + 0x148));
    param_1->___U3CBytesU3Ek__BackingField_8 = pBVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
