// RVA 0x3205e0 | Os.Utils.Triplet<int3>$$get_Item
// PDB: Triplet_1_get_Item_m8B2820EC2F8C8171FCCF32E771B332AD18BE5A89_gshared
// Body: [[103205e0, 1032066a]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 * __cdecl
Triplet_1_get_Item_m8B2820EC2F8C8171FCCF32E771B332AD18BE5A89_gshared
          (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *__return_storage_ptr__,
          Triplet_1_tC7913D26F008FB16B4239D118B85FC5E3A40A4B8 *param_1,int param_2,
          MethodInfo *param_3)

{
  int iVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Exception_t *pEVar4;
  MethodInfo *pMVar5;

  if (param_2 == 0) {
    iVar2 = (param_1->___v0_0).___y_1;
    iVar1 = (param_1->___v0_0).___z_2;
    __return_storage_ptr__->___x_0 = (param_1->___v0_0).___x_0;
    __return_storage_ptr__->___y_1 = iVar2;
    __return_storage_ptr__->___z_2 = iVar1;
    return __return_storage_ptr__;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      iVar2 = (param_1->___v2_2).___y_1;
      iVar1 = (param_1->___v2_2).___z_2;
      __return_storage_ptr__->___x_0 = (param_1->___v2_2).___x_0;
      __return_storage_ptr__->___y_1 = iVar2;
      __return_storage_ptr__->___z_2 = iVar1;
      return __return_storage_ptr__;
    }
    pIVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((uint *)&
                                IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var
                       );
    pEVar4 = (Exception_t *)il2cpp_codegen_object_new(pIVar3);
    IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523
              ((IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)pEVar4,
               (MethodInfo *)0x0);
    pMVar5 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((uint *)&
                                Triplet_1_get_Item_m8B2820EC2F8C8171FCCF32E771B332AD18BE5A89_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar4,pMVar5);
  }
  iVar2 = (param_1->___v1_1).___y_1;
  iVar1 = (param_1->___v1_1).___z_2;
  __return_storage_ptr__->___x_0 = (param_1->___v1_1).___x_0;
  __return_storage_ptr__->___y_1 = iVar2;
  __return_storage_ptr__->___z_2 = iVar1;
  return __return_storage_ptr__;
}
