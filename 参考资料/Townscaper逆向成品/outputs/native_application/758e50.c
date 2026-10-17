// RVA 0x758e50 | Placemaker.PropPlacer$$AddColliderToDict
// PDB: PropPlacer_AddColliderToDict_m7AC8E57507C644A8730830BA8241DE1523AEEECE
// Body: [[10758e50, 10759003] [1075900a, 10759ca5]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068d20 Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1021c740 Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
// 10419890 Intersections_OrientedBoxOrientedBox_m894BFB99DB493B356A4359E30861B8FDE7751B72
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f2b0 Component_GetComponents_TisRuntimeObject_mB0812CB4355C4F5E2EA27C7049C668609E72F31D_gshared
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066e6b0 Transform_IsChildOf_m1783A88A490931E98F4D5E361595A518E09FD4BC
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066f9a0 Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE
// 10674380 Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
// 107562f0 PropCollider_CalculateWorldBounds_m69877EDA05A8B49604A5D59C7D0284302FDE5AE2
// 10756490 PropCollider_Collides_m736D18A1FAA8067236338BD0A73DC6AF47B1BA80
// 10756500 PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
// 10758660 PropNode_AddAnchor_mE6096002F92BB21665BEA5713768EB72B93C3478
// 10758840 PropNode_InserOverlap_m4F1F22F450BB7ECDCA4C81A7B92FDDE1B698E413
// 10759cba FUN_10759cba
// 1075abb0 PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
// 1075ac70 PropPlacer_GetChunkMatrix_m9812F8BC3681D6DF69C5CA631F56713EEFAA3975
// 10a37390 Bounds_Intersects_m1796197732F04774117A3EC0D6BC1994B77B2336
// 10a377b0 Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD
// 10a37840 Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a439d0 Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11030e80 List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
// 110352e0 List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared

