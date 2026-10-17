// RVA 0x4eee80 | Placemaker.Ui.KeyboardControlsMenu$$OnDisable
// PDB: KeyboardControlsMenu_OnDisable_m204F02ED4966BC9FBA23A9604C398D6FD39DCCA1
// Body: [[104eee80, 104eef7d]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10db5b60 InputMapper_RemoveAllEventListeners_mEDBEA925C9CDB905A5650BB576E5ED9604F47A21
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
// 10db7340 InputMapper_remove_ConflictFoundEvent_mF583238CC9D34484C291359BD1998AE358FBBDAF

void __cdecl
KeyboardControlsMenu_OnDisable_m204F02ED4966BC9FBA23A9604C398D6FD39DCCA1
          (KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *param_1,
          MethodInfo *param_2)

{
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  if (DAT_1151d213 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardControlsMenu_OnConflictFound_m15A073B8461A94A5A86BAA32616856778A7C448F_RuntimeMethod_var
              );
    DAT_1151d213 = '\x01';
  }
  if (param_1->___inputMapperJoystickKeyboard_15 !=
      (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
    InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
              (param_1->___inputMapperJoystickKeyboard_15,(MethodInfo *)0x0);
    if (param_1->___inputMapperMouse_16 !=
        (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
      InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                (param_1->___inputMapperMouse_16,(MethodInfo *)0x0);
      if (param_1->___inputMapperJoystickKeyboard_15 !=
          (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
        InputMapper_RemoveAllEventListeners_mEDBEA925C9CDB905A5650BB576E5ED9604F47A21
                  (param_1->___inputMapperJoystickKeyboard_15,(MethodInfo *)0x0);
        if (param_1->___inputMapperMouse_16 !=
            (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
          InputMapper_RemoveAllEventListeners_mEDBEA925C9CDB905A5650BB576E5ED9604F47A21
                    (param_1->___inputMapperMouse_16,(MethodInfo *)0x0);
          pIVar1 = param_1->___inputMapperJoystickKeyboard_15;
          pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar2,(Il2CppObject *)param_1,
                     (int)
                     KeyboardControlsMenu_OnConflictFound_m15A073B8461A94A5A86BAA32616856778A7C448F_RuntimeMethod_var
                     ,Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var);
          if (pIVar1 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
            InputMapper_remove_ConflictFoundEvent_mF583238CC9D34484C291359BD1998AE358FBBDAF
                      (pIVar1,(Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C *)pOVar2,
                       (MethodInfo *)0x0);
            pIVar1 = param_1->___inputMapperMouse_16;
            pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     il2cpp_codegen_object_new
                               (
                               Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var
                               );
            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                      (pOVar2,(Il2CppObject *)param_1,
                       (int)
                       KeyboardControlsMenu_OnConflictFound_m15A073B8461A94A5A86BAA32616856778A7C448F_RuntimeMethod_var
                       ,Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var);
            if (pIVar1 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
              InputMapper_remove_ConflictFoundEvent_mF583238CC9D34484C291359BD1998AE358FBBDAF
                        (pIVar1,(Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C *)pOVar2,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
