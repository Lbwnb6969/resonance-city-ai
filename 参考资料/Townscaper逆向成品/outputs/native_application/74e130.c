// RVA 0x74e130 | Placemaker.Modules.OrientedModule$$ToString
// PDB: OrientedModule_ToString_m8CB9D50B79AABBF48B52D357F827971AC38B5C07
// Body: [[1074e130, 1074e1d7]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6

String_t * __cdecl
OrientedModule_ToString_m8CB9D50B79AABBF48B52D357F827971AC38B5C07
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *param_1,MethodInfo *param_2)

{
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *pOVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  String_t *pSVar5;
  uint local_c;
  uint local_8;

  if (DAT_1151ebe0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral35B650A04AD77D86AEFFC4A541DCC4B1E9603E23);
    DAT_1151ebe0 = '\x01';
  }
  pOVar1 = param_1;
  local_8 = (uint)param_1->___moduleIndex_0;
  pIVar2 = il2cpp_value_box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var,
                            &local_8);
  local_c = pOVar1->___flags_1 & 7;
  pIVar3 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
                            &local_c);
  param_1 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
            CONCAT13(pOVar1->___flags_1,param_1._0_3_);
  pIVar4 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var,
                            (void *)((int)&param_1 + 3));
  pSVar5 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                     (_stringLiteral35B650A04AD77D86AEFFC4A541DCC4B1E9603E23,pIVar2,pIVar3,pIVar4,
                      (MethodInfo *)0x0);
  return pSVar5;
}
