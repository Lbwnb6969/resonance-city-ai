// RVA 0x8428c0 | Placemaker.Ui.GenericMenuNavigator$$Placemaker.Ui.UiMaster.IUiSetup.OnSetup
// PDB: GenericMenuNavigator_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mD53F5327669821F89F7F827C9A285B8ADBC31D3B
// Body: [[108428c0, 10842b0a] [10842b25, 10842bf0] [10842bf4, 10842cb0]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8000 UnityFunctions_EnumerateHirearchy_m8A04476FCF673A5DFFF9E223E223B97DCDAA0263
// 103e85c0 UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
// 103e8900 UpdateState_SubscribeToTarget_m4B75B353E42A7EE934424059A570D5DC521EA2EB
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 10842cc0 GenericMenuNavigator_SelectButton_mAF6FDB8622BD2B6DEEA955A9D718A95D635B7063
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

/* WARNING: Removing unreachable block (ram,0x10842ca9) */

void __cdecl
GenericMenuNavigator_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mD53F5327669821F89F7F827C9A285B8ADBC31D3B
          (GenericMenuNavigator_t8DD7647D5CEEB4AE0E944F8565B0F21478F1A333 *param_1,
          UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_2,MethodInfo *param_3)

{
  ushort uVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *pNVar3;
  List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *pLVar4;
  undefined1 *puVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar9;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar10;
  int iVar11;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar12;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar13;
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar14;
  ushort uVar15;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__GenericMenuNavigator_Placemaker_Ui_UiMaster_IUiSetup_OnSetup_mD53F5327669821F89F7F827C9A285B8ADBC31D3B
  ;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  ExceptionList = &local_10;
  puVar5 = &stack0xffffffc4;
  if (DAT_1151f447 == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisINavigableMenu_tE8A2ACD7308525E7117DBF58CDA37584119F522A_mF74151F7A04071152BFDD53348FCB7B454096D4F_RuntimeMethod_var
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
              ((uint *)&INavigableMenu_tE8A2ACD7308525E7117DBF58CDA37584119F522A_il2cpp_TypeInfo_var
              );
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
    DAT_1151f447 = '\x01';
    puVar5 = local_14;
  }
  local_14 = puVar5;
  local_18.___moduleIndex_0 = 0;
  local_18.___flags_1 = '\0';
  local_18._3_1_ = 0;
  pIVar7 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      Component_GetComponent_TisINavigableMenu_tE8A2ACD7308525E7117DBF58CDA37584119F522A_mF74151F7A04071152BFDD53348FCB7B454096D4F_RuntimeMethod_var
                     );
  param_1->___navigableMenu_5 = pIVar7;
  if (pIVar7 == (Il2CppObject *)0x0) goto LAB_10842ca4;
  uVar15 = 0;
  uVar1 = ((pIVar7->field0_0x0).klass)->interface_offsets_count;
  if (uVar1 != 0) {
    pIVar2 = ((pIVar7->field0_0x0).klass)->interfaceOffsets;
    do {
      if (pIVar2[uVar15].interfaceType ==
          INavigableMenu_tE8A2ACD7308525E7117DBF58CDA37584119F522A_il2cpp_TypeInfo_var) {
        pVVar8 = (VirtualInvokeData *)
                 (&(pIVar7->field0_0x0).klass[1].gc_desc + pIVar2[uVar15].offset * 2);
        goto LAB_108429de;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar1);
  }
  pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar7,
                      INavigableMenu_tE8A2ACD7308525E7117DBF58CDA37584119F522A_il2cpp_TypeInfo_var,1
                     );
