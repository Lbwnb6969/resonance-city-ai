// RVA 0xa0b5f0 | Placemaker.Ui.SideMenuNavigator$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: SideMenuNavigator_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mA6DBC9E5C5423649B1D4814FF123C688E8AA604F
// Body: [[10a0b5f0, 10a0b84f]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 103e8000 UnityFunctions_EnumerateHirearchy_m8A04476FCF673A5DFFF9E223E223B97DCDAA0263
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 10a0b86d FUN_10a0b86d
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
SideMenuNavigator_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mA6DBC9E5C5423649B1D4814FF123C688E8AA604F
          (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  ushort uVar1;
  NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *pNVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *pLVar4;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar5;
  undefined1 *puVar6;
  bool bVar7;
  ushort uVar8;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  Il2CppObject *pIVar11;
  int iVar12;
  VirtualInvokeData *pVVar13;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar14;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar15;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar17;
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_38;
  Il2CppObject *local_24;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *local_20;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_1c;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__SideMenuNavigator_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mA6DBC9E5C5423649B1D4814FF123C688E8AA604F
  ;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &pvStack_10;
  puVar6 = &stack0xffffffbc;
  if (DAT_115201ed == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisNavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1_mAEC8E664AB34C0EDAB466DDBB079BF30FD349D91_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mBDE4404F1084F12017E833709252965F396B2F42_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65B6D484849CB5EE299A6401D50198A6209E1825_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mBC6E3BE334F9069B54AF6841F840740F75D621E2_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5E89302ACC31BD7BB7B22FF78805AE8BBC4FF252_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m99DD0A1C3F60C65B9DB14011DF3753A2D7FB4AC4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m1A84EF38112A7027DF18EFE52B5AAC7EB421605C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mBAB0A01B1B2B75B386744655CABFCD83EA57F2AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec__DisplayClass11_0_t669A9CAEA708B389127A93B5FCEA239A36B16224_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_115201ed = '\x01';
    puVar6 = local_14;
  }
  local_14 = puVar6;
  local_1c.___moduleIndex_0 = 0;
  local_1c.___flags_1 = '\0';
  local_1c._3_1_ = 0;
  pBVar9 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
           il2cpp_codegen_object_new
                     (
                     U3CU3Ec__DisplayClass11_0_t669A9CAEA708B389127A93B5FCEA239A36B16224_il2cpp_TypeInfo_var
                     );
  local_18 = pBVar9;
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar9,(MethodInfo *)0x0);
  local_20 = pBVar9;
  if (pBVar9 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
    pBVar9->___name_0 = (String_t *)param_1;
    pNVar2 = param_1->___selectedButton_5;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pNVar2,
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                           (MethodInfo *)0x0);
      pIVar11 = UnityFunctions_EnumerateHirearchy_m8A04476FCF673A5DFFF9E223E223B97DCDAA0263
                          (pTVar10,true,(MethodInfo *)0x0);
      if (pIVar11 != (Il2CppObject *)0x0) {
        pIVar11 = (Il2CppObject *)
                  InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var
                             ,pIVar11);
        local_8 = 0;
        local_24 = pIVar11;
        while (pIVar11 != (Il2CppObject *)0x0) {
          iVar12 = InterfaceFuncInvoker0<int>::Invoke
                             (0,
                              IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                              ,pIVar11);
          if ((char)iVar12 == '\0') {
            FUN_10a0b86d();
            return;
          }
          uVar8 = 0;
          uVar1 = ((pIVar11->field0_0x0).klass)->interface_offsets_count;
          if (uVar1 != 0) {
            pIVar3 = ((pIVar11->field0_0x0).klass)->interfaceOffsets;
            do {
              if (pIVar3[uVar8].interfaceType ==
                  IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var) {
                pVVar13 = (VirtualInvokeData *)
                          (&((pIVar11->field0_0x0).klass)->field_0xbc + pIVar3[uVar8].offset * 8);
                goto LAB_10a0b7eb;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar1);
          }
          pVVar13 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar11,
                               IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var
                               ,0);
LAB_10a0b7eb:
          pCVar14 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                    (*pVVar13->methodPtr)(pIVar11,pVVar13->method);
          if (pCVar14 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) break;
          pOVar15 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                              (pCVar14,SUB41(&local_1c,0),
                               Component_TryGetComponent_TisNavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1_mAEC8E664AB34C0EDAB466DDBB079BF30FD349D91_RuntimeMethod_var
                              );
          if ((char)pOVar15 != '\0') {
            if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___navigableButtons_7
                == (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) break;
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                       param_1->___navigableButtons_7,local_1c,
                       List_1_Add_mBDE4404F1084F12017E833709252965F396B2F42_RuntimeMethod_var);
          }
        }
      }
    }
    else {
      pNVar2 = param_1->___selectedButton_5;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pNVar2,
                         (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        pLVar4 = param_1->___navigableButtons_7;
        if (pLVar4 == (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)0x0) goto LAB_10a0ba93;
        if (0 < pLVar4->____size_2) {
          if (pLVar4->____size_2 == 0) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          SideMenuNavigator_SelectButton_mB674C8C38FFE5C191F17C04A32C4C05A6967CE25
                    (param_1,*(NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 **)
                              (pLVar4->____items_1 + 0x10),(MethodInfo *)0x0);
        }
      }
      pUVar5 = param_1->___targetArrowY_8;
      pOVar16 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                il2cpp_codegen_object_new
                          (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar16,(Il2CppObject *)local_18,
                 (int)
                 U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5E89302ACC31BD7BB7B22FF78805AE8BBC4FF252_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      if (pUVar5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                  (pUVar5,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar16,
                   (MethodInfo *)0x0);
        if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)param_1->___selectorTransform_6
            != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pVVar17 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                              (&VStack_38,
                               (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                               param_1->___selectorTransform_6,(MethodInfo *)0x0);
          pBVar9 = local_18;
          local_18->___screenAspectRatio_1 = pVVar17->___x_2;
          if (param_1->___targetArrowX_9 !=
              (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                      (param_1->___targetArrowX_9,0.0,(MethodInfo *)0x0);
            pOVar16 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                      il2cpp_codegen_object_new
                                (
                                Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var
                                );
            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                      (pOVar16,(Il2CppObject *)pBVar9,
                       (int)
                       U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m99DD0A1C3F60C65B9DB14011DF3753A2D7FB4AC4_RuntimeMethod_var
                       ,Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
            if (param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
              UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
                        (param_2,(Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)pOVar16,
                         (MethodInfo *)0x0);
              pUVar5 = param_1->___openState_10;
              pOVar16 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                        il2cpp_codegen_object_new
                                  (
                                  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                  );
              OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                        (pOVar16,(Il2CppObject *)local_18,
                         (int)
                         U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m1A84EF38112A7027DF18EFE52B5AAC7EB421605C_RuntimeMethod_var
                         ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                        );
              if (pUVar5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                          (pUVar5,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar16,
                           (MethodInfo *)0x0);
                pUVar5 = param_1->___targetArrowX_9;
                pOVar16 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                          il2cpp_codegen_object_new
                                    (
                                    Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                                    );
                OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                          (pOVar16,(Il2CppObject *)local_18,
                           (int)
                           U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mBAB0A01B1B2B75B386744655CABFCD83EA57F2AE_RuntimeMethod_var
                           ,
                           Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var
                          );
                if (pUVar5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                  UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                            (pUVar5,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar16,
                             (MethodInfo *)0x0);
                  pUVar5 = param_1->___openState_10;
                  if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                       param_1->___selectorTransform_6 !=
                       (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                     (pCVar18 = (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)
                                Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           param_1->___selectorTransform_6,
                                           Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                                          ),
                     pUVar5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
                    UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                              (pUVar5,pCVar18,(MethodInfo *)0x0);
                    pUVar5 = param_1->___targetArrowX_9;
                    if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var
                                );
                    }
                    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                              (pUVar5,(MethodInfo *)0x0);
                    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                              (param_1->___targetArrowY_8,(MethodInfo *)0x0);
                    UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                              (param_1->___openState_10,(MethodInfo *)0x0);
                    ExceptionList = pvStack_10;
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
LAB_10a0ba93:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