void __cdecl
PropPlacer_AddColliderToDict_m7AC8E57507C644A8730830BA8241DE1523AEEECE
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  MonitorData *pMVar1;
  MonitorData *pMVar2;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar3;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar4;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar5;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar9;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar10;
  undefined1 *puVar11;
  bool bVar12;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar14;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar15;
  float fVar16;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar17;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar18;
  PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *pPVar19;
  PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *pPVar20;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar21;
  Il2CppObject *pIVar22;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar23;
  float fVar24;
  undefined4 extraout_ECX;
  float fVar25;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar26;
  float fVar27;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_294;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_254;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_248;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_23c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_230;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_224;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_218;
  float local_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 local_180;
  undefined8 local_174;
  float local_16c;
  undefined8 local_168;
  undefined8 local_15c;
  float local_154;
  undefined8 local_150;
  undefined8 local_144;
  undefined8 local_138;
  float local_130;
  undefined8 local_12c;
  undefined8 local_120;
  undefined8 local_114;
  float local_10c;
  undefined8 local_108;
  undefined8 local_fc;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  undefined8 local_d8;
  undefined8 local_cc;
  float local_c4;
  undefined8 local_c0;
  undefined8 local_b4;
  undefined8 local_a4;
  float local_9c;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  int local_88;
  float local_84;
  float local_80;
  int local_7c;
  float local_78;
  float fStack_74;
  undefined4 local_70;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_6c;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *local_60;
  float local_5c;
  float local_58;
  int local_54;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_50;
  int local_4c;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_48;
  float local_44;
  float local_40;
  float local_3c;
  PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *local_38;
  float local_34;
  PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *local_30;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_2c;
  float local_28;
  List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *local_24;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_20;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__PropPlacer_AddColliderToDict_m7AC8E57507C644A8730830BA8241DE1523AEEECE;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffd60;
  ExceptionList = &pvStack_10;
  puVar11 = &stack0xfffffd60;
  if (DAT_1151ec42 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisPropWireAnchor_tCB7650546235D6E4FD7E7A3A450C2D9B9491BF1A_m3DD90B9C90B3914A641D06C22185C81C39189C9E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisProp_tFB36A7E740F843093CDC437435E4BA4054D50B46_m11E571026AE6746578D872F6731F627BAA2C195D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponents_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mB4C8F8445ED81276163E16DCD3774D786DFA86D3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_mCFD0724F074C6F0C3AB07614C0FF869B7425B7CA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mA32742D86A2C7EE78AF473047B555860BCCBC2F2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m3FCDC6C6757E0EDCAFC23B2A450375F345D9FFC1_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m102F4A6A16914AE845A7608A2AD43F5D70210BA6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Contains_mB2CB7B66172E71AC34BA13E9D9A0A665B9FF1DE7_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Insert_m4131323E1083B40254679F5B8996FE5E2A74E740_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD700E67B9EAE39D6A5FC217B11778FA8D958E882);
    DAT_1151ec42 = '\x01';
    puVar11 = local_14;
  }
  local_14 = puVar11;
  local_15 = 0;
  local_78 = 0.0;
  fStack_74 = 0.0;
  local_70 = 0;
  local_24 = (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0;
  local_6c.___x_2 = 0.0;
  local_6c.___y_3 = 0.0;
  local_6c.___z_4 = 0.0;
  if (param_2 != (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0) {
    param_2->___inDict_7 = true;
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_15,
               (MethodInfo *)_stringLiteralD700E67B9EAE39D6A5FC217B11778FA8D958E882);
    local_8 = 0;
    if ((ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var);
    }
    local_50 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                         (ListPool_1_Get_m3FCDC6C6757E0EDCAFC23B2A450375F345D9FFC1_RuntimeMethod_var
                         );
    Component_GetComponents_TisRuntimeObject_mB0812CB4355C4F5E2EA27C7049C668609E72F31D_gshared
              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
               (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)local_50,
               Component_GetComponents_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mB4C8F8445ED81276163E16DCD3774D786DFA86D3_RuntimeMethod_var
              );
    local_2c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0;
    local_48 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0;
    if (local_50 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
      local_60 = local_50->___entries_1;
      while( true ) {
        pEVar10 = local_60 + -1;
        local_60 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                   ((int)&pEVar10->m_Items[0].___value_3 + 3);
        if ((int)local_60 < 0) {
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (local_50,
                     ListPoolExtension_ReturnToPool_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mA32742D86A2C7EE78AF473047B555860BCCBC2F2_RuntimeMethod_var
                    );
          FUN_10759cba();
          return;
        }
        if (local_50->___entries_1 <= local_60) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_20 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                    (local_50->___buckets_0[3].m_Items +
                    (int)((int)&((EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                                (pEVar10->m_Items + -1))->_padding_ + 1));
        if (local_20 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) break;
        if (*(char *)((int)local_20 + 0xc) == '\a') {
          pCVar13 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                    Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                               (MethodInfo *)0x0);
          while( true ) {
            if (pCVar13 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)
            goto LAB_10759ce4;
            local_2c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                       Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                 (pCVar13,
                                  Component_GetComponent_TisProp_tFB36A7E740F843093CDC437435E4BA4054D50B46_m11E571026AE6746578D872F6731F627BAA2C195D_RuntimeMethod_var
                                 );
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               (local_2c,(MethodInfo *)0x0);
            if (bVar12) break;
            pCVar13 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                      Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                                ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pCVar13,
                                 (MethodInfo *)0x0);
          }
        }
        OVar26 = local_20;
        PropCollider_CalculateWorldBounds_m69877EDA05A8B49604A5D59C7D0284302FDE5AE2
                  ((PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *)local_20,
                   (MethodInfo *)0x0);
        pVVar14 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519
                            (&local_23c,
                             (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)
                             ((int)OVar26 + 0x28),(MethodInfo *)0x0);
        local_c0._0_4_ = pVVar14->___x_2;
        local_c0._4_4_ = pVVar14->___y_3;
        local_c4 = pVVar14->___z_4;
        local_cc._0_4_ = pVVar14->___x_2;
        local_cc._4_4_ = pVVar14->___y_3;
        local_44 = (float)(undefined4)local_c0 * __real_3f000000;
        local_40 = (float)local_c0._4_4_ * __real_3f000000;
        local_3c = local_c4 * __real_3f000000;
        local_b4 = local_c0;
        pVVar14 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD
                            (&local_248,
                             (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)
                             ((int)OVar26 + 0x28),(MethodInfo *)0x0);
        local_e4._0_4_ = pVVar14->___x_2;
        local_e4._4_4_ = pVVar14->___y_3;
        local_e8 = pVVar14->___z_4;
        local_f0._0_4_ = pVVar14->___x_2;
        local_f0._4_4_ = pVVar14->___y_3;
        local_34 = (float)(undefined4)local_e4 * __real_3f000000;
        local_38 = (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)
                   ((float)local_e4._4_4_ * __real_3f000000);
        local_1c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)(local_e8 * __real_3f000000);
        local_d8 = local_e4;
        local_84 = (float)Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                                    (local_44,(MethodInfo *)0x0);
        local_80 = (float)Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                                    (local_40,(MethodInfo *)0x0);
        local_28 = (float)Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                                    (local_3c,(MethodInfo *)0x0);
        local_88 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                             (local_34,(MethodInfo *)0x0);
        local_44 = (float)Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                                    ((float)local_38,(MethodInfo *)0x0);
        local_7c = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                             ((float)local_1c,(MethodInfo *)0x0);
        OVar26 = local_20;
        pMVar15 = PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
                            (&local_294,
                             (PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *)local_20,
                             (MethodInfo *)0x0);
        local_1d0 = pMVar15->___m00_0;
        fStack_1cc = pMVar15->___m10_1;
        fStack_1c8 = pMVar15->___m20_2;
        fStack_1c4 = pMVar15->___m30_3;
        local_200 = pMVar15->___m01_4;
        fStack_1fc = pMVar15->___m11_5;
        fStack_1f8 = pMVar15->___m21_6;
        fStack_1f4 = pMVar15->___m31_7;
        local_1e0 = pMVar15->___m02_8;
        fStack_1dc = pMVar15->___m12_9;
        fStack_1d8 = pMVar15->___m22_10;
        fStack_1d4 = pMVar15->___m32_11;
        local_1f0 = pMVar15->___m03_12;
        fStack_1ec = pMVar15->___m13_13;
        fStack_1e8 = pMVar15->___m23_14;
        fStack_1e4 = pMVar15->___m33_15;
        fVar27 = local_44;
        while (fVar24 = local_28, fVar25 = local_80, (int)local_28 < local_7c) {
          while (fVar16 = local_84, local_40 = fVar25, (int)fVar25 < (int)fVar27) {
LAB_1075929b:
            while (local_3c = fVar16, (int)fVar16 < local_88) {
              iVar9.___y_1 = (int)local_40;
              iVar9.___x_0 = (int)fVar16;
              iVar9.___z_2 = (int)fVar24;
              local_78 = fVar16;
              fStack_74 = local_40;
              pMVar15 = PropPlacer_GetChunkMatrix_m9812F8BC3681D6DF69C5CA631F56713EEFAA3975
                                  (&local_294,param_1,iVar9,(MethodInfo *)0x0);
              local_190 = pMVar15->___m00_0;
              fStack_18c = pMVar15->___m10_1;
              fStack_188 = pMVar15->___m20_2;
              fStack_184 = pMVar15->___m30_3;
              local_1a0 = pMVar15->___m01_4;
              fStack_19c = pMVar15->___m11_5;
              fStack_198 = pMVar15->___m21_6;
              fStack_194 = pMVar15->___m31_7;
              local_1b0 = pMVar15->___m02_8;
              fStack_1ac = pMVar15->___m12_9;
              fStack_1a8 = pMVar15->___m22_10;
              fStack_1a4 = pMVar15->___m32_11;
              local_1c0 = pMVar15->___m03_12;
              fStack_1bc = pMVar15->___m13_13;
              fStack_1b8 = pMVar15->___m23_14;
              fStack_1b4 = pMVar15->___m33_15;
              if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (
                          Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                          );
              }
              MVar3.___m10_1 = fStack_1cc;
              MVar3.___m00_0 = local_1d0;
              MVar3.___m20_2 = fStack_1c8;
              MVar3.___m30_3 = fStack_1c4;
              MVar3.___m01_4 = local_200;
              MVar3.___m11_5 = fStack_1fc;
              MVar3.___m21_6 = fStack_1f8;
              MVar3.___m31_7 = fStack_1f4;
              MVar3.___m02_8 = local_1e0;
              MVar3.___m12_9 = fStack_1dc;
              MVar3.___m22_10 = fStack_1d8;
              MVar3.___m32_11 = fStack_1d4;
              MVar3.___m03_12 = local_1f0;
              MVar3.___m13_13 = fStack_1ec;
              MVar3.___m23_14 = fStack_1e8;
              MVar3.___m33_15 = fStack_1e4;
              MVar5.___m10_1 = fStack_18c;
              MVar5.___m00_0 = local_190;
              MVar5.___m20_2 = fStack_188;
              MVar5.___m30_3 = fStack_184;
              MVar5.___m01_4 = local_1a0;
              MVar5.___m11_5 = fStack_19c;
              MVar5.___m21_6 = fStack_198;
              MVar5.___m31_7 = fStack_194;
              MVar5.___m02_8 = local_1b0;
              MVar5.___m12_9 = fStack_1ac;
              MVar5.___m22_10 = fStack_1a8;
              MVar5.___m32_11 = fStack_1a4;
              MVar5.___m03_12 = local_1c0;
              MVar5.___m13_13 = fStack_1bc;
              MVar5.___m23_14 = fStack_1b8;
              MVar5.___m33_15 = fStack_1b4;
              bVar12 = Intersections_OrientedBoxOrientedBox_m894BFB99DB493B356A4359E30861B8FDE7751B72
                                 (MVar3,MVar5,(MethodInfo *)0x0);
              if (bVar12) {
                if ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)
                    param_1->___colliderDict_10 ==
                    (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)0x0)
                goto LAB_10759ce4;
                VVar7.___y_3 = fStack_74;
                VVar7.___x_2 = local_78;
                VVar7.___z_4 = local_28;
                bVar12 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                                   ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)
                                    param_1->___colliderDict_10,VVar7,(int *)&local_24,
                                    Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
                                   );
                if (bVar12) {
                  local_4c = 0;
                  if (local_24 != (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0) {
                    local_54 = local_24->____size_2;
                    for (; local_4c < local_54; local_4c = local_4c + 1) {
                      if ((local_24 == (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0) ||
                         (pGVar17 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                              ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                                               local_24,local_4c,
                                               List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var
                                              ),
                         pGVar17 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0))
                      goto LAB_10759ce4;
                      pOVar18 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pGVar17,
                                           Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
                                          );
                      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                  );
                      }
                      bVar12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                         ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                          param_2,pOVar18,(MethodInfo *)0x0);
                      if (bVar12) break;
                      if (pOVar18 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0)
                      goto LAB_10759ce4;
                      if (param_2->___priority_4 <= (float)pOVar18[1]._padding_ &&
                          (float)pOVar18[1]._padding_ != param_2->___priority_4) break;
                    }
                    local_34 = 0.0;
