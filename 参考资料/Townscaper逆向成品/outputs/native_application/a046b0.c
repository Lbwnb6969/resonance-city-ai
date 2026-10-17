// RVA 0xa046b0 | Os.Utils.SbyteFloat3$$get_Item
// PDB: SbyteFloat3_get_Item_m67B3E6C940C3BF3F464535A4086E42C6F5E5999C
// Body: [[10a046b0, 10a0470d]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

schar __cdecl
SbyteFloat3_get_Item_m67B3E6C940C3BF3F464535A4086E42C6F5E5999C
          (SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *param_1,int param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  if (param_2 == 0) {
    return param_1->___x_2;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      return param_1->___z_4;
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
                                SbyteFloat3_get_Item_m67B3E6C940C3BF3F464535A4086E42C6F5E5999C_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
  return param_1->___y_3;
}
