// RVA 0x874420 | Placemaker.Ui.BaseButton$$.ctor
// PDB: BaseButton__ctor_m15C8806148AA9ED4B77DA2CFCF5C50A2FDEB4330
// Body: [[10874420, 10874634]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
BaseButton__ctor_m15C8806148AA9ED4B77DA2CFCF5C50A2FDEB4330
          (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  if (DAT_1151f5a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__26_0_mD4097671889B20FE4717A3AD5E2777DE109B06F8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__26_1_mF3270F0160AB846CE0705B720D602BE8339D762E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__26_2_mFBAD0B9CBAA680FCC12323616F425956E613C2EC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var);
    DAT_1151f5a2 = '\x01';
  }
  if ((U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__26_0_mD4097671889B20FE4717A3AD5E2777DE109B06F8_RuntimeMethod_var
               ,Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar2;
  }
  if (param_1 != (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
    param_1->___onStateChange_10 = (Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)pOVar2;
    if ((U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var);
    }
    pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->
                    static_fields + 8);
    if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      if ((U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var);
      }
      pIVar1 = *(Il2CppObject **)
                U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->static_fields
      ;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,pIVar1,
                 (int)
                 U3CU3Ec_U3C_ctorU3Eb__26_1_mF3270F0160AB846CE0705B720D602BE8339D762E_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
       ((int)U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->static_fields +
       8) = pOVar2;
    }
    param_1->___onClickAction_11 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
    if ((U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var);
    }
    pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->
                    static_fields + 0xc);
    if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      if ((U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var);
      }
      pIVar1 = *(Il2CppObject **)
                U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->static_fields
      ;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,pIVar1,
                 (int)
                 U3CU3Ec_U3C_ctorU3Eb__26_2_mFBAD0B9CBAA680FCC12323616F425956E613C2EC_RuntimeMethod_var
                 ,Action_1__ctor_m2A1B34C27CAE6ED7FD924E5F59C0A1ACBBF22C38_RuntimeMethod_var);
      *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
       ((int)U3CU3Ec_t0A88DF4D4F336C5B370EAFF9BAC630BBA5092974_il2cpp_TypeInfo_var->static_fields +
       0xc) = pOVar2;
    }
    param_1->___onButtonDownChange_12 = (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)pOVar2
    ;
    Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
