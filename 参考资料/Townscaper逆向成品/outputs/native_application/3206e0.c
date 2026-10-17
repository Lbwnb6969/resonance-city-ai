// RVA 0x3206e0 | Os.Utils.Triplet<int3>$$set_Item
// PDB: Triplet_1_set_Item_mB48F29F761FCB86A65B38AC7150D6A52D1C61B45_gshared
// Body: [[103206e0, 10320764]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
Triplet_1_set_Item_mB48F29F761FCB86A65B38AC7150D6A52D1C61B45_gshared
          (Triplet_1_tC7913D26F008FB16B4239D118B85FC5E3A40A4B8 *param_1,int param_2,
          int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 param_3,MethodInfo *param_4)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  if (param_2 == 0) {
    (param_1->___v0_0).___x_0 = param_3.___x_0;
    (param_1->___v0_0).___y_1 = param_3.___y_1;
    (param_1->___v0_0).___z_2 = param_3.___z_2;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      (param_1->___v2_2).___x_0 = param_3.___x_0;
      (param_1->___v2_2).___y_1 = param_3.___y_1;
      (param_1->___v2_2).___z_2 = param_3.___z_2;
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
                                Triplet_1_set_Item_mB48F29F761FCB86A65B38AC7150D6A52D1C61B45_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
  (param_1->___v1_1).___x_0 = param_3.___x_0;
  (param_1->___v1_1).___y_1 = param_3.___y_1;
  (param_1->___v1_1).___z_2 = param_3.___z_2;
  return;
}
