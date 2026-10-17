// RVA 0x2fb430 | Placemaker.Graphs.Square$$GetRelation
// PDB: Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
// Body: [[102fb430, 102fb4a1]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC __cdecl
Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
          (Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_1,schar param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case '\0':
    return param_1->___q0_4;
  case '\x01':
    return param_1->___q1_5;
  case '\x02':
    return param_1->___q2_6;
  case '\x03':
    return param_1->___q3_7;
  default:
    pIVar1 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((uint *)&
                                IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var
                       );
    pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
    IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523
              ((IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)pEVar2,
               (MethodInfo *)0x0);
    pMVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((uint *)&
                                Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
