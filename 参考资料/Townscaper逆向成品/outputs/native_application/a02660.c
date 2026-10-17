// RVA 0xa02660 | Placemaker.SaveSystem$$LoadMetaSaveFromDisk
// PDB: SaveSystem_LoadMetaSaveFromDisk_m9D1FB26841AFEDA11640A9795C42A080E374EB53
// Body: [[10a02660, 10a02832]]
// Direct callees:
// 1003e330 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17b0 AxisCalibrator_get_isValid_m25146C1631F789BB711CB06CFDC49656185F63FD
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103d5e50 MetaSave_get_isSaving_mD2807EB3C36D3BCCD996AED23296922A0B30ADC3
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 10a04020 SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
SaveSystem_LoadMetaSaveFromDisk_m9D1FB26841AFEDA11640A9795C42A080E374EB53
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,MethodInfo *param_3)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  float fVar2;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar3;
  bool bVar4;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar5;
  Il2CppObject *pIVar6;
  String_t *extraout_EAX;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar7;
  String_t *pSVar8;
  float fVar9;
  String_t *pSVar10;

  if (DAT_115201ac == '\0') {
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
              ((uint *)&
                       U3CU3Ec__DisplayClass52_0_U3CLoadMetaSaveFromDiskU3Eb__0_m8145DE0A1FC53AE36E71FA5AEE206511E0F6CE2E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass52_0_t17BFD996FDACD5AC0C21A2F67D43028A6BEBDD1F_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral0A07531604DFC5598E0C41C4C4C91722891F776D);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral54BCE27A1E14F33B44731B5EAE26D6218E74F9E7);
    DAT_115201ac = '\x01';
  }
  pBVar5 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass52_0_t17BFD996FDACD5AC0C21A2F67D43028A6BEBDD1F_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar5,(MethodInfo *)0x0);
  if (pBVar5 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar5->___screenAspectRatio_1 = (float)param_2;
    (pBVar5->___referenceResolution_2).___x_0 = (float)param_1;
    if (param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      bVar4 = AxisCalibrator_get_isValid_m25146C1631F789BB711CB06CFDC49656185F63FD
                        ((AxisCalibrator_t12B3A7D897E39A8D6B763A9485C82D37762A0E2D *)param_2,
                         (MethodInfo *)0x0);
      pMVar1 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)pBVar5->___screenAspectRatio_1;
      if (bVar4) {
        if (pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
          pSVar8 = pMVar1->___path_4;
          pSVar10 = _stringLiteral54BCE27A1E14F33B44731B5EAE26D6218E74F9E7;
LAB_10a027f3:
          pSVar8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                             (pSVar10,pSVar8,(MethodInfo *)0x0);
          pOVar3 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                   pBVar5->___screenAspectRatio_1;
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                    ((Il2CppObject *)pSVar8,pOVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else if (pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
        bVar4 = MetaSave_get_isSaving_mD2807EB3C36D3BCCD996AED23296922A0B30ADC3
                          (pMVar1,(MethodInfo *)0x0);
        if (bVar4) {
          if (pBVar5->___screenAspectRatio_1 != 0.0) {
            pSVar8 = *(String_t **)((int)pBVar5->___screenAspectRatio_1 + 0xc);
            pSVar10 = _stringLiteral0A07531604DFC5598E0C41C4C4C91722891F776D;
            goto LAB_10a027f3;
          }
        }
        else {
          pIVar6 = SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
                             (param_1,(MethodInfo *)0x0);
          if ((pBVar5->___screenAspectRatio_1 != 0.0) && (pIVar6 != (Il2CppObject *)0x0)) {
            InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                      (1,
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                       ,pIVar6,*(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)
                                ((int)pBVar5->___screenAspectRatio_1 + 0xc));
            fVar2 = pBVar5->___screenAspectRatio_1;
            pBVar5->___name_0 = extraout_EAX;
            fVar9 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                              ((MethodInfo *)0x0);
            if (fVar2 != 0.0) {
              *(float *)((int)fVar2 + 0x2c) = fVar9;
              if (pBVar5->___screenAspectRatio_1 != 0.0) {
                *(String_t **)((int)pBVar5->___screenAspectRatio_1 + 0x3c) = pBVar5->___name_0;
                pSVar8 = pBVar5->___name_0;
                pOVar7 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                         il2cpp_codegen_object_new
                                   (
                                   Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                   );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          (pOVar7,(Il2CppObject *)pBVar5,
                           (int)
                           U3CU3Ec__DisplayClass52_0_U3CLoadMetaSaveFromDiskU3Eb__0_m8145DE0A1FC53AE36E71FA5AEE206511E0F6CE2E_RuntimeMethod_var
                           ,(MethodInfo *)0x0);
                if (pSVar8 != (String_t *)0x0) {
                  InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::
                  Invoke(2,
                         IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                         ,(Il2CppObject *)pSVar8,
                         (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar7);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
