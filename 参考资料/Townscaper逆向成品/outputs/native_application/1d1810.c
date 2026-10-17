// RVA 0x1d1810 | Placemaker.SaveData.C$$ToString
// PDB: C_ToString_mB49EC09A29685B9111AE0D3B163A3498AF20CB3C
// Body: [[101d1810, 101d189e]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6

String_t * __cdecl
C_ToString_mB49EC09A29685B9111AE0D3B163A3498AF20CB3C
          (C_t5A2D7E2201B5344082D1538779D127E1D95492F9 *param_1,MethodInfo *param_2)

{
  C_t5A2D7E2201B5344082D1538779D127E1D95492F9 *pCVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  String_t *pSVar5;
  int local_c;
  int local_8;

  if (DAT_1151affc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD18F02D1B33B0E9CA44529D3C12C3AA9D47A1734);
    DAT_1151affc = '\x01';
  }
  pCVar1 = param_1;
  param_1 = (C_t5A2D7E2201B5344082D1538779D127E1D95492F9 *)param_1->___x_0;
  pIVar2 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
                            &param_1);
  local_8 = pCVar1->___y_1;
  pIVar3 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
                            &local_8);
  local_c = pCVar1->___count_2;
  pIVar4 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var,
                            &local_c);
  pSVar5 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                     (_stringLiteralD18F02D1B33B0E9CA44529D3C12C3AA9D47A1734,pIVar2,pIVar3,pIVar4,
                      (MethodInfo *)0x0);
  return pSVar5;
}
