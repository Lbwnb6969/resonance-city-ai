// RVA 0xe0ef60 | Placemaker.Ui.GridButtons$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: GridButtons_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mC2539D39327AE56F04340D47039807CFAFA19F87
// Body: [[10e0ef60, 10e0f13f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8700 UpdateState_SubscribeTick_m4A6573150A14C7A02DCD412D3E880EC9120DD75D
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
GridButtons_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mC2539D39327AE56F04340D47039807CFAFA19F87
          (GridButtons_tEB999C547B3175D466CA76D10396006C41BFD0E2 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar2;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar5;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar6;

  if (DAT_11522651 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mB5E3AA34C3490D87C0CD5F143CA5381831E1A954_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass8_0_t07DBD567F332C685C9F3A3ECDD562E0219E1A667_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_11522651 = '\x01';
  }
  pBVar2 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass8_0_t07DBD567F332C685C9F3A3ECDD562E0219E1A667_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar2,(MethodInfo *)0x0);
  if (pBVar2 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar2->___name_0 = (String_t *)param_1;
    if ((param_2 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (param_2->___orbitalCamera_15 ==
        (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)) goto LAB_10e0f134;
    pBVar2->___screenAspectRatio_1 = (float)param_2->___orbitalCamera_15->___cam_5;
    if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    }
    (pBVar2->___referenceResolution_2).___x_0 =
         *(float *)((int)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->
                         static_fields + 0x28);
    pUVar1 = param_1->___gridState0_6;
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___tick0_5 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_10e0f134;
    pGVar3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___tick0_5,
                        (MethodInfo *)0x0);
    if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10e0f134;
    UpdateState_SubscribeTick_m4A6573150A14C7A02DCD412D3E880EC9120DD75D
              (pUVar1,pGVar3,(MethodInfo *)0x0);
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,(Il2CppObject *)pBVar2,
               (int)
               U3CU3Ec__DisplayClass8_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_mB5E3AA34C3490D87C0CD5F143CA5381831E1A954_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    pUVar1 = param_1->___gridState0_6;
    if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_10e0f134;
    pAVar5 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pUVar1->___onValueChanged_3,(Delegate_t *)pOVar4,
                        (MethodInfo *)0x0);
    pAVar6 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
    if (pAVar5 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
      if (*(Il2CppClass **)pAVar5 ==
          Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) goto LAB_10e0f139;
    }
    pUVar1->___onValueChanged_3 = pAVar6;
    pUVar1 = param_1->___gridState1_7;
    if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      pAVar5 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
               Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         ((Delegate_t *)pUVar1->___onValueChanged_3,(Delegate_t *)pOVar4,
                          (MethodInfo *)0x0);
      pAVar6 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
      if (pAVar5 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
        if (*(Il2CppClass **)pAVar5 ==
            Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
LAB_10e0f139:
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pAVar5,
                     Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        }
      }
      pUVar1->___onValueChanged_3 = pAVar6;
      if (pOVar4 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                  ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)pOVar4,0.0,
                   Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
        pUVar1 = param_1->___gridState0_6;
        if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
        }
        UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar1,(MethodInfo *)0x0);
        UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                  (param_1->___gridState1_7,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_10e0f134:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
