// RVA 0x4bf390 | Placemaker.Ui.CreditsMenu$$Placemaker.SceneProcessing.IOnScenePostProcess.OnScenePostProcess
// PDB: CreditsMenu_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_mB13003217D8511E0122774CD02FF09A41F49C10F
// Body: [[104bf390, 104bf7a7]]
// Direct callees:
// 1003e070 Invoke
// 10054090 SetAt
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102e3fb0 TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a49800 Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
// 10f09ba0 String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC

void __cdecl
CreditsMenu_Placemaker_SceneProcessing_IOnScenePostProcess_OnScenePostProcess_mB13003217D8511E0122774CD02FF09A41F49C10F
          (CreditsMenu_tE101B90DEBA1E200189C86C0CFA340BA4872BB12 *param_1,bool param_2,int param_3,
          MethodInfo *param_4)

{
  int iVar1;
  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *pTVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Il2CppObject *pIVar4;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *pCVar5;
  String_t *pSVar6;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar7;
  Exception_t *pEVar8;
  undefined4 *puVar9;
  uint uVar10;
  MethodInfo *pMVar11;

  if (DAT_1151d101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m9B58834BDF18E9887701F2A0748361AF5ADE8D63_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151d101 = '\x01';
  }
  if ((CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var->cctor_finished
         == 0)) {
    il2cpp_runtime_class_init
              (CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var);
  }
  uVar10 = 0;
  iVar1 = *(int *)((int)CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var->
                        static_fields + 4);
  if (iVar1 != 0) {
    puVar9 = (undefined4 *)(iVar1 + 0x10);
    for (; (int)uVar10 < (int)*(uint *)(iVar1 + 0xc); uVar10 = uVar10 + 1) {
      if (*(uint *)(iVar1 + 0xc) <= uVar10) goto LAB_104bf79b;
      pSVar6 = (String_t *)*puVar9;
      pTVar2 = param_1->___rawFuryText_7;
      if (pTVar2 == (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) goto LAB_104bf796;
      pTVar3 = TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
                         (pTVar2,(MethodInfo *)0x0);
      if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_104bf796;
      pTVar3 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                         (pTVar3,(MethodInfo *)0x0);
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      pIVar4 = Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                         ((Il2CppObject *)pTVar2,pTVar3,
                          Object_Instantiate_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m9B58834BDF18E9887701F2A0748361AF5ADE8D63_RuntimeMethod_var
                         );
      pCVar5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)
               il2cpp_array_new_specific
                         (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var,1
                         );
      if (pCVar5 == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0) goto LAB_104bf796;
      CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34::SetAt(pCVar5,0,L' ');
      if (pSVar6 == (String_t *)0x0) goto LAB_104bf796;
      pSVar6 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC
                         (pSVar6,pCVar5,(MethodInfo *)0x0);
      if (pIVar4 == (Il2CppObject *)0x0) goto LAB_104bf796;
      VirtFuncInvoker1<bool,Il2CppObject_*>::Invoke(0x42,pIVar4,(Il2CppObject *)pSVar6);
      puVar9 = puVar9 + 1;
    }
    if ((CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var);
    }
    uVar10 = 0;
    iVar1 = *(int *)((int)CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var
                          ->static_fields + 8);
    if (iVar1 != 0) {
      puVar9 = (undefined4 *)(iVar1 + 0x10);
      for (; (int)uVar10 < (int)*(uint *)(iVar1 + 0xc); uVar10 = uVar10 + 1) {
        if (*(uint *)(iVar1 + 0xc) <= uVar10) goto LAB_104bf79b;
        pSVar6 = (String_t *)*puVar9;
        pTVar2 = param_1->___specialThanksText_8;
        if (pTVar2 == (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) goto LAB_104bf796;
        pTVar3 = TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
                           (pTVar2,(MethodInfo *)0x0);
        if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_104bf796;
        pTVar3 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                           (pTVar3,(MethodInfo *)0x0);
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        pIVar4 = Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                           ((Il2CppObject *)pTVar2,pTVar3,
                            Object_Instantiate_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m9B58834BDF18E9887701F2A0748361AF5ADE8D63_RuntimeMethod_var
                           );
        pCVar5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)
                 il2cpp_array_new_specific
                           (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var
                            ,1);
        if (pCVar5 == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0)
        goto LAB_104bf796;
        CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34::SetAt(pCVar5,0,L' ');
        if (pSVar6 == (String_t *)0x0) goto LAB_104bf796;
        pSVar6 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC
                           (pSVar6,pCVar5,(MethodInfo *)0x0);
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_104bf796;
        VirtFuncInvoker1<bool,Il2CppObject_*>::Invoke(0x42,pIVar4,(Il2CppObject *)pSVar6);
        puVar9 = puVar9 + 1;
      }
      if ((CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var);
      }
      uVar10 = 0;
      iVar1 = *(int *)CreditsData_t4E1BA2894B0BE4F49810E28DB6C97AC92A20C5B9_il2cpp_TypeInfo_var->
                      static_fields;
      if (iVar1 != 0) {
        puVar9 = (undefined4 *)(iVar1 + 0x10);
        for (; (int)uVar10 < (int)*(uint *)(iVar1 + 0xc); uVar10 = uVar10 + 1) {
          if (*(uint *)(iVar1 + 0xc) <= uVar10) {
LAB_104bf79b:
            pMVar11 = (MethodInfo *)0x0;
            pEVar8 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar8,pMVar11);
          }
          pSVar6 = (String_t *)*puVar9;
          pTVar2 = param_1->___firstNamesText_9;
          if (pTVar2 == (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0)
          goto LAB_104bf796;
          pTVar3 = TMP_Text_get_transform_m81019C9C243967EF69E113D8E2DC0C65275C9C0A
                             (pTVar2,(MethodInfo *)0x0);
          if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_104bf796;
          pTVar3 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                             (pTVar3,(MethodInfo *)0x0);
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          pIVar4 = Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                             ((Il2CppObject *)pTVar2,pTVar3,
                              Object_Instantiate_TisTMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_m9B58834BDF18E9887701F2A0748361AF5ADE8D63_RuntimeMethod_var
                             );
          pCVar5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)
                   il2cpp_array_new_specific
                             (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var
                              ,1);
          if (pCVar5 == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0)
          goto LAB_104bf796;
          CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34::SetAt(pCVar5,0,L' ');
          if (pSVar6 == (String_t *)0x0) goto LAB_104bf796;
          pSVar6 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC
                             (pSVar6,pCVar5,(MethodInfo *)0x0);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_104bf796;
          VirtFuncInvoker1<bool,Il2CppObject_*>::Invoke(0x42,pIVar4,(Il2CppObject *)pSVar6);
          puVar9 = puVar9 + 1;
        }
        if (param_1->___rawFuryText_7 != (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0)
        {
          pOVar7 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                   Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_1->___rawFuryText_7,(MethodInfo *)0x0);
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422
                    (pOVar7,(MethodInfo *)0x0);
          if (param_1->___specialThanksText_8 !=
              (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
            pOVar7 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                     Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                param_1->___specialThanksText_8,(MethodInfo *)0x0);
            Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422
                      (pOVar7,(MethodInfo *)0x0);
            if (param_1->___firstNamesText_9 !=
                (TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 *)0x0) {
              pOVar7 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                       Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  param_1->___firstNamesText_9,(MethodInfo *)0x0);
              Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422
                        (pOVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_104bf796:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
