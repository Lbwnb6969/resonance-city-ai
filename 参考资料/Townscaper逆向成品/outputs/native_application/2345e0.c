// RVA 0x2345e0 | Placemaker.Ui.ControlBinding$$OnDisable
// PDB: ControlBinding_OnDisable_m7DDE9E0B4FCB8569EACF549ED917AB1A301B43B6
// Body: [[102345e0, 102346dd]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10db5b60 InputMapper_RemoveAllEventListeners_mEDBEA925C9CDB905A5650BB576E5ED9604F47A21
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
// 10db7340 InputMapper_remove_ConflictFoundEvent_mF583238CC9D34484C291359BD1998AE358FBBDAF

void __cdecl
ControlBinding_OnDisable_m7DDE9E0B4FCB8569EACF549ED917AB1A301B43B6
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,MethodInfo *param_2)

{
  InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  if (DAT_1151b595 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ControlBinding_OnConflictFound_m1F6A811C338CD31826EEFDC35D829AF827683AF6_RuntimeMethod_var
              );
    DAT_1151b595 = '\x01';
  }
  if (param_1->___inputMapperJoystickKeyboard_18 !=
      (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
    InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
              (param_1->___inputMapperJoystickKeyboard_18,(MethodInfo *)0x0);
    if (param_1->___inputMapperMouse_19 !=
        (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
      InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                (param_1->___inputMapperMouse_19,(MethodInfo *)0x0);
      if (param_1->___inputMapperJoystickKeyboard_18 !=
          (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
        InputMapper_RemoveAllEventListeners_mEDBEA925C9CDB905A5650BB576E5ED9604F47A21
                  (param_1->___inputMapperJoystickKeyboard_18,(MethodInfo *)0x0);
        if (param_1->___inputMapperMouse_19 !=
            (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
          InputMapper_RemoveAllEventListeners_mEDBEA925C9CDB905A5650BB576E5ED9604F47A21
                    (param_1->___inputMapperMouse_19,(MethodInfo *)0x0);
          pIVar1 = param_1->___inputMapperJoystickKeyboard_18;
          pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar2,(Il2CppObject *)param_1,
                     (int)
                     ControlBinding_OnConflictFound_m1F6A811C338CD31826EEFDC35D829AF827683AF6_RuntimeMethod_var
                     ,Action_1__ctor_m9A3E0D0EAF0757B7656DC91B52751791F3032B69_RuntimeMethod_var);
          if (pIVar1 != (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
            InputMapper_remove_ConflictFoundEvent_mF583238CC9D34484C291359BD1998AE358FBBDAF
                      (pIVar1,(Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C *)pOVar2,
                       (MethodInfo *)0x0);
            pIVar1 = param_1->___inputMapperMouse_19;
            pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     il2cpp_codegen_object_new
                               (
                               Action_1_t76F41B21D42BE1EDC86987BB4CF0F9124563618C_il2cpp_TypeInfo_var
                               );
            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                      (pOVar2,(Il2CppObject *)param_1,
                       (int)
                       ControlBinding_OnConflictFound_m1F6A811C338CD31826EEFDC35D829AF827683AF6_RuntimeMethod_var
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
