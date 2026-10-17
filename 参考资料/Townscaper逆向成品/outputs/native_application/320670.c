// RVA 0x320670 | Os.Utils.Triplet<GridBit>$$set_Item
// PDB: Triplet_1_set_Item_m3F3ACCED5C18F05E69F5384EC3846A1F6474617A_gshared
// Body: [[10320670, 103206d6]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
Triplet_1_set_Item_m3F3ACCED5C18F05E69F5384EC3846A1F6474617A_gshared
          (Triplet_1_t6B2E998372EB3F04FF58F2503C6068508B5CBB9B *param_1,int param_2,
          Il2CppObject *param_3,MethodInfo *param_4)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  if (param_2 == 0) {
    param_1->___v0_0 = param_3;
    return;
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      param_1->___v2_2 = param_3;
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
                                Triplet_1_set_Item_m3F3ACCED5C18F05E69F5384EC3846A1F6474617A_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
  param_1->___v1_1 = param_3;
  return;
}
