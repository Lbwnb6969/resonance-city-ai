// RVA 0x74c710 | Placemaker.Ui.OrbitalCamera$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: OrbitalCamera_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mDE7BDE86252ECA368D124C6C76E56D0256137AC7
// Body: [[1074c710, 1074c925]]
// Direct callees:
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 10749170 OrbitalCamera_BoundsUpdated_m339B5A48359744B29231BAB101DAF5627F40582F
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
OrbitalCamera_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mDE7BDE86252ECA368D124C6C76E56D0256137AC7
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA *pAVar2;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar5;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar6;
  Il2CppClass *pIVar7;

  if (DAT_1151ebd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m67DCB491C20915AD10BAFB0A53AF70D0C9CEE1C8_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       OrbitalCamera_BoundsUpdated_m339B5A48359744B29231BAB101DAF5627F40582F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       OrbitalCamera_Load_m6941DD91E894D8A57A83250B0481EDB5F5B1ACDE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       OrbitalCamera_Save_m89E9CE9FAA59C017955E9B12BBAFE8E64E473AB0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       OrbitalCamera_SetBounds_m4B90E234D824CFA7F324BBFD62D0D28434FE8828_RuntimeMethod_var
              );
    DAT_1151ebd1 = '\x01';
  }
  if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pGVar3 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                       ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_2,(MethodInfo *)0x0
                       );
    if (pGVar3 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) goto LAB_1074c91a;
    pAVar6 = pGVar3->___onBoundsUpdated_34;
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,(Il2CppObject *)param_1,
               (int)
               OrbitalCamera_BoundsUpdated_m339B5A48359744B29231BAB101DAF5627F40582F_RuntimeMethod_var
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
      pIVar7 = Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
      if (pAVar6 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) goto LAB_1074c91f;
    }
    pGVar3->___onBoundsUpdated_34 = pAVar6;
    pGVar3 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                       ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_2,(MethodInfo *)0x0
                       );
    if (pGVar3 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) goto LAB_1074c91a;
    pAVar6 = pGVar3->___onEmptyBoundsLoaded_35;
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,(Il2CppObject *)param_1,
               (int)
               OrbitalCamera_SetBounds_m4B90E234D824CFA7F324BBFD62D0D28434FE8828_RuntimeMethod_var,
               (MethodInfo *)0x0);
    pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pAVar6,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
    pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
    if (pAVar5 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
      if (*(Il2CppClass **)pAVar5 ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pAVar6 = pAVar5;
      }
      pIVar7 = Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
      if (pAVar6 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) goto LAB_1074c91f;
    }
    pGVar3->___onEmptyBoundsLoaded_35 = pAVar6;
    pWVar1 = param_2->___worldMaster_5;
    if (pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) goto LAB_1074c91a;
    pAVar2 = pWVar1->___onCameraLoad_52;
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,(Il2CppObject *)param_1,
               (int)OrbitalCamera_Load_m6941DD91E894D8A57A83250B0481EDB5F5B1ACDE_RuntimeMethod_var,
               Action_1__ctor_m67DCB491C20915AD10BAFB0A53AF70D0C9CEE1C8_RuntimeMethod_var);
    pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
             Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                       ((Delegate_t *)pAVar2,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
    pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
    if (pAVar5 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
      if (*(Il2CppClass **)pAVar5 ==
          Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var) {
        pAVar6 = pAVar5;
      }
      pIVar7 = Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var;
      if (pAVar6 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) goto LAB_1074c91f;
    }
    pWVar1->___onCameraLoad_52 = (Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA *)pAVar6;
    pWVar1 = param_2->___worldMaster_5;
    if (pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      pAVar2 = pWVar1->___onCameraSave_53;
      pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar4,(Il2CppObject *)param_1,
                 (int)OrbitalCamera_Save_m89E9CE9FAA59C017955E9B12BBAFE8E64E473AB0_RuntimeMethod_var
                 ,Action_1__ctor_m67DCB491C20915AD10BAFB0A53AF70D0C9CEE1C8_RuntimeMethod_var);
      pAVar5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
               Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         ((Delegate_t *)pAVar2,(Delegate_t *)pOVar4,(MethodInfo *)0x0);
      pAVar6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
      if (pAVar5 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
        if (*(Il2CppClass **)pAVar5 ==
            Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var) {
          pAVar6 = pAVar5;
        }
        pIVar7 = Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var;
        if (pAVar6 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
LAB_1074c91f:
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException((Il2CppObject *)pAVar5,pIVar7);
        }
      }
      pWVar1->___onCameraSave_53 = (Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA *)pAVar6;
      OrbitalCamera_BoundsUpdated_m339B5A48359744B29231BAB101DAF5627F40582F
                (param_1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_1074c91a:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
