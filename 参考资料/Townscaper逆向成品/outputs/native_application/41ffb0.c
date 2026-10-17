// RVA 0x41ffb0 | Placemaker.Ui.KeyboardAndMouseControlRemap$$OnDisable
// PDB: KeyboardAndMouseControlRemap_OnDisable_mC8B53AD7A188DEEFC8EBEBB25F302A44C9D1BE25
// Body: [[1041ffb0, 1042004a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10db5b60 InputMapper_RemoveAllEventListeners_mEDBEA925C9CDB905A5650BB576E5ED9604F47A21
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
// 10db7340 InputMapper_remove_ConflictFoundEvent_mF583238CC9D34484C291359BD1998AE358FBBDAF

void __cdecl
KeyboardAndMouseControlRemap_OnDisable_mC8B53AD7A188DEEFC8EBEBB25F302A44C9D1BE25
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          MethodInfo *param_2)

{
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  if (DAT_1151cb10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardAndMouseControlRemap_OnConflictFound_m5DF35E3CDC61847B55F698577102115E6FF68530_RuntimeMethod_var
              );
    DAT_1151cb10 = '\x01';
  }
  if (param_1->___inputMapper_11 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
    InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
              (param_1->___inputMapper_11,(MethodInfo *)0x0);
    if (param_1->___inputMapper_11 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0)
    {
      InputMapper_RemoveAllEventListeners_mEDBEA925C9CDB905A5650BB576E5ED9604F47A21
                (param_1->___inputMapper_11,(MethodInfo *)0x0);
      pIVar1 = param_1->___inputMapper_11;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,(Il2CppObject *)param_1,
                 (int)
                 KeyboardAndMouseControlRemap_OnConflictFound_m5DF35E3CDC61847B55F698577102115E6FF68530_RuntimeMethod_var
                 ,Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var);
      if (pIVar1 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
        InputMapper_remove_ConflictFoundEvent_mF583238CC9D34484C291359BD1998AE358FBBDAF
                  (pIVar1,(Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C *)pOVar2,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
