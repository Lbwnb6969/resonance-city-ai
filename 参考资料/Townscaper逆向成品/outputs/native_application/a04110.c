// RVA 0xa04110 | Placemaker.Ui.SavingIndicator$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: SavingIndicator_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m946AED7EB39B24A58345B8E3B1E61EDC697EE77D
// Body: [[10a04110, 10a041ba]]
// Direct callees:
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
SavingIndicator_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_m946AED7EB39B24A58345B8E3B1E61EDC697EE77D
          (SavingIndicator_t9457FAD85DE82B04815367EDBC5F215E699471B7 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;
  Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *pAVar3;
  Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *pAVar4;

  if (DAT_115201be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2__ctor_m6AD878BD1A45383811124F75EC4A9232238CC765_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       SavingIndicator_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m8D7D3F471FC2EC3875E8EEB51D0EE6D5E05231FB_RuntimeMethod_var
              );
    DAT_115201be = '\x01';
  }
  if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    if ((param_2->___worldMaster_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
       && (pSVar1 = param_2->___worldMaster_5->___saveSystem_35,
          pSVar1 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) {
      pAVar4 = pSVar1->___onSaveRequestCountChange_38;
      pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar2,(Il2CppObject *)param_1,
                 (int)
                 SavingIndicator_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__4_0_m8D7D3F471FC2EC3875E8EEB51D0EE6D5E05231FB_RuntimeMethod_var
                 ,Action_2__ctor_m6AD878BD1A45383811124F75EC4A9232238CC765_RuntimeMethod_var);
      pAVar3 = (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)
               Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                         ((Delegate_t *)pAVar4,(Delegate_t *)pOVar2,(MethodInfo *)0x0);
      pAVar4 = (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)0x0;
      if (pAVar3 != (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)0x0) {
        if (*(Il2CppClass **)pAVar3 ==
            Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39_il2cpp_TypeInfo_var) {
          pAVar4 = pAVar3;
        }
        if (pAVar4 == (Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39 *)0x0) {
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pAVar3,
                     Action_2_tCC1DAEC9EBDBAB5891B0CF72C24B016C610EFF39_il2cpp_TypeInfo_var);
        }
      }
      pSVar1->___onSaveRequestCountChange_38 = pAVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
