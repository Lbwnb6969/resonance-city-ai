// RVA 0x806af0 | Placemaker.Quads.Quad$$GetPlanePos
// PDB: Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825
// Body: [[10806af0, 10806b9b]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *param_1,int param_2,MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case 0:
    return param_1->___p0_5;
  case 1:
    return param_1->___p1_6;
  case 2:
    return param_1->___p2_7;
  case 3:
    return param_1->___p3_8;
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
                                Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
