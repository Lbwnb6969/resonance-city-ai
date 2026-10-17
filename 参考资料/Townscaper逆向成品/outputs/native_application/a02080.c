// RVA 0xa02080 | Placemaker.SaveSystem$$IterateRefresh
// PDB: SaveSystem_IterateRefresh_m9CEAC873A577B18052312BDCA37D15DBF7DDC293
// Body: [[10a02080, 10a02637]]
// Direct callees:
// 1003e420 Invoke
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17b0 AxisCalibrator_get_isValid_m25146C1631F789BB711CB06CFDC49656185F63FD
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10448400 ExtraMath_BinarySearchComponent_TisRuntimeObject_TisRuntimeObject_m74D6163960F5CED540FF2FE5C8EF19D7FAAAEAC4_gshared
// 105d1260 List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 106eb370 DateTime__ctor_m14D7C60472AE477F824F8BEE8830C5F5D4FCA16A
// 106ebae0 DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
// 10a00fa0 SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
// 10a01510 SaveSystem_GetMetaSave_m0F9523F10ED70353647C0E7B6182A885040F3D56
// 10a01570 SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
// 10a02660 SaveSystem_LoadMetaSaveFromDisk_m9D1FB26841AFEDA11640A9795C42A080E374EB53
// 10a03800 SaveSystem_SetSiblingIndex_mF2A34C8B9A4B0ECADEA303550B01B34CCC6A5F78
// 10a04020 SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 10ed9c20 Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE
// 10f03e90 String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE
// 10f0a070 String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
// 11036bc0 List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared

bool __cdecl
SaveSystem_IterateRefresh_m9CEAC873A577B18052312BDCA37D15DBF7DDC293
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *param_2,MethodInfo *param_3)

