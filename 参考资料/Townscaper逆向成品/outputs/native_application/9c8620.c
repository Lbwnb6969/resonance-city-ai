// RVA 0x9c8620 | Placemaker.Ui.UiMaster.<<StartNew>g__Routine|73_0>d$$MoveNext
// PDB: U3CU3CStartNewU3Eg__RoutineU7C73_0U3Ed_MoveNext_m1EDF113FD0ABEE967E0F35C252A0103ADC67A4A5
// Body: [[109c8620, 109c875f]]
// Direct callees:
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e6880 UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
// 103f83d0 WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
// 103f84d0 WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416
// 104c46e0 Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// 104ee9c0 KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428
// 104fac40 LoadingUi_StartLoading_m29E685E69674CDD30C94BF37F39EAB5458A784C1
// 109fe390 SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689
// 10a02aa0 SaveSystem_MaybeSaveAndUnloadCurrent_mDCEEDD741F4912AD35ACD16DFCCFE73F57B5A001

bool __cdecl
U3CU3CStartNewU3Eg__RoutineU7C73_0U3Ed_MoveNext_m1EDF113FD0ABEE967E0F35C252A0103ADC67A4A5
          (U3CU3CStartNewU3Eg__RoutineU7C73_0U3Ed_t6ACA15295957A15C1D212E506345D7793C3B1274 *param_1
          ,MethodInfo *param_2)

{
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar3;
  U3CU3CStartNewU3Eg__RoutineU7C73_0U3Ed_t6ACA15295957A15C1D212E506345D7793C3B1274 *pUVar4;
  Il2CppObject *pIVar5;

  if (DAT_1151ff5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
    DAT_1151ff5d = '\x01';
  }
  pUVar4 = param_1;
  pUVar1 = param_1->___U3CU3E4__this_2;
  if (param_1->___U3CU3E1__state_0 == 0) {
    param_1->___U3CU3E1__state_0 = -1;
    if ((pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pUVar1->___saveMenu_6 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0)) {
      SaveMenu_Close_m439117553CBE888366A6872FA9B75CD6233BE689
                (pUVar1->___saveMenu_6,(MethodInfo *)0x0);
      if (pUVar1->___sideMenu_8 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0) {
        KeyboardControlsMenu_DarkenerClicked_mD8C47D0735D72B4ED505E2B0B6CFD30E3AAE7428
                  ((KeyboardControlsMenu_t8A1421617C595C06F6BA074D899E4D4C458562D2 *)
                   pUVar1->___sideMenu_8,(MethodInfo *)0x0);
        if (pUVar1->___dim_10 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0) {
          Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
                    (pUVar1->___dim_10,2,(MethodInfo *)0x0);
          if (pUVar1->___loadingUi_12 != (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)0x0)
          {
            LoadingUi_StartLoading_m29E685E69674CDD30C94BF37F39EAB5458A784C1
                      (pUVar1->___loadingUi_12,(MethodInfo *)0x0);
            if (pUVar1->___worldMaster_5 !=
                (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
              pUVar1->___worldMaster_5->___awaitingDim_56 = true;
              if ((pUVar1->___worldMaster_5 !=
                   (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                 (pSVar2 = pUVar1->___worldMaster_5->___saveSystem_35,
                 pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
                SaveSystem_MaybeSaveAndUnloadCurrent_mDCEEDD741F4912AD35ACD16DFCCFE73F57B5A001
                          (pSVar2,(MethodInfo *)0x0);
                param_1 = (U3CU3CStartNewU3Eg__RoutineU7C73_0U3Ed_t6ACA15295957A15C1D212E506345D7793C3B1274
                           *)CONCAT13(1,param_1._0_3_);
                pIVar5 = il2cpp_value_box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var
                                          ,(void *)((int)&param_1 + 3));
                pUVar4->___U3CU3E2__current_1 = pIVar5;
                pUVar4->___U3CU3E1__state_0 = 1;
                return true;
              }
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
    if ((pUVar1 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pUVar1->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
      WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416
                (pUVar1->___worldMaster_5,(MethodInfo *)0x0);
      pWVar3 = pUVar1->___worldMaster_5;
      if (pWVar3 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
        WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
                  (pWVar3,pWVar3->___saveData_42,(MethodInfo *)0x0);
        UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
                  (pUVar1,true,(MethodInfo *)0x0);
        return false;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
