// RVA 0x2f5590 | Placemaker.SideProfile$$Get1
// PDB: SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
// Body: [[102f5590, 102f560c]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

ushort __cdecl
SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699
          (SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *param_1,int param_2,
          MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case 0:
    return param_1->___v01_1;
  case 1:
    return param_1->___v11_3;
  case 2:
    return param_1->___v21_5;
  case 3:
    return param_1->___v31_7;
  case 4:
    return param_1->___v4_8;
  case 5:
    return param_1->___v5_9;
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
                                SideProfile_Get1_m8CCF60D0E67652D37D6A0D1397E4F652D7843699_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
