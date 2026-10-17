// RVA 0x22e920 | Os.Utils.ByteFloat3$$set_Item
// PDB: ByteFloat3_set_Item_m512E957955491BCF93C4ABDAB6D3BCCB9CBB1069
// Body: [[1022e920, 1022e986]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
ByteFloat3_set_Item_m512E957955491BCF93C4ABDAB6D3BCCB9CBB1069
          (ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 *param_1,int param_2,uchar param_3,
          MethodInfo *param_4)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  if (param_2 == 0) {
    param_1->___x_0 = param_3;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      param_1->___z_2 = param_3;
      return;
    }
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
                                ByteFloat3_set_Item_m512E957955491BCF93C4ABDAB6D3BCCB9CBB1069_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
  param_1->___y_1 = param_3;
  return;
}
