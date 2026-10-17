// RVA 0xa03020 | Placemaker.SaveSystem$$OnSaveMenuOpen
// PDB: SaveSystem_OnSaveMenuOpen_m0D4E5FF00837DAEF190CBE78A2D6B4A166E1DBC3
// Body: [[10a03020, 10a032d0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
// 103f89b0 WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
// 10448400 ExtraMath_BinarySearchComponent_TisRuntimeObject_TisRuntimeObject_m74D6163960F5CED540FF2FE5C8EF19D7FAAAEAC4_gshared
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a01420 SaveSystem_GetAndMaybeCreateCurrent_m74D085ECCF07221F62EE5ED9BF741F12EDE4ECC2
// 10a01510 SaveSystem_GetMetaSave_m0F9523F10ED70353647C0E7B6182A885040F3D56
// 10a03390 SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 11149190 ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477

void __cdecl
SaveSystem_OnSaveMenuOpen_m0D4E5FF00837DAEF190CBE78A2D6B4A166E1DBC3
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  bool bVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  int iVar3;
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar4;
  uint uVar5;
  float fVar6;

  if (DAT_115201af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ExtraMath_BinarySearchComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_m604303DB4CB1BD5E318DC3EF87931A59186A0633_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_115201af = '\x01';
  }
  pMVar4 = param_1->___currentMetaSave_14;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar4,(MethodInfo *)0x0);
  if (!bVar1) {
    if (param_1->___worldMaster_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
    goto LAB_10a032cc;
    if (param_1->___worldMaster_4->___anyChange_59 == false) {
      return;
    }
  }
  SaveSystem_GetAndMaybeCreateCurrent_m74D085ECCF07221F62EE5ED9BF741F12EDE4ECC2
            (param_1,(MethodInfo *)0x0);
  pMVar4 = param_1->___currentMetaSave_14;
  if ((pMVar4 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
     (param_1->___worldMaster_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
    WorldMaster_PopulateSaveData_m2141761F55390AC6602D99FE8478CB86D8831F3E
              (param_1->___worldMaster_4,pMVar4->___saveData_9,
               (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0,(MethodInfo *)0x0);
    fVar6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    pMVar4->___lastSaveDataTime_12 = fVar6;
    pMVar4 = param_1->___currentMetaSave_14;
    if (pMVar4 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
      if (pMVar4->___lastTextureLoadTime_11 <= pMVar4->___lastSaveDataTime_12) {
        if (pMVar4->___saveData_9 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)
        goto LAB_10a032cc;
        ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477
                  (pMVar4->___texture_7,pMVar4->___saveData_9->___bigJpg_6,(MethodInfo *)0x0);
        fVar6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
        pMVar4->___lastTextureLoadTime_11 = fVar6;
      }
      param_1->___state_7 = 0;
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,
                 (MethodInfo *)0x0);
      SaveSystem_SaveMetaSaveToDisk_m4DDBB593663A7178F39202B656EF31DF52BC88D4
                (param_1,param_1->___currentMetaSave_14,false,(MethodInfo *)0x0);
      pMVar4 = param_1->___currentMetaSave_14;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar4,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pMVar4 = param_1->___currentMetaSave_14;
        if (DAT_115201ba == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&
                             Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var
                    );
          DAT_115201ba = '\x01';
        }
        if ((pMVar4 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) ||
           (pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar4,
                                (MethodInfo *)0x0),
           pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10a032cc;
        Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                  (pTVar2,0,(MethodInfo *)0x0);
        if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)pMVar4->___onIndexChange_17
            == (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) goto LAB_10a032cc;
        UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
                  ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
                   pMVar4->___onIndexChange_17,0,
                   Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
      }
      if (param_1->___metaSaveContainer_9 !=
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        iVar3 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                          (param_1->___metaSaveContainer_9,(MethodInfo *)0x0);
        pMVar4 = param_1->___currentMetaSave_14;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar4,
                           (MethodInfo *)0x0);
        uVar5 = (uint)bVar1;
        if (iVar3 <= (int)(uVar5 + 1)) {
          return;
        }
        pMVar4 = SaveSystem_GetMetaSave_m0F9523F10ED70353647C0E7B6182A885040F3D56
                           (param_1,uVar5,(MethodInfo *)0x0);
        pTVar2 = param_1->___metaSaveContainer_9;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        uVar5 = ExtraMath_BinarySearchComponent_TisRuntimeObject_TisRuntimeObject_m74D6163960F5CED540FF2FE5C8EF19D7FAAAEAC4_gshared
                          (pTVar2,(Il2CppObject *)pMVar4,uVar5,0,
                           ExtraMath_BinarySearchComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_m604303DB4CB1BD5E318DC3EF87931A59186A0633_RuntimeMethod_var
                          );
        if (DAT_115201ba == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&
                             Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var
                    );
          DAT_115201ba = '\x01';
        }
        if ((int)uVar5 < 0) {
          uVar5 = ~uVar5;
        }
        if ((pMVar4 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) &&
           (pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar4,
                                (MethodInfo *)0x0),
           pTVar2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                    (pTVar2,uVar5,(MethodInfo *)0x0);
          if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)pMVar4->___onIndexChange_17
              != (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) {
            UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
                      ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
                       pMVar4->___onIndexChange_17,uVar5,
                       Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
            return;
          }
        }
      }
    }
  }
LAB_10a032cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
