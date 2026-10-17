// RVA 0x87eab0 | Placemaker.Life.BirdFlock$$SetBird
// PDB: BirdFlock_SetBird_m548DC1954ACE4B88F649D219A1E1477AC5B72C5C
// Body: [[1087eab0, 1087efd3]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068d20 Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10879a70 BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
BirdFlock_SetBird_m548DC1954ACE4B88F649D219A1E1477AC5B72C5C
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_2,
          Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_3,MethodInfo *param_4)

{
  undefined8 uVar1;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBVar2;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar3;
  Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *pDVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  bool bVar7;
  bool bVar8;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *pVVar11;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar12;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar13;
  Il2CppObject *pIVar14;
  int iVar15;
  uchar uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA local_f4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_dc;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined8 local_ac;
  float local_a4;
  undefined8 local_a0;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  undefined8 local_7c;
  int local_70;
  int iStack_6c;
  int local_64;
  int iStack_60;
  float fStack_5c;
  int iStack_58;
  undefined8 local_54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  float local_10;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *local_c;
  int local_8;

  if (DAT_1151f5c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m2044F99A99D9FDBEC7096C2298DB523BEF6A3BD9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD479BB57B1FF25F49CAF2E693FE532C37F5FC420);
    DAT_1151f5c6 = '\x01';
  }
  local_c = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0;
  local_8 = 0;
  local_4c.___x_2 = 0.0;
  local_4c.___y_3 = 0.0;
  local_4c.___z_4 = 0.0;
  if (param_2 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) {
LAB_1087efcf:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pBVar2 = param_2->___bird_4;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar2,
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,(MethodInfo *)0x0);
  if (!bVar7) {
    pBVar2 = param_2->___bird_4;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar2,(MethodInfo *)0x0)
    ;
    if (bVar7) {
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,
                         (MethodInfo *)0x0);
      if (bVar7) {
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                  ((Il2CppObject *)_stringLiteralD479BB57B1FF25F49CAF2E693FE532C37F5FC420,
                   (MethodInfo *)0x0);
      }
    }
    param_2->___bird_4 = param_3;
    pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if (pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087efcf;
    pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                        (&local_dc,pTVar9,(MethodInfo *)0x0);
    local_40._0_4_ = pVVar10->___x_2;
    local_40._4_4_ = pVVar10->___y_3;
    fVar19 = pVVar10->___z_4;
    local_38 = fVar19;
    local_34 = local_40;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_3,(MethodInfo *)0x0
                      );
    if (bVar7) {
      uVar16 = param_1->___assignedBirdsCount_19 + '\x01';
    }
    else {
      uVar16 = param_1->___assignedBirdsCount_19 + 0xff;
    }
    param_1->___assignedBirdsCount_19 = uVar16;
    VVar5.___z_4 = fVar19;
    VVar5.___x_2 = (float)(undefined4)local_34;
    VVar5.___y_3 = (float)local_34._4_4_;
    pVVar11 = BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
                        (&local_f4,param_1,VVar5,1.2,(MethodInfo *)0x0);
    local_64 = (pVVar11->___Item1_0).___x_0;
    iStack_60 = (pVVar11->___Item1_0).___y_1;
    fVar19 = (float)(pVVar11->___Item1_0).___z_2;
    iVar15 = (pVVar11->___Item2_1).___x_0;
    uVar1._0_4_ = (pVVar11->___Item2_1).___y_1;
    uVar1._4_4_ = (pVVar11->___Item2_1).___z_2;
    if ((int)fVar19 < (int)uVar1._4_4_) {
      fStack_5c = fVar19;
      iStack_58 = iVar15;
      local_54 = uVar1;
      do {
        iVar18 = iStack_60;
        local_10 = fVar19;
        if (iStack_60 < (int)uVar1) {
          do {
            iVar17 = local_64;
            local_14 = iVar18;
            if (local_64 < iVar15) {
              do {
                if (((param_1->___master_4 ==
                      (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                    (pPVar3 = param_1->___master_4->___propPlacer_19,
                    pPVar3 == (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) ||
                   (pDVar4 = (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)
                             pPVar3->___colliderDict_10, local_70 = iVar17, iStack_6c = iVar18,
                   pDVar4 == (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)0x0))
                goto LAB_1087efcf;
                VVar6.___y_3 = (float)iVar18;
                VVar6.___x_2 = (float)iVar17;
                VVar6.___z_4 = fVar19;
                bVar8 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                                  (pDVar4,VVar6,(int *)&local_c,
                                   Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
                                  );
                if (bVar8) {
                  local_18 = (float)iVar17 + (float)iVar17;
                  local_1c = (float)iVar18 + (float)iVar18;
                  local_20 = (float)(int)fVar19 + (float)(int)fVar19;
                  local_24 = (float)(iVar17 + 1) + (float)(iVar17 + 1);
                  local_28 = (float)(iVar18 + 1) + (float)(iVar18 + 1);
                  local_2c = (float)((int)fVar19 + 1) + (float)((int)fVar19 + 1);
                  if (local_c == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)
                  goto LAB_1087efcf;
                  uVar1._0_4_ = local_c->____size_2;
                  fVar19 = local_10;
                  while (uVar1._0_4_ = (int)uVar1 + -1, local_10 = fVar19, -1 < (int)uVar1) {
                    if (((local_c == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
                        (pGVar12 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                             (local_c,(int)uVar1,
                                              List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var
                                             ),
                        pGVar12 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) ||
                       (pTVar9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                            pGVar12,(MethodInfo *)0x0),
                       pTVar9 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                    goto LAB_1087efcf;
                    pVVar10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                         &local_f4.___Item2_1,pTVar9,(MethodInfo *)0x0);
                    local_7c._0_4_ = pVVar10->___x_2;
                    local_7c._4_4_ = pVVar10->___y_3;
                    fVar20 = pVVar10->___z_4;
                    iVar18 = local_14;
                    fVar19 = local_10;
                    if (local_18 <= (float)(undefined4)local_7c) {
                      local_88._0_4_ = pVVar10->___x_2;
                      local_88._4_4_ = pVVar10->___y_3;
                      if (((local_1c <= (float)local_88._4_4_) &&
                          (local_94._0_4_ = pVVar10->___x_2, local_94._4_4_ = pVVar10->___y_3,
                          local_8c = fVar20, local_20 <= fVar20)) &&
                         ((float)(undefined4)local_7c < local_24)) {
                        local_a0._0_4_ = pVVar10->___x_2;
                        local_a0._4_4_ = pVVar10->___y_3;
                        if (((float)local_a0._4_4_ < local_28) &&
                           (local_ac._0_4_ = pVVar10->___x_2, local_ac._4_4_ = pVVar10->___y_3,
                           local_a4 = fVar20, fVar20 < local_2c)) {
                          local_c4._0_4_ = pVVar10->___x_2;
                          local_c4._4_4_ = pVVar10->___y_3;
                          local_d0._0_4_ = pVVar10->___x_2;
                          local_d0._4_4_ = pVVar10->___y_3;
                          local_dc.___z_4 = local_38 - fVar20;
                          local_4c.___y_3 = local_40._4_4_ - (float)local_c4._4_4_;
                          local_4c.___x_2 = (float)local_40 - (float)(undefined4)local_c4;
                          local_c8 = fVar20;
                          local_b8 = local_c4;
                          local_4c.___z_4 = local_dc.___z_4;
                          fVar20 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                             (&local_4c,(MethodInfo *)0x0);
                          local_34 = CONCAT44(fVar20,(undefined4)local_34);
                          iVar18 = local_14;
                          fVar19 = local_10;
                          if ((fVar20 <= ___real_3f9ae148) &&
                             (pOVar13 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                                                  ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar12,SUB41(&local_8,0),
                                                  Component_TryGetComponent_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m2044F99A99D9FDBEC7096C2298DB523BEF6A3BD9_RuntimeMethod_var
                                                  ), iVar18 = local_14, fVar19 = local_10,
                             (char)pOVar13 != '\0')) {
                            pIVar14 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar12,
                                                 Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
                                                );
                            if (pIVar14 == (Il2CppObject *)0x0) goto LAB_1087efcf;
                            iVar18 = local_14;
                            fVar19 = local_10;
                            if (*(char *)&pIVar14[2].monitor != '\0') {
                              if (bVar7) {
                                if (local_8 == 0) goto LAB_1087efcf;
                                *(char *)(local_8 + 0x10) = *(char *)(local_8 + 0x10) + '\x01';
                              }
                              else {
                                if (local_8 == 0) goto LAB_1087efcf;
                                *(char *)(local_8 + 0x10) = *(char *)(local_8 + 0x10) + -1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 < iStack_58);
              iVar15 = iStack_58;
              uVar1._0_4_ = (int)local_54;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)uVar1);
        }
        fVar19 = (float)((int)fVar19 + 1);
      } while ((int)fVar19 < local_54._4_4_);
    }
  }
  return;
}
