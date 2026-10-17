// RVA 0x110c880 | FuryStudios.FurySDK.Internal.DotNetSaveStorageRequest$$.ctor
// PDB: DotNetSaveStorageRequest__ctor_mD414E9E8D0B868FC7A4D08D8EBBE5E251B4A8874
// Body: [[1110c880, 1110c8ff]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10b232f0 Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E
// 1110c9e0 DotNetStorageRequest__ctor_mA7316464597C674B45D876ACE3A152DFF70654A6

void __cdecl
DotNetSaveStorageRequest__ctor_mD414E9E8D0B868FC7A4D08D8EBBE5E251B4A8874
          (DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017 *param_1,
          String_t *param_2,String_t *param_3,MethodInfo *param_4)

{
  Il2CppArray *pIVar1;
  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *pEVar2;
  undefined4 uVar3;

  DotNetStorageRequest__ctor_mA7316464597C674B45D876ACE3A152DFF70654A6
            ((DotNetStorageRequest_t5568E0D5FA3C2037D59677C45C9BDDCB8DF2E550 *)param_1,param_2,2,
             (MethodInfo *)0x0);
  if (DAT_11523e8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
    DAT_11523e8f = '\x01';
  }
  if (param_3 == (String_t *)0x0) {
    pIVar1 = il2cpp_array_new_specific
                       (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var,0);
    *(Il2CppArray **)&param_1->field_0x28 = pIVar1;
    return;
  }
  pEVar2 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E((MethodInfo *)0x0);
  if (pEVar2 != (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)0x0) {
    uVar3 = (**(code **)(pEVar2->_padding_ + 0x144))
                      (pEVar2,param_3,*(undefined4 *)(pEVar2->_padding_ + 0x148));
    *(undefined4 *)&param_1->field_0x28 = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