{
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar1;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar2;
  int iVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  String_t *pSVar7;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar8;
  int iVar9;
  MethodInfo *unaff_EDI;
  long64 lVar10;
  float fVar11;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 local_14;
  undefined8 local_c;

  if (DAT_115201ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ExtraMath_BinarySearchComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_m604303DB4CB1BD5E318DC3EF87931A59186A0633_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IAsyncRequest_1_t6283ED3BBB7202718D29315B3CBB9A2C483A60EF_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_115201ab = '\x01';
  }
  switch(param_1->___state_7) {
  case 0:
    param_1->___anyChangeWhenRefreshing_5 = false;
    fVar11 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    param_1->___startRefreshTime_25 = fVar11;
    goto LAB_10a02145;
  case 1:
    if (param_1->___listRequest_34 == (Il2CppObject *)0x0) {
      pIVar5 = SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
                         (param_1,(MethodInfo *)0x0);
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar5 = (Il2CppObject *)
                 InterfaceFuncInvoker0<int>::Invoke
                           (7,
                            IStorageContainer_t65144ABF49C5F5251019FAE254C96036B4D27490_il2cpp_TypeInfo_var
                            ,pIVar5);
        param_1->___listRequest_34 = pIVar5;
        return true;
      }
    }
    else {
      iVar9 = InterfaceFuncInvoker0<int>::Invoke
                        (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                         ,param_1->___listRequest_34);
      if ((char)iVar9 != '\0') {
        return true;
      }
      if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___fileList_15 !=
          (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___fileList_15,
                   List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
        if (param_1->___listRequest_34 != (Il2CppObject *)0x0) {
          iVar9 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IAsyncRequest_1_t6283ED3BBB7202718D29315B3CBB9A2C483A60EF_il2cpp_TypeInfo_var
                             ,param_1->___listRequest_34);
          if (iVar9 != 0) {
            pLVar1 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___fileList_15;
            if ((param_1->___listRequest_34 == (Il2CppObject *)0x0) ||
               (pIVar5 = (Il2CppObject *)
                         InterfaceFuncInvoker0<int>::Invoke
                                   (0,
                                    IAsyncRequest_1_t6283ED3BBB7202718D29315B3CBB9A2C483A60EF_il2cpp_TypeInfo_var
                                    ,param_1->___listRequest_34),
               pLVar1 == (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0)) break;
            List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
                      (pLVar1,pIVar5,
                       List_1_AddRange_m67797787DD90CC9BC8EC6EA8EA1E1760EF88302C_RuntimeMethod_var);
          }
          param_1->___listRequest_34 = (Il2CppObject *)0x0;
          param_1->___index_31 = 0;
          if (param_1->___fileList_15 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
            param_1->___count_32 = param_1->___fileList_15->____size_2;
            param_1->___totalSaveGameCount_41 = 0;
            param_1->___state_7 = param_1->___state_7 + 1;
            return true;
          }
        }
      }
    }
    break;
  case 2:
    if (param_1->___index_31 < param_1->___count_32) {
      if (param_1->___fileList_15 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
        pSVar7 = (String_t *)
                 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                           ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                            param_1->___fileList_15,param_1->___index_31,
                            List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var
                           );
        if (DAT_115201bc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2);
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&_stringLiteral996C963F173C87BB8D89913B87082558702DF114);
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC);
          DAT_115201bc = '\x01';
        }
        if (pSVar7 != (String_t *)0x0) {
          bVar4 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE
                            (pSVar7,_stringLiteralF9603110CD994850BB7E88E6FC7174E5BDE2D2EC,
                             (MethodInfo *)0x0);
          if ((bVar4) ||
             (bVar4 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE
                                (pSVar7,_stringLiteral996C963F173C87BB8D89913B87082558702DF114,
                                 (MethodInfo *)0x0), bVar4)) {
            if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
            }
            pSVar7 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE
                               (pSVar7,(MethodInfo *)0x0);
            bVar4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2
                              (pSVar7,_stringLiteral919FBC713DA3D137E06A974504E1D16C00FD51F2,
                               (MethodInfo *)0x0);
            if (!bVar4) {
              param_1->___totalSaveGameCount_41 = param_1->___totalSaveGameCount_41 + 1;
              param_1->___index_31 = param_1->___index_31 + 1;
              return true;
            }
          }
          if (param_1->___fileList_15 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
            List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared
                      ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___fileList_15,
                       param_1->___index_31,
                       List_1_RemoveAt_mF6A5472156C6CDBD7737FB15168FD637ED470C73_RuntimeMethod_var);
            param_1->___count_32 = param_1->___count_32 + -1;
            return true;
          }
        }
      }
    }
    else {
      param_1->___index_31 = 0;
      if (param_1->___metaSaveContainer_9 !=
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        iVar9 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                          (param_1->___metaSaveContainer_9,(MethodInfo *)0x0);
        param_1->___count_32 = iVar9;
        param_1->___state_7 = param_1->___state_7 + 1;
        return true;
      }
    }
    break;
  case 3:
    if (param_1->___index_31 < param_1->___count_32) {
      if (((param_1->___metaSaveContainer_9 !=
            (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
          (pTVar6 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                              (param_1->___metaSaveContainer_9,param_1->___index_31,
                               (MethodInfo *)0x0),
          pTVar6 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) &&
         (pMVar8 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)
                   Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar6,
                              Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
                             ), pMVar8 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)
         ) {
        if (pMVar8->___state_18 != 8) {
          if (param_1->___fileList_15 == (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0)
          break;
          bVar4 = List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                            ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                             param_1->___fileList_15,(Il2CppObject *)pMVar8->___path_4,
                             List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var
                            );
          if (!bVar4) {
            local_c = 0;
            DateTime__ctor_m14D7C60472AE477F824F8BEE8830C5F5D4FCA16A
                      ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)&local_c,0,unaff_EDI);
            local_14.___dateData_44._0_4_ = (undefined4)local_c;
            local_14.___dateData_44._4_4_ = local_c._4_4_;
            lVar10 = DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
                               (&local_14,(MethodInfo *)0x0);
            pMVar8->___lastFileWriteTime_8 = lVar10;
            SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
                      (param_1,pMVar8,0x40,(MethodInfo *)0x0);
            param_1->___anyChangeWhenRefreshing_5 = true;
            param_1->___count_32 = param_1->___count_32 + -1;
            return true;
          }
        }
        pMVar2 = param_1->___currentMetaSave_14;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar8,
                           (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar2,
                           (MethodInfo *)0x0);
        if (bVar4) {
          SaveSystem_LoadMetaSaveFromDisk_m9D1FB26841AFEDA11640A9795C42A080E374EB53
                    (param_1,pMVar8,(MethodInfo *)0x0);
        }
        param_1->___index_31 = param_1->___index_31 + 1;
        return true;
      }
    }
    else {
      param_1->___index_31 = 0;
      if (param_1->___fileList_15 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
        param_1->___count_32 = param_1->___fileList_15->____size_2;
        param_1->___state_7 = 4;
        return true;
      }
    }
    break;
  case 4:
    if (param_1->___index_31 < param_1->___count_32) {
      if (param_1->___fileList_15 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
        pSVar7 = (String_t *)
                 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                           ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                            param_1->___fileList_15,param_1->___index_31,
                            List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var
                           );
        pMVar8 = SaveSystem_GetNewMetaSave_m476177C6CEF1B5A6A38995BBDD8453DCE460FA7C
                           (param_1,2,pSVar7,(MethodInfo *)0x0);
        SaveSystem_LoadMetaSaveFromDisk_m9D1FB26841AFEDA11640A9795C42A080E374EB53
                  (param_1,pMVar8,(MethodInfo *)0x0);
        param_1->___anyChangeWhenRefreshing_5 = true;
        param_1->___index_31 = param_1->___index_31 + 1;
        return true;
      }
      break;
    }
    param_1->___index_31 = 0;
    if (param_1->___metaSaveContainer_9 ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
    iVar9 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___metaSaveContainer_9,(MethodInfo *)0x0);
    pMVar8 = param_1->___currentMetaSave_14;
    param_1->___count_32 = iVar9;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar8,(MethodInfo *)0x0)
    ;
    if (bVar4) {
      SaveSystem_SetSiblingIndex_mF2A34C8B9A4B0ECADEA303550B01B34CCC6A5F78
                (param_1,param_1->___currentMetaSave_14,0,(MethodInfo *)0x0);
      param_1->___state_7 = param_1->___state_7 + 1;
      return true;
    }
