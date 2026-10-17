// RVA 0x110cba0 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$DeleteAll
// PDB: PlatformPlayerPrefs_DeleteAll_m6441FB005565FAD70E29AF93CE17D04A7B5D8D32
// Body: [[1110cba0, 1110ccc0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 1110aee0 AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE

Il2CppObject * __cdecl
PlatformPlayerPrefs_DeleteAll_m6441FB005565FAD70E29AF93CE17D04A7B5D8D32
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,
          MethodInfo *param_2)

{
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar1;
  String_t *pSVar2;
  String_t *pSVar3;
  PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *pPVar4;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar5;

  if (DAT_11523e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_m59E7E5E028EDCF7CE6B813D2DA687F801B7033BD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_m6D070B7479E570F2F4265092DF429B94EC79B7A4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var
              );
    DAT_11523e9d = '\x01';
  }
  if ((param_1->___data_0 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
     && (pDVar1 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                  param_1->___data_0->___savedInt_0,
        pDVar1 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
    Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
              (pDVar1,Dictionary_2_Clear_m6D070B7479E570F2F4265092DF429B94EC79B7A4_RuntimeMethod_var
              );
    if ((param_1->___data_0 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
       && (pDVar1 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                    param_1->___data_0->___savedFloat_1,
          pDVar1 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
      Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
                (pDVar1,
                 Dictionary_2_Clear_m59E7E5E028EDCF7CE6B813D2DA687F801B7033BD_RuntimeMethod_var);
      if ((param_1->___data_0 !=
           (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0) &&
         (pDVar1 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                   param_1->___data_0->___savedString_2,
         pDVar1 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
        Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
                  (pDVar1,
                   Dictionary_2_Clear_mB853C65F23D3966B3D3026F3541601042CF7DF8A_RuntimeMethod_var);
        if (DAT_11523e9c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&
                             PlayerPrefsSaveRequest_tBE2D8FDE2CF83C1F020FE6E1A543E5146118B9BB_il2cpp_TypeInfo_var
                    );
          DAT_11523e9c = '\x01';
        }
        pSVar2 = (param_1->___container_1).___id_0;
        pSVar3 = param_1->___filename_2;
        pPVar4 = param_1->___data_0;
        pUVar5 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                 il2cpp_codegen_object_new
                           (
                           PlayerPrefsSaveRequest_tBE2D8FDE2CF83C1F020FE6E1A543E5146118B9BB_il2cpp_TypeInfo_var
                           );
        U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                  (pUVar5,(MethodInfo *)0x0);
        pUVar5[1].___U3CU3E4__this_2 =
             (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)pSVar3;
        pUVar5[1].___U3CU3E2__current_1 = (Il2CppObject *)pSVar2;
        pUVar5[2]._padding_ = (int)pPVar4;
        pUVar5->___U3CU3E1__state_0 = 0;
        if (param_1->___scheduler_3 !=
            (AsyncRequestScheduler_t37E3CF1505F2FE7B383133466504E503DDDE9F80 *)0x0) {
          AsyncRequestScheduler_Schedule_m84EA57DDA8C604B6995DB505BA40C9AD5C111CFE
                    (param_1->___scheduler_3,(Il2CppObject *)pUVar5,(MethodInfo *)0x0);
          return (Il2CppObject *)pUVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
