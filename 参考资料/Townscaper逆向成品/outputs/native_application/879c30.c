// RVA 0x879c30 | Placemaker.Life.BirdFlock$$IterateBirdCreation
// PDB: BirdFlock_IterateBirdCreation_mBA1DFB588752021D7B8E6FE66F2E846F556FFE04
// Body: [[10879c30, 1087a8c7]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068d20 Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d3290 ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1065f940 Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
// 1065ff40 Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 106603a0 Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
// 106604d0 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066fbe0 Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
// 1066fc20 Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10879180 BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
// 108792c0 BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
// 10879a70 BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
// 1087efe0 BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
// 1087f1e0 BirdFlock_TryGetRandomLanding_mB8EDABF6CBC9EC5AC69F54BE98AAF2FFC3A9F015
// 1087ff60 BirdLanding_get_sortPos_m53ADEB657C9611AE28CED37CEB847639AAB0E736
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10c78ba0 Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
BirdFlock_IterateBirdCreation_mBA1DFB588752021D7B8E6FE66F2E846F556FFE04
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,MethodInfo *param_2)

{
  undefined8 uVar1;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar2;
  Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *pDVar3;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBVar4;
  ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *pMVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar12;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  bool bVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar19;
  ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *pVVar20;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar21;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar22;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar23;
  Il2CppObject *pIVar24;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar25;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar26;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar27;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar28;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar29;
  int iVar30;
  float fVar31;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_278;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_268;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_258;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_248;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_238;
  undefined1 local_228 [24];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_210;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_200;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_1f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1d0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1b0 [2];
  float local_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_178;
  float fStack_174;
  undefined8 uStack_170;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_168;
  float local_154;
  float fStack_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_13c;
  undefined8 local_130;
  undefined8 local_124;
  float local_11c;
  undefined8 local_118;
  undefined8 local_10c;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f4;
  undefined8 local_e8;
  undefined8 local_dc;
  float local_d4;
  undefined8 local_d0;
  undefined8 local_c4;
  float local_bc;
  undefined8 local_b8;
  undefined8 local_ac;
  int local_a0;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBStack_9c;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBStack_50;
  float fStack_4c;
  int iStack_48;
  undefined8 local_44;
  int local_3c;
  int local_38;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *local_34;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *local_30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2c;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *local_20;
  float local_1c;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_18;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *local_14;

  if (DAT_1151f5be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisBird_t844A261674A59156BC85FE5538301FE90489C0E8_m24D270A02F79519041E5E0CB0C1EF46EA755E223_RuntimeMethod_var
              );
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
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m390984D41E9816BF5FC3F9A8CA1AF901CFB99CB2_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Object_Instantiate_TisBird_t844A261674A59156BC85FE5538301FE90489C0E8_m75E95FAB8459EED945BB660335B0568ACEEED1DB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5be = '\x01';
  }
  local_20 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0;
  local_34 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0;
  local_30 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0;
  local_2c.___x_2 = 0.0;
  local_2c.___y_3 = 0.0;
  local_2c.___z_4 = 0.0;
  BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
            (param_1,(MethodInfo *)0x0);
  if (param_1->___minBirdCount_23 <= param_1->___activeBirdsCount_20) {
    return false;
  }
  local_1c = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(0.2,0.6,(MethodInfo *)0x0);
  local_70 = local_1c * local_1c;
  bVar18 = BirdFlock_TryGetRandomLanding_mB8EDABF6CBC9EC5AC69F54BE98AAF2FFC3A9F015
                     (param_1,&local_20,(MethodInfo *)0x0);
  if (bVar18) {
    if (local_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) {
LAB_1087a8c3:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pVVar19 = BirdLanding_get_sortPos_m53ADEB657C9611AE28CED37CEB847639AAB0E736
                        (&local_168,local_20,(MethodInfo *)0x0);
    local_88._0_4_ = pVVar19->___x_2;
    local_88._4_4_ = pVVar19->___y_3;
    local_80 = pVVar19->___z_4;
    pVVar20 = BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
                        ((ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *)local_228,param_1
                         ,*pVVar19,local_1c + __real_3dcccccd,(MethodInfo *)0x0);
    local_54 = (pVVar20->___Item1_0).___x_0;
    pBStack_50 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
                 (pVVar20->___Item1_0).___y_1;
    fVar31 = (float)(pVVar20->___Item1_0).___z_2;
    iStack_48 = (pVVar20->___Item2_1).___x_0;
    uVar1._0_4_ = (pVVar20->___Item2_1).___y_1;
    uVar1._4_4_ = (pVVar20->___Item2_1).___z_2;
    fStack_4c = fVar31;
    local_44 = uVar1;
    if ((int)fVar31 < uVar1._4_4_) {
      do {
        iVar30 = iStack_48;
        local_20 = pBStack_50;
        local_1c = fVar31;
        if ((int)pBStack_50 < (int)(BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)local_44
           ) {
          do {
            uVar1._4_4_ = local_54;
            if (local_54 < iVar30) {
              do {
                local_3c = uVar1._4_4_;
                if (((param_1->___master_4 ==
                      (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                    (pPVar2 = param_1->___master_4->___propPlacer_19,
                    pPVar2 == (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) ||
                   (pDVar3 = (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)
                             pPVar2->___colliderDict_10, local_a0 = uVar1._4_4_,
                   pBStack_9c = local_20,
                   pDVar3 == (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)0x0))
                goto LAB_1087a8c3;
                VVar14.___y_3 = (float)local_20;
                VVar14.___x_2 = (float)uVar1._4_4_;
                VVar14.___z_4 = local_1c;
                bVar18 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                                   (pDVar3,VVar14,(int *)&local_34,
                                    Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
                                   );
                if (bVar18) {
                  local_6c = (float)uVar1._4_4_ + (float)uVar1._4_4_;
                  local_58 = (float)(int)local_20 + (float)(int)local_20;
                  local_5c = (float)(int)local_1c + (float)(int)local_1c;
                  local_64 = (float)(int)((int)&local_20->_padding_ + 1);
                  local_60 = (float)(uVar1._4_4_ + 1) + (float)(uVar1._4_4_ + 1);
                  local_64 = local_64 + local_64;
                  local_68 = (float)((int)local_1c + 1) + (float)((int)local_1c + 1);
                  if (local_34 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)
                  goto LAB_1087a8c3;
                  local_38 = local_34->____size_2;
                  while (local_38 = local_38 + -1, -1 < local_38) {
                    if (((local_34 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
                        (pGVar21 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                             (local_34,local_38,
                                              List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var
                                             ),
                        pGVar21 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) ||
                       (pTVar22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             pGVar21,(MethodInfo *)0x0),
                       pTVar22 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                    goto LAB_1087a8c3;
                    pVVar19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                        (&local_200,pTVar22,(MethodInfo *)0x0);
                    local_ac._0_4_ = pVVar19->___x_2;
                    local_ac._4_4_ = pVVar19->___y_3;
                    fVar31 = pVVar19->___z_4;
                    uVar1._4_4_ = local_3c;
                    if (local_6c <= (float)(undefined4)local_ac) {
                      local_b8._0_4_ = pVVar19->___x_2;
                      local_b8._4_4_ = pVVar19->___y_3;
                      if (((local_58 <= (float)local_b8._4_4_) &&
                          (local_c4._0_4_ = pVVar19->___x_2, local_c4._4_4_ = pVVar19->___y_3,
                          local_bc = fVar31, local_5c <= fVar31)) &&
                         ((float)(undefined4)local_ac < local_60)) {
                        local_d0._0_4_ = pVVar19->___x_2;
                        local_d0._4_4_ = pVVar19->___y_3;
                        if (((float)local_d0._4_4_ < local_64) &&
                           (local_dc._0_4_ = pVVar19->___x_2, local_dc._4_4_ = pVVar19->___y_3,
                           local_d4 = fVar31, fVar31 < local_68)) {
                          local_f4._0_4_ = pVVar19->___x_2;
                          local_f4._4_4_ = pVVar19->___y_3;
                          local_100._0_4_ = pVVar19->___x_2;
                          local_100._4_4_ = pVVar19->___y_3;
                          local_194 = local_80 - fVar31;
                          local_2c.___y_3 = local_88._4_4_ - (float)local_f4._4_4_;
                          local_2c.___x_2 = (float)local_88 - (float)(undefined4)local_f4;
                          local_f8 = fVar31;
                          local_e8 = local_f4;
                          local_2c.___z_4 = local_194;
                          local_14 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                                     Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                               (&local_2c,(MethodInfo *)0x0);
                          uVar1._4_4_ = local_3c;
                          if (((float)local_14 <= local_70) &&
                             (pOVar23 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                                                  ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar21,SUB41(&local_30,0),
                                                  Component_TryGetComponent_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m2044F99A99D9FDBEC7096C2298DB523BEF6A3BD9_RuntimeMethod_var
                                                  ), uVar1._4_4_ = local_3c, (char)pOVar23 != '\0'))
                          {
                            pIVar24 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar21,
                                                 Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
                                                );
                            if (pIVar24 == (Il2CppObject *)0x0) goto LAB_1087a8c3;
                            uVar1._4_4_ = local_3c;
                            if (*(char *)&pIVar24[2].monitor != '\0') {
                              if (local_30 ==
                                  (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
                              goto LAB_1087a8c3;
                              pBVar4 = local_30->___bird_4;
                              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                   ->has_cctor != '\0') &&
                                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                  ->cctor_finished == 0)) {
                                il2cpp_runtime_class_init
                                          (
                                          Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                          );
                              }
                              bVar18 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                                 ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
                                                   *)pBVar4,(MethodInfo *)0x0);
                              uVar1._4_4_ = local_3c;
                              if (!bVar18) {
                                if (param_1->___disabledBirds_16 ==
                                    (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                                goto LAB_1087a8c3;
                                uVar1._4_4_ = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                                        (param_1->___disabledBirds_16,
                                                         (MethodInfo *)0x0);
                                if (uVar1._4_4_ < 1) {
                                  local_14 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *
                                             )param_1->___activeBirds_15;
                                  pBVar4 = param_1->___srcBird_14;
                                  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                       ->has_cctor != '\0') &&
                                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                      ->cctor_finished == 0)) {
                                    il2cpp_runtime_class_init
                                              (
                                              Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                              );
                                  }
                                  OVar25 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                           )Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared
                                                      ((Il2CppObject *)pBVar4,
                                                       (
                                                  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
                                                  *)local_14,
                                                  Object_Instantiate_TisBird_t844A261674A59156BC85FE5538301FE90489C0E8_m75E95FAB8459EED945BB660335B0568ACEEED1DB_RuntimeMethod_var
                                                  );
                                  local_14 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *
                                             )Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
                                                        ((MethodInfo *)0x0);
                                  if (OVar25 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                                 )0x0) goto LAB_1087a8c3;
                                  *(float *)((int)OVar25 + 0x70) =
                                       (float)param_1->___totalBirdCount_21 / ___real_40490fdb +
                                       (float)local_14;
                                  *(byte *)((int)OVar25 + 0x74) =
                                       (param_1->___totalBirdCount_21 & 7) + 1;
                                  local_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                       ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)OVar25,(MethodInfo *)0x0);
                                  pVVar19 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                                      (local_1b0,(MethodInfo *)0x0);
                                  local_94._0_4_ = pVVar19->___x_2;
                                  local_94._4_4_ = pVVar19->___y_3;
                                  local_8c = pVVar19->___z_4;
                                  local_14 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *
                                             )Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                                                        (0.8,1.2,(MethodInfo *)0x0);
                                  local_7c = (float)local_94 * (float)local_14;
                                  fStack_78 = local_94._4_4_ * (float)local_14;
                                  local_74 = local_8c * (float)local_14;
                                  if (local_18 ==
                                      (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                                  goto LAB_1087a8c3;
                                  VVar16.___y_3 = fStack_78;
                                  VVar16.___x_2 = local_7c;
                                  VVar16.___z_4 = local_74;
                                  Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                                            (local_18,VVar16,(MethodInfo *)0x0);
                                  param_1->___totalBirdCount_21 =
                                       param_1->___totalBirdCount_21 + '\x01';
                                }
                                else {
                                  pTVar22 = param_1->___disabledBirds_16;
                                  if (pTVar22 ==
                                      (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                                  goto LAB_1087a8c3;
                                  uVar1._4_4_ = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                                          (pTVar22,(MethodInfo *)0x0);
                                  pTVar22 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                                      (pTVar22,uVar1._4_4_ + -1,(MethodInfo *)0x0);
                                  if (((pTVar22 ==
                                        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                                      || (OVar25 = (
                                                  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                                  )
                                                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                                            ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pTVar22,
                                                  Component_GetComponent_TisBird_t844A261674A59156BC85FE5538301FE90489C0E8_m24D270A02F79519041E5E0CB0C1EF46EA755E223_RuntimeMethod_var
                                                  ),
                                         OVar25 == (
                                                  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                                  )0x0)) ||
                                     (pTVar22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                          ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)OVar25,(MethodInfo *)0x0),
                                     pTVar22 ==
                                     (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                                  goto LAB_1087a8c3;
                                  Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                                            (pTVar22,param_1->___activeBirds_15,(MethodInfo *)0x0);
                                }
                                local_14 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **
                                            )((int)OVar25 + 0x70);
                                local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                           Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
                                                     ((MethodInfo *)0x0);
                                uVar1._4_4_ = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                                                        (((float)local_18 -
                                                         *(float *)((int)OVar25 + 0x70)) /
                                                         __real_3e99999a,(MethodInfo *)0x0);
                                *(float *)((int)OVar25 + 0x70) =
                                     (float)uVar1._4_4_ * __real_3e99999a + (float)local_14;
                                if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                    param_1->___birds_17 ==
                                    (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                                goto LAB_1087a8c3;
                                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                           param_1->___birds_17,OVar25,
                                           List_1_Add_m390984D41E9816BF5FC3F9A8CA1AF901CFB99CB2_RuntimeMethod_var
                                          );
                                if (DAT_1151f5c3 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata
                                            ((uint *)&
                                                  Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var
                                            );
                                  il2cpp_codegen_initialize_runtime_metadata
                                            ((uint *)&
                                                  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                            );
                                  il2cpp_codegen_initialize_runtime_metadata
                                            ((uint *)&
                                                  _stringLiteral3641F172023B823C36CF1686D0308E81BA22A660
                                            );
                                  DAT_1151f5c3 = '\x01';
                                }
                                *(undefined1 *)((int)OVar25 + 0x76) = 2;
                                local_14 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                                           Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
                                                     ((MethodInfo *)0x0);
                                local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                           Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
                                                     ((MethodInfo *)0x0);
                                *(float *)((int)OVar25 + 0x78) = (float)local_18 + (float)local_14;
                                BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
                                          (param_1,(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *
                                                   )OVar25,local_30,(MethodInfo *)0x0);
                                local_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                     ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)OVar25,(MethodInfo *)0x0);
                                pVVar19 = BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
                                                    (&local_210,param_1,
                                                     (Bird_t844A261674A59156BC85FE5538301FE90489C0E8
                                                      *)OVar25,(MethodInfo *)0x0);
                                local_2c.___x_2 = pVVar19->___x_2;
                                local_2c.___y_3 = pVVar19->___y_3;
                                local_2c.___z_4 = pVVar19->___z_4;
                                VVar14 = *pVVar19;
                                *(undefined8 *)((int)OVar25 + 0x40) = local_2c._0_8_;
                                *(float *)((int)OVar25 + 0x48) = local_2c.___z_4;
                                *(undefined8 *)((int)OVar25 + 100) = local_2c._0_8_;
                                *(float *)((int)OVar25 + 0x6c) = local_2c.___z_4;
                                if (local_18 ==
                                    (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                                goto LAB_1087a8c3;
                                Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                                          (local_18,VVar14,(MethodInfo *)0x0);
                                pVVar19 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                                    (&local_1c0,(MethodInfo *)0x0);
                                local_2c.___x_2 = pVVar19->___x_2;
                                local_2c.___y_3 = pVVar19->___y_3;
                                local_2c.___z_4 = pVVar19->___z_4;
                                *(undefined8 *)((int)OVar25 + 0x4c) = local_2c._0_8_;
                                *(float *)((int)OVar25 + 0x54) = local_2c.___z_4;
                                *(undefined8 *)((int)OVar25 + 0x58) = local_2c._0_8_;
                                *(float *)((int)OVar25 + 0x60) = local_2c.___z_4;
                                if (*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)
                                     ((int)OVar25 + 0x14) ==
                                    (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
                                goto LAB_1087a8c3;
                                MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                                          (*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **
                                            )((int)OVar25 + 0x14),
                                           (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0,
                                           (MethodInfo *)0x0);
                                local_14 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **
                                            )((int)OVar25 + 0x18);
                                local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                           Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
                                                     ((MethodInfo *)0x0);
                                if (__real_3dcccccd <= (float)local_18) {
                                  local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                             Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
                                                       ((MethodInfo *)0x0);
                                  if (__real_3f000000 <= (float)local_18) {
                                    pMVar26 = param_1->___sitMesh_5;
                                  }
                                  else {
                                    pMVar26 = param_1->___halfSitMesh_6;
                                  }
                                }
                                else {
                                  pMVar26 = param_1->___landMesh_8;
                                }
                                if (local_14 ==
                                    (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
                                goto LAB_1087a8c3;
                                MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                                          (local_14,pMVar26,(MethodInfo *)0x0);
                                if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                     ((int)OVar25 + 0x10) ==
                                    (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)
                                goto LAB_1087a8c3;
                                pTVar22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                    (*(
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  **)((int)OVar25 + 0x10),(MethodInfo *)0x0);
                                if (((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                       ((int)OVar25 + 0x7c) ==
                                      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
                                    (pTVar27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                         (*(
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  **)((int)OVar25 + 0x7c),(MethodInfo *)0x0),
                                    pTVar27 ==
                                    (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
                                   (pVVar19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                                        (&local_1d0,pTVar27,(MethodInfo *)0x0),
                                   pTVar22 ==
                                   (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                                goto LAB_1087a8c3;
                                Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                                          (pTVar22,*pVVar19,(MethodInfo *)0x0);
                                if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                     ((int)OVar25 + 0x10) ==
                                    (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)
                                goto LAB_1087a8c3;
                                pTVar22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                    (*(
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  **)((int)OVar25 + 0x10),(MethodInfo *)0x0);
                                if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                      ((int)OVar25 + 0x7c) ==
                                     (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
                                   (pTVar27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                        (*(
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  **)((int)OVar25 + 0x7c),(MethodInfo *)0x0),
                                   pTVar27 ==
                                   (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                                goto LAB_1087a8c3;
                                pQVar28 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
                                                    (&local_278,pTVar27,(MethodInfo *)0x0);
                                local_178 = pQVar28->___x_0;
                                fStack_174 = pQVar28->___y_1;
                                uStack_170._0_4_ = pQVar28->___z_2;
                                uStack_170._4_4_ = pQVar28->___w_3;
                                pQVar28 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                                                    (&local_238,-90.0,90.0,0.0,(MethodInfo *)0x0);
                                QVar12.___y_1 = fStack_174;
                                QVar12.___x_0 = local_178;
                                QVar12.___z_2 = (float)(undefined4)uStack_170;
                                QVar12.___w_3 = uStack_170._4_4_;
                                pQVar28 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                                                    (&local_248,QVar12,*pQVar28,(MethodInfo *)0x0);
                                if (pTVar22 ==
                                    (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                                goto LAB_1087a8c3;
                                Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                                          (pTVar22,*pQVar28,(MethodInfo *)0x0);
                                if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                      ((int)OVar25 + 0x7c) ==
                                     (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
                                   (pTVar22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                        (*(
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  **)((int)OVar25 + 0x7c),(MethodInfo *)0x0),
                                   pTVar22 ==
                                   (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                                goto LAB_1087a8c3;
                                pVVar19 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                                                    (&local_1e0,pTVar22,(MethodInfo *)0x0);
                                local_118._0_4_ = pVVar19->___x_2;
                                local_118._4_4_ = pVVar19->___y_3;
                                local_11c = pVVar19->___z_4;
                                local_124._0_4_ = pVVar19->___x_2;
                                local_124._4_4_ = pVVar19->___y_3;
                                local_190 = (float)((undefined4)local_118 ^
                                                   __xmm_80000000800000008000000080000000);
                                fStack_18c = 0.0;
                                fStack_188 = 0.0;
                                fStack_184 = 0.0;
                                local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                           (local_118._4_4_ ^ __xmm_80000000800000008000000080000000
                                           );
                                local_14 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                                           ((uint)local_11c ^ __xmm_80000000800000008000000080000000
                                           );
                                uVar1._4_4_ = *(int *)((int)OVar25 + 0x7c);
                                local_10c = local_118;
                                if (uVar1._4_4_ == 0) goto LAB_1087a8c3;
                                uStack_170 = *(undefined8 *)(uVar1._4_4_ + 0x14);
                                fVar31 = *(float *)(uVar1._4_4_ + 0x1c);
                                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                     ->has_cctor != '\0') &&
                                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                    ->cctor_finished == 0)) {
                                  il2cpp_runtime_class_init
                                            (
                                            ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                            );
                                }
                                fVar15.___z_2 = fVar31;
                                fVar15.___x_0 = (float)(undefined4)uStack_170;
                                fVar15.___y_1 = uStack_170._4_4_;
                                pfVar29 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                                                    (&local_1f0,fVar15,0.0,(MethodInfo *)0x0);
                                local_13c._0_4_ = pfVar29->___x_0;
                                local_13c._4_4_ = pfVar29->___y_1;
                                local_140 = pfVar29->___z_2;
                                local_154 = local_190 + (float)(undefined4)local_13c;
                                local_148._0_4_ = pfVar29->___x_0;
                                local_148._4_4_ = pfVar29->___y_1;
                                fVar31 = local_140 + (float)local_14;
                                fStack_150 = ((float)local_18 + (float)local_13c._4_4_) *
                                             __real_3ecccccd;
                                local_168.___z_4 = fVar31;
                                local_130 = local_13c;
                                uVar1._4_4_ = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                                                        (-0x14,0x14,(MethodInfo *)0x0);
                                pQVar28 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                                                    (&local_258,0.0,(float)uVar1._4_4_,0.0,
                                                     (MethodInfo *)0x0);
                                local_190 = pQVar28->___x_0;
                                fStack_18c = pQVar28->___y_1;
                                fStack_188 = pQVar28->___z_2;
                                fStack_184 = pQVar28->___w_3;
                                VVar17.___y_3 = fStack_150;
                                VVar17.___x_2 = local_154;
                                VVar17.___z_4 = fVar31;
                                pQVar28 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                                                    (&local_268,VVar17,(MethodInfo *)0x0);
                                QVar13.___y_1 = fStack_18c;
                                QVar13.___x_0 = local_190;
                                QVar13.___z_2 = fStack_188;
                                QVar13.___w_3 = fStack_184;
                                pQVar28 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                                                    ((
                                                  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4
                                                  *)(local_228 + 8),QVar13,*pQVar28,
                                                  (MethodInfo *)0x0);
                                fVar31 = pQVar28->___y_1;
                                fVar6 = pQVar28->___z_2;
                                fVar7 = pQVar28->___w_3;
                                fVar8 = pQVar28->___x_0;
                                fVar9 = pQVar28->___y_1;
                                fVar10 = pQVar28->___z_2;
                                fVar11 = pQVar28->___w_3;
                                *(float *)((int)OVar25 + 0x30) = pQVar28->___x_0;
                                *(float *)((int)OVar25 + 0x34) = fVar31;
                                *(float *)((int)OVar25 + 0x38) = fVar6;
                                *(float *)((int)OVar25 + 0x3c) = fVar7;
                                *(float *)((int)OVar25 + 0x20) = fVar8;
                                *(float *)((int)OVar25 + 0x24) = fVar9;
                                *(float *)((int)OVar25 + 0x28) = fVar10;
                                *(float *)((int)OVar25 + 0x2c) = fVar11;
                                local_14 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **
                                            )((int)OVar25 + 0x78);
                                local_18 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                           Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                                                     (3.0,25.0,(MethodInfo *)0x0);
                                *(float *)((int)OVar25 + 0x78) = (float)local_18 + (float)local_14;
                                param_1->___activeBirdsCount_20 =
                                     param_1->___activeBirdsCount_20 + '\x01';
                                if (param_1->___activeBirdsCount_20 == param_1->___maxBirdCount_22)
                                {
                                  local_20 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB
                                              *)local_44;
                                  local_1c = local_44._4_4_;
                                  uVar1._4_4_ = iStack_48;
                                  break;
                                }
                                if ((param_1->___master_4 ==
                                     (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
                                   || (pMVar5 = param_1->___master_4->___manySoundsManager_32,
                                      pMVar5 == (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6
                                                 *)0x0)) goto LAB_1087a8c3;
                                ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
                                          (pMVar5,7,*(
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)((int)OVar25 + 100),0.0,1.0,(MethodInfo *)0x0);
                                uVar1._4_4_ = local_3c;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar1._4_4_ = uVar1._4_4_ + 1;
                fVar31 = local_1c;
                iVar30 = iStack_48;
              } while (uVar1._4_4_ < iStack_48);
            }
            local_20 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
                       ((int)&local_20->_padding_ + 1);
          } while ((int)local_20 <
                   (int)(BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)local_44);
          uVar1._4_4_ = (int)local_44._4_4_;
        }
        fVar31 = (float)((int)fVar31 + 1);
      } while ((int)fVar31 < uVar1._4_4_);
    }
  }
  return true;
}
