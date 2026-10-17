// RVA 0x2fb3b0 | Placemaker.Graphs.Square$$GetCorner
// PDB: Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
// Body: [[102fb3b0, 102fb415]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 * __cdecl
Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
          (Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_1,schar param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case '\0':
    return param_1->___c0_8;
  case '\x01':
    return param_1->___c1_9;
  case '\x02':
    return param_1->___c2_10;
  case '\x03':
    return param_1->___c3_11;
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
                                Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
