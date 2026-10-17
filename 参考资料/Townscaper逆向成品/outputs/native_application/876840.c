// RVA 0x876840 | Placemaker.Ui.BetterScrollRect$$.ctor
// PDB: BetterScrollRect__ctor_mF3786E0FC061ABBD0ED936C7671AE3F37F3FEEE7
// Body: [[10876840, 10876a71]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828

void __cdecl
BetterScrollRect__ctor_mF3786E0FC061ABBD0ED936C7671AE3F37F3FEEE7
          (BetterScrollRect_t4A98E5323F5BAE8BFBA9E54B1E4DD8F45CBA46B5 *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar3;

  if (DAT_1151f5ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__26_0_mF1557C2BEBEA024C145D785147186E9AFF97EAC1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__26_1_mC19C6621A8BB78894918B3A7138476CC94749673_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__26_2_mF462E9FE32EB631E24C72CD7C3B3629D02E11C87_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var);
    DAT_1151f5ac = '\x01';
  }
  param_1->___mode_4 = 2;
  (param_1->___unclampedAnchor_6).___x_0 = 0.5;
  (param_1->___unclampedAnchor_6).___y_1 = 0.5;
  (param_1->___normPosCurrent_7).___x_0 = 0.5;
  (param_1->___normPosCurrent_7).___y_1 = 0.5;
  (param_1->___normPosTarget_8).___x_0 = 0.5;
  (param_1->___normPosTarget_8).___y_1 = 0.5;
  VVar3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
  param_1->___velocity_9 = VVar3;
  if ((U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__26_0_mF1557C2BEBEA024C145D785147186E9AFF97EAC1_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar2;
  }
  param_1->___onBeginDrag_14 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
  if ((U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->
                  static_fields + 8);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__26_1_mC19C6621A8BB78894918B3A7138476CC94749673_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->static_fields + 8)
         = pOVar2;
  }
  param_1->___onEndDrag_15 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
  if ((U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->
                  static_fields + 0xc);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__26_2_mF462E9FE32EB631E24C72CD7C3B3629D02E11C87_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t9AE76C56AE11E33673FEE8409BF78EDD8A51DA40_il2cpp_TypeInfo_var->static_fields +
     0xc) = pOVar2;
  }
  param_1->___onScroll_16 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
