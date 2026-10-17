// RVA 0x1daa80 | Placemaker.SaveCardsHandler.<DuplicateCard>d__35$$MoveNext
// PDB: U3CDuplicateCardU3Ed__35_MoveNext_m43452E05D7AD312776FE0D4FA0B15D7ED5C5E54C
// Body: [[101daa80, 101dad7f]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 102fd5d0 StorageUtils_FillSaveCard_m148444ACC728AA55B28333C5C98116FDCB0072ED
// 102fd790 StorageUtils_GetUniqueSaveName_mBCC088C96046C3CD440F04D376EC529115B95F3D
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 106ebae0 DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
// 106ebde0 DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a48ec0 MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ac90 Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781
// 10c789f0 Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 110352e0 List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared

bool __cdecl
U3CDuplicateCardU3Ed__35_MoveNext_m43452E05D7AD312776FE0D4FA0B15D7ED5C5E54C
          (U3CDuplicateCardU3Ed__35_t9F0138B90BB06D58CF0B884930B2F8E9A29B664F *param_1,
          MethodInfo *param_2)

{
  SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *pSVar1;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar2;
  bool bVar3;
  SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *pSVar4;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  int iVar7;
  String_t *pSVar8;
  Il2CppObject *pIVar9;
  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *pCVar10;
  long64 lVar11;
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 local_c;

  if (DAT_1151affb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mDA16FCC73AF81F0995E3D6275BC8BC2AF5059597_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_m273515C064F8244724F393FEA5E5A7BF4D239668_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m34386CBB9AAEE4B8C71DCD0C6B3DA4662776C25B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m5FBE0271575DA03AC87A6BACC1D048FDEADDE1E7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151affb = '\x01';
  }
  local_c.___dateData_44 = 0;
  iVar7 = param_1->___U3CU3E1__state_0;
  pSVar1 = param_1->___U3CU3E4__this_3;
  if (iVar7 == 0) {
    pSVar4 = param_1->___templateCard_2;
    param_1->___U3CU3E1__state_0 = -1;
    if (pSVar1 == (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)0x0)
    goto LAB_101dad7b;
    pTVar6 = pSVar1->___cardsRoot_6;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    pSVar4 = (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)
             Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                       ((Il2CppObject *)pSVar4,pTVar6,
                        Object_Instantiate_TisSaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67_m34386CBB9AAEE4B8C71DCD0C6B3DA4662776C25B_RuntimeMethod_var
                       );
    param_1->___U3CcardU3E5__2_5 = pSVar4;
    if (param_1->___templateCard_2 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
    goto LAB_101dad7b;
    bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                       param_1->___templateCard_2->___bigTexture_5,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar4 = param_1->___U3CcardU3E5__2_5;
      if (param_1->___templateCard_2 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
      goto LAB_101dad7b;
      pTVar5 = param_1->___templateCard_2->___bigTexture_5;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      pTVar5 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)
               Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared
                         ((Il2CppObject *)pTVar5,
                          Object_Instantiate_TisTexture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_m5FBE0271575DA03AC87A6BACC1D048FDEADDE1E7_RuntimeMethod_var
                         );
      if (pSVar4 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) goto LAB_101dad7b;
      pSVar4->___bigTexture_5 = pTVar5;
    }
    if (param_1->___U3CcardU3E5__2_5 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
    goto LAB_101dad7b;
    pSVar2 = param_1->___U3CcardU3E5__2_5->___saveData_8;
    if ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
    }
    local_c = DateTime_get_UtcNow_m761E57F86226DDD94F0A2F4D98F0A8E27C74F090((MethodInfo *)0x0);
    lVar11 = DateTime_get_InternalTicks_mCFC896BACE13EE3E20CF7AC035040F00F7CEF55B
                       (&local_c,(MethodInfo *)0x0);
    if (pSVar2 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) goto LAB_101dad7b;
    pSVar2->___lastWriteTime_1 = lVar11;
    if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar1->___cardPool_7 ==
        (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_101dad7b;
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar1->___cardPool_7,
               (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
               param_1->___U3CcardU3E5__2_5,
               List_1_Add_mDA16FCC73AF81F0995E3D6275BC8BC2AF5059597_RuntimeMethod_var);
    if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar1->___activeCards_8 ==
        (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_101dad7b;
    List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pSVar1->___activeCards_8,1,
               (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
               param_1->___U3CcardU3E5__2_5,
               List_1_Insert_m273515C064F8244724F393FEA5E5A7BF4D239668_RuntimeMethod_var);
    if (param_1->___U3CcardU3E5__2_5 == (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0)
    goto LAB_101dad7b;
    pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___U3CcardU3E5__2_5,(MethodInfo *)0x0);
    if (pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_101dad7b;
    Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC(pTVar6,1,(MethodInfo *)0x0);
    if (pSVar1->___storage_16 == (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0)
    goto LAB_101dad7b;
    pIVar9 = StorageUtils_GetUniqueSaveName_mBCC088C96046C3CD440F04D376EC529115B95F3D
                       (pSVar1->___storage_16,(MethodInfo *)0x0);
    param_1->___U3CgetUniqueSaveNameU3E5__3_6 = pIVar9;
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 == 2) {
        param_1->___U3CU3E1__state_0 = -1;
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)param_1->___callback_4
            != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
          OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                    ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     param_1->___callback_4,(MethodInfo *)0x0);
        }
      }
      return false;
    }
    param_1->___U3CU3E1__state_0 = -1;
  }
  if (param_1->___U3CgetUniqueSaveNameU3E5__3_6 != (Il2CppObject *)0x0) {
    iVar7 = InterfaceFuncInvoker0<int>::Invoke
                      (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                       param_1->___U3CgetUniqueSaveNameU3E5__3_6);
    if ((char)iVar7 != '\0') {
      param_1->___U3CU3E2__current_1 = (Il2CppObject *)0x0;
      param_1->___U3CU3E1__state_0 = 1;
      return true;
    }
    pSVar4 = param_1->___U3CcardU3E5__2_5;
    if (param_1->___U3CgetUniqueSaveNameU3E5__3_6 != (Il2CppObject *)0x0) {
      pSVar8 = (String_t *)
               InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var
                          ,param_1->___U3CgetUniqueSaveNameU3E5__3_6);
      if (pSVar4 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) {
        Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781
                  ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar4,pSVar8,
                   (MethodInfo *)0x0);
        pSVar4 = param_1->___U3CcardU3E5__2_5;
        if (param_1->___U3CgetUniqueSaveNameU3E5__3_6 != (Il2CppObject *)0x0) {
          pSVar8 = (String_t *)
                   InterfaceFuncInvoker0<int>::Invoke
                             (0,
                              IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C_il2cpp_TypeInfo_var
                              ,param_1->___U3CgetUniqueSaveNameU3E5__3_6);
          if (((pSVar4 != (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *)0x0) &&
              (pSVar4->___filePath_10 = pSVar8,
              pSVar1 != (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *)0x0)) &&
             (pSVar1->___storage_16 != (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *)0x0
             )) {
            pIVar9 = StorageUtils_FillSaveCard_m148444ACC728AA55B28333C5C98116FDCB0072ED
                               (pSVar1->___storage_16,param_1->___U3CcardU3E5__2_5,(MethodInfo *)0x0
                               );
            pCVar10 = MonoBehaviour_StartCoroutine_Auto_m78A5B32C9E51A3C64C19BB73ED4A9A9B7536677A
                                ((MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)pSVar1,
                                 pIVar9,(MethodInfo *)0x0);
            param_1->___U3CU3E2__current_1 = (Il2CppObject *)pCVar10;
            param_1->___U3CU3E1__state_0 = 2;
            return true;
          }
        }
      }
    }
  }
LAB_101dad7b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