LAB_108429de:
  pUVar9 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
  if (param_1->___navigableButtons_7 == (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)0x0)
  goto LAB_10842ca4;
  if (param_1->___navigableButtons_7->____size_2 == 0) {
    pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         (MethodInfo *)0x0);
    pIVar7 = UnityFunctions_EnumerateHirearchy_m8A04476FCF673A5DFFF9E223E223B97DCDAA0263
                       (pTVar10,true,(MethodInfo *)0x0);
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar7 = (Il2CppObject *)
               InterfaceFuncInvoker0<int>::Invoke
                         (0,
                          IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var
                          ,pIVar7);
      local_8 = 0;
      while (pIVar7 != (Il2CppObject *)0x0) {
        iVar11 = InterfaceFuncInvoker0<int>::Invoke
                           (0,
                            IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                            ,pIVar7);
        if ((char)iVar11 == '\0') {
          local_8 = 0xffffffff;
          if (pIVar7 == (Il2CppObject *)0x0) goto LAB_10842ba5;
          uVar15 = 0;
          uVar1 = ((pIVar7->field0_0x0).klass)->interface_offsets_count;
          if (uVar1 != 0) goto LAB_10842b50;
          goto LAB_10842b6a;
        }
        uVar15 = 0;
        uVar1 = ((pIVar7->field0_0x0).klass)->interface_offsets_count;
        if (uVar1 != 0) {
          pIVar2 = ((pIVar7->field0_0x0).klass)->interfaceOffsets;
          do {
            if (pIVar2[uVar15].interfaceType ==
                IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var) {
              pVVar8 = (VirtualInvokeData *)
                       (&((pIVar7->field0_0x0).klass)->field_0xbc + pIVar2[uVar15].offset * 8);
              goto LAB_10842a9a;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar1);
        }
        pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar7,
                            IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var
                            ,0);
LAB_10842a9a:
        pCVar12 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
        if (pCVar12 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) break;
        pOVar13 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                            (pCVar12,SUB41(&local_18,0),
                             Component_TryGetComponent_TisNavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1_mAEC8E664AB34C0EDAB466DDBB079BF30FD349D91_RuntimeMethod_var
                            );
        if ((char)pOVar13 != '\0') {
          if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___navigableButtons_7 ==
              (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) break;
          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                     param_1->___navigableButtons_7,local_18,
                     List_1_Add_mBDE4404F1084F12017E833709252965F396B2F42_RuntimeMethod_var);
        }
      }
    }
    goto LAB_10842ca4;
  }
  goto LAB_10842ba5;
  while (uVar15 = uVar15 + 1, uVar15 < uVar1) {
LAB_10842b50:
    if (((pIVar7->field0_0x0).klass)->interfaceOffsets[uVar15].interfaceType ==
        IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var) {
      pVVar8 = (VirtualInvokeData *)
               (&((pIVar7->field0_0x0).klass)->field_0xbc +
               ((pIVar7->field0_0x0).klass)->interfaceOffsets[uVar15].offset * 8);
      goto LAB_10842b76;
    }
  }
LAB_10842b6a:
  pVVar8 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar7,
                      IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,0);
LAB_10842b76:
  (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
LAB_10842ba5:
  pNVar3 = param_1->___selectedButton_8;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pNVar3,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pLVar4 = param_1->___navigableButtons_7;
    if (pLVar4 == (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)0x0) goto LAB_10842ca4;
    if (0 < pLVar4->____size_2) {
      if (pLVar4->____size_2 == 0) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      GenericMenuNavigator_SelectButton_mAF6FDB8622BD2B6DEEA955A9D718A95D635B7063
                (param_1,*(NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 **)
                          (pLVar4->____items_1 + 0x10),(MethodInfo *)0x0);
    }
  }
  param_1->___master_4 = param_2;
  pCVar14 = (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)
            Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                       Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                      );
  if (pUVar9 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
              (pUVar9,pCVar14,(MethodInfo *)0x0);
    pTVar10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         (MethodInfo *)0x0);
    UpdateState_SubscribeScale_m4569C9FB666CC62359E2843F9F59129315C7D3CD
              (pUVar9,pTVar10,'\x03',1.1,1.0,(MethodInfo *)0x0);
    UpdateState_SubscribeToTarget_m4B75B353E42A7EE934424059A570D5DC521EA2EB
              (pUVar9,(MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A *)param_1,
               (MethodInfo *)0x0);
    if ((param_2 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (param_2->___inputModeManager_19 !=
        (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)0x0)) {
      pUVar9 = param_2->___inputModeManager_19->___gamepadState_6;
      if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___selectorTransform_11
           != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
         (pCVar14 = (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)
                    Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                               param_1->___selectorTransform_11,
                               Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                              ),
         pUVar9 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) {
        UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                  (pUVar9,pCVar14,(MethodInfo *)0x0);
        ExceptionList = local_10;
        return;
      }
    }
  }
LAB_10842ca4:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
