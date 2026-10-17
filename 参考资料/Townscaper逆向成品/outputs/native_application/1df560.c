// RVA 0x1df560 | Placemaker.SaveSystem.<>c__DisplayClass52_0$$<LoadMetaSaveFromDisk>b__0
// PDB: U3CU3Ec__DisplayClass52_0_U3CLoadMetaSaveFromDiskU3Eb__0_m8145DE0A1FC53AE36E71FA5AEE206511E0F6CE2E
// Body: [[101df560, 101df745]]
// Direct callees:
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101df76a FUN_101df76a
// 10396d40 XmlSerializer_Deserialize_m25B138EB9DFEAC76221ED87D8FDFBE31A7136AD5
// 1088afa0 BinaryFormatter_Deserialize_mF7AFD0FE0E41A77BC60B11705FA7CC76EFE63DBC
// 108d3410 MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2

void __cdecl
U3CU3Ec__DisplayClass52_0_U3CLoadMetaSaveFromDiskU3Eb__0_m8145DE0A1FC53AE36E71FA5AEE206511E0F6CE2E
          (U3CU3Ec__DisplayClass52_0_t17BFD996FDACD5AC0C21A2F67D43028A6BEBDD1F *param_1,
          MethodInfo *param_2)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar3;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar4;
  bool bVar5;
  ushort uVar6;
  VirtualInvokeData *pVVar7;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar8;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar9;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar10;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar11;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__U3CU3Ec__DisplayClass52_0_U3CLoadMetaSaveFromDiskU3Eb__0_m8145DE0A1FC53AE36E71FA5AEE206511E0F6CE2E
  ;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_1151b001 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_1151b001 = '\x01';
  }
  uVar6 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  pIVar2 = param_1->___request_0;
  if (pIVar2 != (Il2CppObject *)0x0) {
    uVar1 = ((pIVar2->field0_0x0).klass)->interface_offsets_count;
    if (uVar1 != 0) {
      do {
        if (((pIVar2->field0_0x0).klass)->interfaceOffsets[uVar6].interfaceType ==
            IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var) {
          pVVar7 = (VirtualInvokeData *)
                   (&((pIVar2->field0_0x0).klass)->field_0xbc +
                   ((pIVar2->field0_0x0).klass)->interfaceOffsets[uVar6].offset * 8);
          goto LAB_101df63a;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    pVVar7 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,
                        IAsyncRequest_1_t45189C5E4D975901DABD9849B20891E77C79EA51_il2cpp_TypeInfo_var
                        ,0);
LAB_101df63a:
    pBVar8 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
             (*pVVar7->methodPtr)(pIVar2,pVVar7->method);
    pMVar9 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
             il2cpp_codegen_object_new
                       (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(pMVar9,pBVar8,(MethodInfo *)0x0);
    pMVar3 = param_1->___metaSave_1;
    local_8._0_1_ = 1;
    if (pMVar3 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      pSVar4 = param_1->___U3CU3E4__this_2;
      if (pMVar3->___isBin_6 == false) {
        if ((pSVar4 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) &&
           (pSVar4->___saveXmlSerializer_29 !=
            (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)0x0)) {
          pSVar10 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)
                    XmlSerializer_Deserialize_m25B138EB9DFEAC76221ED87D8FDFBE31A7136AD5
                              (pSVar4->___saveXmlSerializer_29,
                               (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar9,
                               (MethodInfo *)0x0);
          if (pSVar10 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
            pMVar3->___saveData_9 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0;
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_101df76a();
            return;
          }
LAB_101df702:
          if ((((Il2CppObject_u_0 *)&pSVar10->_padding_)->klass->typeHierarchyDepth <
               SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var->
               typeHierarchyDepth) ||
             (((Il2CppObject_u_0 *)&pSVar10->_padding_)->klass->typeHierarchy
              [SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var->
               typeHierarchyDepth - 1] !=
              SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          pSVar11 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0;
          if (bVar5) {
            pSVar11 = pSVar10;
          }
          pMVar3->___saveData_9 = pSVar11;
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_101df76a();
          return;
        }
      }
      else if ((pSVar4 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) &&
              (pSVar4->___binaryFormatter_30 !=
               (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)0x0)) {
        pSVar10 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)
                  BinaryFormatter_Deserialize_mF7AFD0FE0E41A77BC60B11705FA7CC76EFE63DBC
                            (pSVar4->___binaryFormatter_30,
                             (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar9,
                             (MethodInfo *)0x0);
        if (pSVar10 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
          pMVar3->___saveData_9 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0;
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_101df76a();
          return;
        }
        goto LAB_101df702;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