LAB_10a02145:
    param_1->___state_7 = param_1->___state_7 + 1;
switchD_10a0212d_default:
    return true;
  case 5:
    if (param_1->___count_32 <= param_1->___index_31) {
      param_1->___state_7 = 6;
      return true;
    }
    pMVar8 = SaveSystem_GetMetaSave_m0F9523F10ED70353647C0E7B6182A885040F3D56
                       (param_1,param_1->___index_31,(MethodInfo *)0x0);
    if (pMVar8 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      bVar4 = AxisCalibrator_get_isValid_m25146C1631F789BB711CB06CFDC49656185F63FD
                        ((AxisCalibrator_t12B3A7D897E39A8D6B763A9485C82D37762A0E2D *)pMVar8,
                         (MethodInfo *)0x0);
      if (bVar4) {
        return true;
      }
      pMVar2 = param_1->___currentMetaSave_14;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar2,
                         (MethodInfo *)0x0);
      iVar9 = param_1->___index_31;
      if ((int)(uint)bVar4 < iVar9) {
        local_c._4_4_ = param_1->___metaSaveContainer_9;
        iVar3 = param_1->___count_32;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        iVar9 = ExtraMath_BinarySearchComponent_TisRuntimeObject_TisRuntimeObject_m74D6163960F5CED540FF2FE5C8EF19D7FAAAEAC4_gshared
                          (local_c._4_4_,(Il2CppObject *)pMVar8,(uint)bVar4,iVar3 - iVar9,
                           ExtraMath_BinarySearchComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_m604303DB4CB1BD5E318DC3EF87931A59186A0633_RuntimeMethod_var
                          );
        SaveSystem_SetSiblingIndex_mF2A34C8B9A4B0ECADEA303550B01B34CCC6A5F78
                  (param_1,pMVar8,iVar9,(MethodInfo *)0x0);
      }
      param_1->___index_31 = param_1->___index_31 + 1;
      return true;
    }
    break;
  case 6:
    return false;
  default:
    goto switchD_10a0212d_default;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
