// RVA 0x1e0080 | Placemaker.SaveSystem.<>c__DisplayClass63_0$$<DeleteMetaSaveFromDisk>b__0
// PDB: U3CU3Ec__DisplayClass63_0_U3CDeleteMetaSaveFromDiskU3Eb__0_m79626544102CAEBCB70B2AA9F7B8C060F2C1D38A
// Body: [[101e0080, 101e0156]]
// Direct callees:
// 1003e420 Invoke
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
// 107426b0 Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared

void __cdecl
U3CU3Ec__DisplayClass63_0_U3CDeleteMetaSaveFromDiskU3Eb__0_m79626544102CAEBCB70B2AA9F7B8C060F2C1D38A
          (U3CU3Ec__DisplayClass63_0_tE547166A9E3B742EB118E9EE4F75022EB5A9E5AA *param_1,
          MethodInfo *param_2)

{
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar1;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar2;
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar3;
  UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *pUVar4;
  int iVar5;

  if (DAT_1151b005 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    DAT_1151b005 = '\x01';
  }
  if (param_1->___request_0 == (Il2CppObject *)0x0) goto LAB_101e0152;
  iVar5 = InterfaceFuncInvoker0<int>::Invoke
                    (0,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var,
                     param_1->___request_0);
  if (iVar5 == 2) {
    pSVar1 = param_1->___U3CU3E4__this_1;
    if ((((pSVar1 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) ||
         (pSVar1->___worldMaster_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0))
        || (pUVar2 = pSVar1->___worldMaster_4->___uiMaster_4,
           pUVar2 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) ||
       (pSVar3 = pUVar2->___saveMenu_6,
       pSVar3 == (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0)) goto LAB_101e0152;
    pUVar4 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
             pSVar3->___onTotalSaveGameCountUpdate_40;
    iVar5 = pSVar1->___totalSaveGameCount_41 + -1;
    pSVar1->___totalSaveGameCount_41 = iVar5;
    if (pUVar4 == (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) goto LAB_101e0152;
    UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
              (pUVar4,iVar5,
               Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
  }
  pSVar1 = param_1->___U3CU3E4__this_1;
  if (pSVar1 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
    iVar5 = pSVar1->___activeRequestsCounter_39;
    pSVar1->___activeRequestsCounter_39 = iVar5 + -1;
    if ((param_1->___U3CU3E4__this_1 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)
       && ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
           pSVar1->___onSaveRequestCountChange_38 !=
           (Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)0x0)) {
      Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
                ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
                 pSVar1->___onSaveRequestCountChange_38,iVar5,
                 param_1->___U3CU3E4__this_1->___activeRequestsCounter_39,
                 Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var);
      return;
    }
  }
LAB_101e0152:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
