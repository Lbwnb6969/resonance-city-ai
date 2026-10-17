// RVA 0x22e210 | Os.Utils.ByteFloat2$$Equals
// PDB: ByteFloat2_Equals_m7BE824E02BC5A2CCEFE19DD963D4366F186D3C15
// Body: [[1022e210, 1022e28a]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata

bool __cdecl
ByteFloat2_Equals_m7BE824E02BC5A2CCEFE19DD963D4366F186D3C15
          (ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 *param_1,Il2CppObject *param_2,
          MethodInfo *param_3)

{
  ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 BVar1;
  Il2CppObject *pIVar2;
  undefined2 *puVar3;

  if (DAT_1151b576 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581_il2cpp_TypeInfo_var);
    DAT_1151b576 = '\x01';
  }
  if (param_2 != (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if ((param_2->field0_0x0).klass ==
        ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581_il2cpp_TypeInfo_var) {
      pIVar2 = param_2;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      BVar1 = *param_1;
      if (((param_2->field0_0x0).klass)->element_class !=
          ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581_il2cpp_TypeInfo_var->element_class) {
                    /* WARNING: Subroutine does not return */
        RaiseInvalidCastException
                  (param_2,ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581_il2cpp_TypeInfo_var)
        ;
      }
      puVar3 = il2cpp_object_unbox(param_2);
      if (BVar1.___x_0 != (uchar)*puVar3) {
        return false;
      }
      return BVar1.___y_1 == (uchar)((ushort)*puVar3 >> 8);
    }
  }
  return false;
}
