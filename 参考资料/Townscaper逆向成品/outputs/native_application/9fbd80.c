// RVA 0x9fbd80 | Placemaker.Ui.SaveCard$$Setup
// PDB: SaveCard_Setup_mD9851B4197E1CF1CFC09A8912125F8136601C822
// Body: [[109fbd80, 109fc244]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e530 RaiseInvalidCastException
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103d5e30 MetaSave_get_isBroken_m975083F67D58355316AD58AE0BF439CDF946354C
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e8550 UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
// 103e85c0 UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 1043ef30 Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 108740c0 BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10b15e50 Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55

void __cdecl
SaveCard_Setup_mD9851B4197E1CF1CFC09A8912125F8136601C822
          (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *pAVar2;
  bool bVar3;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar4;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar5;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  String_t *pSVar8;
  Il2CppObject *pIVar9;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar10;
  BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *pBVar11;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar12;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar13;
  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *pAVar14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar15;
  int iVar16;
  Il2CppClass *pIVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;
  float local_8;

  if (DAT_11520181 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisDistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0_mF7E349ADCCF363113120015DB7C65F5A0FABC182_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisUiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_mC149FD3B9DDA681C6FD3C8A806389A4CF7028DAB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisDistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0_mD083AFA19CA1509F6FD3EFC761C3CAD4953A678F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       SaveCard_U3CSetupU3Eb__12_1_mC4D5AC87D35DF5A0159D9AABA314325C3E113E85_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       SaveCard_U3CSetupU3Eb__12_2_m1009D7546D4D2BC4C48CD113CB112FDD92A126FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       SaveCard_U3CSetupU3Eb__12_3_m15863B55F1C355C5BAC9EAB23979B69058A5672F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass12_0_U3CSetupU3Eb__0_mD873A7965EF81D4FF6C82EF17B238B9496CA34ED_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass12_0_t3103A2E2398306E57FFD8B224D4E033DD3D30584_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_11520181 = '\x01';
  }
  if (param_1->___hasBeenEnabled_13 != false) {
    return;
  }
  pBVar4 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass12_0_t3103A2E2398306E57FFD8B224D4E033DD3D30584_il2cpp_TypeInfo_var
                     );
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar4,(MethodInfo *)0x0);
  param_1->___hasBeenEnabled_13 = true;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,(MethodInfo *)0x0);
  if (!bVar3) {
    param_2 = (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)
              Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         Component_GetComponentInParent_TisUiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_mC149FD3B9DDA681C6FD3C8A806389A4CF7028DAB_RuntimeMethod_var
                        );
  }
  pUVar6 = param_1->___scaleZ_11;
  pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pUVar6 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    pUVar6 = UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
                       (pUVar6,pTVar5,'\x04',0.0,1.0,(MethodInfo *)0x0);
    pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_109fc239;
    pVVar7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                       (&local_1c,pTVar5,(MethodInfo *)0x0);
    local_10._0_4_ = pVVar7->___x_2;
    local_10._4_4_ = pVVar7->___y_3;
    local_8 = pVVar7->___z_4;
    if (pUVar6 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_109fc239;
    UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077(pUVar6,local_8,(MethodInfo *)0x0);
    pUVar6 = param_1->___scaleXY_12;
    pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pUVar6 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_109fc239;
    pUVar6 = UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
                       (pUVar6,pTVar5,'\x03',0.0,1.0,(MethodInfo *)0x0);
    pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                        (MethodInfo *)0x0);
    if (pTVar5 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_109fc239;
    pVVar7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                       (&local_1c,pTVar5,(MethodInfo *)0x0);
    if (pUVar6 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_109fc239;
    UpdateState_SnapTo_m09AD136615F50FE42FD5F48CADAC468357F42077
              (pUVar6,pVVar7->___x_2,(MethodInfo *)0x0);
    pSVar8 = (String_t *)
             Component_GetComponentInChildren_TisRuntimeObject_m1F2C143B578F30EE0CD30A57F890C239E3B5FA81_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true,
                        Component_GetComponentInChildren_TisDistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0_mF7E349ADCCF363113120015DB7C65F5A0FABC182_RuntimeMethod_var
                       );
    if (pBVar4 == (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) goto LAB_109fc239;
    pBVar4->___name_0 = pSVar8;
    if (param_1->___image_4 == (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)0x0)
    goto LAB_109fc239;
    pIVar9 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___image_4,
                        Component_GetComponent_TisDistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0_mD083AFA19CA1509F6FD3EFC761C3CAD4953A678F_RuntimeMethod_var
                       );
    pBVar4->___screenAspectRatio_1 = (float)pIVar9;
    if ((param_2 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
       (param_2->___saveMenu_6 == (SaveMenu_t5FABF5FD9F5391352EFA4B985C68F0D9E2D9E2E8 *)0x0))
    goto LAB_109fc239;
    pUVar6 = param_2->___saveMenu_6->___focusCardState_30;
    pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar10,(Il2CppObject *)pBVar4,
               (int)
               U3CU3Ec__DisplayClass12_0_U3CSetupU3Eb__0_mD873A7965EF81D4FF6C82EF17B238B9496CA34ED_RuntimeMethod_var
               ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    if (pUVar6 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_109fc239;
    UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
              (pUVar6,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar10,
               (MethodInfo *)0x0);
    pUVar6 = param_1->___scaleZ_11;
    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    }
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF(pUVar6,(MethodInfo *)0x0);
    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
              (param_1->___scaleXY_12,(MethodInfo *)0x0);
    pBVar11 = (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         Component_GetComponent_TisBaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C_m9079D68F2D5D466CD56C263696FEC506BDDCBC34_RuntimeMethod_var
                        );
    pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar10,(Il2CppObject *)param_1,
               (int)
               SaveCard_U3CSetupU3Eb__12_1_mC4D5AC87D35DF5A0159D9AABA314325C3E113E85_RuntimeMethod_var
               ,Action_1__ctor_mC6AE834F1D7B55FF8C16848A424F543B0229A034_RuntimeMethod_var);
    if (pBVar11 == (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) goto LAB_109fc239;
    BaseButton_Subscribe_mD5456F93E497F42BA652483BE83B0AECA2089C2A
              (pBVar11,(Action_1_t8BF1017F2A88A0BEA05454ECAF5EB48218515BA1 *)pOVar10,
               (MethodInfo *)0x0);
    pMVar1 = param_1->___metaSave_9;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar1,(MethodInfo *)0x0)
    ;
    if (!bVar3) {
      return;
    }
    pGVar12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         (MethodInfo *)0x0);
    if ((param_1->___metaSave_9 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) ||
       (bVar3 = MetaSave_get_isBroken_m975083F67D58355316AD58AE0BF439CDF946354C
                          (param_1->___metaSave_9,(MethodInfo *)0x0),
       pGVar12 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_109fc239;
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar12,!bVar3,(MethodInfo *)0x0)
    ;
    pMVar1 = param_1->___metaSave_9;
    if (pMVar1 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) goto LAB_109fc239;
    pAVar14 = pMVar1->___onStateChange_16;
    pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar10,(Il2CppObject *)param_1,
               (int)
               SaveCard_U3CSetupU3Eb__12_2_m1009D7546D4D2BC4C48CD113CB112FDD92A126FA_RuntimeMethod_var
               ,(MethodInfo *)0x0);
    pAVar13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
              Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                        ((Delegate_t *)pAVar14,(Delegate_t *)pOVar10,(MethodInfo *)0x0);
    pAVar14 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
    if (pAVar13 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
      if (*(Il2CppClass **)pAVar13 ==
          Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
        pAVar14 = pAVar13;
      }
      pIVar17 = Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
      if (pAVar14 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) goto LAB_109fc23e;
    }
    pMVar1->___onStateChange_16 = pAVar14;
    pMVar1 = param_1->___metaSave_9;
    if (pMVar1 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      pAVar2 = pMVar1->___onIndexChange_17;
      pOVar10 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                il2cpp_codegen_object_new
                          (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar10,(Il2CppObject *)param_1,
                 (int)
                 SaveCard_U3CSetupU3Eb__12_3_m15863B55F1C355C5BAC9EAB23979B69058A5672F_RuntimeMethod_var
                 ,Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
      pAVar13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)
                Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                          ((Delegate_t *)pAVar2,(Delegate_t *)pOVar10,(MethodInfo *)0x0);
      pAVar14 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0;
      if (pAVar13 != (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
        if (*(Il2CppClass **)pAVar13 ==
            Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var) {
          pAVar14 = pAVar13;
        }
        pIVar17 = Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var;
        if (pAVar14 == (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)0x0) {
LAB_109fc23e:
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException((Il2CppObject *)pAVar13,pIVar17);
        }
      }
      pMVar1->___onIndexChange_17 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)pAVar14;
      pTVar5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0);
      if (((param_1->___metaSave_9 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
          (pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                param_1->___metaSave_9,(MethodInfo *)0x0),
          pTVar15 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) &&
         (iVar16 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                             (pTVar15,(MethodInfo *)0x0),
         pTVar5 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                  (pTVar5,iVar16,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_109fc239:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
