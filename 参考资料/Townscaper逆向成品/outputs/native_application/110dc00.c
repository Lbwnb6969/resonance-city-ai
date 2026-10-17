// RVA 0x110dc00 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs.PlayerPrefsSaveData$$Serialize
// PDB: PlayerPrefsSaveData_Serialize_mBC2520BFDA671917EB5024227F23426B33F5EF19
// Body: [[1110dc00, 1110ded9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10227190 Dictionary_2_get_Count_m6A7A33F843EE80A92C4420333A1B1B3DF9FCF2AB_gshared
// 1088ec50 BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A
// 108d37d0 MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F
// 10cbfaf0 Enumerator_MoveNext_m1ED9D5A12250292CC7E7E177B6E93A7BE75666D6_gshared
// 10cf86d0 Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
// 1110df04 FUN_1110df04

ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 * __cdecl
PlayerPrefsSaveData_Serialize_mBC2520BFDA671917EB5024227F23426B33F5EF19
          (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *param_1,
          MethodInfo *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar3;
  BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *pBVar4;
  int iVar5;
  Enumerator_t422CDF583628437EEE8599A7AA3F52CA93612E67 *pEVar6;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar7;
  Enumerator_t422CDF583628437EEE8599A7AA3F52CA93612E67 local_b8;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  Enumerator_t54367390A3FB0D43F31086A16C260B79BBB96DF2 local_5c;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_28;
  BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *local_24;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *local_20;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__PlayerPrefsSaveData_Serialize_mBC2520BFDA671917EB5024227F23426B33F5EF19;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff3c;
  ExceptionList = &pvStack_10;
  puVar1 = &stack0xffffff3c;
  if (DAT_11523eaa == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_GetEnumerator_m524E23D0E02E562EDEDBDD41E210E2317CE6736E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_GetEnumerator_m8B6AA635B44D503B18DA8CBE687DBB22DC31ADFC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Count_m340FC2A63B0122FED63981CC2D726CF6DE55D24D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Count_m7A45EF18D1A0035548369B0D104CB5E5987A6498_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m998C92179FD2E853E3BDAB3E5CBAA0DA2BABE635_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mE2B5F21791CF76ABC3BCFA182EAB8B16F6E2473B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m2C220C4A7A003AB9E79EE36007D07E427BE730E4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m442126BD754C1F26966D665F47F891C0F9575597_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m18C8F5BE067EC77B8578C0B88B9FCA4E3093C3A7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_mAC8B149E773F1DDD5C3AD0D4F0C7AB4CC532A40E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Key_m5E831B35EC7E950F3307243B5786AEC669006B95_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Key_mFD87BF348140D607E2DECE1796A8926CD321EC2A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Value_m04DDE1FEEC412606D39C578581193C732613A762_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Value_mB2ADD99AD31CC1383AE32C27A4A8AEBBAA0A5A21_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    DAT_11523eaa = '\x01';
    puVar1 = local_14;
  }
  local_14 = puVar1;
  local_44 = 0;
  local_5c.___current_3.___value_1 = 0;
  local_5c.___getEnumeratorRetType_4 = 0;
  local_5c.___dictionary_0 = (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)0x0;
  local_5c.___version_1 = 0;
  local_5c.___index_2 = 0;
  local_5c.___current_3.___key_0 = (Il2CppObject *)0x0;
  local_18 = 0;
  local_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_28 = 0;
  local_64 = 0;
  local_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  local_7c = 0;
  pMVar3 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
           il2cpp_codegen_object_new
                     (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
  local_1c = pMVar3;
  MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(pMVar3,(MethodInfo *)0x0);
  local_8 = 0;
  local_20 = pMVar3;
  pBVar4 = (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *)
           il2cpp_codegen_object_new
                     (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F_il2cpp_TypeInfo_var);
  BinaryWriter__ctor_mC6F89939E04734FBEEA375D7E0FF9C042E4AB71A
            (pBVar4,(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar3,(MethodInfo *)0x0);
  local_8._0_1_ = 1;
  local_24 = pBVar4;
  if ((param_1 != (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0) &&
     ((Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)param_1->___savedInt_0 !=
      (Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)0x0)) {
    iVar5 = Dictionary_2_get_Count_m6A7A33F843EE80A92C4420333A1B1B3DF9FCF2AB_gshared
                      ((Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)
                       param_1->___savedInt_0,
                       Dictionary_2_get_Count_m340FC2A63B0122FED63981CC2D726CF6DE55D24D_RuntimeMethod_var
                      );
    if (pBVar4 != (BinaryWriter_t70074014C7FE27CD9F7500C3F02C4AB61D35554F *)0x0) {
      (**(code **)(pBVar4->_padding_ + 0x13c))
                (pBVar4,iVar5,*(undefined4 *)(pBVar4->_padding_ + 0x140));
      if ((Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)param_1->___savedFloat_1 !=
          (Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)0x0) {
        iVar5 = Dictionary_2_get_Count_m6A7A33F843EE80A92C4420333A1B1B3DF9FCF2AB_gshared
                          ((Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)
                           param_1->___savedFloat_1,
                           Dictionary_2_get_Count_m7A45EF18D1A0035548369B0D104CB5E5987A6498_RuntimeMethod_var
                          );
        (**(code **)(pBVar4->_padding_ + 0x13c))
                  (pBVar4,iVar5,*(undefined4 *)(pBVar4->_padding_ + 0x140));
        if ((Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)param_1->___savedString_2 !=
            (Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)0x0) {
          iVar5 = Dictionary_2_get_Count_m6A7A33F843EE80A92C4420333A1B1B3DF9FCF2AB_gshared
                            ((Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)
                             param_1->___savedString_2,
                             Dictionary_2_get_Count_m0D12A8E922828B1FBE6FCA8D404FDA65E0F78CDA_RuntimeMethod_var
                            );
          (**(code **)(pBVar4->_padding_ + 0x13c))
                    (pBVar4,iVar5,*(undefined4 *)(pBVar4->_padding_ + 0x140));
          if ((Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *)param_1->___savedInt_0 !=
              (Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *)0x0) {
            pEVar6 = Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
                               (&local_b8,
                                (Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *)
                                param_1->___savedInt_0,
                                Dictionary_2_GetEnumerator_m524E23D0E02E562EDEDBDD41E210E2317CE6736E_RuntimeMethod_var
                               );
            local_5c.___dictionary_0 =
                 (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 *)pEVar6->___dictionary_0;
            local_5c.___version_1 = pEVar6->___version_1;
            local_5c.___index_2 = pEVar6->___index_2;
            local_5c.___current_3.___key_0 = *(Il2CppObject **)&pEVar6->___current_3;
            local_5c._16_8_ = *(undefined8 *)&(pEVar6->___current_3).___value_1;
            local_8._0_1_ = 2;
            while( true ) {
              bVar2 = Enumerator_MoveNext_m1ED9D5A12250292CC7E7E177B6E93A7BE75666D6_gshared
                                (&local_5c,
                                 Enumerator_MoveNext_m2C220C4A7A003AB9E79EE36007D07E427BE730E4_RuntimeMethod_var
                                );
              if (!bVar2) break;
              iVar5 = local_5c.___current_3.___value_1;
              (**(code **)(pBVar4->_padding_ + 0x164))
                        (pBVar4,local_5c.___current_3.___key_0,
                         *(undefined4 *)(pBVar4->_padding_ + 0x168));
              (**(code **)(pBVar4->_padding_ + 0x13c))
                        (pBVar4,iVar5,*(undefined4 *)(pBVar4->_padding_ + 0x140));
            }
            local_38 = 0x89;
            local_28 = 1;
            local_8 = CONCAT31(local_8._1_3_,1);
            pBVar7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)FUN_1110df04();
            return pBVar7;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
