// RVA 0x74db10 | Placemaker.Orientation$$GetSideTransform1
// PDB: Orientation_GetSideTransform1_mC7D02E3062D25B31D4CC9249F31FB4F5A303BC30
// Body: [[1074db10, 1074db7e]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

uchar __cdecl
Orientation_GetSideTransform1_mC7D02E3062D25B31D4CC9249F31FB4F5A303BC30
          (Orientation_t21B8196AB7A867C69FDDCFE2181A76B549A01274 *param_1,int param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case 0:
    return (param_1->___sideTransform_3).___v4_4;
  case 1:
    return (param_1->___sideTransform_3).___v5_5;
  case 2:
    return (param_1->___sideTransform_3).___v6_6;
  case 3:
    return (param_1->___sideTransform_3).___v7_7;
  case 4:
    return '\x04';
  case 5:
    return '\x05';
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
                                Orientation_GetSideTransform1_mC7D02E3062D25B31D4CC9249F31FB4F5A303BC30_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
