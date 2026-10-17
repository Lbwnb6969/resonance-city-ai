// RVA 0x3e9240 | Placemaker.Ui.UpdateState$$.ctor
// PDB: UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B
// Body: [[103e9240, 103e94cf]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void __cdecl
UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  if (DAT_1151c8c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__14_0_mD3ACDEA3978D0D5BE24E6010A9F2364D0855C225_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__14_1_mCC99D8D4DF41B84E0ACC9B5593798DE5C6CC46C7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__14_2_mDE8B3DE49BD100AEE09B10A5217ED11C70464272_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__14_3_mC64085C5936DC71B0AF55D5E3B9A042C0B3FFDE6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var);
    DAT_1151c8c8 = '\x01';
  }
  if ((U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__14_0_mD3ACDEA3978D0D5BE24E6010A9F2364D0855C225_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar2;
  }
  if (param_1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    param_1->___onValueChanged_3 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar2;
    if ((U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var);
    }
    pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->
                    static_fields + 8);
    if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      if ((U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var);
      }
      pIVar1 = *(Il2CppObject **)
                U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->static_fields
      ;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,pIVar1,
                 (int)
                 U3CU3Ec_U3C_ctorU3Eb__14_1_mCC99D8D4DF41B84E0ACC9B5593798DE5C6CC46C7_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
       ((int)U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->static_fields +
       8) = pOVar2;
    }
    param_1->___onTargetChange_4 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar2;
    if ((U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var);
    }
    pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->
                    static_fields + 0xc);
    if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      if ((U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var);
      }
      pIVar1 = *(Il2CppObject **)
                U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->static_fields
      ;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,pIVar1,
                 (int)
                 U3CU3Ec_U3C_ctorU3Eb__14_2_mDE8B3DE49BD100AEE09B10A5217ED11C70464272_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
       ((int)U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->static_fields +
       0xc) = pOVar2;
    }
    param_1->___onStart_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
    if ((U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var);
    }
    pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
              ((int)U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->
                    static_fields + 0x10);
    if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
      if ((U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var);
      }
      pIVar1 = *(Il2CppObject **)
                U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->static_fields
      ;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,pIVar1,
                 (int)
                 U3CU3Ec_U3C_ctorU3Eb__14_3_mC64085C5936DC71B0AF55D5E3B9A042C0B3FFDE6_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
       ((int)U3CU3Ec_tA91FB9AB16360DE2D39366D59E7DFFE18156F318_il2cpp_TypeInfo_var->static_fields +
       0x10) = pOVar2;
    }
    param_1->___onStop_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar2;
    param_1->___speed_7 = 16.0;
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
