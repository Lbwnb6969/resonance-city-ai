// RVA 0xa010a0 | Placemaker.SaveSystem$$DeleteMetaSaveFromDisk
// PDB: SaveSystem_DeleteMetaSaveFromDisk_m1DB3D4B0837047F7FC222DD4727D44D574F95E5A
// Body: [[10a010a0, 10a012d0]]
// Direct callees:
// 1003e330 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103f83d0 WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
// 103f85b0 WorldMaster_New_m6D194A42E9400FC8A1181307F2BB765853893698
// 107426b0 Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
// 109fdb90 SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
// 10a00fa0 SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
// 10a04020 SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

bool __cdecl
SaveSystem_DeleteMetaSaveFromDisk_m1DB3D4B0837047F7FC222DD4727D44D574F95E5A
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,bool *param_3,
          MethodInfo *param_4)

{
  int iVar1;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar2;
  int iVar3;
  bool bVar4;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar5;
  Il2CppObject *pIVar6;
  String_t *extraout_EAX;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar7;
  String_t *pSVar8;

  if (DAT_115201b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass63_0_U3CDeleteMetaSaveFromDiskU3Eb__0_m79626544102CAEBCB70B2AA9F7B8C060F2C1D38A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass63_0_tE547166A9E3B742EB118E9EE4F75022EB5A9E5AA_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral01ECDB0D5566FD79C96388E2FA5F62D4105E6C2F);
    DAT_115201b3 = '\x01';
  }
  pBVar5 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass63_0_tE547166A9E3B742EB118E9EE4F75022EB5A9E5AA_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar5,(MethodInfo *)0x0);
  if (pBVar5 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar5->___screenAspectRatio_1 = (float)param_1;
    *param_3 = false;
    if (param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      if (param_2->___existsOnDisk_13 == false) {
        pSVar8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                           (_stringLiteral01ECDB0D5566FD79C96388E2FA5F62D4105E6C2F,
                            param_2->___path_4,(MethodInfo *)0x0);
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                  ((Il2CppObject *)pSVar8,
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,(MethodInfo *)0x0);
        return false;
      }
      pMVar2 = param_1->___currentMetaSave_14;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                         (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar2,
                         (MethodInfo *)0x0);
      *param_3 = bVar4;
      if (bVar4) {
        param_1->___currentMetaSave_14 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0;
        if (param_1->___worldMaster_4 ==
            (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) goto LAB_10a012cc;
        WorldMaster_New_m6D194A42E9400FC8A1181307F2BB765853893698
                  (param_1->___worldMaster_4,param_2->___saveData_9,(MethodInfo *)0x0);
        if (param_1->___worldMaster_4 ==
            (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) goto LAB_10a012cc;
        WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
                  (param_1->___worldMaster_4,param_2->___saveData_9,(MethodInfo *)0x0);
      }
      pIVar6 = SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
                         (param_1,(MethodInfo *)0x0);
      if (pIVar6 != (Il2CppObject *)0x0) {
        InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                  (5,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                   ,pIVar6,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)param_2->___path_4);
        pBVar5->___name_0 = extraout_EAX;
        iVar3 = param_1->___activeRequestsCounter_39;
        iVar1 = iVar3 + 1;
        param_1->___activeRequestsCounter_39 = iVar1;
        if ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
            param_1->___onSaveRequestCountChange_38 !=
            (Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)0x0) {
          Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
                    ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
                     param_1->___onSaveRequestCountChange_38,iVar3,iVar1,
                     Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var);
          pSVar8 = pBVar5->___name_0;
          pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar7,(Il2CppObject *)pBVar5,
                     (int)
                     U3CU3Ec__DisplayClass63_0_U3CDeleteMetaSaveFromDiskU3Eb__0_m79626544102CAEBCB70B2AA9F7B8C060F2C1D38A_RuntimeMethod_var
                     ,(MethodInfo *)0x0);
          if (pSVar8 != (String_t *)0x0) {
            InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                      (2,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                       ,(Il2CppObject *)pSVar8,
                       (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar7);
            SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
                      (param_1,param_2,0x80,(MethodInfo *)0x0);
            if (param_2->___saveData_9 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)
            {
              SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
                        (param_2->___saveData_9,(MethodInfo *)0x0);
              return true;
            }
          }
        }
      }
    }
  }
LAB_10a012cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
