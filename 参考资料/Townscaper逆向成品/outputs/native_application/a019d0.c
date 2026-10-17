// RVA 0xa019d0 | Placemaker.SaveSystem$$IterateBoot
// PDB: SaveSystem_IterateBoot_m12257295A8C85C13BC8AFA52D97B127F2D733B49
// Body: [[10a019d0, 10a01c25]]
// Direct callees:
// 1003e330 Invoke
// 1003e420 Invoke
// 1003e6d0 IsInstClass
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10396d40 XmlSerializer_Deserialize_m25B138EB9DFEAC76221ED87D8FDFBE31A7136AD5
// 108d3410 MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2
// 10a01c4a FUN_10a01c4a
// 10a0200b FUN_10a0200b
// 10a04020 SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E

/* WARNING: Removing unreachable block (ram,0x10a0201c) */

bool __cdecl
SaveSystem_IterateBoot_m12257295A8C85C13BC8AFA52D97B127F2D733B49
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *param_2,MethodInfo *param_3)

{
  Il2CppClass *pIVar1;
  SaveDataScripableObject_t8C2A689399689CB35C43214E3E43F07C2AD765FC *pSVar2;
  undefined1 uVar3;
  bool bVar4;
  ushort uVar5;
  Il2CppObject *extraout_EAX;
  VirtualInvokeData *pVVar6;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar7;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar8;
  Il2CppObject *extraout_EAX_00;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar9;
  int iVar10;
  String_t *pSVar11;
  Il2CppObject *pIVar12;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar13;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__SaveSystem_IterateBoot_m12257295A8C85C13BC8AFA52D97B127F2D733B49;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_115201a9 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9F6011CA64D6E9B865FE3834ACBA34A57111CE95);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralED4FFBABF3A4AC579241FDC66A0129182E363552);
    DAT_115201a9 = '\x01';
  }
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  switch(param_1->___bootState_6) {
  case 0:
    if (param_1->___boolRequest_36 == (Il2CppObject *)0x0) {
      pIVar12 = SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
                          (param_1,(MethodInfo *)0x0);
      pAVar13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                _stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B;
joined_r0x10a01e9d:
      if (pIVar12 == (Il2CppObject *)0x0) {
LAB_10a02024:
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (6,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var,
                 pIVar12,pAVar13);
      param_1->___boolRequest_36 = extraout_EAX;
      break;
    }
    iVar10 = InterfaceFuncInvoker0<int>::Invoke
                       (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                        param_1->___boolRequest_36);
    if ((char)iVar10 != '\0') break;
    if (param_1->___boolRequest_36 == (Il2CppObject *)0x0) goto LAB_10a02024;
    iVar10 = InterfaceFuncInvoker0<int>::Invoke
                       (0,
                        IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
                        ,param_1->___boolRequest_36);
    param_1->___bootState_6 = ((char)iVar10 == '\0') + 1;
    goto LAB_10a01adb;
  case 1:
    if (param_1->___byteRequest_35 == (Il2CppObject *)0x0) {
      pIVar12 = SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
                          (param_1,(MethodInfo *)0x0);
      if (pIVar12 == (Il2CppObject *)0x0) goto LAB_10a02024;
      InterfaceActionInvoker1<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_*>::Invoke
                (1,IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var,
                 pIVar12,(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                         _stringLiteralECCEF6640EFE004FEAD77E3917F0A856C6BFE14B);
      param_1->___byteRequest_35 = extraout_EAX_00;
      break;
    }
    iVar10 = InterfaceFuncInvoker0<int>::Invoke
                       (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                        param_1->___byteRequest_35);
    if ((char)iVar10 != '\0') break;
    pIVar12 = param_1->___byteRequest_35;
    local_8._0_1_ = 1;
    if (pIVar12 != (Il2CppObject *)0x0) {
      pIVar1 = (pIVar12->field0_0x0).klass;
      uVar5 = 0;
      if (pIVar1->interface_offsets_count != 0) {
        do {
          if (pIVar1->interfaceOffsets[uVar5].interfaceType ==
              IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var) {
            pVVar6 = (VirtualInvokeData *)
                     (&pIVar1->field_0xbc + pIVar1->interfaceOffsets[uVar5].offset * 8);
            goto LAB_10a01ba2;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < pIVar1->interface_offsets_count);
      }
      pVVar6 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar12,
                          IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var
                          ,0);
LAB_10a01ba2:
      pBVar7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
               (*pVVar6->methodPtr)(pIVar12,pVVar6->method);
      pMVar8 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
               il2cpp_codegen_object_new
                         (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var
                         );
      MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(pMVar8,pBVar7,(MethodInfo *)0x0);
      local_8._0_1_ = 2;
      if (param_1->___settingsXmlSerializer_28 !=
          (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)0x0) {
        pIVar12 = XmlSerializer_Deserialize_m25B138EB9DFEAC76221ED87D8FDFBE31A7136AD5
                            (param_1->___settingsXmlSerializer_28,
                             (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar8,
                             (MethodInfo *)0x0);
        pSVar9 = (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)
                 IsInstClass(pIVar12,
                             SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_il2cpp_TypeInfo_var
                            );
        param_1->___settingsData_10 = pSVar9;
        local_8 = CONCAT31(local_8._1_3_,1);
        uVar3 = FUN_10a01c4a();
        return (bool)uVar3;
      }
    }
    goto LAB_10a02024;
  case 2:
    pSVar9 = (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)
             il2cpp_codegen_object_new
                       (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617_il2cpp_TypeInfo_var);
    if (DAT_115201d9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata((uint *)&String_t_il2cpp_TypeInfo_var);
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
      DAT_115201d9 = '\x01';
    }
    pSVar9->___audioVolume_3 = 0xff;
    pSVar9->___antiAliasing_4 = true;
    pSVar9->___fullscreen_7 = true;
    pSVar9->___language_8 = *(String_t **)String_t_il2cpp_TypeInfo_var->static_fields;
    (pSVar9->___screenshot_9).___path_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
    (pSVar9->___screenshot_9).___x_1 = 0x800;
    (pSVar9->___screenshot_9).___y_2 = 0x800;
    (pSVar9->___objExport_10).___path_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)pSVar9,
               (MethodInfo *)0x0);
    param_1->___settingsData_10 = pSVar9;
    pSVar9->___version_0 = 1;
    param_1->___bootState_6 = 5;
    break;
  case 3:
    if (param_1->___boolRequest_36 == (Il2CppObject *)0x0) {
      pIVar12 = SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
                          (param_1,(MethodInfo *)0x0);
      if (param_1->___settingsData_10 ==
          (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) goto LAB_10a02024;
      pAVar13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                SaveSystem_GetSaveFilePath_m55F508809C173C93543E383A79653644C009497E
                          (param_1,param_1->___settingsData_10->___lastSave_1,(MethodInfo *)0x0);
      goto joined_r0x10a01e9d;
    }
    iVar10 = InterfaceFuncInvoker0<int>::Invoke
                       (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                        param_1->___boolRequest_36);
    if ((char)iVar10 != '\0') break;
    if (param_1->___boolRequest_36 == (Il2CppObject *)0x0) goto LAB_10a02024;
    iVar10 = InterfaceFuncInvoker0<int>::Invoke
                       (0,
                        IAsyncRequest_1_t2300E24B26E92488C4EAC7E4C6D696921CB2830C_il2cpp_TypeInfo_var
                        ,param_1->___boolRequest_36);
    if ((char)iVar10 == '\0') {
      param_1->___bootState_6 = 5;
    }
    else {
      if (param_1->___settingsData_10 ==
          (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0) goto LAB_10a02024;
      pSVar11 = SaveSystem_GetSaveFilePath_m55F508809C173C93543E383A79653644C009497E
                          (param_1,param_1->___settingsData_10->___lastSave_1,(MethodInfo *)0x0);
      pMVar14 = SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
                          (param_1,2,pSVar11,(MethodInfo *)0x0);
      param_1->___currentMetaSave_14 = pMVar14;
      SaveSystem_LoadMetaSaveFromDisk_m9D1FB26841AFEDA11640A9795C42A080E374EB53
                (param_1,pMVar14,(MethodInfo *)0x0);
      param_1->___bootState_6 = 4;
    }
LAB_10a01adb:
    param_1->___boolRequest_36 = (Il2CppObject *)0x0;
    break;
  case 4:
    if (param_1->___currentMetaSave_14 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)
    goto LAB_10a02024;
    bVar4 = AxisCalibrator_get_isValid_m25146C1631F789BB711CB06CFDC49656185F63FD
                      ((AxisCalibrator_t12B3A7D897E39A8D6B763A9485C82D37762A0E2D *)
                       param_1->___currentMetaSave_14,(MethodInfo *)0x0);
    if (!bVar4) {
      if (param_1->___currentMetaSave_14 ==
          (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) goto LAB_10a02024;
      bVar4 = MetaSave_get_isBroken_m975083F67D58355316AD58AE0BF439CDF946354C
                        (param_1->___currentMetaSave_14,(MethodInfo *)0x0);
      if (bVar4) {
        param_1->___currentMetaSave_14 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0;
        param_1->___bootState_6 = 5;
      }
      else {
        param_1->___bootState_6 = 7;
      }
    }
    break;
  case 5:
    if (2 < param_1->___state_7) {
      if (param_1->___fileList_15 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
        if (param_1->___fileList_15->____size_2 != 0) {
          param_1->___bootState_6 = 6;
          break;
        }
        param_1->___bootState_6 = 9;
        pMVar14 = SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
                            (param_1,8,_stringLiteral9F6011CA64D6E9B865FE3834ACBA34A57111CE95,
                             (MethodInfo *)0x0);
        if (pMVar14 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
          if (((param_1->___worldMaster_4 !=
                (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
              (pSVar2 = param_1->___worldMaster_4->___defaultSaveData_27,
              pSVar2 != (SaveDataScripableObject_t8C2A689399689CB35C43214E3E43F07C2AD765FC *)0x0))
             && (pMVar14->___saveData_9 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0
                )) {
            SaveData_CopyFrom_m4D97522F6F56F6AFEA8C5105ABA292BA1E44704B
                      (pMVar14->___saveData_9,pSVar2->___defaultSaveData_4,(MethodInfo *)0x0);
            SaveSystem_LoadSave_m51C1DA8C1A71C439CB5257B4EEEF53086EFE752C
                      (param_1,pMVar14,(MethodInfo *)0x0);
            if (param_1->___worldMaster_4 !=
                (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
              WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
                        (param_1->___worldMaster_4,(MethodInfo *)0x0);
              SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
                        (param_1,pMVar14,8,(MethodInfo *)0x0);
              break;
            }
          }
        }
      }
      goto LAB_10a02024;
    }
    SaveSystem_IterateRefresh_m9CEAC873A577B18052312BDCA37D15DBF7DDC293
              (param_1,param_2,(MethodInfo *)0x0);
    break;
  case 6:
    bVar4 = SaveSystem_IterateRefresh_m9CEAC873A577B18052312BDCA37D15DBF7DDC293
                      (param_1,param_2,(MethodInfo *)0x0);
    if (!bVar4) {
      param_1->___bootState_6 = 8;
    }
    break;
  case 7:
  case 8:
    goto switchD_10a01a91_caseD_7;
  case 9:
    param_1->___state_7 = 6;
    goto switchD_10a01a91_caseD_7;
  }
  local_8 = 0xffffffff;
  uVar3 = FUN_10a0200b();
  return (bool)uVar3;
switchD_10a01a91_caseD_7:
  ExceptionList = pvStack_10;
  return false;
}
