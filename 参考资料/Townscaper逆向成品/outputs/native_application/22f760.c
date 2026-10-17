// RVA 0x22f760 | Placemaker.ByteQube$$get_Item
// PDB: ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
// Body: [[1022f760, 1022f7e7]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

uchar __cdecl
ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *param_1,int param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case 0:
    return param_1->___v0_0;
  case 1:
    return param_1->___v1_1;
  case 2:
    return param_1->___v2_2;
  case 3:
    return param_1->___v3_3;
  case 4:
    return param_1->___v4_4;
  case 5:
    return param_1->___v5_5;
  case 6:
    return param_1->___v6_6;
  case 7:
    return param_1->___v7_7;
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
                                ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
