// RVA 0xa049a0 | Os.Utils.SbyteFloat3$$set_Item
// PDB: SbyteFloat3_set_Item_m49693CF26E79B4C29DCDC117E28108D108C63356
// Body: [[10a049a0, 10a04a06]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
SbyteFloat3_set_Item_m49693CF26E79B4C29DCDC117E28108D108C63356
          (SbyteFloat3_t3C51AC7B3F6B94CFCF5CAA7971D05408AEC6B894 *param_1,int param_2,schar param_3,
          MethodInfo *param_4)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  if (param_2 == 0) {
    param_1->___x_2 = param_3;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      param_1->___z_4 = param_3;
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
                                SbyteFloat3_set_Item_m49693CF26E79B4C29DCDC117E28108D108C63356_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
  param_1->___y_3 = param_3;
  return;
}
