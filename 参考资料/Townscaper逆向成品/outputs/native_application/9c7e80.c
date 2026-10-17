// RVA 0x9c7e80 | Placemaker.Ui.UiMaster.<>c__DisplayClass74_0.<<LoadString>g__Routine|0>d$$MoveNext
// PDB: U3CU3CLoadStringU3Eg__RoutineU7C0U3Ed_MoveNext_m1503336828D8070F6617A4067A6ABA334B80618A
// Body: [[109c7e80, 109c7fa8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e6880 UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
// 103f83d0 WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 104fac40 LoadingUi_StartLoading_m29E685E69674CDD30C94BF37F39EAB5458A784C1
// 109fe390 SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689
// 10a02aa0 SaveSystem_MaybeSaveAndUnloadCurrent_mDCEEDD741F4912AD35ACD16DFCCFE73F57B5A001

bool __cdecl
U3CU3CLoadStringU3Eg__RoutineU7C0U3Ed_MoveNext_m1503336828D8070F6617A4067A6ABA334B80618A
          (U3CU3CLoadStringU3Eg__RoutineU7C0U3Ed_tDA2BEFE1BE8FC3FA2B63971766035040697CD010 *param_1,
          MethodInfo *param_2)

{
  U3CU3Ec__DisplayClass74_0_tFBA021529326D7C7753D1F662704FA392D67AD69 *pUVar1;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar2;
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar3;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar4;
  LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *pLVar5;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar6;

  pUVar1 = param_1->___U3CU3E4__this_2;
  if (param_1->___U3CU3E1__state_0 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if (((pUVar1 != (U3CU3Ec__DisplayClass74_0_tFBA021529326D7C7753D1F662704FA392D67AD69 *)0x0) &&
        (pUVar1->___U3CU3E4__this_0 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0))
       && (pWVar2 = pUVar1->___U3CU3E4__this_0->___worldMaster_5,
          pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
      pWVar2->___awaitingDim_56 = true;
      if ((pUVar1->___U3CU3E4__this_0 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
         && (pSVar3 = pUVar1->___U3CU3E4__this_0->___saveMenu_6,
            pSVar3 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0)) {
        SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689(pSVar3,(MethodInfo *)0x0);
        if ((pUVar1->___U3CU3E4__this_0 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0
            ) && (pDVar4 = pUVar1->___U3CU3E4__this_0->___dim_10,
                 pDVar4 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0)) {
          Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7(pDVar4,2,(MethodInfo *)0x0);
          if ((pUVar1->___U3CU3E4__this_0 !=
               (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pLVar5 = pUVar1->___U3CU3E4__this_0->___loadingUi_12,
             pLVar5 != (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)0x0)) {
            LoadingUi_StartLoading_m29E685E69674CDD30C94BF37F39EAB5458A784C1
                      (pLVar5,(MethodInfo *)0x0);
            if ((pUVar1->___U3CU3E4__this_0 !=
                 (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
               ((pWVar2 = pUVar1->___U3CU3E4__this_0->___worldMaster_5,
                pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0 &&
                (pSVar6 = pWVar2->___saveSystem_35,
                pSVar6 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)))) {
              SaveSystem_MaybeSaveAndUnloadCurrent_mDCEEDD741F4912AD35ACD16DFCCFE73F57B5A001
                        (pSVar6,(MethodInfo *)0x0);
              param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
              param_1->___U3CU3E1__state_0 = 1;
              return true;
            }
          }
        }
      }
    }
  }
  else {
    if (param_1->___U3CU3E1__state_0 != 1) {
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
    if (((pUVar1 != (U3CU3Ec__DisplayClass74_0_tFBA021529326D7C7753D1F662704FA392D67AD69 *)0x0) &&
        (pUVar1->___U3CU3E4__this_0 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0))
       && (pWVar2 = pUVar1->___U3CU3E4__this_0->___worldMaster_5,
          pWVar2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
      WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
                (pWVar2,pUVar1->___saveData_1,(MethodInfo *)0x0);
      if (pUVar1->___U3CU3E4__this_0 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
                  (pUVar1->___U3CU3E4__this_0,false,(MethodInfo *)0x0);
        return false;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
