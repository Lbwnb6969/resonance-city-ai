// RVA 0x110d3f0 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$Save
// PDB: PlatformPlayerPrefs_Save_m881FBFC125A8B1342BE5484FEE134310DA3DE0CE
// Body: [[1110d3f0, 1110d470]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE

Il2CppObject * __cdecl
PlatformPlayerPrefs_Save_m881FBFC125A8B1342BE5484FEE134310DA3DE0CE
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,
          MethodInfo *param_2)

{
  String_t *pSVar1;
  String_t *pSVar2;
  PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *pPVar3;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar4;

  if (DAT_11523e9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlayerPrefsSaveRequest_tBE2D8FDE2CF83C1F020FE6E1A543E5146118B9BB_il2cpp_TypeInfo_var
              );
    DAT_11523e9c = '\x01';
  }
  pSVar1 = (param_1->___container_1).___id_0;
  pSVar2 = param_1->___filename_2;
  pPVar3 = param_1->___data_0;
  pUVar4 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     PlayerPrefsSaveRequest_tBE2D8FDE2CF83C1F020FE6E1A543E5146118B9BB_il2cpp_TypeInfo_var
                     );
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar4,(MethodInfo *)0x0);
  pUVar4[1].___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)pSVar2;
  pUVar4[1].___U3CU3E2__current_1 = (Il2CppObject *)pSVar1;
  pUVar4[2]._padding_ = (int)pPVar3;
  pUVar4->___U3CU3E1__state_0 = 0;
  if (param_1->___scheduler_3 !=
      (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
    AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
              (param_1->___scheduler_3,(Il2CppObject *)pUVar4,(MethodInfo *)0x0);
    return (Il2CppObject *)pUVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
