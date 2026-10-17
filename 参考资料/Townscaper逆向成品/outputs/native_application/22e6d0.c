// RVA 0x22e6d0 | Os.Utils.ByteFloat3$$get_Item
// PDB: ByteFloat3_get_Item_mB4407DC609D6BDC76F7FD2E24CE951E10381D09F
// Body: [[1022e6d0, 1022e72d]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

uchar __cdecl
ByteFloat3_get_Item_mB4407DC609D6BDC76F7FD2E24CE951E10381D09F
          (ByteFloat3_t72AB3D3F576296B4B0BBE4BA2DB8A720AEB82C73 *param_1,int param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  if (param_2 == 0) {
    return param_1->___x_0;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      return param_1->___z_2;
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
                                ByteFloat3_get_Item_mB4407DC609D6BDC76F7FD2E24CE951E10381D09F_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
  return param_1->___y_1;
}
