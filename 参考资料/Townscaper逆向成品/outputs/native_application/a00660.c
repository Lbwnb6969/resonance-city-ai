// RVA 0xa00660 | Placemaker.Ui.SaveMenu$$SetUIState
// PDB: SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
// Body: [[10a00660, 10a008fa]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
SaveMenu_SetUIState_m399413EB76F072A77AA0159FC920A16BC7678727
          (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *param_1,uchar param_2,
          MethodInfo *param_3)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar3;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar4;
  bool bVar5;
  int iVar6;

  if (DAT_11520196 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_11520196 = '\x01';
  }
  if (param_2 == '\0') {
    if (param_1->___visibleState_28 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___visibleState_28,false,(MethodInfo *)0x0);
      if (param_1->___openState_29 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (param_1->___openState_29,false,(MethodInfo *)0x0);
        if (param_1->___focusCardState_30 !=
            (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                    (param_1->___focusCardState_30,false,(MethodInfo *)0x0);
          if (param_1->___menuScaleState_31 !=
              (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                      (param_1->___menuScaleState_31,1.2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    goto LAB_10a008f6;
  }
  if (param_2 != '\x01') {
    if (param_2 != '\x02') {
      return;
    }
    if (param_1->___focusCardState_30 !=
        (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___focusCardState_30,true,(MethodInfo *)0x0);
      if (param_1->___menuScaleState_31 !=
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                  (param_1->___menuScaleState_31,0.9,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_10a008f6;
  }
  if (param_1->___visibleState_28 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
  goto LAB_10a008f6;
  UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
            (param_1->___visibleState_28,true,(MethodInfo *)0x0);
  if (param_1->___openState_29 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
  goto LAB_10a008f6;
  if (param_1->___openState_29->____current_0 == ___real_00000000) {
    param_1->___menuInitState_35 = '\0';
    if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
        (pWVar1 = param_1->___master_4->___worldMaster_5,
        pWVar1 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
       (pSVar2 = pWVar1->___saveSystem_35,
       pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) goto LAB_10a008f6;
    pMVar3 = pSVar2->___currentMetaSave_14;
    iVar6 = pSVar2->___totalSaveGameCount_41;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar3,(MethodInfo *)0x0)
    ;
    if (bVar5) {
      pMVar3 = pSVar2->___currentMetaSave_14;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar3,
                         (MethodInfo *)0x0);
      if (bVar5) {
        if (pSVar2->___currentMetaSave_14 ==
            (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) goto LAB_10a008f6;
        if (pSVar2->___currentMetaSave_14->___state_18 == 8) goto LAB_10a007ef;
      }
    }
    else {
LAB_10a007ef:
      iVar6 = iVar6 + 1;
    }
    if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
        param_1->___onTotalSaveGameCountUpdate_40 ==
        (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) goto LAB_10a008f6;
    UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
              ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
               param_1->___onTotalSaveGameCountUpdate_40,iVar6,
               Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
  }
  else {
    if (param_1->___visibleState_28 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_10a008f6;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___visibleState_28,true,(MethodInfo *)0x0);
  }
  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pDVar4 = param_1->___master_4->___dim_10,
     pDVar4 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
    Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar4,1,(MethodInfo *)0x0);
    if (param_1->___openState_29 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___openState_29,true,(MethodInfo *)0x0);
      if (param_1->___focusCardState_30 !=
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                  (param_1->___focusCardState_30,false,(MethodInfo *)0x0);
        if (param_1->___menuScaleState_31 !=
            (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
          UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                    (param_1->___menuScaleState_31,1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_10a008f6:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
