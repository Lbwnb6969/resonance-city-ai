// RVA 0x1d9d80 | Placemaker.BootMaster.<BootRoutine>d__11$$MoveNext
// PDB: U3CBootRoutineU3Ed__11_MoveNext_m39A068FEAC1B1E78804D5A27FF440C0E0E7B660C
// Body: [[101d9d80, 101da54b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e6000 UiMaster_MaybeSetup_m11912A7FCA98C9C670452C0AA596C83ECF83501A
// 103e6880 UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
// 103e6d70 UiMaster_UpdateAntialiasing_mE1EE9F4B3CE3285B60960266F0627E2FB10A7484
// 103e6e90 UiMaster_UpdateFullScreen_mA12775E0F48C9B737DE5298CB061288EA96E225B
// 103e6fa0 UiMaster_UpdateVSync_mC68841C90B1119DA7D6C4D8DA53FDBB6164DBEB7
// 103f83d0 WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
// 103f84d0 WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416
// 103f8710 WorldMaster_OnOnEnable_mB747B0D7310BFDD649415B5A44A9F42904A8841A
// 103f88e0 WorldMaster_OnStart_mF003374D13345F5D4648CC9221FE948318A810F6
// 1043f210 Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared
// 104fadb0 LoadingUi_StopLoadingNow_mFAD51DE9A74C81702A6DCD38EAED96F378041F45
// 10666830 SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9
// 10666ca0 SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748
// 10667260 Scene_GetRootGameObjects_m03603677EECB3F9BC0497D98A1E59B5A11988956
// 10667560 Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93
// 109ffaf0 SaveMenu_OpenWithoutRefresh_m0487DF823B3C0C238EEC52CD61A443DDDD8226F2
// 10a019d0 SaveSystem_IterateBoot_m12257295A8C85C13BC8AFA52D97B127F2D733B49
// 10a36000 AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

bool __cdecl
U3CBootRoutineU3Ed__11_MoveNext_m39A068FEAC1B1E78804D5A27FF440C0E0E7B660C
          (U3CBootRoutineU3Ed__11_tE91A7954F486E79AC32D606E758003FB9D1E217C *param_1,
          MethodInfo *param_2)

