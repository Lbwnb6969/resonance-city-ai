// RVA 0x9fe3d0 | Placemaker.Ui.SaveMenu$$ExecuteIfSaveSystemAllows
// PDB: SaveMenu_ExecuteIfSaveSystemAllows_m47E7115100027FFD61B76A2986508891AE982290
// Body: [[109fe3d0, 109fe5a0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 102f8710 SimpleMessage_SetParam_m87A6997A70EFE92E19A9B93ACA80A0F2402D152A
// 102f8900 SimpleMessage_ShowTerm_m289A7C2A2333E60FAECCDDA83A4D56CFD2246D93
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
SaveMenu_ExecuteIfSaveSystemAllows_m47E7115100027FFD61B76A2986508891AE982290
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *param_2,
          SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *param_3,MethodInfo *param_4)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar3;
  bool bVar4;
  String_t *pSVar5;
  int in_ECX;
  int iVar6;
  int local_8;

  local_8 = in_ECX;
  if (DAT_1152019e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral31EE75ECE4A3E77E0435D0D91F1414EE9F465D05);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7FA8892B7A6875B5B0805C558BF9785286B20684);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A);
    DAT_1152019e = '\x01';
  }
  if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
      (pWVar1 = param_1->___master_4->___worldMaster_5,
      pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
     (pSVar2 = pWVar1->___saveSystem_35,
     pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) goto LAB_109fe59c;
  local_8 = pSVar2->___maxSaveGameCount_40;
  pMVar3 = pSVar2->___currentMetaSave_14;
  iVar6 = pSVar2->___totalSaveGameCount_41;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar3,(MethodInfo *)0x0);
  if (bVar4) {
    pMVar3 = pSVar2->___currentMetaSave_14;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar3,(MethodInfo *)0x0)
    ;
    if (bVar4) {
      if (pSVar2->___currentMetaSave_14 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0
         ) goto LAB_109fe59c;
      if (pSVar2->___currentMetaSave_14->___state_18 == 8) goto LAB_109fe4be;
    }
  }
  else {
LAB_109fe4be:
    iVar6 = iVar6 + 1;
  }
  if (local_8 != 0x7fffffff) {
    if ((pSVar2->___state_7 != 6) || (pSVar2->___activeRequestsCounter_39 != 0)) {
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (param_3 != (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *)0x0)) {
        SimpleMessage_ShowTerm_m289A7C2A2333E60FAECCDDA83A4D56CFD2246D93
                  (param_3,_stringLiteral7FA8892B7A6875B5B0805C558BF9785286B20684,
                   param_1->___master_4->___messageColorWarning_47,2.0,(MethodInfo *)0x0);
        return;
      }
      goto LAB_109fe59c;
    }
    if (local_8 <= iVar6) {
      pSVar5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411(&local_8,(MethodInfo *)0x0);
      if (param_3 != (SimpleMessage_t9F2B162AE3E95AE6F3559BBA44801038293C7A3A *)0x0) {
        SimpleMessage_SetParam_m87A6997A70EFE92E19A9B93ACA80A0F2402D152A
                  (param_3,_stringLiteralA18E784C84762DFFFFA0DCFDA6BBAABEF55A100A,pSVar5,
                   (MethodInfo *)0x0);
        if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          SimpleMessage_ShowTerm_m289A7C2A2333E60FAECCDDA83A4D56CFD2246D93
                    (param_3,_stringLiteral31EE75ECE4A3E77E0435D0D91F1414EE9F465D05,
                     param_1->___master_4->___messageColorWarning_47,2.0,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_109fe59c;
    }
  }
  if (param_2 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
    OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
              ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_2,
               (MethodInfo *)0x0);
    return;
  }
LAB_109fe59c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
