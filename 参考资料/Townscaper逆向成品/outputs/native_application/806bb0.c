// RVA 0x806bb0 | Placemaker.Quads.Quad$$GetVert
// PDB: Quad_GetVert_m40AF5846650ACF9CB4BE03087E1E08E41460311A
// Body: [[10806bb0, 10806c20]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 __cdecl
Quad_GetVert_m40AF5846650ACF9CB4BE03087E1E08E41460311A
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *param_1,int param_2,MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case 0:
    return param_1->___v0_1;
  case 1:
    return param_1->___v1_2;
  case 2:
    return param_1->___v2_3;
  case 3:
    return param_1->___v3_4;
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
                                Quad_GetVert_m40AF5846650ACF9CB4BE03087E1E08E41460311A_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
