// RVA 0x22f900 | Placemaker.ByteQube$$set_Item
// PDB: ByteQube_set_Item_m099317BD655B1FEF5507398AEE3C9B8A19AC81C1
// Body: [[1022f900, 1022f99f]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
ByteQube_set_Item_m099317BD655B1FEF5507398AEE3C9B8A19AC81C1
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *param_1,int param_2,uchar param_3,
          MethodInfo *param_4)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case 0:
    param_1->___v0_0 = param_3;
    return;
  case 1:
    param_1->___v1_1 = param_3;
    return;
  case 2:
    param_1->___v2_2 = param_3;
    return;
  case 3:
    param_1->___v3_3 = param_3;
    return;
  case 4:
    param_1->___v4_4 = param_3;
    return;
  case 5:
    param_1->___v5_5 = param_3;
    return;
  case 6:
    param_1->___v6_6 = param_3;
    return;
  case 7:
    param_1->___v7_7 = param_3;
    return;
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
                                ByteQube_set_Item_m099317BD655B1FEF5507398AEE3C9B8A19AC81C1_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
