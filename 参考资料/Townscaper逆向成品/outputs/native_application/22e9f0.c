// RVA 0x22e9f0 | Os.Utils.ByteFloat$$Equals
// PDB: ByteFloat_Equals_m8FEB5E9E9017B8AACB7536D8CF41826633E54F4F
// Body: [[1022e9f0, 1022ea5c]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

bool __cdecl
ByteFloat_Equals_m8FEB5E9E9017B8AACB7536D8CF41826633E54F4F
          (ByteFloat_t266F2E72ACABED950A72955B2435CF9AD032B451 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  uchar uVar1;
  Il2CppObject *pIVar2;
  uchar *puVar3;

  if (DAT_1151b575 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteFloat_t266F2E72ACABED950A72955B2435CF9AD032B451_il2cpp_TypeInfo_var);
    DAT_1151b575 = '\x01';
  }
  if (param_2 != (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if ((param_2->field0_0x0).klass ==
        ByteFloat_t266F2E72ACABED950A72955B2435CF9AD032B451_il2cpp_TypeInfo_var) {
      pIVar2 = param_2;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      uVar1 = param_1->___value_0;
      if (((param_2->field0_0x0).klass)->element_class ==
          ByteFloat_t266F2E72ACABED950A72955B2435CF9AD032B451_il2cpp_TypeInfo_var->element_class) {
        puVar3 = il2cpp_object_unbox(param_2);
        return uVar1 == *puVar3;
      }
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException
                (param_2,ByteFloat_t266F2E72ACABED950A72955B2435CF9AD032B451_il2cpp_TypeInfo_var);
    }
  }
  return false;
}