{
  BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *pBVar1;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar2;
  int iVar3;
  LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *pLVar4;
  SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *pSVar5;
  bool bVar6;
  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *pAVar7;
  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE SVar8;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **ppGVar9;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar10;
  GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *pGVar11;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar12;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar13;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar14;
  Exception_t *pEVar15;
  uint uVar16;
  MethodInfo *pMVar17;
  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE local_8;

  if (DAT_1151af3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       FastCoroutines_KeepGoing_m79DCF23DD5E1BE06FC979C1D167D609E1D7419DD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_GetComponentInChildren_TisUiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_mB6B4D1E6D47AAC87BE6708A3DB1C61FD2EF1E29D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       GameObject_GetComponentInChildren_TisWorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_m7756CE92D2DA7B51B5782E637B31FF75A3031BDD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral67811C6C0028EB9D07A9D8C29FD105B89F58AB10);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC4F223C82444109EB2CB667B4F0B4D1A916EE5E6);
    DAT_1151af3b = '\x01';
  }
  local_8.___m_Handle_0 = 0;
  pBVar1 = param_1->___U3CU3E4__this_2;
  switch(param_1->___U3CU3E1__state_0) {
  case 0:
    param_1->___U3CU3E1__state_0 = -1;
    *(BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 **)
     BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391_il2cpp_TypeInfo_var->static_fields =
         pBVar1;
    param_1->___U3CU3E2__current_1 = false;
    param_1->___U3CU3E1__state_0 = 1;
    return true;
  case 1:
    param_1->___U3CU3E1__state_0 = -1;
    if ((SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
    }
    SVar8 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9
                      (_stringLiteralC4F223C82444109EB2CB667B4F0B4D1A916EE5E6,(MethodInfo *)0x0);
    (param_1->___U3CmainSceneU3E5__3_4).___m_Handle_0 = SVar8.___m_Handle_0;
    local_8 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9
                        (_stringLiteral67811C6C0028EB9D07A9D8C29FD105B89F58AB10,(MethodInfo *)0x0);
    bVar6 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93
                      (&param_1->___U3CmainSceneU3E5__3_4,(MethodInfo *)0x0);
    if (bVar6) {
      pAVar7 = (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *)0x0;
    }
    else {
      if ((SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
      }
      pAVar7 = SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748
                         (_stringLiteralC4F223C82444109EB2CB667B4F0B4D1A916EE5E6,1,(MethodInfo *)0x0
                         );
    }
    param_1->___U3CmainSceneOperationU3E5__4_5 = pAVar7;
    bVar6 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93(&local_8,(MethodInfo *)0x0)
    ;
    if (bVar6) {
      param_1->___U3CflatscreenUiOperationU3E5__5_6 =
           (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *)0x0;
    }
    else {
      if ((SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
      }
      pAVar7 = SceneManager_LoadSceneAsync_mB19DC1ECA7304F9CB66976DADE6423777750B748
                         (_stringLiteral67811C6C0028EB9D07A9D8C29FD105B89F58AB10,1,(MethodInfo *)0x0
                         );
      param_1->___U3CflatscreenUiOperationU3E5__5_6 = pAVar7;
    }
    goto LAB_101d9f24;
  case 2:
    param_1->___U3CU3E1__state_0 = -1;
LAB_101d9f24:
    if ((param_1->___U3CmainSceneOperationU3E5__4_5 !=
         (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *)0x0) &&
       (bVar6 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877
                          (param_1->___U3CmainSceneOperationU3E5__4_5,(MethodInfo *)0x0), !bVar6)) {
      param_1->___U3CU3E2__current_1 = false;
      param_1->___U3CU3E1__state_0 = 2;
      return true;
    }
LAB_101d9f54:
    if ((param_1->___U3CflatscreenUiOperationU3E5__5_6 !=
         (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *)0x0) &&
       (bVar6 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877
                          (param_1->___U3CflatscreenUiOperationU3E5__5_6,(MethodInfo *)0x0), !bVar6)
       ) {
      param_1->___U3CU3E2__current_1 = false;
      param_1->___U3CU3E1__state_0 = 3;
      return true;
    }
    if ((SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
    }
    SVar8 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9
                      (_stringLiteralC4F223C82444109EB2CB667B4F0B4D1A916EE5E6,(MethodInfo *)0x0);
    (param_1->___U3CmainSceneU3E5__3_4).___m_Handle_0 = SVar8.___m_Handle_0;
    local_8 = SceneManager_GetSceneByName_m1759CF791AED567228B0F161C4FA47D19E728BC9
                        (_stringLiteral67811C6C0028EB9D07A9D8C29FD105B89F58AB10,(MethodInfo *)0x0);
    pGVar11 = Scene_GetRootGameObjects_m03603677EECB3F9BC0497D98A1E59B5A11988956
                        (&local_8,(MethodInfo *)0x0);
    if (pGVar11 != (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) {
      uVar16 = pGVar11->_padding_ - 1;
      if (-1 < (int)uVar16) {
        ppGVar9 = pGVar11->m_Items + pGVar11->_padding_ + -1;
        do {
          if ((uint)pGVar11->_padding_ <= uVar16) goto LAB_101da53a;
          if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)*ppGVar9 ==
               (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
             (pUVar10 = (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)
                        Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)*ppGVar9,
                                   GameObject_GetComponentInChildren_TisUiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_mB6B4D1E6D47AAC87BE6708A3DB1C61FD2EF1E29D_RuntimeMethod_var
                                  ),
             pBVar1 == (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0))
          goto LAB_101da547;
          pBVar1->___uiMaster_9 = pUVar10;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pUVar10,
                             (MethodInfo *)0x0);
          if (bVar6) break;
          ppGVar9 = ppGVar9 + -1;
          uVar16 = uVar16 - 1;
        } while (-1 < (int)uVar16);
      }
LAB_101da06a:
      bVar6 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93
                        (&param_1->___U3CmainSceneU3E5__3_4,(MethodInfo *)0x0);
      if (!bVar6) {
        param_1->___U3CU3E2__current_1 = false;
        param_1->___U3CU3E1__state_0 = 4;
        return true;
      }
      pGVar11 = Scene_GetRootGameObjects_m03603677EECB3F9BC0497D98A1E59B5A11988956
                          (&param_1->___U3CmainSceneU3E5__3_4,(MethodInfo *)0x0);
      if (pGVar11 != (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642 *)0x0) {
        uVar16 = pGVar11->_padding_ - 1;
        if (-1 < (int)uVar16) {
          ppGVar9 = pGVar11->m_Items + pGVar11->_padding_ + -1;
          do {
            if ((uint)pGVar11->_padding_ <= uVar16) {
LAB_101da53a:
              pMVar17 = (MethodInfo *)0x0;
              pEVar15 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar15,pMVar17);
            }
            if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)*ppGVar9 ==
                 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
               (pWVar12 = (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)
                          Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)*ppGVar9
                                     ,
                                     GameObject_GetComponentInChildren_TisWorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A_m7756CE92D2DA7B51B5782E637B31FF75A3031BDD_RuntimeMethod_var
                                    ),
               pBVar1 == (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0))
            goto LAB_101da547;
            pBVar1->___worldMaster_8 = pWVar12;
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                              ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pWVar12,
                               (MethodInfo *)0x0);
            if (bVar6) break;
            ppGVar9 = ppGVar9 + -1;
            uVar16 = uVar16 - 1;
          } while (-1 < (int)uVar16);
        }
        if ((pBVar1 != (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) &&
           (pBVar1->___worldMaster_8 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
           )) {
          pBVar1->___worldMaster_8->___uiMaster_4 = pBVar1->___uiMaster_9;
          if (pBVar1->___uiMaster_9 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            pBVar1->___uiMaster_9->___worldMaster_5 = pBVar1->___worldMaster_8;
            (param_1->___U3CmainSceneU3E5__3_4).___m_Handle_0 = 0;
            param_1->___U3CmainSceneOperationU3E5__4_5 =
                 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *)0x0;
            param_1->___U3CflatscreenUiOperationU3E5__5_6 =
                 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 *)0x0;
            param_1->___U3CU3E2__current_1 = true;
            param_1->___U3CU3E1__state_0 = 5;
            return true;
          }
        }
      }
    }
    break;
  case 3:
    param_1->___U3CU3E1__state_0 = -1;
    goto LAB_101d9f54;
  case 4:
    param_1->___U3CU3E1__state_0 = -1;
    goto LAB_101da06a;
  case 5:
    param_1->___U3CU3E1__state_0 = -1;
    if (((pBVar1 != (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) &&
        (pBVar1->___uiMaster_9 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) &&
       (pGVar14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             pBVar1->___uiMaster_9,(MethodInfo *)0x0),
       pGVar14 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar14,true,(MethodInfo *)0x0)
      ;
      if ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pBVar1->___audioListener_7 !=
          (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)0x0) {
        Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                  ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pBVar1->___audioListener_7
                   ,false,(MethodInfo *)0x0);
        if (pBVar1->___uiMaster_9 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          UiMaster_MaybeSetup_m11912A7FCA98C9C670452C0AA596C83ECF83501A
                    (pBVar1->___uiMaster_9,(MethodInfo *)0x0);
          param_1->___U3CU3E2__current_1 = true;
          param_1->___U3CU3E1__state_0 = 6;
          return true;
        }
      }
    }
    break;
  case 6:
    param_1->___U3CU3E1__state_0 = -1;
    if ((pBVar1 == (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) ||
       (pBVar1->___worldMaster_8 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0))
    break;
    pSVar2 = pBVar1->___worldMaster_8->___saveSystem_35;
    param_1->___U3CsaveSystemU3E5__2_3 = pSVar2;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar2,(MethodInfo *)0x0)
    ;
    if (bVar6) goto LAB_101da2dc;
    goto LAB_101da253;
  case 7:
    param_1->___U3CU3E1__state_0 = -1;
