// RVA 0xa04590 | Os.Utils.SbyteFloat3$$ToString
// PDB: SbyteFloat3_ToString_m091BA8595EBA40644258339D159782FCBB65DF0A
// Body: [[10a04590, 10a0461e]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6

String_t * __cdecl
SbyteFloat3_ToString_m091BA8595EBA40644258339D159782FCBB65DF0A
          (SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *param_1,MethodInfo *param_2)

{
  SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *pSVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  String_t *pSVar5;
  undefined4 uStack_8;

  if (DAT_115201c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral1E7F2E3E8D0CDFC05BE7BB2AC860F3FBD4DEFB9F);
    DAT_115201c1 = '\x01';
  }
  pSVar1 = param_1;
  param_1 = (SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *)
            CONCAT13(param_1->___x_2,param_1._0_3_);
  pIVar2 = il2cpp_value_box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var,
                            (void *)((int)&param_1 + 3));
  uStack_8 = CONCAT13(pSVar1->___y_3,(undefined3)uStack_8);
  pIVar3 = il2cpp_value_box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var,
                            (void *)((int)&uStack_8 + 3));
  uStack_8._0_3_ = CONCAT12(pSVar1->___z_4,(undefined2)uStack_8);
  pIVar4 = il2cpp_value_box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var,
                            (void *)((int)&uStack_8 + 2));
  pSVar5 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                     (_stringLiteral1E7F2E3E8D0CDFC05BE7BB2AC860F3FBD4DEFB9F,pIVar2,pIVar3,pIVar4,
                      (MethodInfo *)0x0);
  return pSVar5;
}
