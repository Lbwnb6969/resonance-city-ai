// RVA 0x420a10 | Placemaker.Ui.KeyboardAndMouseControlRemap$$OnSetup
// PDB: KeyboardAndMouseControlRemap_OnSetup_mAE2F49BFE8AB8233F4C1915E7DBC92F72E2338AE
// Body: [[10420a10, 10420be9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e50e0 UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8900 UpdateState_SubscribeToTarget_m4B75B353E42A7EE934424059A570D5DC521EA2EB
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared

void __cdecl
KeyboardAndMouseControlRemap_OnSetup_mAE2F49BFE8AB8233F4C1915E7DBC92F72E2338AE
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *pGVar2;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar3;

  if (DAT_1151cb0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisGenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E_mDD682981E7C60DE935E5C1437B83BD20416A5C4C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardAndMouseControlRemap_U3COnSetupU3Eb__17_0_mAF455D833091DFC650767E1D0EEF78B93CB271A7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardAndMouseControlRemap_U3COnSetupU3Eb__17_1_m916F4A7B84CF9D5ADC5CA17F719E6B61ACF34DDA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyboardAndMouseControlRemap_U3COnSetupU3Eb__17_2_mC9A331FF281F5065E15B40CB1FF95D08F8C71D4A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151cb0b = '\x01';
  }
  param_1->___master_4 = param_2;
  pGVar2 = (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *)
           Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisGenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E_mDD682981E7C60DE935E5C1437B83BD20416A5C4C_RuntimeMethod_var
                     );
  param_1->___genericControlsMenu_5 = pGVar2;
  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
             Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
            );
  if ((param_1->___controlsMenu_8 !=
       (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *)0x0) &&
     (pUVar1 = param_1->___controlsMenu_8->___openState_5,
     pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
    UpdateState_SubscribeToTarget_m4B75B353E42A7EE934424059A570D5DC521EA2EB
              (pUVar1,(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,
               (MethodInfo *)0x0);
    if (param_1->___darkenState_10 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    {
      UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                (param_1->___darkenState_10,param_1->___darkener_9,(MethodInfo *)0x0);
      if (param_1->___controlsMenu_8 !=
          (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *)0x0) {
        pUVar1 = param_1->___controlsMenu_8->___openState_5;
        pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar3,(Il2CppObject *)param_1,
                   (int)
                   KeyboardAndMouseControlRemap_U3COnSetupU3Eb__17_0_mAF455D833091DFC650767E1D0EEF78B93CB271A7_RuntimeMethod_var
                   ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
        if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                    (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar3,
                     (MethodInfo *)0x0);
          pUVar1 = param_1->___darkenState_10;
          pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar3,(Il2CppObject *)param_1,
                     (int)
                     KeyboardAndMouseControlRemap_U3COnSetupU3Eb__17_1_m916F4A7B84CF9D5ADC5CA17F719E6B61ACF34DDA_RuntimeMethod_var
                     ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
          if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                      (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar3,
                       (MethodInfo *)0x0);
            if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
              UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
                        (param_2,param_1->___darkenState_10,0x800,(MethodInfo *)0x0);
              pUVar1 = param_1->___darkenState_10;
              if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
              }
              UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
              if (param_1->___genericControlsMenu_5 !=
                  (GenericControlsMenu_t66403C6BC69A10D0CCE6ADA2AB2CC7F0AE79744E *)0x0) {
                pUVar1 = param_1->___genericControlsMenu_5->___openState_5;
                pOVar3 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                         il2cpp_codegen_object_new
                                   (
                                   Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                   );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          (pOVar3,(Il2CppObject *)param_1,
                           (int)
                           KeyboardAndMouseControlRemap_U3COnSetupU3Eb__17_2_mC9A331FF281F5065E15B40CB1FF95D08F8C71D4A_RuntimeMethod_var
                           ,
                           Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                          );
                if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                  UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                            (pUVar1,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar3,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
