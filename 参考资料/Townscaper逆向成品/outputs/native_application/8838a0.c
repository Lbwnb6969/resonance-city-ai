// RVA 0x8838a0 | Placemaker.Ui.ButtonAudio$$Play
// PDB: ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
// Body: [[108838a0, 10883a90] [10883a94, 10883c02]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 10156c40 GetInterfaceInvokeDataFromVTableSlowPath
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e4eb0 UiAudio_GetAudioSource_m52160E21899A434FA48497F071C6A0EBB9C1167D
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f2b0 Component_GetComponents_TisRuntimeObject_mB0812CB4355C4F5E2EA27C7049C668609E72F31D_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 105d1260 List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3de40 GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
// 11143d70 AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
// 11143f00 AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

void __cdecl
ButtonAudio_Play_mA88FCF686BF0E8A1A00EDC47DF998054B60E4093
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_1,int param_2,float param_3,
          MethodInfo *param_4)

{
  Il2CppObject *pIVar1;
  UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *pUVar2;
  bool bVar3;
  ushort uVar4;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar5;
  List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *pLVar6;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar7;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar8;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar9;
  VirtualInvokeData *pVVar10;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar11;
  undefined8 local_28;
  float local_20;
  Il2CppObject *local_1c;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *local_18;
  Il2CppClass *local_14;
  undefined4 local_10;
  List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *local_c;
  uint local_8;

  pOVar9 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1;
  if (DAT_1151f5d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisUiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_mCA010136AAD479820ADF709AA15C33DF5B188B40_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponents_TisIButtonAudioModifier_t831476AAC6FEDBF4CD01C18D0D296999B36EACD4_m90EADF808CFAEA07DE2C0ABF933C999449EC11B8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       IButtonAudioModifier_t831476AAC6FEDBF4CD01C18D0D296999B36EACD4_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m4A75B51A73C3464B7AEF90EB1A43F6121AED1C73_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t231D4A30694FC14B05603CCBF96ADB09CB609EF5_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_AddRange_m8245FFC5DC2569BFAF67A63434B684846DECB721_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1F6DD6A0CD4A4FA8A32165DF9C3E359F757194CD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m4318675835B4E611F3F4317E91C30FFCA2A6FE84_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5d9 = '\x01';
  }
  local_28 = 0;
  local_20 = 0.0;
  if ((param_1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
     (pGVar5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                          (MethodInfo *)0x0),
     pGVar5 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
    bVar3 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B
                      (pGVar5,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    if ((ListPool_1_t231D4A30694FC14B05603CCBF96ADB09CB609EF5_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t231D4A30694FC14B05603CCBF96ADB09CB609EF5_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t231D4A30694FC14B05603CCBF96ADB09CB609EF5_il2cpp_TypeInfo_var);
    }
    pLVar6 = ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_m4A75B51A73C3464B7AEF90EB1A43F6121AED1C73_RuntimeMethod_var);
    local_c = pLVar6;
    pLVar7 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_m4A75B51A73C3464B7AEF90EB1A43F6121AED1C73_RuntimeMethod_var);
    param_1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0;
    local_18 = pLVar7;
    while( true ) {
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar9,(MethodInfo *)0x0)
      ;
      if (!bVar3) break;
      if ((pOVar9 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) ||
         (Component_GetComponents_TisRuntimeObject_mB0812CB4355C4F5E2EA27C7049C668609E72F31D_gshared
                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pOVar9,
                     (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pLVar6,
                     Component_GetComponents_TisIButtonAudioModifier_t831476AAC6FEDBF4CD01C18D0D296999B36EACD4_m90EADF808CFAEA07DE2C0ABF933C999449EC11B8_RuntimeMethod_var
                    ), pLVar7 == (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0))
      goto LAB_10883bfe;
      List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
                (pLVar7,(Il2CppObject *)pLVar6,
                 List_1_AddRange_m8245FFC5DC2569BFAF67A63434B684846DECB721_RuntimeMethod_var);
      pOVar8 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pOVar9,
                          Component_GetComponent_TisUiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554_mCA010136AAD479820ADF709AA15C33DF5B188B40_RuntimeMethod_var
                         );
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar8,(MethodInfo *)0x0)
      ;
      if (bVar3) {
        param_1 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pOVar8;
      }
      pOVar9 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
               Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                         ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pOVar9,
                          (MethodInfo *)0x0);
      pLVar6 = local_c;
    }
    local_28 = CONCAT44(0x3f800000,(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)local_28);
    local_20 = param_3;
    if (pLVar7 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      local_8 = pLVar7->____size_2 - 1;
      if ((int)local_8 < 0) goto LAB_10883b15;
      local_c = (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)(local_8 * 4 + 0x10);
      goto LAB_10883a85;
    }
  }
LAB_10883bfe:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
LAB_10883a85:
  do {
    if ((uint)pLVar7->____size_2 <= local_8) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pIVar1 = *(Il2CppObject **)
              ((int)&pLVar7->____items_1->m_Items[0].___key_0.___dateData_44 +
              (int)&local_c[-1].____items_1);
    local_1c = pIVar1;
    if (pIVar1 == (Il2CppObject *)0x0) goto LAB_10883bfe;
    local_14 = (pIVar1->field0_0x0).klass;
    uVar4 = 0;
    local_10 = 0;
    if (local_14->interface_offsets_count != 0) {
      do {
        pLVar7 = local_18;
        if (local_14->interfaceOffsets[uVar4].interfaceType ==
            IButtonAudioModifier_t831476AAC6FEDBF4CD01C18D0D296999B36EACD4_il2cpp_TypeInfo_var) {
          pVVar10 = (VirtualInvokeData *)
                    (&((pIVar1->field0_0x0).klass)->field_0xbc +
                    ((pIVar1->field0_0x0).klass)->interfaceOffsets[uVar4].offset * 8);
          goto LAB_10883aeb;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_14->interface_offsets_count);
    }
    pVVar10 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar1,
                         IButtonAudioModifier_t831476AAC6FEDBF4CD01C18D0D296999B36EACD4_il2cpp_TypeInfo_var
                         ,0);
LAB_10883aeb:
    (*pVVar10->methodPtr)(pIVar1,&local_28,param_2,pVVar10->method);
    local_8 = local_8 - 1;
    local_c = (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)&local_c[-1].____syncRoot_4;
  } while (-1 < (int)local_8);
LAB_10883b15:
  pOVar9 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
           (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)local_28;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar9,(MethodInfo *)0x0);
  if (bVar3) {
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1,(MethodInfo *)0x0
                      );
    if (bVar3) {
      if ((((param_1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) &&
           (*(int *)(param_1 + 1) != 0)) &&
          (pUVar2 = *(UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 **)
                     (*(int *)(param_1 + 1) + 0x5c),
          pUVar2 != (UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *)0x0)) &&
         (pAVar11 = UiAudio_GetAudioSource_m52160E21899A434FA48497F071C6A0EBB9C1167D
                              (pUVar2,(MethodInfo *)0x0),
         pAVar11 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)) {
        AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
                  (pAVar11,(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)local_28,
                   (MethodInfo *)0x0);
        AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
                  (pAVar11,local_28._4_4_,(MethodInfo *)0x0);
        AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                  (pAVar11,local_20,(MethodInfo *)0x0);
        AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(pAVar11,(MethodInfo *)0x0);
        return;
      }
      goto LAB_10883bfe;
    }
  }
  return;
}
