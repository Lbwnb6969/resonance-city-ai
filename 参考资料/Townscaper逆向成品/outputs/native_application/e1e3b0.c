// RVA 0xe1e3b0 | Placemaker.GridGenerator$$PopulateBorderMesh
// PDB: GridGenerator_PopulateBorderMesh_m2353CBB724B2F79E32024F8EB68DCE4030C1B4C8
// Body: [[10e1e3b0, 10e1f2b9]]
// Direct callees:
// 10054800 List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 103ef840 Vert_ContainsVert_m5D59338CB1DC69EB6FC88F70450F820D9092A74A
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040ddd0 HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1040e0d0 HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 1066d760 Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10836300 ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
// 10836d30 ExtraMath_Pow2_m01BC9BF14976CD4E7BDC4C39639490264804087F
// 10928710 List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a48560 Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
// 10a48620 Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
// 10e109c0 GridGenerator_GetClosestClusterPos_m7824F99A7919904038888BB85769659401FB0FED
// 10e10e90 GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
// 10e13c00 GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11087e60 List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared

void __cdecl
GridGenerator_PopulateBorderMesh_m2353CBB724B2F79E32024F8EB68DCE4030C1B4C8
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C param_2,
          Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *param_3,MethodInfo *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *pAVar15;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar16;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar17;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar18;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar19;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar20;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar21;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar22;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar23;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar24;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar25;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar26;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar27;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar28;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar29;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar30;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar31;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar32;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar33;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar34;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar35;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar36;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar37;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar38;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar39;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar40;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar41;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar42;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar43;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar44;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar45;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar46;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar47;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar48;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar49;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar50;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar51;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar52;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar53;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar54;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar55;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar56;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar57;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar58;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar59;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar60;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar61;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar62;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar63;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar64;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar65;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar66;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar67;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar68;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar69;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar70;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar71;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar72;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar73;
  bool bVar74;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar76;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar77;
  byte bVar75;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar78;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *extraout_EAX;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *extraout_EAX_00;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *extraout_EAX_01;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *extraout_EAX_02;
  int iVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar83;
  MethodInfo *unaff_EDI;
  int iVar84;
  uint uVar85;
  float fVar86;
  float fVar87;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar88;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar89;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar90;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar91;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar92;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar93;
  MethodInfo *pMVar94;
  MethodInfo *pMVar95;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_174;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_168;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_15c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_150;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_144;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_138;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_12c;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_120;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_114;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_108;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_fc;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_f0;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  float local_c4;
  int local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_94;
  float local_8c;
  SemaphoreImpl *local_88;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 local_74;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_6c;
  MethodInfo *local_64;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_60;
  float local_5c;
  float local_58;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_54;
  float local_48;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 local_44;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_3c;
  float local_34;
  float local_30;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_2c;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_28;
  String_t *local_24;
  Il2CppObject *local_20;
  char local_1a;
  char local_19;
  float local_18;
  float local_14;
  Il2CppObject *local_10;
  char local_a;
  char local_9;
  char local_8;
  byte local_7;
  byte local_6;
  byte local_5;

  if (DAT_1152265c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
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
              ((uint *)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var)
    ;
    DAT_1152265c = '\x01';
  }
  iVar82 = param_2.___hexPos_0.___y_1;
  iVar84 = param_2.___hexPos_0.___x_0;
  local_20 = (Il2CppObject *)0x0;
  local_10 = (Il2CppObject *)0x0;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  iVar88.___y_1 = iVar82;
  iVar88.___x_0 = iVar84;
  piVar76 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                      (&local_54,iVar88,(MethodInfo *)0x0);
  uVar1 = piVar76->___x_0;
  uVar8 = piVar76->___y_1;
  iVar84 = piVar76->___z_2;
  local_c0 = uVar1;
  iStack_bc = uVar8;
  piVar76 = GridGenerator_GetClosestClusterPos_m7824F99A7919904038888BB85769659401FB0FED
                      (&local_54,param_1,*piVar76,(MethodInfo *)0x0);
  iVar88 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(*piVar76,(MethodInfo *)0x0);
  local_80 = iVar88.___y_1;
  local_7c = iVar88.___x_0;
  local_44 = GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
                       (param_1,iVar88,(MethodInfo *)0x0);
  iVar82 = local_44.___x_0;
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
  if (DAT_11522657 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522657 = '\x01';
  }
  local_54.___x_0 = (int)(float)local_c0;
  local_54.___y_1 = (int)(float)iStack_bc;
  local_54.___z_2 = (int)(float)iVar84;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar27.___y_1 = (float)local_54.___y_1;
  fVar27.___x_0 = (float)local_54.___x_0;
  fVar27.___z_2 = (float)local_54.___z_2;
  fVar89 = HexMath_HexToPlane_m5544014E93DDD85B07669CF6B69B187638657A69(fVar27,(MethodInfo *)0x0);
  local_58 = local_3c.___x_0 * __real_3df925fe;
  local_3c.___y_1 = fVar89.___y_1;
  local_5c = local_3c.___y_1 * __real_3df925fe;
  local_3c = fVar89;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  local_c4 = ExtraMath_Pow2_m01BC9BF14976CD4E7BDC4C39639490264804087F(13.510949,(MethodInfo *)0x0);
  local_8c = ExtraMath_Pow2_m01BC9BF14976CD4E7BDC4C39639490264804087F(5.0,(MethodInfo *)0x0);
  if ((ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
  }
  local_2c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
  if ((ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
  }
  local_64 = (MethodInfo *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
  if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
  }
  pDVar77 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
            ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                      (ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var);
  VVar57.___y_1 = local_30;
  VVar57.___x_0 = local_18;
  VVar56.___y_1 = local_30;
  VVar56.___x_0 = local_18;
  VVar93.___y_1 = local_30;
  VVar93.___x_0 = local_18;
  VVar40.___y_1 = (float)local_24;
  VVar40.___x_0 = local_34;
  VVar91.___y_1 = (float)local_24;
  VVar91.___x_0 = local_34;
  VVar90.___y_1 = (float)local_24;
  VVar90.___x_0 = local_34;
  local_84 = pDVar77;
  if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
      (pAVar15 = param_1->___master_4->___aoBaker_11, VVar90 = VVar91, VVar93 = VVar56,
      pAVar15 != (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0)) &&
     (pMVar95 = (MethodInfo *)pAVar15->___marchingSquaresTex_17, VVar90 = VVar40, VVar93 = VVar57,
     pMVar95 != (MethodInfo *)0x0)) {
    VVar90 = Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
                       ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pMVar95,
                        (MethodInfo *)0x0);
    iVar23.___z_2 = 0;
    iVar23.___x_0 = (int)VVar90.___x_0;
    iVar23.___y_1 = (int)VVar90.___y_1;
    local_74 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar23,pMVar95);
    VVar58.___y_1 = local_30;
    VVar58.___x_0 = local_18;
    VVar93.___y_1 = local_30;
    VVar93.___x_0 = local_18;
    VVar41.___y_1 = (float)local_24;
    VVar41.___x_0 = local_34;
    VVar90.___y_1 = (float)local_24;
    VVar90.___x_0 = local_34;
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pGVar16 = param_1->___master_4->___graph_7, VVar90 = VVar41, VVar93 = VVar58,
       pGVar16 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
      local_e4 = (pGVar16->___border_29).___c0_0.___x_0;
      iStack_e0 = (pGVar16->___border_29).___c0_0.___y_1;
      iStack_dc = (pGVar16->___border_29).___c0_0.___z_2;
      iStack_d8 = (pGVar16->___border_29).___c1_1.___x_0;
      OVar83.___moduleIndex_0 = 0;
      OVar83.___flags_1 = '\0';
      OVar83._3_1_ = 0;
      local_28.___moduleIndex_0 = 0;
      local_28.___flags_1 = '\0';
      local_28._3_1_ = 0;
      local_78 = 0;
      local_3c.___x_0 = (float)(pGVar16->___border_29).___c1_1.___y_1;
      local_3c.___y_1 = (float)(pGVar16->___border_29).___c1_1.___z_2;
      local_54.___z_2 = 0;
      do {
        local_14 = (float)(local_7c + iVar82);
        iVar84 = local_44.___y_1 + local_80;
        if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
        }
        local_44 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
                             (local_44,(MethodInfo *)0x0);
        if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
        }
        iVar36.___y_1 = iVar84;
        iVar36.___x_0 = (int)local_14;
        fVar89 = GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
                           (iVar36,(MethodInfo *)0x0);
        VVar93.___y_1 = local_30;
        VVar93.___x_0 = local_18;
        VVar90.___y_1 = (float)local_24;
        VVar90.___x_0 = local_34;
        fVar87 = local_94.___x_0 - local_58;
        local_94.___y_1 = fVar89.___y_1;
        fVar86 = local_94.___y_1 - local_5c;
        local_94 = fVar89;
        if (fVar87 * fVar87 + fVar86 * fVar86 <= local_c4) {
          if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 ==
              (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e1f2b5;
          iVar24.___y_1 = iVar84;
          iVar24.___x_0 = (int)local_14;
          bVar74 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                             ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                              param_1->___bitDict_8,iVar24,&local_20,
                              Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
                             );
          VVar59.___y_1 = local_30;
          VVar59.___x_0 = local_18;
          VVar93.___y_1 = local_30;
          VVar93.___x_0 = local_18;
          VVar42.___y_1 = (float)local_24;
          VVar42.___x_0 = local_34;
          VVar90.___y_1 = (float)local_24;
          VVar90.___x_0 = local_34;
          if (bVar74) {
            if (local_20 == (Il2CppObject *)0x0) goto LAB_10e1f2b5;
            if (*(char *)&local_20[3].field0_0x0 == '\x05') {
              VVar90 = VVar42;
              VVar93 = VVar59;
              if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10
                  == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
              goto LAB_10e1f2b5;
              iVar25.___y_1 = iVar84;
              iVar25.___x_0 = (int)local_14;
              bVar74 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                                 ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                                  param_1->___patchDict_10,iVar25,&local_10,
                                  Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
                                 );
              VVar60.___y_1 = local_30;
              VVar60.___x_0 = local_18;
              VVar93.___y_1 = local_30;
              VVar93.___x_0 = local_18;
              VVar43.___y_1 = (float)local_24;
              VVar43.___x_0 = local_34;
              VVar90.___y_1 = (float)local_24;
              VVar90.___x_0 = local_34;
              if (bVar74) {
                if ((local_10 == (Il2CppObject *)0x0) ||
                   (VVar90 = VVar43, VVar93 = VVar60, local_10[2].monitor == (MonitorData *)0x0))
                goto LAB_10e1f2b5;
                local_88 = ((local_10[2].monitor)->semaphore).m_Semaphore;
                if (0 < (int)local_88) {
                  local_60 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                             ((int)OVar83 + 2);
                  iVar84 = 2;
                  do {
                    VVar61.___y_1 = local_30;
                    VVar61.___x_0 = local_18;
                    VVar93.___y_1 = local_30;
                    VVar93.___x_0 = local_18;
                    VVar44.___y_1 = (float)local_24;
                    VVar44.___x_0 = local_34;
                    VVar90.___y_1 = (float)local_24;
                    VVar90.___x_0 = local_34;
                    if ((local_10 == (Il2CppObject *)0x0) ||
                       (VVar90 = VVar44, VVar93 = VVar61, local_10[2].monitor == (MonitorData *)0x0)
                       ) goto LAB_10e1f2b5;
                    bVar75 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                       ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                                        local_10[2].monitor,iVar84 + -2,
                                        List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                       );
                    VVar62.___y_1 = local_30;
                    VVar62.___x_0 = local_18;
                    VVar93.___y_1 = local_30;
                    VVar93.___x_0 = local_18;
                    VVar45.___y_1 = (float)local_24;
                    VVar45.___x_0 = local_34;
                    VVar90.___y_1 = (float)local_24;
                    VVar90.___x_0 = local_34;
                    if ((local_20 == (Il2CppObject *)0x0) ||
                       (VVar90 = VVar45, VVar93 = VVar62, local_20[3].monitor == (MonitorData *)0x0)
                       ) goto LAB_10e1f2b5;
                    VVar91 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                       ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                        local_20[3].monitor,(uint)bVar75,
                                        List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                       );
                    VVar63.___y_1 = local_30;
                    VVar63.___x_0 = local_18;
                    VVar93.___y_1 = local_30;
                    VVar93.___x_0 = local_18;
                    VVar46.___y_1 = (float)local_24;
                    VVar46.___x_0 = local_34;
                    VVar90.___y_1 = (float)local_24;
                    VVar90.___x_0 = local_34;
                    fVar87 = local_6c.___x_0 - local_58;
                    local_6c.___y_1 = VVar91.___y_1;
                    fVar86 = local_6c.___y_1 - local_5c;
                    local_6c = VVar91;
                    if (fVar87 * fVar87 + fVar86 * fVar86 <= local_8c) {
                      if ((local_10 == (Il2CppObject *)0x0) ||
                         (VVar90 = VVar46, VVar93 = VVar63,
                         local_10[2].monitor == (MonitorData *)0x0)) goto LAB_10e1f2b5;
                      local_7 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                          ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                                           local_10[2].monitor,iVar84 + -1,
                                           List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                          );
                      VVar64.___y_1 = local_30;
                      VVar64.___x_0 = local_18;
                      VVar93.___y_1 = local_30;
                      VVar93.___x_0 = local_18;
                      VVar47.___y_1 = (float)local_24;
                      VVar47.___x_0 = local_34;
                      VVar90.___y_1 = (float)local_24;
                      VVar90.___x_0 = local_34;
                      if ((local_10 == (Il2CppObject *)0x0) ||
                         (VVar90 = VVar47, VVar93 = VVar64,
                         local_10[2].monitor == (MonitorData *)0x0)) goto LAB_10e1f2b5;
                      local_6 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                          ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                                           local_10[2].monitor,iVar84,
                                           List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                          );
                      VVar65.___y_1 = local_30;
                      VVar65.___x_0 = local_18;
                      VVar93.___y_1 = local_30;
                      VVar93.___x_0 = local_18;
                      VVar48.___y_1 = (float)local_24;
                      VVar48.___x_0 = local_34;
                      VVar90.___y_1 = (float)local_24;
                      VVar90.___x_0 = local_34;
                      if ((local_10 == (Il2CppObject *)0x0) ||
                         (VVar90 = VVar48, VVar93 = VVar65,
                         local_10[2].monitor == (MonitorData *)0x0)) goto LAB_10e1f2b5;
                      local_5 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                          ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                                           local_10[2].monitor,iVar84 + 1,
                                           List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                          );
                      VVar66.___y_1 = local_30;
                      VVar66.___x_0 = local_18;
                      VVar93.___y_1 = local_30;
                      VVar93.___x_0 = local_18;
                      VVar49.___y_1 = (float)local_24;
                      VVar49.___x_0 = local_34;
                      VVar90.___y_1 = (float)local_24;
                      VVar90.___x_0 = local_34;
                      if ((local_10 == (Il2CppObject *)0x0) ||
                         (VVar90 = VVar49, VVar93 = VVar66,
                         local_10[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e1f2b5;
                      BVar92 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                         ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                          local_10[3].field0_0x0.klass,(uint)bVar75,
                                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                         );
                      local_24 = BVar92.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
                      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                                  );
                      }
                      iVar37.___y_1 = (int)local_24;
                      iVar37.___x_0 = BVar92.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                      piVar76 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                          (&local_f0,iVar37,(MethodInfo *)0x0);
                      VVar50.___y_1 = (float)local_24;
                      VVar50.___x_0 = local_34;
                      VVar90.___y_1 = (float)local_24;
                      VVar90.___x_0 = local_34;
                      local_cc._0_4_ = piVar76->___x_0;
                      local_cc._4_4_ = piVar76->___y_1;
                      local_18 = (float)piVar76->___z_2;
                      VVar67.___y_1 = local_30;
                      VVar67.___x_0 = local_18;
                      VVar93.___y_1 = local_30;
                      VVar93.___x_0 = local_18;
                      if ((local_10 == (Il2CppObject *)0x0) ||
                         (VVar90 = VVar50, VVar93 = VVar67,
                         local_10[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e1f2b5;
                      uVar85 = (uint)local_7;
                      BVar92 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                         ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                          local_10[3].field0_0x0.klass,uVar85,
                                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                         );
                      piVar76 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                          (&local_fc,
                                           (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar92,
                                           (MethodInfo *)0x0);
                      VVar68.___y_1 = local_30;
                      VVar68.___x_0 = local_18;
                      VVar93.___y_1 = local_30;
                      VVar93.___x_0 = local_18;
                      VVar51.___y_1 = (float)local_24;
                      VVar51.___x_0 = local_34;
                      VVar90.___y_1 = (float)local_24;
                      VVar90.___x_0 = local_34;
                      local_d4._0_4_ = piVar76->___x_0;
                      local_d4._4_4_ = piVar76->___y_1;
                      local_14 = (float)piVar76->___z_2;
                      if ((local_10 == (Il2CppObject *)0x0) ||
                         (VVar90 = VVar51, VVar93 = VVar68,
                         local_10[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e1f2b5;
                      local_30 = (float)(uint)local_6;
                      BVar92 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                         ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                          local_10[3].field0_0x0.klass,(int)local_30,
                                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                         );
                      piVar76 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                          (&local_108,
                                           (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar92,
                                           (MethodInfo *)0x0);
                      VVar69.___y_1 = local_30;
                      VVar69.___x_0 = local_18;
                      VVar93.___y_1 = local_30;
                      VVar93.___x_0 = local_18;
                      uVar2 = piVar76->___x_0;
                      uVar9 = piVar76->___y_1;
                      local_34 = (float)piVar76->___z_2;
                      VVar52.___y_1 = (float)local_24;
                      VVar52.___x_0 = local_34;
                      VVar90.___y_1 = (float)local_24;
                      VVar90.___x_0 = local_34;
                      iStack_bc = uVar2;
                      uStack_b8 = uVar9;
                      if ((local_10 == (Il2CppObject *)0x0) ||
                         (VVar90 = VVar52, VVar93 = VVar69,
                         local_10[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e1f2b5;
                      local_48 = (float)(uint)local_5;
                      BVar92 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                         ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                          local_10[3].field0_0x0.klass,(int)local_48,
                                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                         );
                      piVar76 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                          (&local_114,
                                           (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar92,
                                           (MethodInfo *)0x0);
                      uVar3 = piVar76->___x_0;
                      uVar10 = piVar76->___y_1;
                      local_24 = (String_t *)piVar76->___z_2;
                      local_54.___y_1 = uVar3;
                      local_54.___z_2 = uVar10;
                      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                  );
                      }
                      iVar18.___c0_0.___y_1 = iStack_e0;
                      iVar18.___c0_0.___x_0 = local_e4;
                      iVar18.___c0_0.___z_2 = iStack_dc;
                      iVar18.___c1_1.___x_0 = iStack_d8;
                      iVar18.___c1_1.___y_1 = (int)local_3c.___x_0;
                      iVar18.___c1_1.___z_2 = (int)local_3c.___y_1;
                      iVar28.___z_2 = (int)local_18;
                      iVar28.___x_0 = (undefined4)local_cc;
                      iVar28.___y_1 = local_cc._4_4_;
                      local_8 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                                          (iVar18,iVar28,(MethodInfo *)0x0);
                      iVar19.___c0_0.___y_1 = iStack_e0;
                      iVar19.___c0_0.___x_0 = local_e4;
                      iVar19.___c0_0.___z_2 = iStack_dc;
                      iVar19.___c1_1.___x_0 = iStack_d8;
                      iVar19.___c1_1.___y_1 = (int)local_3c.___x_0;
                      iVar19.___c1_1.___z_2 = (int)local_3c.___y_1;
                      iVar29.___z_2 = (int)local_14;
                      iVar29.___x_0 = (undefined4)local_d4;
                      iVar29.___y_1 = local_d4._4_4_;
                      local_9 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                                          (iVar19,iVar29,(MethodInfo *)0x0);
                      iVar20.___c0_0.___y_1 = iStack_e0;
                      iVar20.___c0_0.___x_0 = local_e4;
                      iVar20.___c0_0.___z_2 = iStack_dc;
                      iVar20.___c1_1.___x_0 = iStack_d8;
                      iVar20.___c1_1.___y_1 = (int)local_3c.___x_0;
                      iVar20.___c1_1.___z_2 = (int)local_3c.___y_1;
                      iVar30.___y_1 = uStack_b8;
                      iVar30.___x_0 = iStack_bc;
                      iVar30.___z_2 = (int)local_34;
                      local_a = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                                          (iVar20,iVar30,(MethodInfo *)0x0);
                      iVar21.___c0_0.___y_1 = iStack_e0;
                      iVar21.___c0_0.___x_0 = local_e4;
                      iVar21.___c0_0.___z_2 = iStack_dc;
                      iVar21.___c1_1.___x_0 = iStack_d8;
                      iVar21.___c1_1.___y_1 = (int)local_3c.___x_0;
                      iVar21.___c1_1.___z_2 = (int)local_3c.___y_1;
                      iVar31.___y_1 = local_54.___z_2;
                      iVar31.___x_0 = local_54.___y_1;
                      iVar31.___z_2 = (int)local_24;
                      local_19 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                                           (iVar21,iVar31,(MethodInfo *)0x0);
                      if (((local_8 != local_9) || (local_8 != local_a)) || (local_8 != local_19)) {
                        if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             has_cctor != '\0') &&
                           (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                            cctor_finished == 0)) {
                          il2cpp_runtime_class_init
                                    (
                                    HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                                    );
                        }
                        iVar32.___z_2 = (int)local_18;
                        iVar32.___x_0 = (undefined4)local_cc;
                        iVar32.___y_1 = local_cc._4_4_;
                        iVar88 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                           (iVar32,(MethodInfo *)0x0);
                        local_5 = Vert_ContainsVert_m5D59338CB1DC69EB6FC88F70450F820D9092A74A
                                            (&param_2,iVar88,(MethodInfo *)0x0);
                        iVar33.___z_2 = (int)local_14;
                        iVar33.___x_0 = (undefined4)local_d4;
                        iVar33.___y_1 = local_d4._4_4_;
                        iVar88 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                           (iVar33,(MethodInfo *)0x0);
                        local_6 = Vert_ContainsVert_m5D59338CB1DC69EB6FC88F70450F820D9092A74A
                                            (&param_2,iVar88,(MethodInfo *)0x0);
                        iVar34.___y_1 = uStack_b8;
                        iVar34.___x_0 = iStack_bc;
                        iVar34.___z_2 = (int)local_34;
                        iVar88 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                           (iVar34,(MethodInfo *)0x0);
                        local_7 = Vert_ContainsVert_m5D59338CB1DC69EB6FC88F70450F820D9092A74A
                                            (&param_2,iVar88,(MethodInfo *)0x0);
                        iVar35.___y_1 = local_54.___z_2;
                        iVar35.___x_0 = local_54.___y_1;
                        iVar35.___z_2 = (int)local_24;
                        iVar88 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                           (iVar35,(MethodInfo *)0x0);
                        local_1a = Vert_ContainsVert_m5D59338CB1DC69EB6FC88F70450F820D9092A74A
                                             (&param_2,iVar88,(MethodInfo *)0x0);
                        VVar70.___y_1 = local_30;
                        VVar70.___x_0 = local_18;
                        VVar93.___y_1 = local_30;
                        VVar93.___x_0 = local_18;
                        VVar53.___y_1 = (float)local_24;
                        VVar53.___x_0 = local_34;
                        VVar90.___y_1 = (float)local_24;
                        VVar90.___x_0 = local_34;
                        if ((((bool)local_1a || local_7 != 0) || local_6 != 0) || local_5 != 0) {
                          if ((local_20 == (Il2CppObject *)0x0) ||
                             (VVar90 = VVar53, VVar93 = VVar70,
                             local_20[3].monitor == (MonitorData *)0x0)) goto LAB_10e1f2b5;
                          VVar90 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                              local_20[3].monitor,uVar85,
                                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                             );
                          VVar71.___y_1 = local_30;
                          VVar71.___x_0 = local_18;
                          VVar93.___y_1 = local_30;
                          VVar93.___x_0 = local_18;
                          local_24 = (String_t *)VVar90.___y_1;
                          local_34 = VVar90.___x_0;
                          if ((local_20 == (Il2CppObject *)0x0) ||
                             (VVar93 = VVar71, local_20[3].monitor == (MonitorData *)0x0))
                          goto LAB_10e1f2b5;
                          VVar93 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                              local_20[3].monitor,(int)local_30,
                                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                             );
                          VVar54.___y_1 = (float)local_24;
                          VVar54.___x_0 = local_34;
                          VVar90.___y_1 = (float)local_24;
                          VVar90.___x_0 = local_34;
                          local_30 = VVar93.___y_1;
                          local_18 = VVar93.___x_0;
                          if ((local_20 == (Il2CppObject *)0x0) ||
                             (VVar90 = VVar54, local_20[3].monitor == (MonitorData *)0x0))
                          goto LAB_10e1f2b5;
                          VVar91 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                              local_20[3].monitor,(int)local_48,
                                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                             );
                          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                               ->has_cctor != '\0') &&
                             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              ->cctor_finished == 0)) {
                            il2cpp_runtime_class_init
                                      (
                                      ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                      );
                          }
                          pfVar78 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                              (&local_120,
                                               (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                                               local_6c,0.0,(MethodInfo *)0x0);
                          uVar4 = pfVar78->___x_0;
                          uVar11 = pfVar78->___y_1;
                          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                                    (&local_174,(float)uVar4,(float)uVar11,pfVar78->___z_2,
                                     (MethodInfo *)0x0);
                          VVar93.___y_1 = local_30;
                          VVar93.___x_0 = local_18;
                          VVar90.___y_1 = (float)local_24;
                          VVar90.___x_0 = local_34;
                          if (local_2c ==
                              (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                          goto LAB_10e1f2b5;
                          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_2c,
                                     *extraout_EAX,
                                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var
                                    );
                          fVar89.___y_1 = (float)local_24;
                          fVar89.___x_0 = local_34;
                          pfVar78 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                              (&local_12c,fVar89,0.0,(MethodInfo *)0x0);
                          uVar5 = pfVar78->___x_0;
                          uVar12 = pfVar78->___y_1;
                          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                                    (&local_138,(float)uVar5,(float)uVar12,pfVar78->___z_2,
                                     (MethodInfo *)0x0);
                          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_2c,
                                     *extraout_EAX_00,
                                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var
                                    );
                          fVar26.___y_1 = local_30;
                          fVar26.___x_0 = local_18;
                          pfVar78 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                              (&local_144,fVar26,0.0,(MethodInfo *)0x0);
                          uVar6 = pfVar78->___x_0;
                          uVar13 = pfVar78->___y_1;
                          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                                    (&local_150,(float)uVar6,(float)uVar13,pfVar78->___z_2,
                                     (MethodInfo *)0x0);
                          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_2c,
                                     *extraout_EAX_01,
                                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var
                                    );
                          pfVar78 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                              (&local_15c,
                                               (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                                               VVar91,0.0,(MethodInfo *)0x0);
                          uVar7 = pfVar78->___x_0;
                          uVar14 = pfVar78->___y_1;
                          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                                    (&local_168,(float)uVar7,(float)uVar14,pfVar78->___z_2,
                                     (MethodInfo *)0x0);
                          List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                                    ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)local_2c,
                                     *extraout_EAX_02,
                                     List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var
                                    );
                          VVar72.___y_1 = local_30;
                          VVar72.___x_0 = local_18;
                          VVar93.___y_1 = local_30;
                          VVar93.___x_0 = local_18;
                          VVar55.___y_1 = (float)local_24;
                          VVar55.___x_0 = local_34;
                          VVar90.___y_1 = (float)local_24;
                          VVar90.___x_0 = local_34;
                          if ((param_1->___master_4 ==
                               (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                             (pAVar15 = param_1->___master_4->___aoBaker_11, VVar90 = VVar55,
                             VVar93 = VVar72,
                             pAVar15 == (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0))
                          goto LAB_10e1f2b5;
                          iVar82 = 4;
                          if (local_8 != '\0') {
                            iVar82 = 0;
                          }
                          iVar79 = 4;
                          if (local_9 != '\0') {
                            iVar79 = 0;
                          }
                          iVar80 = 4;
                          if (local_a != '\0') {
                            iVar80 = 0;
                          }
                          iVar81 = 4;
                          if (local_19 != '\0') {
                            iVar81 = 0;
                          }
                          local_18 = (float)local_74.___y_1 * __real_3f000000 + 0.0;
                          fVar86 = (float)((pAVar15->___powers_30).___w_3 * iVar81 +
                                          iVar82 * (pAVar15->___powers_30).___x_0 +
                                          (pAVar15->___powers_30).___y_1 * iVar79 +
                                          (pAVar15->___powers_30).___z_2 * iVar80) *
                                   (float)local_74.___x_0;
                          local_14 = (float)local_74.___x_0 * __real_3f000000 + fVar86 + fVar86;
                          local_30 = local_14 + (float)local_74.___x_0 * 0.0;
                          local_98 = local_18 + (float)local_74.___y_1 * 0.0 + 0.0;
                          local_9c = local_30 + (float)(local_5 != 0);
                          iVar38.___y_1 = (int)local_98;
                          iVar38.___x_0 = (int)local_9c;
                          iVar38.___z_2 = 0;
                          local_48 = local_98;
                          fVar89 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                                   HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                             (iVar38,unaff_EDI);
                          pMVar95 = local_64;
                          VVar93.___y_1 = local_30;
                          VVar93.___x_0 = local_18;
                          VVar90.___y_1 = (float)local_24;
                          VVar90.___x_0 = local_34;
                          if (local_64 == (MethodInfo *)0x0) goto LAB_10e1f2b5;
                          pMVar94 = local_64;
                          List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                                    ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)local_64,
                                     fVar89,
                                     List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var
                                    );
                          local_14 = local_14 + (float)local_74.___x_0;
                          local_a4 = local_14 + (float)(local_6 != 0);
                          local_a0 = local_48;
                          iVar22.___y_1 = (int)local_48;
                          iVar22.___x_0 = (int)local_a4;
                          iVar22.___z_2 = 0;
                          fVar89 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                                   HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                             (iVar22,pMVar94);
                          pMVar94 = pMVar95;
                          List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                                    ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pMVar95,
                                     fVar89,
                                     List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var
                                    );
                          local_ac = local_14 + (float)(local_7 != 0);
                          local_a8 = local_18 + (float)local_74.___y_1 + 0.0;
                          iVar17.___y_1 = (int)local_a8;
                          iVar17.___x_0 = (int)local_ac;
                          iVar17.___z_2 = 0;
                          local_18 = local_a8;
                          fVar89 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                                   HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                             (iVar17,pMVar94);
                          List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                                    ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pMVar95,
                                     fVar89,
                                     List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var
                                    );
                          local_b4 = local_30 + (float)(local_1a != '\0');
                          local_b0 = local_18;
                          iVar39.___y_1 = (int)local_18;
                          iVar39.___x_0 = (int)local_b4;
                          iVar39.___z_2 = 0;
                          fVar89 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                                   HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                             (iVar39,unaff_EDI);
                          List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                                    ((List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)pMVar95,
                                     fVar89,
                                     List_1_Add_m6C4CDF2E6D3B2347704D0BBC108D0893C1ABBEAE_RuntimeMethod_var
                                    );
                          pDVar77 = local_84;
                          VVar93.___y_1 = local_30;
                          VVar93.___x_0 = local_18;
                          VVar90.___y_1 = (float)local_24;
                          VVar90.___x_0 = local_34;
                          if (local_84 ==
                              (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                          goto LAB_10e1f2b5;
                          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_84,
                                     local_28,
                                     List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                    );
                          OVar83 = local_60;
                          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar77,
                                     (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                     ((int)local_60 + -1),
                                     List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                    );
                          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar77,
                                     OVar83,
                                     List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                    );
                          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar77,
                                     OVar83,
                                     List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                    );
                          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar77,
                                     (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                     ((int)OVar83 + 1),
                                     List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                    );
                          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar77,
                                     local_28,
                                     List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                    );
                          local_28 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                     ((int)local_28 + 4);
                          local_60 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                     ((int)OVar83 + 4);
                        }
                      }
                    }
                    iVar82 = iVar84 + 2;
                    OVar83 = local_28;
                    iVar84 = iVar84 + 4;
                  } while (iVar82 < (int)local_88);
                }
              }
            }
          }
        }
        VVar93.___y_1 = local_30;
        VVar93.___x_0 = local_18;
        VVar90.___y_1 = (float)local_24;
        VVar90.___x_0 = local_34;
        local_78 = local_78 + 1;
        iVar82 = local_44.___x_0;
      } while (local_78 < 3);
      if (param_3 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
        Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(param_3,(MethodInfo *)0x0);
        pDVar73 = local_2c;
        Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
                  (param_3,(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_2c,
                   (MethodInfo *)0x0);
        Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                  (param_3,0,(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_64,
                   (MethodInfo *)0x0);
        Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
                  (param_3,(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar77,0,
                   (MethodInfo *)0x0);
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  (pDVar73,
                   ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                  );
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  (pDVar77,
                   ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                  );
        return;
      }
    }
  }
LAB_10e1f2b5:
  local_30 = VVar93.___y_1;
  local_18 = VVar93.___x_0;
  local_24 = (String_t *)VVar90.___y_1;
  local_34 = VVar90.___x_0;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
