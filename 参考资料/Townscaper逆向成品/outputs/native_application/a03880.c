// RVA 0xa03880 | Placemaker.SaveSystem$$SortAll
// PDB: SaveSystem_SortAll_m611A78BE3239E9B1B053BDC48B8369DDDDFCF638
// Body: [[10a03880, 10a03a2d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10448400 ExtraMath_BinarySearchComponent_TisRuntimeObject_TisRuntimeObject_m74D6163960F5CED540FF2FE5C8EF19D7FAAAEAC4_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a03800 SaveSystem_SetSiblingIndex_mF2A34C8B9A4B0ECADEA303550B01B34CCC6A5F78
// 10a03a3f FUN_10a03a3f
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
SaveSystem_SortAll_m611A78BE3239E9B1B053BDC48B8369DDDDFCF638
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar4;
  int iVar5;
  int iVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__SaveSystem_SortAll_m611A78BE3239E9B1B053BDC48B8369DDDDFCF638;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_115201b8 == '\0') {
    ExceptionList = &pvStack_10;
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
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCA031B51F2F046738D15F4A756B028BE24EC00BC);
    DAT_115201b8 = '\x01';
  }
  local_8 = 0;
  if (param_1->___metaSaveContainer_9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
  {
    iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___metaSaveContainer_9,(MethodInfo *)0x0);
    for (iVar6 = 1; iVar6 < iVar2; iVar6 = iVar6 + 1) {
      if (param_1->___metaSaveContainer_9 ==
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10a03a5b;
      pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (param_1->___metaSaveContainer_9,iVar6,(MethodInfo *)0x0);
      if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10a03a5b;
      pMVar4 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)
               Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                          Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
                         );
      pTVar3 = param_1->___metaSaveContainer_9;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      iVar5 = ExtraMath_BinarySearchComponent_TisRuntimeObject_TisRuntimeObject_m74D6163960F5CED540FF2FE5C8EF19D7FAAAEAC4_gshared
                        (pTVar3,(Il2CppObject *)pMVar4,0,iVar2 - (iVar6 + -1),
                         ExtraMath_BinarySearchComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_m604303DB4CB1BD5E318DC3EF87931A59186A0633_RuntimeMethod_var
                        );
      SaveSystem_SetSiblingIndex_mF2A34C8B9A4B0ECADEA303550B01B34CCC6A5F78
                (param_1,pMVar4,iVar5,(MethodInfo *)0x0);
    }
    pMVar4 = param_1->___currentMetaSave_14;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar4,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
LAB_10a03a2a:
      FUN_10a03a3f();
      return;
    }
    pMVar4 = param_1->___currentMetaSave_14;
    if (DAT_115201ba == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var
                );
      DAT_115201ba = '\x01';
    }
    if (pMVar4 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar4,
                          (MethodInfo *)0x0);
      if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                  (pTVar3,0,(MethodInfo *)0x0);
        if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)pMVar4->___onIndexChange_17
            != (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) {
          UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
                    ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
                     pMVar4->___onIndexChange_17,0,
                     Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
          goto LAB_10a03a2a;
        }
      }
    }
  }
LAB_10a03a5b:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
