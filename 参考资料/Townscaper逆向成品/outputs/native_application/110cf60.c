// RVA 0x110cf60 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$HasKey
// PDB: PlatformPlayerPrefs_HasKey_m46837F5852AE8988EFC42F81D46D95371BCDD8BA
// Body: [[1110cf60, 1110d010]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10cf7660 Dictionary_2_ContainsKey_m65847F287F6625424D5D1A6807BCC703F7D26819_gshared

bool __cdecl
PlatformPlayerPrefs_HasKey_m46837F5852AE8988EFC42F81D46D95371BCDD8BA
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *pDVar1;
  bool bVar2;

  if (DAT_11523e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_ContainsKey_m1005090BED3DCBC26613EC3A32F04FB3EF0CB73E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_ContainsKey_m151DB8CAF2F65A4621317E77AC025849F03D8132_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var
              );
    DAT_11523e9f = '\x01';
  }
  if ((param_1->___data_0 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
     && (pDVar1 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                  param_1->___data_0->___savedFloat_1,
        pDVar1 != (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0)) {
    bVar2 = Dictionary_2_ContainsKey_m65847F287F6625424D5D1A6807BCC703F7D26819_gshared
                      (pDVar1,(ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259)param_2,
                       Dictionary_2_ContainsKey_m1005090BED3DCBC26613EC3A32F04FB3EF0CB73E_RuntimeMethod_var
                      );
    if (!bVar2) {
      if ((param_1->___data_0 ==
           (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0) ||
         (pDVar1 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                   param_1->___data_0->___savedInt_0,
         pDVar1 == (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0))
      goto LAB_1110d00c;
      bVar2 = Dictionary_2_ContainsKey_m65847F287F6625424D5D1A6807BCC703F7D26819_gshared
                        (pDVar1,(ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259)param_2,
                         Dictionary_2_ContainsKey_m151DB8CAF2F65A4621317E77AC025849F03D8132_RuntimeMethod_var
                        );
      if (!bVar2) {
        if ((param_1->___data_0 ==
             (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0) ||
           (pDVar1 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                     param_1->___data_0->___savedString_2,
           pDVar1 == (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0))
        goto LAB_1110d00c;
        bVar2 = Dictionary_2_ContainsKey_m65847F287F6625424D5D1A6807BCC703F7D26819_gshared
                          (pDVar1,(ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259)param_2,
                           Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var
                          );
        if (!bVar2) {
          return false;
        }
      }
    }
    return true;
  }
LAB_1110d00c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