LAB_101da2dc:
    pSVar2 = param_1->___U3CsaveSystemU3E5__2_3;
    pOVar13 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar13,(Il2CppObject *)0x0,
               (int)
               FastCoroutines_KeepGoing_m79DCF23DD5E1BE06FC979C1D167D609E1D7419DD_RuntimeMethod_var,
               Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
    if (pSVar2 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) break;
    bVar6 = SaveSystem_IterateBoot_m12257295A8C85C13BC8AFA52D97B127F2D733B49
                      (pSVar2,(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)pOVar13,
                       (MethodInfo *)0x0);
    if (bVar6) {
      param_1->___U3CU3E2__current_1 = false;
      param_1->___U3CU3E1__state_0 = 7;
      return true;
    }
LAB_101da253:
    if ((pBVar1 != (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) &&
       (pBVar1->___uiMaster_9 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)) {
      UiMaster_UpdateVSync_mC68841C90B1119DA7D6C4D8DA53FDBB6164DBEB7
                (pBVar1->___uiMaster_9,(MethodInfo *)0x0);
      if (pBVar1->___uiMaster_9 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        UiMaster_UpdateAntialiasing_mE1EE9F4B3CE3285B60960266F0627E2FB10A7484
                  (pBVar1->___uiMaster_9,(MethodInfo *)0x0);
        if (pBVar1->___uiMaster_9 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          UiMaster_UpdateFullScreen_mA12775E0F48C9B737DE5298CB061288EA96E225B
                    (pBVar1->___uiMaster_9,(MethodInfo *)0x0);
          if ((pBVar1->___uiMaster_9 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
             && (pOVar13 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                           pBVar1->___uiMaster_9->___onSettingsLoaded_46,
                pOVar13 != (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0)) {
            OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                      (pOVar13,(MethodInfo *)0x0);
            param_1->___U3CU3E2__current_1 = true;
            param_1->___U3CU3E1__state_0 = 8;
            return true;
          }
        }
      }
    }
    break;
  case 8:
    param_1->___U3CU3E1__state_0 = -1;
    if ((pBVar1 != (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) &&
       (pBVar1->___worldMaster_8 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pBVar1->___worldMaster_8,
                 false,(MethodInfo *)0x0);
      if ((pBVar1->___worldMaster_8 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
         && (pGVar14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  pBVar1->___worldMaster_8,(MethodInfo *)0x0),
            pGVar14 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
        GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                  (pGVar14,true,(MethodInfo *)0x0);
        if (pBVar1->___worldMaster_8 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
           ) {
          WorldMaster_OnOnEnable_mB747B0D7310BFDD649415B5A44A9F42904A8841A
                    (pBVar1->___worldMaster_8,(MethodInfo *)0x0);
          param_1->___U3CU3E2__current_1 = true;
          param_1->___U3CU3E1__state_0 = 9;
          return true;
        }
      }
    }
    break;
  case 9:
    param_1->___U3CU3E1__state_0 = -1;
    if ((pBVar1 != (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) &&
       (pBVar1->___worldMaster_8 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
      WorldMaster_OnStart_mF003374D13345F5D4648CC9221FE948318A810F6
                (pBVar1->___worldMaster_8,(MethodInfo *)0x0);
      param_1->___U3CU3E2__current_1 = true;
      param_1->___U3CU3E1__state_0 = 10;
      return true;
    }
    break;
  case 10:
    param_1->___U3CU3E1__state_0 = -1;
    if ((pBVar1 != (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) &&
       (pBVar1->___worldMaster_8 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pBVar1->___worldMaster_8,
                 true,(MethodInfo *)0x0);
      param_1->___U3CU3E2__current_1 = true;
      param_1->___U3CU3E1__state_0 = 0xb;
      return true;
    }
    break;
  case 0xb:
    pSVar2 = param_1->___U3CsaveSystemU3E5__2_3;
    param_1->___U3CU3E1__state_0 = -1;
    if (pSVar2 != (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) {
      iVar3 = pSVar2->___bootState_6;
      if (iVar3 == 7) {
        if (((pBVar1 == (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) ||
            (pSVar2->___currentMetaSave_14 ==
             (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0)) ||
           (pBVar1->___worldMaster_8 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
           )) break;
        WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
                  (pBVar1->___worldMaster_8,pSVar2->___currentMetaSave_14->___saveData_9,
                   (MethodInfo *)0x0);
        if (pBVar1->___worldMaster_8 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
           ) break;
        pBVar1->___worldMaster_8->___awaitingDim_56 = false;
      }
      else {
        if (iVar3 != 9) {
          if (iVar3 != 8) {
            return false;
          }
          if ((pBVar1 != (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) &&
             (pBVar1->___worldMaster_8 !=
              (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
            WorldMaster_New_m285406F3466084E0F9D01707DBE9ED07DF2F0416
                      (pBVar1->___worldMaster_8,(MethodInfo *)0x0);
            pWVar12 = pBVar1->___worldMaster_8;
            if (pWVar12 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
              WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
                        (pWVar12,pWVar12->___saveData_42,(MethodInfo *)0x0);
              if ((pBVar1->___uiMaster_9 !=
                   (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                 (pLVar4 = pBVar1->___uiMaster_9->___loadingUi_12,
                 pLVar4 != (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)0x0)) {
                LoadingUi_StopLoadingNow_mFAD51DE9A74C81702A6DCD38EAED96F378041F45
                          (pLVar4,(MethodInfo *)0x0);
                if ((pBVar1->___uiMaster_9 !=
                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                   (pSVar5 = pBVar1->___uiMaster_9->___saveMenu_6,
                   pSVar5 != (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0)) {
                  SaveMenu_OpenWithoutRefresh_m0487DF823B3C0C238EEC52CD61A443DDDD8226F2
                            (pSVar5,(MethodInfo *)0x0);
                  if (pBVar1->___worldMaster_8 !=
                      (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
                    pBVar1->___worldMaster_8->___awaitingDim_56 = false;
                    return false;
                  }
                }
              }
            }
          }
          break;
        }
        if (pBVar1 == (BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391 *)0x0) break;
      }
      if (pBVar1->___uiMaster_9 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        UiMaster_StartFinishLoading_m3CA24611C1CF91CFF08C18DD6D2C2F7CB9298C5D
                  (pBVar1->___uiMaster_9,false,(MethodInfo *)0x0);
        return false;
      }
    }
    break;
  default:
    return false;
  }
LAB_101da547:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
