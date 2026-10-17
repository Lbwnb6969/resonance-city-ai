// RVA 0x879380 | Placemaker.Life.BirdFlock$$GetLanding
// PDB: BirdFlock_GetLanding_mE3E0B3FCAE0266E03D7DB998F37CFF393FB1FD8B
// Body: [[10879380, 10879a19]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068d20 Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674430 Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10879a34 FUN_10879a34
// 10879a70 BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
// 10880030 BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB * __cdecl
BirdFlock_GetLanding_mE3E0B3FCAE0266E03D7DB998F37CFF393FB1FD8B
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar3;
  Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *pDVar4;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBVar5;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  undefined1 *puVar9;
  bool bVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar11;
  ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *pVVar12;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar13;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar14;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar15;
  Il2CppObject *pIVar16;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA local_198;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_180;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_174;
  int local_168;
  int iStack_164;
  float fStack_160;
  int iStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  undefined8 local_150;
  float local_148;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_144;
  undefined8 local_138;
  float local_130;
  undefined8 local_12c;
  undefined8 local_120;
  undefined8 local_114;
  undefined8 local_108;
  undefined8 local_fc;
  float local_f4;
  undefined8 local_f0;
  undefined8 local_e4;
  float local_dc;
  undefined8 local_d8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_c8;
  undefined8 local_bc;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  undefined8 local_98;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  undefined8 local_5c;
  float local_54;
  undefined8 local_50;
  float local_48;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2c;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *local_20;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__BirdFlock_GetLanding_mE3E0B3FCAE0266E03D7DB998F37CFF393FB1FD8B;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffe5c;
  ExceptionList = &pvStack_10;
  puVar9 = &stack0xfffffe5c;
  if (DAT_1151f5c4 == '\0') {
    ExceptionList = &pvStack_10;
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
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA3DBD7B0DFDB96C71E694032FF32FD131A886DB5);
    DAT_1151f5c4 = '\x01';
    puVar9 = local_14;
  }
  local_14 = puVar9;
  local_15 = 0;
  local_20 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0;
  local_1c = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0;
  local_2c.___x_2 = 0.0;
  local_2c.___y_3 = 0.0;
  local_2c.___z_4 = 0.0;
  local_88 = 0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
             (MethodInfo *)_stringLiteralA3DBD7B0DFDB96C71E694032FF32FD131A886DB5);
  local_8 = 0;
  if (param_2 == (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) {
LAB_10879a60:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  local_98._0_4_ = (param_2->___velocityNext_13).___x_2;
  local_98._4_4_ = (param_2->___velocityNext_13).___y_3;
  pVVar11 = &param_2->___velocityNext_13;
  local_a8 = (param_2->___velocityNext_13).___z_4;
  local_b0._0_4_ = (int)pVVar11->___x_2;
  local_b0._4_4_ = (int)pVVar11->___y_3;
  local_68._0_4_ = (int)(param_2->___posMid_11).___x_2;
  local_68._4_4_ = (int)(param_2->___posMid_11).___y_3;
  local_9c = (param_2->___posMid_11).___z_4;
  local_a4._0_4_ = (param_2->___posMid_11).___x_2;
  local_a4._4_4_ = (param_2->___posMid_11).___y_3;
  local_30 = (float)(int)local_68 + (float)(undefined4)local_98;
  local_34 = (float)local_68._4_4_ + (float)local_98._4_4_;
  local_b4 = local_9c + local_a8;
  local_84 = local_b4;
  local_5c = local_98;
  local_54 = local_a8;
  local_50 = local_68;
  local_48 = local_9c;
  pVVar11 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                      (&local_c8,pVVar11,(MethodInfo *)0x0);
  local_5c._0_4_ = pVVar11->___x_2;
  local_5c._4_4_ = pVVar11->___y_3;
  local_54 = pVVar11->___z_4;
  local_50._0_4_ = (param_2->___posMid_11).___x_2;
  local_50._4_4_ = (param_2->___posMid_11).___y_3;
  local_48 = (param_2->___posMid_11).___z_4;
  local_38 = __real_ff7fffff;
  local_44 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0;
  VVar7.___y_3 = local_34;
  VVar7.___x_2 = local_30;
  VVar7.___z_4 = local_b4;
  pVVar12 = BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
                      (&local_198,param_1,VVar7,1.1,(MethodInfo *)0x0);
  local_168 = (pVVar12->___Item1_0).___x_0;
  iStack_164 = (pVVar12->___Item1_0).___y_1;
  local_68._0_4_ = (pVVar12->___Item1_0).___x_0;
  local_68._4_4_ = (pVVar12->___Item1_0).___y_1;
  fVar18 = (float)(pVVar12->___Item1_0).___z_2;
  piVar6 = &pVVar12->___Item2_1;
  iStack_15c = piVar6->___x_0;
  uVar1 = (pVVar12->___Item2_1).___y_1;
  uVar2 = (pVVar12->___Item2_1).___z_2;
  local_b0._0_4_ = piVar6->___x_0;
  local_b0._4_4_ = piVar6->___y_1;
  fStack_160 = fVar18;
  uStack_158 = uVar1;
  iStack_154 = uVar2;
  do {
    if (iStack_154 <= (int)fVar18) {
      pBVar17 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)FUN_10879a34();
      return pBVar17;
    }
    for (iVar21 = local_68._4_4_; local_40 = iVar21, iVar21 < local_b0._4_4_; iVar21 = iVar21 + 1) {
      for (iVar19 = (int)local_68; local_3c = iVar19, iVar19 < (int)local_b0; iVar19 = iVar19 + 1) {
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pPVar3 = param_1->___master_4->___propPlacer_19,
              pPVar3 == (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0))
        goto LAB_10879a60;
        pDVar4 = (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)
                 pPVar3->___colliderDict_10;
        local_a4 = CONCAT44(iVar21,iVar19);
        if (pDVar4 == (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)0x0)
        goto LAB_10879a60;
        VVar8.___y_3 = (float)iVar21;
        VVar8.___x_2 = (float)iVar19;
        VVar8.___z_4 = fVar18;
        bVar10 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                           (pDVar4,VVar8,(int *)&local_20,
                            Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
                           );
        if (bVar10) {
          local_6c = (float)iVar19 + (float)iVar19;
          local_70 = (float)iVar21 + (float)iVar21;
          local_74 = (float)(int)fVar18 + (float)(int)fVar18;
          local_78 = (float)(iVar19 + 1) + (float)(iVar19 + 1);
          local_7c = (float)(iVar21 + 1) + (float)(iVar21 + 1);
          local_80 = (float)((int)fVar18 + 1) + (float)((int)fVar18 + 1);
          if (local_20 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)
          goto LAB_10879a60;
          iVar20 = local_20->____size_2;
          while (iVar20 = iVar20 + -1, iVar19 = local_3c, iVar21 = local_40, -1 < iVar20) {
            if (((local_20 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
                (pGVar13 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                     (local_20,iVar20,
                                      List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var
                                     ),
                pGVar13 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) ||
               (pTVar14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar13,
                                     (MethodInfo *)0x0),
               pTVar14 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10879a60;
            pVVar11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                (&local_174,pTVar14,(MethodInfo *)0x0);
            local_98._0_4_ = pVVar11->___x_2;
            local_98._4_4_ = pVVar11->___y_3;
            fVar22 = pVVar11->___z_4;
            if (local_6c <= (float)(undefined4)local_98) {
              local_d8._0_4_ = pVVar11->___x_2;
              local_d8._4_4_ = pVVar11->___y_3;
              if (((local_70 <= (float)local_d8._4_4_) &&
                  (local_e4._0_4_ = pVVar11->___x_2, local_e4._4_4_ = pVVar11->___y_3,
                  local_dc = fVar22, local_74 <= fVar22)) &&
                 ((float)(undefined4)local_98 < local_78)) {
                local_f0._0_4_ = pVVar11->___x_2;
                local_f0._4_4_ = pVVar11->___y_3;
                if (((float)local_f0._4_4_ < local_7c) &&
                   (local_fc._0_4_ = pVVar11->___x_2, local_fc._4_4_ = pVVar11->___y_3,
                   local_f4 = fVar22, fVar22 < local_80)) {
                  local_114._0_4_ = pVVar11->___x_2;
                  local_114._4_4_ = pVVar11->___y_3;
                  local_150._0_4_ = pVVar11->___x_2;
                  local_150._4_4_ = pVVar11->___y_3;
                  local_2c.___y_3 = local_34 - (float)local_114._4_4_;
                  local_2c.___x_2 = local_30 - (float)(undefined4)local_114;
                  local_2c.___z_4 = local_84 - fVar22;
                  local_148 = fVar22;
                  local_108 = local_114;
                  local_8c = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                       (&local_2c,(MethodInfo *)0x0);
                  if ((local_8c <= __real_3f800000) &&
                     (pOVar15 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pGVar13,SUB41(&local_1c,0),
                                           Component_TryGetComponent_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m2044F99A99D9FDBEC7096C2298DB523BEF6A3BD9_RuntimeMethod_var
                                          ), (char)pOVar15 != '\0')) {
                    pIVar16 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pGVar13,
                                         Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
                                        );
                    if (pIVar16 == (Il2CppObject *)0x0) goto LAB_10879a60;
                    if (*(char *)&pIVar16[2].monitor != '\0') {
                      if (local_1c == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
                      goto LAB_10879a60;
                      pBVar5 = local_1c->___bird_4;
                      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                  );
                      }
                      bVar10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                         ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar5
                                          ,(MethodInfo *)0x0);
                      if (!bVar10) {
                        if (local_1c == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0
                           ) goto LAB_10879a60;
                        pVVar11 = BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
                                            (&local_180,local_1c,(MethodInfo *)0x0);
                        local_12c._0_4_ = pVVar11->___x_2;
                        local_12c._4_4_ = pVVar11->___y_3;
                        local_130 = pVVar11->___z_4;
                        local_138._0_4_ = pVVar11->___x_2;
                        local_138._4_4_ = pVVar11->___y_3;
                        local_2c.___y_3 = (float)local_12c._4_4_ - local_50._4_4_;
                        local_2c.___x_2 = (float)(undefined4)local_12c - (float)local_50;
                        local_2c.___z_4 = local_130 - local_48;
                        local_120 = local_12c;
                        pVVar11 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                             &local_198.___Item2_1,&local_2c,(MethodInfo *)0x0);
                        local_144.___x_2 = pVVar11->___x_2;
                        local_144.___y_3 = pVVar11->___y_3;
                        local_b4 = pVVar11->___z_4;
                        local_bc._0_4_ = pVVar11->___x_2;
                        local_bc._4_4_ = pVVar11->___y_3;
                        fVar22 = local_5c._4_4_ * local_144.___y_3 +
                                 (float)local_5c * local_144.___x_2 + local_54 * local_b4;
                        local_c8._0_8_ = local_144._0_8_;
                        if (__real_3f4ccccd <= fVar22) {
                          if (local_1c ==
                              (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
                          goto LAB_10879a60;
                          fVar22 = (float)local_1c->___neighbourCount_5 * __real_3dcccccd + fVar22;
                          if (local_38 < fVar22) {
                            local_44 = local_1c;
                            local_38 = fVar22;
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
    fVar18 = (float)((int)fVar18 + 1);
  } while( true );
}
