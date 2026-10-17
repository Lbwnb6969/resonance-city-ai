// RVA 0x2fd6f0 | Placemaker.StorageUtils$$GetSaveFilePath
// PDB: StorageUtils_GetSaveFilePath_m0DB39B9F24B0160CBE4CEE8526905B58A9A70153
// Body: [[102fd6f0, 102fd787]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6

String_t * __cdecl
StorageUtils_GetSaveFilePath_m0DB39B9F24B0160CBE4CEE8526905B58A9A70153
          (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  Il2CppObject *pIVar1;
  String_t *pSVar2;
  uint local_8;

  if (DAT_1151c1f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2);
    DAT_1151c1f5 = '\x01';
  }
  if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
  }
  local_8 = (uint)*(ushort *)
                   ((int)Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->
                         static_fields + 6);
  pIVar1 = il2cpp_value_box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var,
                            &local_8);
  pSVar2 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                     (_stringLiteral2703934E990F4D74F9E97D5985CDF284A870C0E0,
                      (Il2CppObject *)_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2,pIVar1,
                      (Il2CppObject *)param_2,(MethodInfo *)0x0);
  return pSVar2;
}
