// RVA 0x3dd070 | Placemaker.Ui.NavigableButton$$.ctor
// PDB: NavigableButton__ctor_m91E2C5C262224AEB23F5AB3B580973B428525EBE
// Body: [[103dd070, 103dd291]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e9240 UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
NavigableButton__ctor_m91E2C5C262224AEB23F5AB3B580973B428525EBE
          (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;

  if (DAT_1151c891 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2__ctor_m1CF58FDC2D929CF67048A8456217659EF81501D4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__10_0_m73A366AD5BF3E298BDBC4287FD3CCDC94678B52A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__10_1_m93260CF18C5459F467FAAD5A196D0432DF6EACD7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__10_2_m776A08EE61C5DEDBE25824736696B8E844668720_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151c891 = '\x01';
  }
  if ((U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__10_0_m73A366AD5BF3E298BDBC4287FD3CCDC94678B52A_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar2;
  }
  if (param_1 != (NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *)0x0) {
    param_1->___onSubmit_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
    pUVar3 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
             il2cpp_codegen_object_new
                       (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar3,(MethodInfo *)0x0);
    param_1->___selectedState_6 = pUVar3;
    if ((U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var);
    }
    pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->
                    static_fields + 8);
    if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      if ((U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var);
      }
      pIVar1 = *(Il2CppObject **)
                U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->static_fields
      ;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,pIVar1,
                 (int)
                 U3CU3Ec_U3C_ctorU3Eb__10_1_m93260CF18C5459F467FAAD5A196D0432DF6EACD7_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
       ((int)U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->static_fields +
       8) = pOVar2;
    }
    param_1->___onSelectedUpdate_7 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
    if ((U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var);
    }
    pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->
                    static_fields + 0xc);
    if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      if ((U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var);
      }
      pIVar1 = *(Il2CppObject **)
                U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->static_fields
      ;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,pIVar1,
                 (int)
                 U3CU3Ec_U3C_ctorU3Eb__10_2_m776A08EE61C5DEDBE25824736696B8E844668720_RuntimeMethod_var
                 ,Action_2__ctor_m1CF58FDC2D929CF67048A8456217659EF81501D4_RuntimeMethod_var);
      *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
       ((int)U3CU3Ec_t8B6358733205D144D92D19413BB2EEE10C7BB98D_il2cpp_TypeInfo_var->static_fields +
       0xc) = pOVar2;
    }
    param_1->___onHorizontal_8 = (Action_2_tC7CB6DC46AA3C0BF803A0F38F02F2CB3B55ACAF6 *)pOVar2;
    Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
