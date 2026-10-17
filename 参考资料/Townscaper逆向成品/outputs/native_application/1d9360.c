// RVA 0x1d9360 | Placemaker.Graphs.Qube.Relation6$$get_Item
// PDB: Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
// Body: [[101d9360, 101d93e7]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 __cdecl
Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C
          (Relation6_tF67497A4617E55BD7FEC9647FAA90D4B795D8DF8 *param_1,int param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case 0:
    return param_1->___r0_0;
  case 1:
    return param_1->___r1_1;
  case 2:
    return param_1->___r2_2;
  case 3:
    return param_1->___r3_3;
  case 4:
    return param_1->___r4_4;
  case 5:
    return param_1->___r5_5;
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
                                Relation6_get_Item_m1FA88CDE9E814F8CD51BB221CE248B293E667B6C_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
