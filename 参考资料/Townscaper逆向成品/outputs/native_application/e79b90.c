// RVA 0xe79b90 | Placemaker.Graphs.Graph$$.ctor
// PDB: Graph__ctor_mFEEE2B8926739DE6102C2BEEFC9A3BB43E4AD6E6
// Body: [[10e79b90, 10e79e32]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
Graph__ctor_mFEEE2B8926739DE6102C2BEEFC9A3BB43E4AD6E6
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar2;
  Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *pDVar3;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar4;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar5;

  if (DAT_11522849 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mD4F52EF02C567ECF1F970E5A68F12CC8DEF4A60A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mF18C3466A51FE4BA69B50D6CF9D4E038530137AB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mFA7ECFC6D2BAA590265B06EBBEF5DBBAC1B7ADD5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tC4563711455669BE39570685EC5E35391AF8B0C7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tCB16CF21E58214736DC0FFB479990B13DC3E975B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m332B14E5D6A931835B77FBE6112050CC9261ECCD_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_mD8A4DF8C4333E1B9FAEB719157A43F6DD1B209BC_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t21F583C5E4A57BCEF6177F42179552BE21568686_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t9135BBA17EC44986E18786359559A3877CE31660_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__86_0_mC0C8D532FDEE048E059B36984DE68E0EA000EF41_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__86_1_mCA10D3C6D26D20151D2D85D5BF081FF5B44A8FE8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var);
    DAT_11522849 = '\x01';
  }
  pDVar2 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_tCB16CF21E58214736DC0FFB479990B13DC3E975B_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar2,Dictionary_2__ctor_mF18C3466A51FE4BA69B50D6CF9D4E038530137AB_RuntimeMethod_var);
  param_1->___cornerDict_16 = (Dictionary_2_tCB16CF21E58214736DC0FFB479990B13DC3E975B *)pDVar2;
  pDVar2 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_tC4563711455669BE39570685EC5E35391AF8B0C7_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar2,Dictionary_2__ctor_mD4F52EF02C567ECF1F970E5A68F12CC8DEF4A60A_RuntimeMethod_var);
  param_1->___squareDict_17 = (Dictionary_2_tC4563711455669BE39570685EC5E35391AF8B0C7 *)pDVar2;
  pDVar3 = (Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)
           il2cpp_codegen_object_new
                     (Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            ((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)pDVar3,
             Dictionary_2__ctor_mFA7ECFC6D2BAA590265B06EBBEF5DBBAC1B7ADD5_RuntimeMethod_var);
  param_1->___edgeDict_18 = pDVar3;
  pLVar4 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t21F583C5E4A57BCEF6177F42179552BE21568686_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar4,List_1__ctor_m332B14E5D6A931835B77FBE6112050CC9261ECCD_RuntimeMethod_var);
  param_1->___cornerIntegrationQueue_19 = (List_1_t21F583C5E4A57BCEF6177F42179552BE21568686 *)pLVar4
  ;
  pLVar4 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t21F583C5E4A57BCEF6177F42179552BE21568686_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar4,List_1__ctor_m332B14E5D6A931835B77FBE6112050CC9261ECCD_RuntimeMethod_var);
  param_1->___cornerFlowQueue_20 = (List_1_t21F583C5E4A57BCEF6177F42179552BE21568686 *)pLVar4;
  pLVar4 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t9135BBA17EC44986E18786359559A3877CE31660_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar4,List_1__ctor_mD8A4DF8C4333E1B9FAEB719157A43F6DD1B209BC_RuntimeMethod_var);
  param_1->___qubeUpdateQueue_21 = (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)pLVar4;
  pLVar4 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar4,List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
  param_1->___shadowMeshIndexes_23 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pLVar4;
  if ((U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var)
    ;
  }
  pOVar5 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pOVar5 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->static_fields;
    pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar5,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__86_0_mC0C8D532FDEE048E059B36984DE68E0EA000EF41_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar5;
  }
  param_1->___onBoundsUpdated_34 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar5;
  if ((U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var)
    ;
  }
  pOVar5 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->
                  static_fields + 8);
  if (pOVar5 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->static_fields;
    pOVar5 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar5,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__86_1_mCA10D3C6D26D20151D2D85D5BF081FF5B44A8FE8_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_tF7CA6018760B8C5F2DAE883F99ABA408C2A2EBF1_il2cpp_TypeInfo_var->static_fields + 8)
         = pOVar5;
  }
  param_1->___onEmptyBoundsLoaded_35 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar5;
  param_1->___boundsUpdated_41 = true;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
