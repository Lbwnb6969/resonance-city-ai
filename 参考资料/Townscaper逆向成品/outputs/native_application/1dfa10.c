// RVA 0x1dfa10 | Placemaker.SaveSystem.<>c__DisplayClass53_0$$<SaveMetaSaveToDisk>g__SaveSave|0
// PDB: U3CU3Ec__DisplayClass53_0_U3CSaveMetaSaveToDiskU3Eg__SaveSaveU7C0_m3C0F9E91E6A06211847BB588ADA31FB06B2FAE4F
// Body: [[101dfa10, 101dfd6f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 101dfd84 FUN_101dfd84
// 103974b0 XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 106ebae0 DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
// 106ebde0 DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090
// 107426b0 Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
// 1088b370 BinaryFormatter_Serialize_m780327356D3B5B1B734338AB398B32E65AD6CB5B
// 108d37d0 MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F
// 10a04020 SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E

void __cdecl
U3CU3Ec__DisplayClass53_0_U3CSaveMetaSaveToDiskU3Eg__SaveSaveU7C0_m3C0F9E91E6A06211847BB588ADA31FB06B2FAE4F
          (U3CU3Ec__DisplayClass53_0_tA404E1D2C349CD6D736063A0EECC54877C1B2CBA *param_1,bool param_2
          ,MethodInfo *param_3)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  Il2CppClass *pIVar3;
  undefined1 *puVar4;
  ushort uVar5;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *pUVar6;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  ushort uVar10;
  long64 lVar11;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 local_3c;
  Il2CppImage *local_30;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *local_2c;
  U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *local_28;
  undefined4 local_24;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *local_20;
  Il2CppClass *local_1c;
  Il2CppClass *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__U3CU3Ec__DisplayClass53_0_U3CSaveMetaSaveToDiskU3Eg__SaveSaveU7C0_m3C0F9E91E6A06211847BB588ADA31FB06B2FAE4F
  ;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  ExceptionList = &pvStack_10;
  puVar4 = &stack0xffffffb8;
  if (DAT_1151b002 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
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
                       U3CU3Ec__DisplayClass53_1_U3CSaveMetaSaveToDiskU3Eb__2_m451F6DEC218FF594541DD5A122B5E8907836A97E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass53_1_t7F21B1554E4212CF0FB688CA4336970F24FFB632_il2cpp_TypeInfo_var
              );
    DAT_1151b002 = '\x01';
    puVar4 = local_14;
  }
  local_14 = puVar4;
  local_3c.___dateData_44 = 0;
  pUVar6 = (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass53_1_t7F21B1554E4212CF0FB688CA4336970F24FFB632_il2cpp_TypeInfo_var
                     );
  local_28 = pUVar6;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            (pUVar6,(MethodInfo *)0x0);
  if (pUVar6 != (U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)0x0) {
    pUVar6->___U3CU3E4__this_2 = (ExampleScript_t8136B28DAEAEB4EBE20ED43B160950E4CA03C089 *)param_1;
    *(bool *)&pUVar6->___U3CU3E1__state_0 = param_2;
    pMVar7 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
             il2cpp_codegen_object_new
                       (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    local_20 = pMVar7;
    MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(pMVar7,(MethodInfo *)0x0);
    pMVar1 = param_1->___metaSave_0;
    local_8 = 0;
    if (pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      pSVar2 = param_1->___U3CU3E4__this_1;
      if (pMVar1->___isBin_6 == false) {
        if ((pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) ||
           (pSVar2->___saveXmlSerializer_29 ==
            (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)0x0)) goto LAB_101dfdb5;
        XmlSerializer_Serialize_m1197823DA2FA8F0BA51719C82AF294B93172BEB6
                  (pSVar2->___saveXmlSerializer_29,
                   (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar7,
                   (Il2CppObject *)pMVar1->___saveData_9,(MethodInfo *)0x0);
      }
      else {
        if ((pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) ||
           (pSVar2->___binaryFormatter_30 ==
            (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)0x0)) goto LAB_101dfdb5;
        BinaryFormatter_Serialize_m780327356D3B5B1B734338AB398B32E65AD6CB5B
                  (pSVar2->___binaryFormatter_30,
                   (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar7,
                   (Il2CppObject *)pMVar1->___saveData_9,(MethodInfo *)0x0);
      }
      local_1c = (Il2CppClass *)param_1->___metaSave_0;
      local_18 = (Il2CppClass *)
                 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      if (local_1c != (Il2CppClass *)0x0) {
        local_1c->parent = local_18;
        local_1c = (Il2CppClass *)param_1->___metaSave_0;
        if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
        }
        local_3c = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090((MethodInfo *)0x0);
        lVar11 = DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
                           (&local_3c,(MethodInfo *)0x0);
        if (local_1c != (Il2CppClass *)0x0) {
          local_1c->element_class = (Il2CppClass *)(int)lVar11;
          local_1c->castClass = (Il2CppClass *)(int)((ulonglong)lVar11 >> 0x20);
          if (param_1->___U3CU3E4__this_1 !=
              (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
            local_18 = (Il2CppClass *)
                       SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
                                 (param_1->___U3CU3E4__this_1,(MethodInfo *)0x0);
            if (((param_1->___metaSave_0 !=
                  (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
                (local_30 = (Il2CppImage *)param_1->___metaSave_0->___path_4,
                pMVar7 != (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)0x0)) &&
               (local_2c = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                           (**(code **)(pMVar7->_padding_ + 0x1cc))
                                     (pMVar7,*(undefined4 *)(pMVar7->_padding_ + 0x1d0)),
               local_18 != (Il2CppClass *)0x0)) {
              local_1c = ((Il2CppObject_u_0 *)&local_18->image)->klass;
              uVar10 = 0;
              local_24 = 0;
              if (local_1c->interface_offsets_count != 0) {
                do {
                  pUVar6 = local_28;
                  if (local_1c->interfaceOffsets[uVar10].interfaceType ==
                      IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                     ) {
                    pVVar8 = (VirtualInvokeData *)
                             &(&local_1c[1].byval_arg)[local_1c->interfaceOffsets[uVar10].offset].
                              attrs;
                    goto LAB_101dfc6f;
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar10 < local_1c->interface_offsets_count);
              }
              pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                                 ((Il2CppObject *)local_18,
                                  IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                                  ,3);
LAB_101dfc6f:
              pIVar9 = (Il2CppObject *)
                       (*pVVar8->methodPtr)(local_18,local_30,local_2c,pVVar8->method);
              pUVar6->___U3CU3E2__current_1 = pIVar9;
              pSVar2 = param_1->___U3CU3E4__this_1;
              if (pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
                local_30 = (Il2CppImage *)pSVar2->___activeRequestsCounter_39;
                pSVar2->___activeRequestsCounter_39 =
                     (int)((int)&((String_t *)local_30)->_padding_ + 1);
                if ((param_1->___U3CU3E4__this_1 !=
                     (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) &&
                   ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
                    pSVar2->___onSaveRequestCountChange_38 !=
                    (Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)0x0)) {
                  Action_2_Invoke_m559D51ED807DC96F41CB2A2812DBD8BAA5BB05D9_gshared
                            ((Action_2_tD74D55DD49962060A2B8FEC37411262210893E81 *)
                             pSVar2->___onSaveRequestCountChange_38,(int)local_30,
                             param_1->___U3CU3E4__this_1->___activeRequestsCounter_39,
                             Action_2_Invoke_mBC46D443D51E9B6EFF8735B5586E955DE28F8670_RuntimeMethod_var
                            );
                  pIVar3 = (Il2CppClass *)pUVar6->___U3CU3E2__current_1;
                  local_18 = pIVar3;
                  local_2c = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                             il2cpp_codegen_object_new
                                       (
                                       Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var
                                       );
                  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                            (local_2c,(Il2CppObject *)pUVar6,
                             (int)
                             U3CU3Ec__DisplayClass53_1_U3CSaveMetaSaveToDiskU3Eb__2_m451F6DEC218FF594541DD5A122B5E8907836A97E_RuntimeMethod_var
                             ,(MethodInfo *)0x0);
                  if (pIVar3 != (Il2CppClass *)0x0) {
                    local_30 = local_18->image;
                    uVar5 = 0;
                    uVar10 = *(ushort *)((int)&local_30[4].name + 2);
                    if (uVar10 != 0) {
                      do {
                        if (*(Il2CppClass **)(local_30[2].name + (uint)uVar5 * 8) ==
                            IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                           ) {
                          pVVar8 = (VirtualInvokeData *)
                                   (&local_30[4].nameToClassHashTable +
                                   *(int *)(local_30[2].name + (uint)uVar5 * 8 + 4) * 2);
                          goto LAB_101dfd34;
                        }
                        uVar5 = uVar5 + 1;
                      } while (uVar5 < uVar10);
                    }
                    pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                                       ((Il2CppObject *)local_18,
                                        IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                                        ,2);
LAB_101dfd34:
                    (*pVVar8->methodPtr)(local_18,local_2c,pVVar8->method);
                    FUN_101dfd84();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_101dfdb5:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
