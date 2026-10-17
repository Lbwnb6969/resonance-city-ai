// RVA 0xa034d0 | Placemaker.SaveSystem$$SaveSettings
// PDB: SaveSystem_SaveSettings_mA12260ACC994B4275980C086DFF5B7EAB9A02B6F
// Body: [[10a034d0, 10a036cb]]
// Direct callees:
// 1003e330 Invoke
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103974b0 XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 107426b0 Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
// 108d37d0 MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F
// 10a036e0 FUN_10a036e0
// 10a04020 SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E

void __cdecl
SaveSystem_SaveSettings_mA12260ACC994B4275980C086DFF5B7EAB9A02B6F
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  int iVar1;
  Il2CppClass *pIVar2;
  int iVar3;
  String_t *pSVar4;
  ushort uVar5;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar6;
  Il2CppObject *pIVar7;
  undefined4 uVar8;
  VirtualInvokeData *pVVar9;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar10;
  float fVar11;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__SaveSystem_SaveSettings_mA12260ACC994B4275980C086DFF5B7EAB9A02B6F;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_115201ae == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       SaveSystem_U3CSaveSettingsU3Eb__54_0_m28402B423354C904F27A651FAB6574C85AE1BD3D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B);
    DAT_115201ae = '\x01';
  }
  pMVar6 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
           il2cpp_codegen_object_new
                     (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
  MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(pMVar6,(MethodInfo *)0x0);
  local_8 = 0;
  if (param_1->___settingsXmlSerializer_28 !=
      (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)0x0) {
    XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
              (param_1->___settingsXmlSerializer_28,
               (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar6,
               (Il2CppObject *)param_1->___settingsData_10,(MethodInfo *)0x0);
    pIVar7 = SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
                       (param_1,(MethodInfo *)0x0);
    if (pMVar6 != (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0) {
      uVar8 = (**(code **)(pMVar6->_padding_ + 0x1cc))
                        (pMVar6,*(undefined4 *)(pMVar6->_padding_ + 0x1d0));
      pSVar4 = _stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B;
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar2 = (pIVar7->field0_0x0).klass;
        uVar5 = 0;
        if (pIVar2->interface_offsets_count != 0) {
          do {
            if (pIVar2->interfaceOffsets[uVar5].interfaceType ==
                IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var) {
              pVVar9 = (VirtualInvokeData *)
                       &(&pIVar2[1].byval_arg)[pIVar2->interfaceOffsets[uVar5].offset].attrs;
              goto LAB_10a0361d;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < pIVar2->interface_offsets_count);
        }
        pVVar9 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar7,
                            IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                            ,3);
LAB_10a0361d:
        pIVar7 = (Il2CppObject *)(*pVVar9->methodPtr)(pIVar7,pSVar4,uVar8,pVVar9->method);
        iVar3 = param_1->___activeRequestsCounter_39;
        param_1->___saveSettingsRequest_37 = pIVar7;
        iVar1 = iVar3 + 1;
        param_1->___activeRequestsCounter_39 = iVar1;
        if ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
            param_1->___onSaveRequestCountChange_38 !=
            (Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)0x0) {
          Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
                    ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
                     param_1->___onSaveRequestCountChange_38,iVar3,iVar1,
                     Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var);
          pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                    il2cpp_codegen_object_new
                              (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var)
          ;
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar10,(Il2CppObject *)param_1,
                     (int)
                     SaveSystem_U3CSaveSettingsU3Eb__54_0_m28402B423354C904F27A651FAB6574C85AE1BD3D_RuntimeMethod_var
                     ,(MethodInfo *)0x0);
          if (pIVar7 != (Il2CppObject *)0x0) {
            InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                      (2,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                       ,pIVar7,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)pOVar10);
            fVar11 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
                               ((MethodInfo *)0x0);
            param_1->___settingsSaveTime_12 = fVar11;
            FUN_10a036e0();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
