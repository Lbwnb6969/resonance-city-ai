// RVA 0xa0b340 | Placemaker.ShadowBaker$$.ctor
// PDB: ShadowBaker__ctor_m4EC2186FCCE6B74F99E82E9FE7CF0C0765DA3ADA
// Body: [[10a0b340, 10a0b40e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
ShadowBaker__ctor_m4EC2186FCCE6B74F99E82E9FE7CF0C0765DA3ADA
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  if (DAT_115201e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__45_0_m79345BF3E7AC8342CF7EE3782A43B61E9EEB06CE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var);
    DAT_115201e7 = '\x01';
  }
  param_1->___resolution_9 = 0x400;
  if ((U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__45_0_m79345BF3E7AC8342CF7EE3782A43B61E9EEB06CE_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t56279093B3F98037809D97E459CF179675C3F011_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar2;
  }
  param_1->___onNewSunAngle_32 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
