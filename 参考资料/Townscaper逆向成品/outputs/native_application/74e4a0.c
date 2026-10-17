// RVA 0x74e4a0 | Placemaker.Modules.OutlineUv$$set_y
// PDB: OutlineUv_set_y_m7E3A03138F3F59C61EB2082503E1C5A1757C2522
// Body: [[1074e4a0, 1074e50e]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
OutlineUv_set_y_m7E3A03138F3F59C61EB2082503E1C5A1757C2522
          (OutlineUv_t8D885F66CE40F841ECE9B414D9ADD5D61B6D2790 *param_1,int param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  if (param_2 == -1) {
    param_1->___b_0 = param_1->___b_0 & 0xf7 | 4;
    return;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      param_1->___b_0 = param_1->___b_0 & 0xfb | 8;
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
                                OutlineUv_set_y_m7E3A03138F3F59C61EB2082503E1C5A1757C2522_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
  param_1->___b_0 = param_1->___b_0 & 0xf3;
  return;
}
