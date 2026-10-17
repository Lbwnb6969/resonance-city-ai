// RVA 0x3ce100 | Placemaker.Ui.LocalizeRTLFlipper$$OnDisable
// PDB: LocalizeRTLFlipper_OnDisable_m57764596C24B604910FFACB7FB65C723893B614F
// Body: [[103ce100, 103ce181]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10501110 LocalizationManager_remove_OnLocalizeEvent_m5DB7D796E423D49C2CEB8E8E528DDC5FD77BA54F

void __cdecl
LocalizeRTLFlipper_OnDisable_m57764596C24B604910FFACB7FB65C723893B614F
          (LocalizeRTLFlipper_t6E5C3070BBE7F3E232E979AB0BC9383CE155981F *param_1,MethodInfo *param_2
          )

{
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar1;

  if (DAT_1151c81b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       LocalizeRTLFlipper_OnLocalize_m6AFA18581C54CC05CF2EC186727ED24F090A3C49_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE_il2cpp_TypeInfo_var
              );
    DAT_1151c81b = '\x01';
  }
  pOVar1 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
           il2cpp_codegen_object_new
                     (
                     OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE_il2cpp_TypeInfo_var
                     );
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar1,(Il2CppObject *)param_1,
             (int)
             LocalizeRTLFlipper_OnLocalize_m6AFA18581C54CC05CF2EC186727ED24F090A3C49_RuntimeMethod_var
             ,(MethodInfo *)0x0);
  if ((LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->has_cctor
       != '\0') &&
     (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var->
      cctor_finished == 0)) {
    il2cpp_runtime_class_init
              (LocalizationManager_tA07F6B18C9937F5CCABD00EF1813A2B0D02BFE2B_il2cpp_TypeInfo_var);
  }
  LocalizationManager_remove_OnLocalizeEvent_m5DB7D796E423D49C2CEB8E8E528DDC5FD77BA54F
            (pOVar1,(MethodInfo *)0x0);
  return;
}
