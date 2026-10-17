// RVA 0x110e520 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs.PlayerPrefsLoadRequest.<>c__DisplayClass3_0$$<OnStarted>b__0
// PDB: U3CU3Ec__DisplayClass3_0_U3COnStartedU3Eb__0_m8F0C32459078EAD2573B3AE35E401E7E4A6D7B8C
// Body: [[1110e520, 1110e67e]]
// Direct callees:
// 1003e420 Invoke
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10c9f6b0 AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_gshared
// 1110d8d0 PlayerPrefsSaveData_Deserialize_mC36A11249B68C17892FAA67A6EC42A51B66DB85E

void __cdecl
U3CU3Ec__DisplayClass3_0_U3COnStartedU3Eb__0_m8F0C32459078EAD2573B3AE35E401E7E4A6D7B8C
          (U3CU3Ec__DisplayClass3_0_t1F2F085EA0D89A778F26BCA29C1EA62349C1768E *param_1,
          MethodInfo *param_2)

{
  ushort uVar1;
  PlayerPrefsLoadRequest_t6616BA8C95AADA3039553787E6DD69235EF81D8F *pPVar2;
  Il2CppObject *pIVar3;
  ushort uVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar7;
  PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *pPVar8;

  if (DAT_11523ead == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequest_1_Success_mA09CDC2A13E2DD7E81BAF414084735C25FFE2DFA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var)
    ;
    DAT_11523ead = '\x01';
  }
  if (param_1->___storageRequest_0 != (Il2CppObject *)0x0) {
    iVar5 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                       ,param_1->___storageRequest_0);
    pPVar2 = param_1->___U3CU3E4__this_1;
    pIVar3 = param_1->___storageRequest_0;
    if (iVar5 == 4) {
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (iVar5 = InterfaceFuncInvoker0<int>::Invoke
                            (1,
                             IAsyncRequest_t557E678C1B4AA12B82614BBB4162DDDB8B484778_il2cpp_TypeInfo_var
                             ,pIVar3),
         pPVar2 != (PlayerPrefsLoadRequest_t6616BA8C95AADA3039553787E6DD69235EF81D8F *)0x0)) {
        if (pPVar2->_padding_ == 2) {
          return;
        }
        if (pPVar2->_padding_ == 4) {
          return;
        }
        pPVar2->_padding_ = iVar5;
        pPVar2->_padding_ = 4;
        (**(code **)(pPVar2->_padding_ + 0x13c))(pPVar2,*(undefined4 *)(pPVar2->_padding_ + 0x140));
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pPVar2->_padding_ ==
            (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          return;
        }
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)pPVar2->_padding_
                   ,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pIVar3 != (Il2CppObject *)0x0) {
      uVar4 = 0;
      uVar1 = ((pIVar3->field0_0x0).klass)->interface_offsets_count;
      if (uVar1 != 0) {
        do {
          if (((pIVar3->field0_0x0).klass)->interfaceOffsets[uVar4].interfaceType ==
              IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var) {
            pVVar6 = (VirtualInvokeData *)
                     (&((pIVar3->field0_0x0).klass)->field_0xbc +
                     ((pIVar3->field0_0x0).klass)->interfaceOffsets[uVar4].offset * 8);
            goto LAB_1110e5d8;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      pVVar6 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar3,
                          IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var
                          ,0);
LAB_1110e5d8:
      pBVar7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
               (*pVVar6->methodPtr)(pIVar3,pVVar6->method);
      pPVar8 = PlayerPrefsSaveData_Deserialize_mC36A11249B68C17892FAA67A6EC42A51B66DB85E
                         (pBVar7,(MethodInfo *)0x0);
      if (pPVar2 != (PlayerPrefsLoadRequest_t6616BA8C95AADA3039553787E6DD69235EF81D8F *)0x0) {
        AsyncRequest_1_Success_m7D2AC4CEA8E454AAC7F238B498496C7A2C04303C_gshared
                  ((AsyncRequest_1_t74C8BF280D89A76E9C365212CDF4A594128C37CD *)pPVar2,
                   SUB41(pPVar8,0),
                   AsyncRequest_1_Success_mA09CDC2A13E2DD7E81BAF414084735C25FFE2DFA_RuntimeMethod_var
                  );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
