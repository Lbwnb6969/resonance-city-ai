// RVA 0x304f90 | Placemaker.Ui.ToggleButton$$OnSetup
// PDB: ToggleButton_OnSetup_m4AC1D6AD778DF86244E419CC869C5E804C36975D
// Body: [[10304f90, 10305106]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8590 UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
// 103e8700 UpdateState_SubscribeTick_m4A6573150A14C7A02DCD412D3E880EC9120DD75D
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
ToggleButton_OnSetup_m4AC1D6AD778DF86244E419CC869C5E804C36975D
          (ToggleButton_t0028E2EF6E2D8992A3D68C313C828C517C5D9C41 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  Delegate_t *pDVar1;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar2;
  Il2CppObject *pIVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar5;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar6;

  if (DAT_1151c22e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ToggleButton_Toggle_mE3B6037766283FA34A761CD7C57957DA69D98730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ToggleButton_U3COnSetupU3Eb__8_0_m8C0E86C478BE30EED069A9783B01246F4BA2B25E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c22e = '\x01';
  }
  param_1->___master_4 = param_2;
  if (param_1->___enabledState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_SubscribeTick_m4A6573150A14C7A02DCD412D3E880EC9120DD75D
              (param_1->___enabledState_5,param_1->___tick_6,(MethodInfo *)0x0);
    pIVar3 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                       );
    if (pIVar3 == (Il2CppObject *)0x0) goto LAB_103050fb;
    pDVar1 = (Delegate_t *)pIVar3[4].monitor;
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,(Il2CppObject *)param_1,
               (int)ToggleButton_Toggle_mE3B6037766283FA34A761CD7C57957DA69D98730_RuntimeMethod_var,
               (MethodInfo *)0x0);
    pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       (pDVar1,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
    pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
    if (pAVar5 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
      if (*(Il2CppClass **)pAVar5 ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) goto LAB_10305100;
    }
    pIVar3[4].monitor = (MonitorData *)pAVar6;
    if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
      pAVar6 = param_2->___onSettingsLoaded_46;
      pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar4,(Il2CppObject *)param_1,
                 (int)
                 ToggleButton_U3COnSetupU3Eb__8_0_m8C0E86C478BE30EED069A9783B01246F4BA2B25E_RuntimeMethod_var
                 ,(MethodInfo *)0x0);
      pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
               Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         ((Delegate_t *)pAVar6,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
      pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
      if (pAVar5 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
        if (*(Il2CppClass **)pAVar5 ==
            Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
LAB_10305100:
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pAVar5,
                     Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
        }
      }
      param_2->___onSettingsLoaded_46 = pAVar6;
      if (param_1->___enabledState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0
         ) {
        UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
                  (param_1->___enabledState_5,(MethodInfo *)0x0);
        pUVar2 = param_1->___enabledState_5;
        if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
        }
        UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_103050fb:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