LAB_10759480:
                    OVar26 = local_20;
                    if (local_54 <= (int)local_34) goto LAB_10759bbc;
                    if ((local_24 == (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0) ||
                       (pPVar19 = (PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *)
                                  List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                            ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                                             local_24,(int)local_34,
                                             List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var
                                            ), local_30 = pPVar19,
                       pPVar19 == (PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *)0x0))
                    goto LAB_10759ce4;
                    pPVar20 = (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)
                              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pPVar19,
                                         Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
                                        );
                    local_38 = pPVar20;
                    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                );
                    }
                    bVar12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,
                                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pPVar20,
                                        (MethodInfo *)0x0);
                    if ((!bVar12) &&
                       (bVar12 = Bounds_Intersects_m1796197732F04774117A3EC0D6BC1994B77B2336
                                           ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)
                                            ((int)local_20 + 0x28),pPVar19->___worldBounds_6,
                                            (MethodInfo *)0x0), bVar12)) {
                      if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                          param_2->___relations_11 ==
                          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0)
                      goto LAB_10759ce4;
                      bVar12 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                                         ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                                          param_2->___relations_11,(Il2CppObject *)pPVar20,
                                          List_1_Contains_mB2CB7B66172E71AC34BA13E9D9A0A665B9FF1DE7_RuntimeMethod_var
                                         );
                      if (bVar12) goto LAB_10759bad;
                      local_1c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                 CONCAT31((int3)((uint)extraout_ECX >> 8),
                                          *(uchar *)((int)local_20 + 0xc));
                      local_8c = CONCAT31(local_8c._1_3_,pPVar19->___layer_4);
                      bVar12 = PropCollider_Collides_m736D18A1FAA8067236338BD0A73DC6AF47B1BA80
                                         (*(uchar *)((int)local_20 + 0xc),pPVar19->___layer_4,
                                          (MethodInfo *)0x0);
                      if (!bVar12) goto LAB_10759bad;
                      if ((char)local_1c == '\a') {
                        if ((pPVar20 != (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0)
                           && (pTVar21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                   ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pPVar20,(MethodInfo *)0x0),
                              pTVar21 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                           ) {
                          while( true ) {
                            pOVar18 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                      Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pTVar21,
                                                 Component_GetComponent_TisProp_tFB36A7E740F843093CDC437435E4BA4054D50B46_m11E571026AE6746578D872F6731F627BAA2C195D_RuntimeMethod_var
                                                );
                            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                 ->has_cctor != '\0') &&
                               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                ->cctor_finished == 0)) {
                              il2cpp_runtime_class_init
                                        (
                                        Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                        );
                            }
                            bVar12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                               (pOVar18,(MethodInfo *)0x0);
                            if (bVar12) break;
                            pTVar21 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                                                (pTVar21,(MethodInfo *)0x0);
                            if (pTVar21 ==
                                (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_codegen_raise_null_reference_exception();
                            }
                          }
                          if ((local_2c != (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0)
                             && (local_1c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                            local_2c[1]._padding_,
                                pOVar18 != (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0))
                          {
                            pOVar18 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                      pOVar18[1]._padding_;
                            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                 ->has_cctor != '\0') &&
                               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                ->cctor_finished == 0)) {
                              il2cpp_runtime_class_init
                                        (
                                        Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                        );
                            }
                            bVar12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                                               (local_1c,pOVar18,(MethodInfo *)0x0);
                            pPVar19 = local_30;
                            pPVar20 = local_38;
                            if (!bVar12) goto LAB_107599f9;
                            goto LAB_10759bad;
                          }
                        }
                        goto LAB_10759ce4;
                      }
                      if ((char)local_1c != '\x03') {
LAB_107599f9:
                        pMVar15 = PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
                                            (&local_294,pPVar19,(MethodInfo *)0x0);
                        local_1c0 = pMVar15->___m00_0;
                        fStack_1bc = pMVar15->___m10_1;
                        fStack_1b8 = pMVar15->___m20_2;
                        fStack_1b4 = pMVar15->___m30_3;
                        local_1b0 = pMVar15->___m01_4;
                        fStack_1ac = pMVar15->___m11_5;
                        fStack_1a8 = pMVar15->___m21_6;
                        fStack_1a4 = pMVar15->___m31_7;
                        local_1a0 = pMVar15->___m02_8;
                        fStack_19c = pMVar15->___m12_9;
                        fStack_198 = pMVar15->___m22_10;
                        fStack_194 = pMVar15->___m32_11;
                        local_190 = pMVar15->___m03_12;
                        fStack_18c = pMVar15->___m13_13;
                        fStack_188 = pMVar15->___m23_14;
                        fStack_184 = pMVar15->___m33_15;
                        if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                             ->has_cctor != '\0') &&
                           (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                            ->cctor_finished == 0)) {
                          il2cpp_runtime_class_init
                                    (
                                    Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var
                                    );
                        }
                        MVar4.___m10_1 = fStack_1cc;
                        MVar4.___m00_0 = local_1d0;
                        MVar4.___m20_2 = fStack_1c8;
                        MVar4.___m30_3 = fStack_1c4;
                        MVar4.___m01_4 = local_200;
                        MVar4.___m11_5 = fStack_1fc;
                        MVar4.___m21_6 = fStack_1f8;
                        MVar4.___m31_7 = fStack_1f4;
                        MVar4.___m02_8 = local_1e0;
                        MVar4.___m12_9 = fStack_1dc;
                        MVar4.___m22_10 = fStack_1d8;
                        MVar4.___m32_11 = fStack_1d4;
                        MVar4.___m03_12 = local_1f0;
                        MVar4.___m13_13 = fStack_1ec;
                        MVar4.___m23_14 = fStack_1e8;
                        MVar4.___m33_15 = fStack_1e4;
                        MVar6.___m10_1 = fStack_1bc;
                        MVar6.___m00_0 = local_1c0;
                        MVar6.___m20_2 = fStack_1b8;
                        MVar6.___m30_3 = fStack_1b4;
                        MVar6.___m01_4 = local_1b0;
                        MVar6.___m11_5 = fStack_1ac;
                        MVar6.___m21_6 = fStack_1a8;
                        MVar6.___m31_7 = fStack_1a4;
                        MVar6.___m02_8 = local_1a0;
                        MVar6.___m12_9 = fStack_19c;
                        MVar6.___m22_10 = fStack_198;
                        MVar6.___m32_11 = fStack_194;
                        MVar6.___m03_12 = local_190;
                        MVar6.___m13_13 = fStack_18c;
                        MVar6.___m23_14 = fStack_188;
                        MVar6.___m33_15 = fStack_184;
                        bVar12 = Intersections_OrientedBoxOrientedBox_m894BFB99DB493B356A4359E30861B8FDE7751B72
                                           (MVar4,MVar6,(MethodInfo *)0x0);
                        if (!bVar12) goto LAB_10759bad;
                        pTVar21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             local_20,(MethodInfo *)0x0);
                        pTVar23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             local_30,(MethodInfo *)0x0);
                        if (pTVar21 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                        goto LAB_10759ce4;
                        bVar12 = Transform_IsChildOf_m1783A88A490931E98F4D5E361595A518E09FD4BC
                                           (pTVar21,pTVar23,(MethodInfo *)0x0);
                        if (bVar12) goto LAB_10759bad;
                        pTVar21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             local_30,(MethodInfo *)0x0);
                        pTVar23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             local_20,(MethodInfo *)0x0);
                        if (pTVar21 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                        goto LAB_10759ce4;
                        bVar12 = Transform_IsChildOf_m1783A88A490931E98F4D5E361595A518E09FD4BC
                                           (pTVar21,pTVar23,(MethodInfo *)0x0);
                        if (bVar12) goto LAB_10759bad;
                        if (*(char *)((int)local_20 + 0xc) == '\x03') {
                          PropNode_AddAnchor_mE6096002F92BB21665BEA5713768EB72B93C3478
                                    (param_2,pPVar20,(MethodInfo *)0x0);
                          if (pPVar20 != (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0)
                          {
                            PropNode_AddAnchor_mE6096002F92BB21665BEA5713768EB72B93C3478
                                      (pPVar20,param_2,(MethodInfo *)0x0);
                            goto LAB_10759bad;
                          }
                          goto LAB_10759ce4;
                        }
                        PropNode_InserOverlap_m4F1F22F450BB7ECDCA4C81A7B92FDDE1B698E413
                                  (param_2,pPVar20,(MethodInfo *)0x0);
                        if (pPVar20 == (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0)
                        goto LAB_10759ce4;
                        PropNode_InserOverlap_m4F1F22F450BB7ECDCA4C81A7B92FDDE1B698E413
                                  (pPVar20,param_2,(MethodInfo *)0x0);
                        if ((pPVar20->___priority_4 < param_2->___priority_4) ||
                           (pPVar20->___turnedOn_6 == false)) goto LAB_10759bad;
                        PropPlacer_ChangeHideCount_mAF4419B7978D1C276CD4D9262B44E5D376C51283
                                  (param_1,param_2,true,(MethodInfo *)0x0);
                        local_34 = (float)((int)local_34 + 1);
                        goto LAB_10759480;
                      }
                      pTVar21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pPVar19,(MethodInfo *)0x0);
                      if (pTVar21 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                      goto LAB_10759ce4;
                      pVVar14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                          (&local_254,pTVar21,(MethodInfo *)0x0);
                      OVar26 = local_20;
                      local_a4._0_4_ = pVVar14->___x_2;
                      local_a4._4_4_ = pVVar14->___y_3;
                      local_9c = pVVar14->___z_4;
                      pTVar21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           local_20,(MethodInfo *)0x0);
                      if (pTVar21 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                      goto LAB_10759ce4;
                      pVVar14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                          (&local_218,pTVar21,(MethodInfo *)0x0);
                      local_108._0_4_ = pVVar14->___x_2;
                      local_108._4_4_ = pVVar14->___y_3;
                      local_10c = pVVar14->___z_4;
                      local_6c.___x_2 = (float)local_a4 - (float)(undefined4)local_108;
                      local_114._0_4_ = pVVar14->___x_2;
                      local_114._4_4_ = pVVar14->___y_3;
                      local_6c.___y_3 = local_a4._4_4_ - (float)local_108._4_4_;
                      local_204 = local_9c - local_10c;
                      local_fc = local_108;
                      local_6c.___z_4 = local_204;
                      fVar27 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
                                         (&local_6c,(MethodInfo *)0x0);
                      local_5c = local_6c.___x_2 / fVar27;
                      local_58 = local_6c.___y_3 / fVar27;
                      local_1c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                 (local_6c.___z_4 / fVar27);
                      pTVar21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           OVar26,(MethodInfo *)0x0);
                      if (pTVar21 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                      goto LAB_10759ce4;
                      pVVar14 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE
                                          (&local_224,pTVar21,(MethodInfo *)0x0);
                      local_120._0_4_ = pVVar14->___x_2;
                      local_120._4_4_ = pVVar14->___y_3;
                      local_130 = pVVar14->___z_4;
                      local_138._0_4_ = pVVar14->___x_2;
                      local_138._4_4_ = pVVar14->___y_3;
                      local_12c = local_138;
                      local_98 = local_120;
                      local_90 = local_130;
                      if (__real_3e99999a <=
                          (float)((uint)local_5c ^ __xmm_80000000800000008000000080000000) *
                          (float)(undefined4)local_120 +
                          (float)local_138._4_4_ *
                          (float)((uint)local_58 ^ __xmm_80000000800000008000000080000000) +
                          local_130 *
                          (float)((uint)local_1c ^ __xmm_80000000800000008000000080000000)) {
                        pTVar21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             pPVar19,(MethodInfo *)0x0);
                        if (pTVar21 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                        goto LAB_10759ce4;
                        pVVar14 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE
                                            (&local_230,pTVar21,(MethodInfo *)0x0);
                        local_150._0_4_ = pVVar14->___x_2;
                        local_150._4_4_ = pVVar14->___y_3;
                        local_154 = pVVar14->___z_4;
                        local_15c._0_4_ = pVVar14->___x_2;
                        local_15c._4_4_ = pVVar14->___y_3;
                        local_144 = local_150;
                        if ((float)local_150._4_4_ * local_58 +
                            (float)(undefined4)local_150 * local_5c + local_154 * (float)local_1c <
                            __real_3e99999a) goto LAB_10759bad;
                        local_180._0_4_ = pVVar14->___x_2;
                        local_180._4_4_ = pVVar14->___y_3;
                        local_174._0_4_ = pVVar14->___x_2;
                        local_174._4_4_ = pVVar14->___y_3;
                        local_16c = local_154;
                        local_168 = local_180;
                        if (__real_3f000000 <=
                            (float)((undefined4)local_180 ^ __xmm_80000000800000008000000080000000)
                            * (float)local_98 +
                            (float)(local_180._4_4_ ^ __xmm_80000000800000008000000080000000) *
                            local_98._4_4_ +
                            (float)((uint)local_154 ^ __xmm_80000000800000008000000080000000) *
                            local_90) {
                          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                               ->has_cctor != '\0') &&
                             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                              cctor_finished == 0)) {
                            il2cpp_runtime_class_init
                                      (
                                      Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                      );
                          }
                          bVar12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                             (local_48,(MethodInfo *)0x0);
                          if (!bVar12) {
                            local_48 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                       Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                                 ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)OVar26,
                                                  Component_GetComponent_TisPropWireAnchor_tCB7650546235D6E4FD7E7A3A450C2D9B9491BF1A_m3DD90B9C90B3914A641D06C22185C81C39189C9E_RuntimeMethod_var
                                                 );
                          }
                          pOVar18 = local_48;
                          pIVar22 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)pPVar19,
                                               Component_GetComponent_TisPropWireAnchor_tCB7650546235D6E4FD7E7A3A450C2D9B9491BF1A_m3DD90B9C90B3914A641D06C22185C81C39189C9E_RuntimeMethod_var
                                              );
                          if ((pOVar18 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0)
                             || (pMVar1 = (MonitorData *)pOVar18[1]._padding_,
                                pIVar22 == (Il2CppObject *)0x0)) goto LAB_10759ce4;
                          pMVar2 = pIVar22[1].monitor;
                          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                               ->has_cctor != '\0') &&
                             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                              cctor_finished == 0)) {
                            il2cpp_runtime_class_init
                                      (
                                      Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                      );
                          }
                          bVar12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                                             ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                              pMVar1,(
                                                  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *
                                                  )pMVar2,(MethodInfo *)0x0);
                          pPVar19 = local_30;
                          pPVar20 = local_38;
                          if (!bVar12) goto LAB_107599f9;
                          local_34 = (float)((int)local_34 + 1);
                          goto LAB_10759480;
                        }
                      }
                    }
