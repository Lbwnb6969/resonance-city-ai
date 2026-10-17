// RVA 0xa0b86d | Recovered.function.called_by_a0b5f0
// PDB: FUN_10a0b86d
// Body: [[10a0b86d, 10a0b8dc] [10a0b8e0, 10a0ba9f]]
// Direct callees:
// 1003e420 Invoke
// 101280f0 il2cpp_runtime_class_init
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e5200 UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
// 103e6950 UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
// 103e8a10 UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
// 103e8aa0 UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
// 103e8d70 UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 10a0bad0 SideMenuNavigator_SelectButton_mB674C8C38FFE5C191F17C04A32C4C05A6967CE25
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void FUN_10a0b86d(void)

{
  NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 *pNVar1;
  List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *pLVar2;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *pCVar8;
  SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *unaff_EBX;
  int unaff_EBP;
  Il2CppObject *unaff_ESI;
  Exception_t *unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_ESI != (Il2CppObject *)0x0) {
    InterfaceFuncInvoker0<int>::Invoke
              (0,IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var,unaff_ESI
              );
  }
  if (unaff_EDI != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(unaff_EDI,(MethodInfo *)0x0);
  }
  pNVar1 = unaff_EBX->___selectedButton_5;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pNVar1,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pLVar2 = unaff_EBX->___navigableButtons_7;
    if (pLVar2 == (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)0x0) goto LAB_10a0ba93;
    if (0 < pLVar2->____size_2) {
      if (pLVar2->____size_2 == 0) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      SideMenuNavigator_SelectButton_mB674C8C38FFE5C191F17C04A32C4C05A6967CE25
                (unaff_EBX,
                 *(NavigableButton_t3E3EB83A5B5751D717C13A670A721528CD3059A1 **)
                  (pLVar2->____items_1 + 0x10),(MethodInfo *)0x0);
    }
  }
  pUVar3 = unaff_EBX->___targetArrowY_8;
  pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
           il2cpp_codegen_object_new
                     (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar6,*(Il2CppObject **)(unaff_EBP + -0x14),
             (int)
             U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5E89302ACC31BD7BB7B22FF78805AE8BBC4FF252_RuntimeMethod_var
             ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
  if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
              (pUVar3,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar6,(MethodInfo *)0x0
              );
    if ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)unaff_EBX->___selectorTransform_6 !=
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar7 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x34),
                          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                          unaff_EBX->___selectorTransform_6,(MethodInfo *)0x0);
      pIVar4 = *(Il2CppObject **)(unaff_EBP + -0x14);
      pIVar4[1].monitor = (MonitorData *)pVVar7->___x_2;
      if (unaff_EBX->___targetArrowX_9 !=
          (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                  (unaff_EBX->___targetArrowX_9,0.0,(MethodInfo *)0x0);
        pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 il2cpp_codegen_object_new
                           (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169_il2cpp_TypeInfo_var);
        OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                  (pOVar6,pIVar4,
                   (int)
                   U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__1_m99DD0A1C3F60C65B9DB14011DF3753A2D7FB4AC4_RuntimeMethod_var
                   ,Action_2__ctor_m62ADD57C1B772087EF2883885445E71CA7293100_RuntimeMethod_var);
        if (*(UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 **)(unaff_EBP + 0xc) !=
            (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
          UiMaster_SubscribeToMenuState_mE782237CD39DD56FB441C83148B723D4C4940272
                    (*(UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 **)(unaff_EBP + 0xc),
                     (Action_2_t4DD01329FC38EBF9CEAC744A13C1C3E37D93C169 *)pOVar6,(MethodInfo *)0x0)
          ;
          pUVar3 = unaff_EBX->___openState_10;
          pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   il2cpp_codegen_object_new
                             (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                             );
          OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                    (pOVar6,*(Il2CppObject **)(unaff_EBP + -0x14),
                     (int)
                     U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__2_m1A84EF38112A7027DF18EFE52B5AAC7EB421605C_RuntimeMethod_var
                     ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
          if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_SubscribeToTarget_mDCA151230E54C0D720A6D8BB492AED067CFBED08
                      (pUVar3,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar6,
                       (MethodInfo *)0x0);
            pUVar3 = unaff_EBX->___targetArrowX_9;
            pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                     il2cpp_codegen_object_new
                               (
                               Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var
                               );
            OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                      (pOVar6,*(Il2CppObject **)(unaff_EBP + -0x14),
                       (int)
                       U3CU3Ec__DisplayClass11_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__3_mBAB0A01B1B2B75B386744655CABFCD83EA57F2AE_RuntimeMethod_var
                       ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
            if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
              UpdateState_Subscribe_m6FB44E1EF150C04E3E184689FBF4A3F282835BDA
                        (pUVar3,(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)pOVar6,
                         (MethodInfo *)0x0);
              pUVar3 = unaff_EBX->___openState_10;
              if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                  unaff_EBX->___selectorTransform_6 !=
                  (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                pCVar8 = (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F *)
                         Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                    unaff_EBX->___selectorTransform_6,
                                    Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var
                                   );
                if (pUVar3 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
                  UpdateState_Subscribe_m204EF4956F69A083507E07478ACD5A36B93EB9ED
                            (pUVar3,pCVar8,(MethodInfo *)0x0);
                  pUVar3 = unaff_EBX->___targetArrowX_9;
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
                            (pUVar3,(MethodInfo *)0x0);
                  UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                            (unaff_EBX->___targetArrowY_8,(MethodInfo *)0x0);
                  UiMaster_AddState_mBEDD5B000A27415FBFABC160DF4F683F4189BACF
                            (unaff_EBX->___openState_10,(MethodInfo *)0x0);
                  ExceptionList = *(void **)(unaff_EBP + -0xc);
                  return;
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
