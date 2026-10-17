// RVA 0x110d530 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs$$SetString
// PDB: PlatformPlayerPrefs_SetString_m145801675519A27604AF43DAABFBDD8DA77E277F
// Body: [[1110d530, 1110d57c]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10d03c10 Dictionary_2_set_Item_m244FCADEE28000F53A085B3A2D58CE1543A5F80E_gshared

void __cdecl
PlatformPlayerPrefs_SetString_m145801675519A27604AF43DAABFBDD8DA77E277F
          (PlatformPlayerPrefs_t9473F0F596FC2C6200FD273286475145A0EF282E *param_1,String_t *param_2,
          String_t *param_3,MethodInfo *param_4)

{
  Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *pDVar1;

  if (DAT_11523ea5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var
              );
    DAT_11523ea5 = '\x01';
  }
  if ((param_1->___data_0 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
     && (pDVar1 = (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)
                  param_1->___data_0->___savedString_2,
        pDVar1 != (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0)) {
    Dictionary_2_set_Item_m244FCADEE28000F53A085B3A2D58CE1543A5F80E_gshared
              (pDVar1,(AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D)param_2,
               (Il2CppObject *)param_3,
               Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
