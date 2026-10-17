// RVA 0x110d480 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$SetFloat
// PDB: PlatformPlayerPrefs_SetFloat_m861B7F9633430F3807A4EDFFD98D05D5F5ACE7A6
// Body: [[1110d480, 1110d4d4]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10fcda00 Dictionary_2_set_Item_mA7219260BC4E5D73DEC5A13D5801F4ACAF9E42CB_gshared

void __cdecl
PlatformPlayerPrefs_SetFloat_m861B7F9633430F3807A4EDFFD98D05D5F5ACE7A6
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,String_t *param_2,
          float param_3,MethodInfo *param_4)

{
  Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD *pDVar1;

  if (DAT_11523ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_set_Item_m92EA16A2FC72AA058D15DBC6A1F0638CDB9C1D2A_RuntimeMethod_var
              );
    DAT_11523ea4 = '\x01';
  }
  if ((param_1->___data_0 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
     && (pDVar1 = (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD *)
                  param_1->___data_0->___savedFloat_1,
        pDVar1 != (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD *)0x0)) {
    Dictionary_2_set_Item_mA7219260BC4E5D73DEC5A13D5801F4ACAF9E42CB_gshared
              (pDVar1,(Il2CppObject *)param_2,param_3,
               Dictionary_2_set_Item_m92EA16A2FC72AA058D15DBC6A1F0638CDB9C1D2A_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
