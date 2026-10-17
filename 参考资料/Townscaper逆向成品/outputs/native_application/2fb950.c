// RVA 0x2fb950 | Placemaker.Graphs.Square$$SetCorner
// PDB: Square_SetCorner_m6A9E81E0848C8E5A2D260CEB118E1D5DFD3B8879
// Body: [[102fb950, 102fb9c1]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
Square_SetCorner_m6A9E81E0848C8E5A2D260CEB118E1D5DFD3B8879
          (Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_1,schar param_2,
          Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *param_3,MethodInfo *param_4)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case '\0':
    param_1->___c0_8 = param_3;
    return;
  case '\x01':
    param_1->___c1_9 = param_3;
    return;
  case '\x02':
    param_1->___c2_10 = param_3;
    return;
  case '\x03':
    param_1->___c3_11 = param_3;
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
                                Square_SetCorner_m6A9E81E0848C8E5A2D260CEB118E1D5DFD3B8879_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
