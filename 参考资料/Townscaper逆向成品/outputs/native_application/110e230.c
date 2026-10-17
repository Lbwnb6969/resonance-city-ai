// RVA 0x110e230 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs.PlayerPrefsSaveData$$.ctor
// PDB: PlayerPrefsSaveData__ctor_m5CF9FA988302B444F00626E8EB51C60C773820DF
// Body: [[1110e230, 1110e2e9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared

void __cdecl
PlayerPrefsSaveData__ctor_m5CF9FA988302B444F00626E8EB51C60C773820DF
          (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *param_1,
          MethodInfo *param_2)

{
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar1;

  if (DAT_11523eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
    DAT_11523eab = '\x01';
  }
  pDVar1 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar1,Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var);
  param_1->___savedInt_0 = (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *)pDVar1;
  pDVar1 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar1,Dictionary_2__ctor_m2CE67E373BDB82A6E6FBA950E28F917BB650DB6B_RuntimeMethod_var);
  param_1->___savedFloat_1 = (Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 *)pDVar1;
  pDVar1 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar1,Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
  param_1->___savedString_2 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)pDVar1;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  return;
}
