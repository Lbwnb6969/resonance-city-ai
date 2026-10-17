// RVA 0x413220 | Placemaker.HoverHightlight$$Draw
// PDB: HoverHightlight_Draw_m9C795AB1C4859C9276B80F000BBBBE584B07201A
// Body: [[10413220, 10413e2b] [10413e2f, 10413fe6]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 103efaa0 Vert_GetQuad_mB89B530B14247DDDC03EAFB5F4A164CE65DD9D03
// 103efd90 Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 10414020 HoverHightlight_U3CDrawU3Eg__AddQubeU7C5_0_m1C7356DFCD0087DA1408AC2C3865DB0611B66144
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 106751a0 Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
// 10806af0 Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825
// 10806bb0 Quad_GetVert_m40AF5846650ACF9CB4BE03087E1E08E41460311A
// 10807200 Quad_get_hexPosSum_m4512DD189AC5EB998A10A8BFE033ED3669979B31
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3f240 Graphics_DrawMesh_mF92DEF002677E39A5B25279767A6442B50E266B0
// 10a45eb0 Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
// 10a47c10 Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a48560 Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
// 10a48620 Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11087e60 List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
// 1108ddc0 List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
HoverHightlight_Draw_m9C795AB1C4859C9276B80F000BBBBE584B07201A
          (HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar9;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar10;
  float fVar11;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar12;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar13;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar14;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar15;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar16;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar17;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar18;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar19;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar20;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLVar21;
  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *pLVar22;
  bool bVar23;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar24;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar25;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *pQVar26;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar27;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar28;
  uint uVar29;
  int iVar30;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar31;
  undefined8 *extraout_EAX;
  undefined8 *extraout_EAX_00;
  undefined8 *extraout_EAX_01;
  undefined8 *extraout_EAX_02;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *plVar32;
  int iVar33;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar34;
  int iVar35;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar36;
  uint uVar37;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar38;
  MethodInfo *unaff_EDI;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar39;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar40;
  int iVar41;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar42;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar43;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar44;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar45;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar46;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_3c0;
  undefined1 local_210 [68];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1cc;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_1c0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1b4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_1a8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_19c;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_190;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_184;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_178;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_16c;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_128;
  float local_e4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_e0;
  float local_d4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_d0;
  float local_c4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_c0;
  undefined8 local_b4;
  undefined1 local_ac [8];
  float fStack_a4;
  float fStack_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  U3CU3Ec__DisplayClass5_0_tA18142E8300B89FEC61715E147F0A2D8F7FAA003 local_44;
  float local_28;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *local_24;
  float local_20;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *local_1c;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *local_18;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *local_14;
  int local_10;
  int local_c;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *local_8;

  if (DAT_1151ca99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m02363B110208F36C0F29E79C11396EFB4C10D749_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ca99 = '\x01';
  }
  memset(&local_16c.___quadIndex_0,'\0',0x44);
  local_18 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0;
  memset(&local_128.___quadIndex_0,'\0',0x44);
  local_14 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0;
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (local_1c = param_1->___master_4->___hoverData_18,
     local_1c != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0)) {
    pVVar36 = &local_1c->___srcVert_7;
    pVVar39 = &local_3c0;
    for (iVar35 = 0x6c; iVar35 != 0; iVar35 = iVar35 + -1) {
      (pVVar39->___hexPos_0).___x_0 = (pVVar36->___hexPos_0).___x_0;
      pVVar36 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar36->___hexPos_0).___y_1;
      pVVar39 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar39->___hexPos_0).___y_1;
    }
    if ((HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A_il2cpp_TypeInfo_var->
        cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A_il2cpp_TypeInfo_var);
    }
    local_28 = local_3c0.___planePos_1.___x_0;
    iVar35 = *(int *)HoverHightlight_t22196FA271832BDB569C2B76B2CB2BA853935A7A_il2cpp_TypeInfo_var->
                     static_fields;
    local_24 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)local_3c0.___planePos_1.___y_1;
    iVar19.___y_1 = (int)local_3c0.___planePos_1.___y_1;
    iVar19.___x_0 = (int)local_3c0.___planePos_1.___x_0;
    iVar19.___z_2 = 0;
    VVar43 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
             HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar19,unaff_EDI);
    pVVar24 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)local_ac,VVar43,
                         (MethodInfo *)0x0);
    Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
              (iVar35,*pVVar24,(MethodInfo *)0x0);
    bVar23 = Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3(&local_3c0,(MethodInfo *)0x0);
    pHVar40 = local_1c;
    if ((!bVar23) || (local_1c->___insideBorders_17 == false)) {
      return;
    }
    if ((ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
    }
    local_44.___verts_1 =
         (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
         ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                   (ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
    local_44.___normals_2 =
         (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
         ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                   (ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
    if ((ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    }
    local_44.___uvs_3 =
         (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
         ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                   (ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
    pDVar25 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
              ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                        (ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var)
    ;
    local_44.___uv2s_4 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar25;
    if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    }
    local_44.___tris_5 =
         (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)
         ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                   (ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var);
    local_44.___startVertIndex_6._0_2_ = 0;
    local_44.___startVertIndex_6._2_1_ = '\0';
    local_44.___startVertIndex_6._3_1_ = 0;
    local_44.___zOffset_0 = 0.0;
    if (pHVar40->___side_15 != -1) {
      local_10 = 0;
LAB_10413bf0:
      pQVar26 = Vert_GetQuad_mB89B530B14247DDDC03EAFB5F4A164CE65DD9D03
                          ((Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *)local_210,&local_3c0,
                           (pHVar40->___side_15 + local_10) % (int)local_3c0.___quadCount_8,
                           (MethodInfo *)0x0);
      local_16c.___quadIndex_0 = pQVar26->___quadIndex_0;
      local_16c._1_3_ = *(undefined3 *)&pQVar26->field_0x1;
      local_16c.___v0_1.___x_0 = (pQVar26->___v0_1).___x_0;
      local_16c.___v0_1.___y_1 = (pQVar26->___v0_1).___y_1;
      local_16c.___v1_2.___x_0 = (pQVar26->___v1_2).___x_0;
      local_16c.___v1_2.___y_1 = (pQVar26->___v1_2).___y_1;
      local_16c.___v2_3.___x_0 = (pQVar26->___v2_3).___x_0;
      local_16c.___v2_3.___y_1 = (pQVar26->___v2_3).___y_1;
      local_16c.___v3_4.___x_0 = (pQVar26->___v3_4).___x_0;
      local_16c.___v3_4.___y_1 = (pQVar26->___v3_4).___y_1;
      local_16c.___p0_5.___x_0 = (pQVar26->___p0_5).___x_0;
      local_16c.___p0_5.___y_1 = (pQVar26->___p0_5).___y_1;
      local_16c.___p1_6.___x_0 = (pQVar26->___p1_6).___x_0;
      local_16c.___p1_6.___y_1 = (pQVar26->___p1_6).___y_1;
      local_16c.___p2_7.___x_0 = (pQVar26->___p2_7).___x_0;
      local_16c.___p2_7.___y_1 = (pQVar26->___p2_7).___y_1;
      local_16c.___p3_8.___x_0 = (pQVar26->___p3_8).___x_0;
      local_16c.___p3_8.___y_1 = (pQVar26->___p3_8).___y_1;
      if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pGVar9 = param_1->___master_4->___graph_7,
         pGVar9 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
        pDVar10 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)pGVar9->___squareDict_17
        ;
        iVar44 = Quad_get_hexPosSum_m4512DD189AC5EB998A10A8BFE033ED3669979B31
                           (&local_16c,(MethodInfo *)0x0);
        if (pDVar10 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
          bVar23 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                             (pDVar10,iVar44,(Il2CppObject **)&local_18,
                              Dictionary_2_TryGetValue_m02363B110208F36C0F29E79C11396EFB4C10D749_RuntimeMethod_var
                             );
          if (bVar23) {
            iVar35 = 0;
            do {
              iVar46 = Quad_GetVert_m40AF5846650ACF9CB4BE03087E1E08E41460311A
                                 (&local_16c,iVar35,(MethodInfo *)0x0);
              iVar44.___y_1 = local_3c0.___hexPos_0.___y_1;
              iVar44.___x_0 = local_3c0.___hexPos_0.___x_0;
              if (iVar46 == iVar44) {
                local_c = iVar35 + 4;
                local_8 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0;
                iVar30 = 0;
                goto LAB_10413ce0;
              }
              iVar35 = iVar35 + 1;
            } while (iVar35 < 4);
          }
          goto LAB_10413ded;
        }
      }
      goto LAB_10413fe2;
    }
    local_10 = pHVar40->___dstHeight_11 - pHVar40->___srcHeight_10;
    local_c = 0;
    pDVar38 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___tris_5;
    if ('\0' < local_3c0.___quadCount_8) {
      do {
        pQVar26 = Vert_GetQuad_mB89B530B14247DDDC03EAFB5F4A164CE65DD9D03
                            ((Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *)local_210,&local_3c0,
                             local_c,(MethodInfo *)0x0);
        local_128.___quadIndex_0 = pQVar26->___quadIndex_0;
        local_128._1_3_ = *(undefined3 *)&pQVar26->field_0x1;
        local_128.___v0_1.___x_0 = (pQVar26->___v0_1).___x_0;
        local_128.___v0_1.___y_1 = (pQVar26->___v0_1).___y_1;
        local_128.___v1_2.___x_0 = (pQVar26->___v1_2).___x_0;
        local_128.___v1_2.___y_1 = (pQVar26->___v1_2).___y_1;
        local_128.___v2_3.___x_0 = (pQVar26->___v2_3).___x_0;
        local_128.___v2_3.___y_1 = (pQVar26->___v2_3).___y_1;
        local_128.___v3_4.___x_0 = (pQVar26->___v3_4).___x_0;
        local_128.___v3_4.___y_1 = (pQVar26->___v3_4).___y_1;
        local_128.___p0_5.___x_0 = (pQVar26->___p0_5).___x_0;
        local_128.___p0_5.___y_1 = (pQVar26->___p0_5).___y_1;
        local_128.___p1_6.___x_0 = (pQVar26->___p1_6).___x_0;
        local_128.___p1_6.___y_1 = (pQVar26->___p1_6).___y_1;
        local_128.___p2_7.___x_0 = (pQVar26->___p2_7).___x_0;
        local_128.___p2_7.___y_1 = (pQVar26->___p2_7).___y_1;
        local_128.___p3_8.___x_0 = (pQVar26->___p3_8).___x_0;
        local_128.___p3_8.___y_1 = (pQVar26->___p3_8).___y_1;
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pGVar9 = param_1->___master_4->___graph_7,
              pGVar9 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_10413fe2;
        pDVar10 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)pGVar9->___squareDict_17
        ;
        iVar44 = Quad_get_hexPosSum_m4512DD189AC5EB998A10A8BFE033ED3669979B31
                           (&local_128,(MethodInfo *)0x0);
        if (pDVar10 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
        goto LAB_10413fe2;
        Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                  (pDVar10,iVar44,(Il2CppObject **)&local_14,
                   Dictionary_2_TryGetValue_m02363B110208F36C0F29E79C11396EFB4C10D749_RuntimeMethod_var
                  );
        uVar37 = 0;
        do {
          iVar44 = Quad_GetVert_m40AF5846650ACF9CB4BE03087E1E08E41460311A
                             (&local_128,uVar37,(MethodInfo *)0x0);
          iVar46.___y_1 = local_3c0.___hexPos_0.___y_1;
          iVar46.___x_0 = local_3c0.___hexPos_0.___x_0;
          if (iVar44 == iVar46) {
            local_20 = (float)((uint)(0 < local_10) + pHVar40->___srcHeight_10);
            if (local_20 == 0.0) {
              local_20 = (float)(uVar37 + 1 & 0x80000003);
              if ((int)local_20 < 0) {
                local_20 = (float)(((int)local_20 - 1U | 0xfffffffc) + 1);
              }
              local_8 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
                        (uVar37 + 2 & 0x80000003);
              if ((int)local_8 < 0) {
                local_8 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
                          (((int)local_8 - 1U | 0xfffffffc) + 1);
              }
              local_24 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
                         (uVar37 + 3 & 0x80000003);
              if ((int)local_24 < 0) {
                local_24 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
                           (((int)local_24 - 1U | 0xfffffffc) + 1);
              }
              fVar45 = Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825
                                 (&local_128,uVar37 & 3,(MethodInfo *)0x0);
              if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
              }
              pfVar31 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                  (&local_1c0,fVar45,0.0,(MethodInfo *)0x0);
              uVar1 = pfVar31->___x_0;
              uVar5 = pfVar31->___y_1;
              Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                        (&local_1cc,(float)uVar1,(float)uVar5,pfVar31->___z_2,(MethodInfo *)0x0);
              local_b4 = *extraout_EAX;
              fVar11 = *(float *)(extraout_EAX + 1);
              fVar45 = Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825
                                 (&local_128,(int)local_20,(MethodInfo *)0x0);
              pfVar31 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                  (&local_178,fVar45,0.0,(MethodInfo *)0x0);
              uVar2 = pfVar31->___x_0;
              uVar6 = pfVar31->___y_1;
              Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                        (&local_184,(float)uVar2,(float)uVar6,pfVar31->___z_2,(MethodInfo *)0x0);
              local_8c = *extraout_EAX_00;
              local_20 = *(float *)(extraout_EAX_00 + 1);
              fVar45 = Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825
                                 (&local_128,(int)local_8,(MethodInfo *)0x0);
              pfVar31 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                  (&local_190,fVar45,0.0,(MethodInfo *)0x0);
              uVar3 = pfVar31->___x_0;
              uVar7 = pfVar31->___y_1;
              Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                        (&local_19c,(float)uVar3,(float)uVar7,pfVar31->___z_2,(MethodInfo *)0x0);
              local_94 = *extraout_EAX_01;
              local_8 = *(Square_tD1B7B6748B35059E198069769341DA3192352B8F **)(extraout_EAX_01 + 1);
              fVar45 = Quad_GetPlanePos_m0A1EBE1F12073193102CDD9899321EB08DFD3825
                                 (&local_128,(int)local_24,(MethodInfo *)0x0);
              pfVar31 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                  (&local_1a8,fVar45,0.0,(MethodInfo *)0x0);
              uVar4 = pfVar31->___x_0;
              uVar8 = pfVar31->___y_1;
              Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                        (&local_1b4,(float)uVar4,(float)uVar8,pfVar31->___z_2,(MethodInfo *)0x0);
              pLVar20 = local_44.___verts_1;
              local_9c = *extraout_EAX_02;
              local_24 = *(Square_tD1B7B6748B35059E198069769341DA3192352B8F **)(extraout_EAX_02 + 1)
              ;
              if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___verts_1 ==
                  (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) goto LAB_10413fe2;
              lVar15.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = fVar11;
              lVar15.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_b4;
              lVar15.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_b4._4_4_;
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_44.___verts_1,
                         lVar15,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              lVar16.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = local_20;
              lVar16.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_8c;
              lVar16.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_8c._4_4_;
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pLVar20,lVar16,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              lVar17.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = (float)local_8;
              lVar17.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_94;
              lVar17.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_94._4_4_;
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pLVar20,lVar17,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              lVar18.___goUQCKzJmFEdxabJRHcPmEGvlCq_2 = (float)local_24;
              lVar18.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = (undefined4)local_9c;
              lVar18.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_9c._4_4_;
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pLVar20,lVar18,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              plVar32 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *)
                        Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                  (&VStack_c0,(MethodInfo *)0x0);
              pLVar20 = local_44.___normals_2;
              if ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_44.___normals_2 ==
                  (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0) goto LAB_10413fe2;
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_44.___normals_2,
                         *plVar32,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              plVar32 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *)
                        Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                  (&VStack_d0,(MethodInfo *)0x0);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pLVar20,*plVar32,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              plVar32 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *)
                        Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                  (&VStack_e0,(MethodInfo *)0x0);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pLVar20,*plVar32,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              plVar32 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *)
                        Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                   (local_ac + 4),(MethodInfo *)0x0);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)pLVar20,*plVar32,
                         List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
              pLVar21 = local_44.___uvs_3;
              local_54 = 0;
              local_50 = 0;
              if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___uvs_3 ==
                  (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) goto LAB_10413fe2;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_44.___uvs_3,
                         (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x0,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              local_58 = 0;
              local_5c = 0x3f800000;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pLVar21,
                         (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x3f800000,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              local_60 = 0x3f800000;
              local_64 = 0x3f800000;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pLVar21,
                         (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x3f8000003f800000,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              local_68 = 0x3f800000;
              local_6c = 0;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pLVar21,
                         (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x3f80000000000000,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              local_74 = 0;
              local_70 = 0x3f800000;
              if (pDVar25 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_10413fe2;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pDVar25,
                         (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x3f80000000000000,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              local_78 = 0x3f800000;
              local_7c = 0;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pDVar25,
                         (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x3f80000000000000,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              local_80 = 0x3f800000;
              local_84 = 0;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pDVar25,
                         (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x3f80000000000000,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              local_48 = 1.0;
              local_4c = 0.0;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pDVar25,
                         (float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x3f80000000000000,
                         List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var);
              iVar35 = local_44.___startVertIndex_6;
              pLVar22 = local_44.___tris_5;
              if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___tris_5 ==
                  (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) goto LAB_10413fe2;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_44.___tris_5,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                         local_44.___startVertIndex_6,
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pLVar22,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)(iVar35 + 1),
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_44.___tris_5,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)(iVar35 + 2),
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              pDVar38 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___tris_5
              ;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_44.___tris_5,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)(iVar35 + 2),
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar38,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)(iVar35 + 3),
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar38,
                         (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)iVar35,
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              local_44.___startVertIndex_6 = iVar35 + 4;
              pHVar40 = local_1c;
            }
            else {
              local_8 = local_14;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar23 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                 ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_8,
                                  (MethodInfo *)0x0);
              pDVar38 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___tris_5
              ;
              if (bVar23) {
                if ((local_14 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) ||
                   (pTVar27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         local_14,(MethodInfo *)0x0),
                   pTVar27 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                goto LAB_10413fe2;
                iVar35 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                   (pTVar27,(MethodInfo *)0x0);
                fVar11 = local_20;
                pDVar38 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                          local_44.___tris_5;
                pHVar40 = local_1c;
                if ((int)local_20 < iVar35) {
                  if (((local_14 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) ||
                      (pTVar27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                            local_14,(MethodInfo *)0x0),
                      pTVar27 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
                     (pTVar27 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                          (pTVar27,(int)fVar11,(MethodInfo *)0x0),
                     pTVar27 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                  goto LAB_10413fe2;
                  pQVar28 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                            Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pTVar27,
                                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                      );
                  iVar35 = 0;
                  if (local_10 < 1) {
                    iVar35 = 4;
                  }
                  uVar29 = uVar37 + 1 & 0x80000003;
                  if ((int)uVar29 < 0) {
                    uVar29 = (uVar29 - 1 | 0xfffffffc) + 1;
                  }
                  iVar30 = 4;
                  if (local_10 < 1) {
                    iVar30 = 0;
                  }
                  HoverHightlight_U3CDrawU3Eg__AddQubeU7C5_0_m1C7356DFCD0087DA1408AC2C3865DB0611B66144
                            (param_1,pQVar28,local_14,iVar35 + uVar37,iVar30 + uVar37,
                             uVar29 + iVar35,&local_44,(MethodInfo *)0x0);
                  pDVar25 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                            local_44.___uv2s_4;
                  pDVar38 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                            local_44.___tris_5;
                  pHVar40 = local_1c;
                }
              }
            }
            break;
          }
          uVar37 = uVar37 + 1;
          pDVar38 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___tris_5;
        } while ((int)uVar37 < 4);
        local_c = local_c + 1;
      } while (local_c < local_3c0.___quadCount_8);
    }
LAB_10413e03:
    if (pDVar25 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
      pEVar42 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                ((int)&pDVar25->___entries_1[-1].m_Items[0].___value_3 + 3);
      if (-1 < (int)pEVar42) {
        iVar35 = (int)pEVar42 * 8 + 0x10;
        do {
          if (pDVar25->___entries_1 <= pEVar42) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          local_4c = *(float *)((int)pDVar25->___buckets_0->m_Items + iVar35 + -0x10) -
                     local_44.___zOffset_0;
          local_48 = *(float *)((int)pDVar25->___buckets_0->m_Items + iVar35 + -0xc) -
                     ___real_00000000;
          VVar43.___y_1 = local_48;
          VVar43.___x_0 = local_4c;
          List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                    ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar25,(int)pEVar42,VVar43
                     ,List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_RuntimeMethod_var);
          iVar35 = iVar35 + -8;
          pEVar42 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                    ((int)&pEVar42[-1].m_Items[0].___value_3 + 3);
          pDVar38 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___tris_5;
        } while (-1 < (int)pEVar42);
      }
      if (param_1->___mesh_5 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
        Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(param_1->___mesh_5,(MethodInfo *)0x0);
        if (param_1->___mesh_5 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
          Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
                    (param_1->___mesh_5,local_44.___verts_1,(MethodInfo *)0x0);
          if (param_1->___mesh_5 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
            Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168
                      (param_1->___mesh_5,local_44.___normals_2,(MethodInfo *)0x0);
            if (param_1->___mesh_5 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
              Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                        (param_1->___mesh_5,0,local_44.___uvs_3,(MethodInfo *)0x0);
              if (param_1->___mesh_5 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
                Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                          (param_1->___mesh_5,1,
                           (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pDVar25,
                           (MethodInfo *)0x0);
                if (param_1->___mesh_5 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
                  Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
                            (param_1->___mesh_5,
                             (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar38,0,
                             (MethodInfo *)0x0);
                  DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                            ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                             local_44.___verts_1,
                             ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                            );
                  DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                            ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                             local_44.___uvs_3,
                             ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
                            );
                  DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                            (pDVar25,
                             ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
                            );
                  DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                            (pDVar38,
                             ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                            );
                  pMVar12 = param_1->___mesh_5;
                  pMVar34 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
                                      ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                                       (local_210 + 4),(MethodInfo *)0x0);
                  pMVar13 = param_1->___drawMaterial_6;
                  local_ac._0_4_ = pMVar34->___m00_0;
                  local_ac._4_4_ = pMVar34->___m10_1;
                  fStack_a4 = pMVar34->___m20_2;
                  fStack_a0 = pMVar34->___m30_3;
                  local_e4 = pMVar34->___m01_4;
                  VStack_e0.___x_2 = pMVar34->___m11_5;
                  VStack_e0.___y_3 = pMVar34->___m21_6;
                  VStack_e0.___z_4 = pMVar34->___m31_7;
                  local_d4 = pMVar34->___m02_8;
                  VStack_d0.___x_2 = pMVar34->___m12_9;
                  VStack_d0.___y_3 = pMVar34->___m22_10;
                  VStack_d0.___z_4 = pMVar34->___m32_11;
                  local_c4 = pMVar34->___m03_12;
                  VStack_c0.___x_2 = pMVar34->___m13_13;
                  VStack_c0.___y_3 = pMVar34->___m23_14;
                  VStack_c0.___z_4 = pMVar34->___m33_15;
                  if ((Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var
                              );
                  }
                  MVar14.___m10_1 = (float)local_ac._4_4_;
                  MVar14.___m00_0 = (float)local_ac._0_4_;
                  MVar14.___m20_2 = fStack_a4;
                  MVar14.___m30_3 = fStack_a0;
                  MVar14.___m01_4 = local_e4;
                  MVar14.___m11_5 = VStack_e0.___x_2;
                  MVar14.___m21_6 = VStack_e0.___y_3;
                  MVar14.___m31_7 = VStack_e0.___z_4;
                  MVar14.___m02_8 = local_d4;
                  MVar14.___m12_9 = VStack_d0.___x_2;
                  MVar14.___m22_10 = VStack_d0.___y_3;
                  MVar14.___m32_11 = VStack_d0.___z_4;
                  MVar14.___m03_12 = local_c4;
                  MVar14.___m13_13 = VStack_c0.___x_2;
                  MVar14.___m23_14 = VStack_c0.___y_3;
                  MVar14.___m33_15 = VStack_c0.___z_4;
                  Graphics_DrawMesh_mF92DEF002677E39A5B25279767A6442B50E266B0
                            (pMVar12,MVar14,pMVar13,0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10413fe2:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
LAB_10413ce0:
  do {
    iVar41 = (int)&local_8->_padding_ + pHVar40->___srcHeight_10;
    local_24 = local_18;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar23 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_24,
                        (MethodInfo *)0x0);
    if ((bVar23) && (-1 < iVar41)) {
      if ((local_18 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) ||
         (pTVar27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_18,
                               (MethodInfo *)0x0),
         pTVar27 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10413fe2;
      iVar33 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                         (pTVar27,(MethodInfo *)0x0);
      if (iVar41 < iVar33) {
        if (((local_18 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) ||
            (pTVar27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_18,
                                  (MethodInfo *)0x0),
            pTVar27 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
           (pTVar27 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                (pTVar27,iVar41,(MethodInfo *)0x0),
           pTVar27 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_10413fe2;
        pQVar28 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar27,
                             Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                            );
        uVar37 = (uint)(local_10 != 0) * 2 + 3 + iVar35 & 0x80000003;
        if ((int)uVar37 < 0) {
          uVar37 = (uVar37 - 1 | 0xfffffffc) + 1;
        }
        HoverHightlight_U3CDrawU3Eg__AddQubeU7C5_0_m1C7356DFCD0087DA1408AC2C3865DB0611B66144
                  (param_1,pQVar28,local_18,local_c,(uVar37 - iVar30) + 4,iVar30 + iVar35,&local_44,
                   (MethodInfo *)0x0);
      }
    }
    iVar30 = iVar30 + 4;
    local_c = local_c + -4;
    local_8 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)((int)&local_8->_padding_ + 1);
    pHVar40 = local_1c;
  } while (iVar30 < 8);
LAB_10413ded:
  local_10 = local_10 + 1;
  pDVar25 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___uv2s_4;
  pDVar38 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44.___tris_5;
  if (1 < local_10) goto LAB_10413e03;
  goto LAB_10413bf0;
}
