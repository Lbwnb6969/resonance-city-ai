// RVA 0x878af0 | Placemaker.Life.BirdFlock$$AddOrRemoveLanding
// PDB: BirdFlock_AddOrRemoveLanding_mE8E1507EE9349122D3CF84EE203E296906EC871F
// Body: [[10878af0, 1087917c]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068d20 Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 1065f940 Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
// 106604d0 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10879180 BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
// 10879a70 BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
// 1087efe0 BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
// 1087f4d0 BirdFlock_UprootBird_mFC6249072B6FF234B72CD0060E94EDA0AB728F6D
// 1087ff10 BirdLanding_get_pos_mFEAFD0CE24293167DABA18669B4F4AC98A0D8FF2
// 10880030 BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
// 11143460 ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
BirdFlock_AddOrRemoveLanding_mE8E1507EE9349122D3CF84EE203E296906EC871F
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_2,bool param_3,
          MethodInfo *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBVar4;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar5;
  Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *pDVar6;
  float fVar7;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  bool bVar10;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar12;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar13;
  ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *pVVar14;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar15;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar16;
  Il2CppObject *pIVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  undefined1 local_f0 [12];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e4;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  undefined8 local_9c;
  float local_94;
  undefined8 local_90;
  undefined8 local_84;
  float local_78;
  int iStack_74;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_6c;
  float local_60;
  int iStack_5c;
  float fStack_58;
  int iStack_54;
  undefined8 local_50;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_48;
  undefined8 local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *local_c;
  float local_8;

  if (DAT_1151f5c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m2044F99A99D9FDBEC7096C2298DB523BEF6A3BD9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_m864B89CF53DC9C7C861AA5789F24633E777CF1F3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5c7 = '\x01';
  }
  local_c = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0;
  local_14 = 0;
  local_48.___x_2 = 0.0;
  local_48.___y_3 = 0.0;
  local_48.___z_4 = 0.0;
  if (param_3) {
    if (param_1->___assignedBirdsCount_19 != '\0') {
      if ((param_2 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) ||
         (pTVar11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                               (MethodInfo *)0x0),
         pTVar11 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10879178;
      pVVar12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                          (&local_6c,pTVar11,(MethodInfo *)0x0);
      local_34 = pVVar12->___z_4;
      local_3c._0_4_ = pVVar12->___x_2;
      local_3c._4_4_ = pVVar12->___y_3;
      pVVar14 = BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
                          ((ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *)local_f0,
                           param_1,*pVVar12,1.2,(MethodInfo *)0x0);
      local_60 = (float)(pVVar14->___Item1_0).___x_0;
      iStack_5c = (pVVar14->___Item1_0).___y_1;
      fVar21 = (float)(pVVar14->___Item1_0).___z_2;
      iVar18 = (pVVar14->___Item2_1).___x_0;
      uVar2._0_4_ = (pVVar14->___Item2_1).___y_1;
      uVar2._4_4_ = (pVVar14->___Item2_1).___z_2;
      fStack_58 = fVar21;
      iStack_54 = iVar18;
      local_50 = uVar2;
      if ((int)fVar21 < (int)uVar2._4_4_) {
        do {
          local_10 = iStack_5c;
          iVar20 = iStack_5c;
          if (iStack_5c < (int)uVar2) {
            do {
              local_8 = local_60;
              fVar19 = local_60;
              local_10 = iVar20;
              if ((int)local_60 < iVar18) {
                do {
                  local_8 = fVar19;
                  if (((param_1->___master_4 ==
                        (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                      (pPVar5 = param_1->___master_4->___propPlacer_19,
                      pPVar5 == (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) ||
                     (pDVar6 = (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)
                               pPVar5->___colliderDict_10, local_78 = fVar19, iStack_74 = iVar20,
                     pDVar6 == (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)0x0))
                  goto LAB_10879178;
                  VVar9.___y_3 = (float)iVar20;
                  VVar9.___x_2 = fVar19;
                  VVar9.___z_4 = fVar21;
                  bVar10 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                                     (pDVar6,VVar9,(int *)&local_c,
                                      Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
                                     );
                  if (bVar10) {
                    local_18 = (float)(int)fVar19 + (float)(int)fVar19;
                    local_1c = (float)iVar20 + (float)iVar20;
                    local_20 = (float)(int)fVar21 + (float)(int)fVar21;
                    local_24 = (float)((int)fVar19 + 1) + (float)((int)fVar19 + 1);
                    local_28 = (float)(iVar20 + 1) + (float)(iVar20 + 1);
                    local_2c = (float)((int)fVar21 + 1) + (float)((int)fVar21 + 1);
                    if (local_c == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)
                    goto LAB_10879178;
                    uVar2._0_4_ = local_c->____size_2;
                    iVar20 = local_10;
                    while (uVar2._0_4_ = (int)uVar2 + -1, local_10 = iVar20, -1 < (int)uVar2) {
                      if (((local_c == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
                          (pGVar15 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                               (local_c,(int)uVar2,
                                                List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var
                                               ),
                          pGVar15 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0))
                         || (pTVar11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                 ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar15,(MethodInfo *)0x0),
                            pTVar11 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                      goto LAB_10879178;
                      pVVar12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                          (&local_e4,pTVar11,(MethodInfo *)0x0);
                      local_84._0_4_ = pVVar12->___x_2;
                      local_84._4_4_ = pVVar12->___y_3;
                      fVar7 = pVVar12->___z_4;
                      fVar19 = local_8;
                      iVar20 = local_10;
                      if (local_18 <= (float)(undefined4)local_84) {
                        local_90._0_4_ = pVVar12->___x_2;
                        local_90._4_4_ = pVVar12->___y_3;
                        if (((local_1c <= (float)local_90._4_4_) &&
                            (local_9c._0_4_ = pVVar12->___x_2, local_9c._4_4_ = pVVar12->___y_3,
                            local_94 = fVar7, local_20 <= fVar7)) &&
                           ((float)(undefined4)local_84 < local_24)) {
                          local_a8._0_4_ = pVVar12->___x_2;
                          local_a8._4_4_ = pVVar12->___y_3;
                          if (((float)local_a8._4_4_ < local_28) &&
                             (local_b4._0_4_ = pVVar12->___x_2, local_b4._4_4_ = pVVar12->___y_3,
                             local_ac = fVar7, fVar7 < local_2c)) {
                            local_cc._0_4_ = pVVar12->___x_2;
                            local_cc._4_4_ = pVVar12->___y_3;
                            local_d8._0_4_ = pVVar12->___x_2;
                            local_d8._4_4_ = pVVar12->___y_3;
                            local_6c.___z_4 = local_34 - fVar7;
                            local_48.___y_3 = local_3c._4_4_ - (float)local_cc._4_4_;
                            local_48.___x_2 = (float)local_3c - (float)(undefined4)local_cc;
                            local_d0 = fVar7;
                            local_c0 = local_cc;
                            local_48.___z_4 = local_6c.___z_4;
                            local_30 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                                 (&local_48,(MethodInfo *)0x0);
                            fVar19 = local_8;
                            iVar20 = local_10;
                            if ((local_30 <= ___real_3f9ae148) &&
                               (pOVar16 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                                                    ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar15,SUB41(&local_14,0),
                                                  Component_TryGetComponent_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m2044F99A99D9FDBEC7096C2298DB523BEF6A3BD9_RuntimeMethod_var
                                                  ), fVar19 = local_8, iVar20 = local_10,
                               (char)pOVar16 != '\0')) {
                              pIVar17 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                                  ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar15,
                                                  Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
                                                  );
                              if (pIVar17 == (Il2CppObject *)0x0) goto LAB_10879178;
                              fVar19 = local_8;
                              iVar20 = local_10;
                              if (*(char *)&pIVar17[2].monitor != '\0') {
                                if (local_14 == 0) goto LAB_10879178;
                                pOVar8 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)
                                          (local_14 + 0xc);
                                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                     ->has_cctor != '\0') &&
                                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                    ->cctor_finished == 0)) {
                                  il2cpp_runtime_class_init
                                            (
                                            Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                            );
                                }
                                bVar10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                                   (pOVar8,(MethodInfo *)0x0);
                                fVar19 = local_8;
                                iVar20 = local_10;
                                if (bVar10) {
                                  param_2->___neighbourCount_5 =
                                       param_2->___neighbourCount_5 + '\x01';
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  fVar19 = (float)((int)fVar19 + 1);
                } while ((int)fVar19 < iStack_54);
                iVar18 = iStack_54;
                uVar2._0_4_ = (int)local_50;
                local_8 = fVar19;
              }
              iVar20 = iVar20 + 1;
              local_10 = iVar20;
            } while (iVar20 < (int)uVar2);
          }
          fVar21 = (float)((int)fVar21 + 1);
        } while ((int)fVar21 < local_50._4_4_);
      }
    }
    uVar2._0_4_ = param_1->___birdLandingCount_18;
    if ((int)uVar2 == 0) {
      if (param_2 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
      goto LAB_10879178;
      pVVar12 = BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
                          (&local_e4,param_2,(MethodInfo *)0x0);
      uVar1 = pVVar12->___x_2;
      uVar3 = pVVar12->___y_3;
      fVar21 = pVVar12->___z_4;
      (param_1->___orbitPos_33).___x_2 = (float)uVar1;
      (param_1->___orbitPos_33).___y_3 = (float)uVar3;
      (param_1->___orbitTarget_34).___x_2 = (float)uVar1;
      (param_1->___orbitTarget_34).___y_3 = (float)uVar3;
      (param_1->___orbitPos_33).___z_4 = fVar21;
      (param_1->___orbitTarget_34).___z_4 = fVar21;
      uVar2._0_4_ = param_1->___birdLandingCount_18;
    }
    param_1->___optimalBirdCountDirty_25 = true;
    param_1->___birdLandingCount_18 = (int)uVar2 + 1;
    return;
  }
  param_1->___birdLandingCount_18 = param_1->___birdLandingCount_18 + -1;
  param_1->___optimalBirdCountDirty_25 = true;
  if (param_2 != (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) {
    pBVar4 = param_2->___bird_4;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar4,(MethodInfo *)0x0
                       );
    if (!bVar10) {
LAB_10878d5f:
      param_2->___neighbourCount_5 = '\0';
      return;
    }
    BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
              (param_1,(MethodInfo *)0x0);
    pBVar4 = param_2->___bird_4;
    if (param_1->___activeBirdsCount_20 <= param_1->___maxBirdCount_22) {
      BirdFlock_UprootBird_mFC6249072B6FF234B72CD0060E94EDA0AB728F6D
                (param_1,pBVar4,1.0,(MethodInfo *)0x0);
      param_2->___neighbourCount_5 = '\0';
      return;
    }
    BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
              (param_1,pBVar4,(BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0,
               (MethodInfo *)0x0);
    if (DAT_1151f5c3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&_stringLiteral3641F172023B823C36CF1686D0308E81BA22A660);
      DAT_1151f5c3 = '\x01';
    }
    if (pBVar4 != (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) {
      pBVar4->___stateNext_18 = '\x04';
      local_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
      fVar21 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      pBVar4->___lastActionTime_19 = fVar21 + local_8;
      if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___birds_17 !=
          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
        List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                  ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___birds_17,
                   (Il2CppObject *)pBVar4,
                   List_1_Remove_m864B89CF53DC9C7C861AA5789F24633E777CF1F3_RuntimeMethod_var);
        pTVar11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar4,
                             (MethodInfo *)0x0);
        if (pTVar11 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                    (pTVar11,param_1->___disabledBirds_16,(MethodInfo *)0x0);
          if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___featherEffect_12 !=
              (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
            pTVar11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                 param_1->___featherEffect_12,(MethodInfo *)0x0);
            pVVar12 = BirdLanding_get_pos_mFEAFD0CE24293167DABA18669B4F4AC98A0D8FF2
                                (&local_6c,param_2,(MethodInfo *)0x0);
            if (pTVar11 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
              Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                        (pTVar11,*pVVar12,(MethodInfo *)0x0);
              if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                  param_1->___featherEffect_12 !=
                  (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                pTVar11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     param_1->___featherEffect_12,(MethodInfo *)0x0);
                pQVar13 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                                    ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                                     (local_f0 + 8),param_2->___normal_6,(MethodInfo *)0x0);
                if (pTVar11 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                            (pTVar11,*pQVar13,(MethodInfo *)0x0);
                  if (param_1->___featherEffect_12 !=
                      (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)0x0) {
                    ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50
                              (param_1->___featherEffect_12,(MethodInfo *)0x0);
                    param_1->___activeBirdsCount_20 = param_1->___activeBirdsCount_20 + 0xff;
                    goto LAB_10878d5f;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10879178:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
