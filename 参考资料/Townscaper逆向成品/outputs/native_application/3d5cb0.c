// RVA 0x3d5cb0 | Placemaker.MetaSave$$.ctor
// PDB: MetaSave__ctor_m3234285D661333AF776AAA1A8E80EA65E33EA8A6
// Body: [[103d5cb0, 103d5e2c]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
MetaSave__ctor_m3234285D661333AF776AAA1A8E80EA65E33EA8A6
          (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  if (DAT_1151c870 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__32_0_m1313DD4ADEE26568176649846DE40F7BA535B8A0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__32_1_mBD5452B2FB4AA2B3FEBAAC9723DE448D6821CB48_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var);
    DAT_1151c870 = '\x01';
  }
  param_1->___lastDiskSyncTime_10 = -1.0;
  param_1->___lastTextureLoadTime_11 = -1.0;
  param_1->___lastSaveDataTime_12 = -1.0;
  if ((U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__32_0_m1313DD4ADEE26568176649846DE40F7BA535B8A0_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar2;
  }
  param_1->___onStateChange_16 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
  if ((U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->
                  static_fields + 8);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__32_1_mBD5452B2FB4AA2B3FEBAAC9723DE448D6821CB48_RuntimeMethod_var
               ,Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t7A3BF4C77EDFACC46E30A314CFB56A243E8A52A7_il2cpp_TypeInfo_var->static_fields + 8)
         = pOVar2;
  }
  param_1->___onIndexChange_17 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)pOVar2;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