LAB_10759bad:
                    local_34 = (float)((int)local_34 + 1);
                    goto LAB_10759480;
                  }
                  goto LAB_10759ce4;
                }
                if ((ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            ListPool_1_t21E60C9F6240A49695800EA50D89D90BC268E604_il2cpp_TypeInfo_var
                            );
                }
                local_24 = ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                                     (
                                     ListPool_1_Get_m3FCDC6C6757E0EDCAFC23B2A450375F345D9FFC1_RuntimeMethod_var
                                     );
                if (((Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
                     param_1->___colliderDict_10 ==
                     (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0) ||
                   (iVar8.___y_1 = (int)fStack_74, iVar8.___x_0 = (int)local_78,
                   iVar8.___z_2 = (int)local_28,
                   Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                             ((Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
                              param_1->___colliderDict_10,iVar8,(Il2CppObject *)local_24,
                              Dictionary_2_Add_mCFD0724F074C6F0C3AB07614C0FF869B7425B7CA_RuntimeMethod_var
                             ), local_24 == (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0)
                   ) goto LAB_10759ce4;
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_24,OVar26,
                           List_1_Add_m102F4A6A16914AE845A7608A2AD43F5D70210BA6_RuntimeMethod_var);
              }
              fVar24 = local_28;
              fVar16 = (float)((int)local_3c + 1);
            }
            fVar27 = local_44;
            fVar25 = (float)((int)local_40 + 1);
          }
          local_28 = (float)((int)fVar24 + 1);
        }
      }
    }
  }
LAB_10759ce4:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
LAB_10759bbc:
  if (local_24 == (List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *)0x0) goto LAB_10759ce4;
  List_1_Insert_m754F79C99EC14024CB7D424CB588B3923719F992_gshared
            ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_24,local_4c,local_20,
             List_1_Insert_m4131323E1083B40254679F5B8996FE5E2A74E740_RuntimeMethod_var);
  fVar16 = (float)((int)local_3c + 1);
  fVar24 = local_28;
  goto LAB_1075929b;
}
