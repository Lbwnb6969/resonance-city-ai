// RVA 0x1e5320 | FuryStudios.FurySDK.AsyncRequestCallback$$BeginInvoke
// PDB: _GetParam_BeginInvoke_mA5DCB41B6F2567A51DEF96B86566C2B866425228
// Body: [[101e5320, 101e534c]]
// Direct callees:
// 1018e6d0 il2cpp_codegen_delegate_begin_invoke

Il2CppObject * __cdecl
_GetParam_BeginInvoke_mA5DCB41B6F2567A51DEF96B86566C2B866425228
          (_GetParam_t8F50DE65CC5B3354A7E65DE710F71F0F26DC5C1C *param_1,String_t *param_2,
          AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *param_3,Il2CppObject *param_4,
          MethodInfo *param_5)

{
  Il2CppAsyncResult *pIVar1;
  ulonglong local_c;

  local_c = ZEXT48(param_2);
  pIVar1 = il2cpp_codegen_delegate_begin_invoke
                     ((Il2CppDelegate *)param_1,(void **)&local_c,(Il2CppDelegate *)param_3,param_4)
  ;
  return &pIVar1->base;
}
