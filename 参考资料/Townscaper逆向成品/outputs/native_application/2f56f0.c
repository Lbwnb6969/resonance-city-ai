// RVA 0x2f56f0 | Placemaker.SideProfile$$Set
// PDB: SideProfile_Set_m16E49F9B1C9BA7F8AE4C06063D56C2364DE27DB6
// Body: [[102f56f0, 102f57a3]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
SideProfile_Set_m16E49F9B1C9BA7F8AE4C06063D56C2364DE27DB6
          (SideProfile_tA37484A02D25CAA87A656524FDA31CC18A955F9B *param_1,int param_2,ushort param_3
          ,ushort param_4,MethodInfo *param_5)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;

  switch(param_2) {
  case 0:
    param_1->___v00_0 = param_3;
    param_1->___v01_1 = param_4;
    return;
  case 1:
    param_1->___v10_2 = param_3;
    param_1->___v11_3 = param_4;
    return;
  case 2:
    param_1->___v20_4 = param_3;
    param_1->___v21_5 = param_4;
    return;
  case 3:
    param_1->___v30_6 = param_3;
    param_1->___v31_7 = param_4;
    return;
  case 4:
    param_1->___v4_8 = param_3;
    return;
  case 5:
    param_1->___v5_9 = param_3;
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
                                SideProfile_Set_m16E49F9B1C9BA7F8AE4C06063D56C2364DE27DB6_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
