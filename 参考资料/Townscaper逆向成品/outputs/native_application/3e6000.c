// RVA 0x3e6000 | Placemaker.Ui.UiMaster$$MaybeSetup
// PDB: UiMaster_MaybeSetup_m11912A7FCA98C9C670452C0AA596C83ECF83501A
// Body: [[103e6000, 103e63ff]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 103e641a FUN_103e641a
// 1043f240 Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared
// 106625b0 RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066e4a0 Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void __cdecl
UiMaster_MaybeSetup_m11912A7FCA98C9C670452C0AA596C83ECF83501A
          (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *param_1,MethodInfo *param_2)

{
  ushort uVar1;
  Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *pDVar2;
  LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *pLVar3;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar4;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  Exception_t *pEVar10;
  undefined1 *puVar11;
  bool bVar12;
  ushort uVar13;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar14;
  int iVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar16;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar17;
  VirtualInvokeData *pVVar18;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar19;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar20;
  Delegate_t *pDVar21;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar22;
  Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *pAVar23;
  Delegate_t *pDVar24;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar25;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar26;
  undefined1 local_60 [20];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c;
  undefined4 local_40 [5];
  uint uStack_2c;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *local_28;
  Il2CppObject *local_24;
  Il2CppClass *local_20;
  Exception_t *local_1c;
  Il2CppClass *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__UiMaster_MaybeSetup_m11912A7FCA98C9C670452C0AA596C83ECF83501A;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  ExceptionList = &pvStack_10;
  puVar11 = &stack0xffffff94;
  if (DAT_1151c8ac == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m1E9751809636AB39A3798E047C0FDBDD48C9BADA_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentsInChildren_TisIUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_mC62D308C44A29F37D431D1C89AD5B212637BF057_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mF5B76F934BB21BB5541D6435B960A2DD70145649_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m63B4B1C7DEF2FDFB6BCD57E39E46E766E21FC50A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m966795EFAD94B25506CA882388E6B7B53EE1D44F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m52F1BBD1E85F7192E45EFBBB260E310AF0BD960E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UiMaster_OnControllerConnected_m6E875C3F36936378360CFA16263813159C140CF5_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UiMaster_U3CMaybeSetupU3Eb__58_0_m18E9A417F9B38CED66AD53E99F26F73DC422A00D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       UiMaster_U3CMaybeSetupU3Eb__58_1_m8F7F33A0B76F0385C34BF6AB43B14D3D5132CF66_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
    DAT_1151c8ac = '\x01';
    puVar11 = local_14;
  }
  local_14 = puVar11;
  local_60._0_4_ = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0;
  local_60._4_4_ = 0;
  local_60._8_4_ = 0;
  local_60._12_4_ = (Il2CppClass *)0x0;
  local_1c = (Exception_t *)0x0;
  local_18 = (Il2CppClass *)0x0;
  local_40[2] = 0;
  if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
  }
  *(UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 **)
   UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->static_fields = param_1;
  if (param_1->___hasStarted_28 == false) {
    param_1->___hasStarted_28 = true;
    if (*(int *)BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391_il2cpp_TypeInfo_var->
                static_fields != 0) {
      pDVar2 = *(Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 **)
                (*(int *)BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391_il2cpp_TypeInfo_var->
                         static_fields + 0xc);
      param_1->___dim_10 = pDVar2;
      if (pDVar2 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0) {
        pTVar14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pDVar2,
                             (MethodInfo *)0x0);
        pTVar25 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
        if ((pTVar14 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
           (*(Il2CppClass **)pTVar14 ==
            RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)) {
          pTVar25 = pTVar14;
        }
        if (param_1->___dimSibling_23 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        {
          pTVar14 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                              (param_1->___dimSibling_23,(MethodInfo *)0x0);
          if (pTVar25 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                      (pTVar25,pTVar14,(MethodInfo *)0x0);
            if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___dimSibling_23 !=
                (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
              pTVar14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   param_1->___dimSibling_23,(MethodInfo *)0x0);
              if (pTVar14 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                iVar15 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                                   (pTVar14,(MethodInfo *)0x0);
                Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                          (pTVar25,iVar15,(MethodInfo *)0x0);
                pVVar16 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                    (&local_4c,(MethodInfo *)0x0);
                Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                          (pTVar25,*pVVar16,(MethodInfo *)0x0);
                VVar26 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                   ((MethodInfo *)0x0);
                RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                          ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)pTVar25,VVar26
                           ,(MethodInfo *)0x0);
                if (param_1->___dim_10 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0) {
                  Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)
                             param_1->___dim_10,true,(MethodInfo *)0x0);
                  if (*(int *)BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391_il2cpp_TypeInfo_var
                              ->static_fields != 0) {
                    pLVar3 = *(LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F **)
                              (*(int *)BootMaster_tCDF54DE575746AC67218D4F2A3134013E3DD1391_il2cpp_TypeInfo_var
                                       ->static_fields + 0x10);
                    param_1->___loadingUi_12 = pLVar3;
                    if (pLVar3 != (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)0x0) {
                      pTVar14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pLVar3,(MethodInfo *)0x0);
                      pTVar25 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
                      if ((pTVar14 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
                         (*(Il2CppClass **)pTVar14 ==
                          RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var
                         )) {
                        pTVar25 = pTVar14;
                      }
                      if (param_1->___loadingUiSibling_24 !=
                          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                        pTVar14 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                                            (param_1->___loadingUiSibling_24,(MethodInfo *)0x0);
                        if (pTVar25 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                          Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                                    (pTVar25,pTVar14,(MethodInfo *)0x0);
                          if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___loadingUiSibling_24 !=
                              (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                            pTVar14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1->___loadingUiSibling_24,
                                                 (MethodInfo *)0x0);
                            if (pTVar14 !=
                                (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                              iVar15 = Transform_GetSiblingIndex_mEF9DF6406920F8EBCFBC87C6D0630FE3E9E3C1EE
                                                 (pTVar14,(MethodInfo *)0x0);
                              Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                                        (pTVar25,iVar15,(MethodInfo *)0x0);
                              pVVar16 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                                  (&local_4c,(MethodInfo *)0x0);
                              Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                                        (pTVar25,*pVVar16,(MethodInfo *)0x0);
                              VVar26 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
                                                 ((MethodInfo *)0x0);
                              RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0
                                        ((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)
                                         pTVar25,VVar26,(MethodInfo *)0x0);
                              if (param_1->___loadingUi_12 !=
                                  (LoadingUi_t8BEFBE0AEDF33AF64CC6768876AA348D3AF5619F *)0x0) {
                                Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                                          ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)
                                           param_1->___loadingUi_12,true,(MethodInfo *)0x0);
                                Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           param_1,true,
                                           (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                                           param_1->___uiSetups_27,
                                           Component_GetComponentsInChildren_TisIUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_mC62D308C44A29F37D431D1C89AD5B212637BF057_RuntimeMethod_var
                                          );
                                if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                                    param_1->___uiSetups_27 !=
                                    (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
                                  pEVar17 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                                                      ((
                                                  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6
                                                  *)(local_60 + 0x10),
                                                  (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5
                                                   *)param_1->___uiSetups_27,
                                                  List_1_GetEnumerator_m52F1BBD1E85F7192E45EFBBB260E310AF0BD960E_RuntimeMethod_var
                                                  );
                                  local_60._0_4_ = pEVar17->___list_0;
                                  local_60._4_4_ = pEVar17->___index_1;
                                  local_60._8_4_ = pEVar17->___version_2;
                                  local_60._12_4_ = pEVar17->___current_3;
                                  local_8 = 0;
LAB_103e634c:
                                  do {
                                    bVar12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                                                       ((
                                                  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6
                                                  *)local_60,
                                                  Enumerator_MoveNext_m63B4B1C7DEF2FDFB6BCD57E39E46E766E21FC50A_RuntimeMethod_var
                                                  );
                                    uVar9 = local_60._12_4_;
                                    if (!bVar12) {
                                      local_40[0] = 0x129;
                                      local_40[2] = 1;
                                      FUN_103e641a();
                                      return;
                                    }
                                    local_20 = (Il2CppClass *)local_60._12_4_;
                                    if ((Il2CppClass *)local_60._12_4_ == (Il2CppClass *)0x0) break;
                                    local_18 = ((Il2CppObject_u_0 *)local_60._12_4_)->klass;
                                    uVar13 = 0;
                                    local_24 = (Il2CppObject *)0x0;
                                    uVar1 = local_18->interface_offsets_count;
                                    local_28 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C
                                                *)(uint)uVar1;
                                    if (uVar1 != 0) {
                                      do {
                                        if (local_18->interfaceOffsets[uVar13].interfaceType ==
                                            IUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_il2cpp_TypeInfo_var
                                           ) {
                                          (**(code **)(&local_18->field_0xbc +
                                                      local_18->interfaceOffsets[uVar13].offset * 8)
                                          )(local_60._12_4_,param_1,
                                            *(undefined4 *)
                                             ((int)(&local_18->field_0xbc +
                                                   local_18->interfaceOffsets[uVar13].offset * 8) +
                                             4));
                                          goto LAB_103e634c;
                                        }
                                        uVar13 = uVar13 + 1;
                                      } while (uVar13 < uVar1);
                                    }
                                    pVVar18 = il2cpp::vm::ClassInlines::
                                              GetInterfaceInvokeDataFromVTableSlowPath
                                                        ((Il2CppObject *)local_60._12_4_,

                                                  IUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_il2cpp_TypeInfo_var
                                                  ,0);
                                    (*pVVar18->methodPtr)(uVar9,param_1,pVVar18->method);
                                  } while( true );
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_103e67fe;
  }
  if (param_1->___hasSetup_29 != false) {
    ExceptionList = pvStack_10;
    return;
  }
  param_1->___hasSetup_29 = true;
  pRVar19 = Screen_get_safeArea_m47E3A61627ECEAC2336C1FBFBF67A6C7503569F5
                      ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(local_60 + 0x10),
                       (MethodInfo *)0x0);
  fVar6 = pRVar19->___m_YMin_1;
  fVar7 = pRVar19->___m_Width_2;
  fVar8 = pRVar19->___m_Height_3;
  (param_1->___lastSafeArea_36).___m_XMin_0 = pRVar19->___m_XMin_0;
  (param_1->___lastSafeArea_36).___m_YMin_1 = fVar6;
  (param_1->___lastSafeArea_36).___m_Width_2 = fVar7;
  (param_1->___lastSafeArea_36).___m_Height_3 = fVar8;
  iVar15 = Screen_GetScreenOrientation_m7AE1613923638E986958060650942D3C791B3863((MethodInfo *)0x0);
  param_1->___lastOrientation_40 = iVar15;
  local_28 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
             Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
  param_1->___lastDpi_39 = (float)local_28;
  iVar15 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C((MethodInfo *)0x0);
  param_1->___lastScreenWidth_37 = iVar15;
  iVar15 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE((MethodInfo *)0x0);
  param_1->___lastScreenHeight_38 = iVar15;
  if ((UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->cctor_finished == 0))
  {
    il2cpp_runtime_class_init
              (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var);
  }
  pDVar24 = *(Delegate_t **)
             ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->
                   static_fields + 0xc);
  pOVar20 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
            il2cpp_codegen_object_new
                      (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar20,(Il2CppObject *)param_1,
             (int)
             UiMaster_U3CMaybeSetupU3Eb__58_0_m18E9A417F9B38CED66AD53E99F26F73DC422A00D_RuntimeMethod_var
             ,(MethodInfo *)0x0);
  pDVar21 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                      (pDVar24,(Delegate_t *)pOVar20,(MethodInfo *)0x0);
  pDVar24 = (Delegate_t *)0x0;
  if (pDVar21 != (Delegate_t *)0x0) {
    if ((Il2CppClass *)pDVar21->_padding_ ==
        Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var) {
      pDVar24 = pDVar21;
    }
    if (pDVar24 == (Delegate_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      RaiseInvalidCastException
                ((Il2CppObject *)pDVar21,
                 Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
    }
  }
  *(Delegate_t **)
   ((int)UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_il2cpp_TypeInfo_var->static_fields + 0xc
   ) = pDVar24;
  UiMaster_ControllerSetup_m4EB7EEEF59FE2ED4D744FA2153CCA2643FE3137B(param_1,(MethodInfo *)0x0);
  pOVar20 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
            il2cpp_codegen_object_new
                      (Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A_il2cpp_TypeInfo_var);
  OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
            (pOVar20,(Il2CppObject *)param_1,
             (int)
             UiMaster_OnControllerConnected_m6E875C3F36936378360CFA16263813159C140CF5_RuntimeMethod_var
             ,Action_1__ctor_m1E9751809636AB39A3798E047C0FDBDD48C9BADA_RuntimeMethod_var);
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  ReInput_add_ControllerConnectedEvent_m897977458C3E20BC62664916339A97430E6E0C25
            ((Action_1_t49C48C1BEA18787D3BC4459790E4BFE87765238A *)pOVar20,(MethodInfo *)0x0);
  if (DAT_1151c8b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c8b6 = '\x01';
  }
  if (param_1->___worldMaster_5 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
  goto LAB_103e67fe;
  pSVar4 = param_1->___worldMaster_5->___saveSystem_35;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pSVar4,
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,(MethodInfo *)0x0);
  if (bVar12) {
    if (((param_1->___worldMaster_5 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
        || (pSVar4 = param_1->___worldMaster_5->___saveSystem_35,
           pSVar4 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
       (pSVar5 = pSVar4->___settingsData_10,
       pSVar5 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0)) goto LAB_103e67fe;
    if (pSVar5->___antiAliasing_4 != false) goto LAB_103e6608;
LAB_103e664a:
    iVar15 = 1;
  }
  else {
LAB_103e6608:
    local_28 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
               Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
    if (__real_43b40000 < (float)local_28) goto LAB_103e664a;
    local_28 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
               Screen_get_dpi_m37167A82DE896C738517BBF75BFD70C616CCCF55((MethodInfo *)0x0);
    iVar15 = (uint)((float)local_28 <= __real_43340000) * 2 + 2;
  }
  QualitySettings_set_antiAliasing_m1725DEB8969C730FB10E0BCB373A372492582772
            (iVar15,(MethodInfo *)0x0);
  if (param_1->___dim_10 != (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *)0x0) {
    local_28 = param_1->___dim_10->___alphaState_5;
    if (local_28 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      pAVar23 = local_28->___onTargetChange_4;
      pOVar20 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                il2cpp_codegen_object_new
                          (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar20,(Il2CppObject *)param_1,
                 (int)
                 UiMaster_U3CMaybeSetupU3Eb__58_1_m8F7F33A0B76F0385C34BF6AB43B14D3D5132CF66_RuntimeMethod_var
                 ,Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
      pAVar22 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)
                Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55
                          ((Delegate_t *)pAVar23,(Delegate_t *)pOVar20,(MethodInfo *)0x0);
      pAVar23 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0;
      if (pAVar22 != (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
        if (*(Il2CppClass **)pAVar22 ==
            Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var) {
          pAVar23 = pAVar22;
        }
        if (pAVar23 == (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)0x0) {
                    /* WARNING: Subroutine does not return */
          RaiseInvalidCastException
                    ((Il2CppObject *)pAVar22,
                     Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
        }
      }
      local_28->___onTargetChange_4 = pAVar23;
      Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared
                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,true,
                 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___uiSetups_27,
                 Component_GetComponentsInChildren_TisIUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_mC62D308C44A29F37D431D1C89AD5B212637BF057_RuntimeMethod_var
                );
      if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___uiSetups_27 !=
          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
        pEVar17 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                            ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                             (local_60 + 0x10),
                             (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                             param_1->___uiSetups_27,
                             List_1_GetEnumerator_m52F1BBD1E85F7192E45EFBBB260E310AF0BD960E_RuntimeMethod_var
                            );
        local_60._0_4_ = pEVar17->___list_0;
        local_60._4_4_ = pEVar17->___index_1;
        local_60._8_4_ = pEVar17->___version_2;
        local_60._12_4_ = pEVar17->___current_3;
        local_8 = 2;
LAB_103e6705:
        do {
          bVar12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                             ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)local_60,
                              Enumerator_MoveNext_m63B4B1C7DEF2FDFB6BCD57E39E46E766E21FC50A_RuntimeMethod_var
                             );
          uVar9 = local_60._12_4_;
          if (!bVar12) {
            local_40[(int)local_18] = 0x1eb;
            pEVar10 = local_1c;
            local_8 = 0xffffffff;
            U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                      ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_60,
                       Enumerator_Dispose_mF5B76F934BB21BB5541D6435B960A2DD70145649_RuntimeMethod_var
                      );
            if (pEVar10 == (Exception_t *)0x0) {
              FUN_103e67ed();
              return;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar10,(MethodInfo *)0x0);
          }
          local_24 = (Il2CppObject *)local_60._12_4_;
          if ((Il2CppObject *)local_60._12_4_ == (Il2CppObject *)0x0) break;
          local_20 = ((Il2CppObject_u_0 *)local_60._12_4_)->klass;
          uVar13 = 0;
          local_28 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0;
          uVar1 = local_20->interface_offsets_count;
          uStack_2c = (uint)uVar1;
          if (uVar1 != 0) {
            do {
              if (local_20->interfaceOffsets[uVar13].interfaceType ==
                  IUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_il2cpp_TypeInfo_var) {
                (*(code *)(&local_20[1].gc_desc)[local_20->interfaceOffsets[uVar13].offset * 2])
                          (local_60._12_4_,param_1,
                           (&local_20[1].gc_desc + local_20->interfaceOffsets[uVar13].offset * 2)[1]
                          );
                goto LAB_103e6705;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar1);
          }
          pVVar18 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                              ((Il2CppObject *)local_60._12_4_,
                               IUiSetup_tD7CB0826BCB707E28EA23556E1C7BE6CB2CACD13_il2cpp_TypeInfo_var
                               ,1);
          (*pVVar18->methodPtr)(uVar9,param_1,pVVar18->method);
        } while( true );
      }
    }
  }
LAB_103e67fe:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
