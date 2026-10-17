// RVA 0x3e50e0 | Placemaker.Ui.UiMaster$$AddMenuStateState
// PDB: UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
// Body: [[103e50e0, 103e51ef]]
// Direct callees:
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10325a00 UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
UiMaster_AddMenuStateState_m397266B42DBFECE978AE7E1BDD387A123A21C84E
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,
          UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *param_2,int param_3,
          MethodInfo *param_4)

{
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar3;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar4;

  if (DAT_1151c8b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass70_0_U3CAddMenuStateStateU3Eb__0_mAC2C4BAD9B56F224BB7DCCEB678A408C28BEE510_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass70_0_t527D4378151BCCA0802646BAE9A955621E27904D_il2cpp_TypeInfo_var
              );
    DAT_1151c8b2 = '\x01';
  }
  pBVar1 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass70_0_t527D4378151BCCA0802646BAE9A955621E27904D_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar1,(MethodInfo *)0x0);
  if (pBVar1 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar1->___name_0 = (String_t *)param_1;
    pBVar1->___screenAspectRatio_1 = (float)param_3;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,(Il2CppObject *)pBVar1,
               (int)
               U3CU3Ec__DisplayClass70_0_U3CAddMenuStateStateU3Eb__0_mAC2C4BAD9B56F224BB7DCCEB678A408C28BEE510_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (param_2 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      if (DAT_1151c8cf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        DAT_1151c8cf = '\x01';
      }
      if (pOVar2 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        UnityAction_1_Invoke_m2BCE3E687DD62E352139131BB1AD26D8AA444E77_gshared
                  ((UnityAction_1_t50101DC7058B3235A520FF57E827D51694843FBB *)pOVar2,
                   param_2->____target_1,
                   Action_1_Invoke_mB4E4B9A52AFDB6F7EF89A35E53068E836B1C312E_RuntimeMethod_var);
        pAVar3 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                           ((Delegate_t *)param_2->___onTargetChange_4,(Delegate_t *)pOVar2,
                            (MethodInfo *)0x0);
        pAVar4 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
        if (pAVar3 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
          if (*(Il2CppClass **)pAVar3 ==
              Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
            pAVar4 = pAVar3;
          }
          if (pAVar4 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
                    /* WARNING: Subroutine does not return */
            RaiseInvalidCastException
                      ((Il2CppObject *)pAVar3,
                       Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
          }
        }
        param_2->___onTargetChange_4 = pAVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
