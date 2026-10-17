// RVA 0x9c7c60 | Placemaker.Ui.UiMaster.<<LoadMetaSave>g__LoadMetaSaveRoutine|72_0>d$$MoveNext
// PDB: U3CU3CLoadMetaSaveU3Eg__LoadMetaSaveRoutineU7C72_0U3Ed_MoveNext_m5C63F8D257E0C787708B34EC3E6DB4713439299D
// Body: [[109c7c60, 109c7e43]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d5930 MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
// 103e6880 UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 104fac40 LoadingUi_StartLoading_m29E685E69674CDD30C94BF37F39EAB5458A784C1
// 109fe390 SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689
// 10a01980 SaveSystem_IsMetaSaveLoading_m45FDB3F00A4469483AE1F290D0FC616E050CC4FC
// 10a02840 SaveSystem_LoadSave_m51C1DA8C1A71C439CB5257B4EEEF53086EFE752C
// 10a02aa0 SaveSystem_MaybeSaveAndUnloadCurrent_mDCEEDD741F4912AD35ACD16DFCCFE73F57B5A001
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54

bool __cdecl
U3CU3CLoadMetaSaveU3Eg__LoadMetaSaveRoutineU7C72_0U3Ed_MoveNext_m5C63F8D257E0C787708B34EC3E6DB4713439299D
          (U3CU3CLoadMetaSaveU3Eg__LoadMetaSaveRoutineU7C72_0U3Ed_t00285F872887FDD33BBCD5B03B87F10919F86E0D
           *param_1,MethodInfo *param_2)

{
  int iVar1;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar2;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar3;
  MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *pMVar4;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar5;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar6;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar7;
  bool bVar8;

  if (DAT_1151ff5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ff5c = '\x01';
  }
  iVar1 = param_1->___U3CU3E1__state_0;
  pUVar2 = param_1->___U3CU3E4__this_2;
  if (iVar1 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if ((pUVar2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pUVar2->___saveMenu_6 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0)) {
      SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689
                (pUVar2->___saveMenu_6,(MethodInfo *)0x0);
      if ((pUVar2->___saveMenu_6 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0) &&
         (pMVar4 = pUVar2->___saveMenu_6->___menuMusic_24,
         pMVar4 != (MenuMusic_tCC3CECB135330E554AD36BA81ADAA963CDEA8F00 *)0x0)) {
        MenuMusic_StopPlaying_m23076D3D1D9A280E214522CB9BE38A8A7D10B65A
                  (pMVar4,0.3,(MethodInfo *)0x0);
        pMVar5 = param_1->___metaSave_3;
        if ((pUVar2->___worldMaster_5 !=
             (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
           (pSVar3 = pUVar2->___worldMaster_5->___saveSystem_35,
           pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
          pMVar6 = pSVar3->___currentMetaSave_14;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar5,
                             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar6,
                             (MethodInfo *)0x0);
          pDVar7 = pUVar2->___dim_10;
          if (bVar8) {
            if (pDVar7 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0) {
              Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar7,0,(MethodInfo *)0x0);
              return false;
            }
          }
          else if (pDVar7 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0) {
            Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar7,2,(MethodInfo *)0x0);
            if (pUVar2->___loadingUi_12 !=
                (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)0x0) {
              LoadingUi_StartLoading_m29E685E69674CDD30C94BF37F39EAB5458A784C1
                        (pUVar2->___loadingUi_12,(MethodInfo *)0x0);
              if (pUVar2->___worldMaster_5 !=
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
                pUVar2->___worldMaster_5->___awaitingDim_56 = true;
                if ((pUVar2->___worldMaster_5 !=
                     (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                   (pSVar3 = pUVar2->___worldMaster_5->___saveSystem_35,
                   pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
                  SaveSystem_MaybeSaveAndUnloadCurrent_mDCEEDD741F4912AD35ACD16DFCCFE73F57B5A001
                            (pSVar3,(MethodInfo *)0x0);
                  param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
                  param_1->___U3CU3E1__state_0 = 1;
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
    if (((pUVar2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
        (pUVar2->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0))
       && (pSVar3 = pUVar2->___worldMaster_5->___saveSystem_35,
          pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
      bVar8 = SaveSystem_IsMetaSaveLoading_m45FDB3F00A4469483AE1F290D0FC616E050CC4FC
                        (pSVar3,param_1->___metaSave_3,(MethodInfo *)0x0);
      if (bVar8) {
        param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
        param_1->___U3CU3E1__state_0 = 2;
        return true;
      }
      if ((pUVar2->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
         && (pSVar3 = pUVar2->___worldMaster_5->___saveSystem_35,
            pSVar3 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
        SaveSystem_LoadSave_m51C1DA8C1A71C439CB5257B4EEEF53086EFE752C
                  (pSVar3,param_1->___metaSave_3,(MethodInfo *)0x0);
        UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
                  (pUVar2,false,(MethodInfo *)0x0);
        return false;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
