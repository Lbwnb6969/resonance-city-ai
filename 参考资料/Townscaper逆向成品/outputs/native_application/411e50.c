// RVA 0x411e50 | Placemaker.HoverData$$SetHover
// PDB: HoverData_SetHover_m80183E8480285A26E93F2AB4687CBF649D7F15C4
// Body: [[10411e50, 10412758] [1041275c, 10412daf]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1026afc0 Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
// 103efdb0 Vert_get_validPosition_mC52CDBAC4CF4B6AE5B9AD389C688BBA9B071DA14
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 10412dc0 HoverData_TryGetVert_m9BC0A802AC9DAFAE427E915D0C38247A5EF36FC2
// 1043f090 Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105cc160 KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1065c330 Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24
// 1065c650 Plane__ctor_m6D48D57827430EC6C89277695BF035DC3FFC1BF1
// 10660540 Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066fe60 Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
// 10672570 Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10836df0 ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
// 10a37e30 Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3be80 Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF
// 10a44b50 Matrix4x4_GetHashCode_m102B903082CD1C786C221268A19679820E365B59
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e125c0 GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
// 10e6b990 Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
// 10e6f930 Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11030e80 List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
// 1113e6e0 Physics_Raycast_mCBD5F7D498C246713EDDBB446E97205DA206C49C
// 1113ea40 RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
HoverData_SetHover_m80183E8480285A26E93F2AB4687CBF649D7F15C4
          (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,int param_3,MethodInfo *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar10;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar11;
  int iVar12;
  float fVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 RVar15;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar23;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar24;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar26;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar33;
  float fVar34;
  float fVar35;
  Il2CppObject *pIVar36;
  bool bVar37;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar38;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar39;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar40;
  int iVar41;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *pRVar42;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar43;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *pVVar44;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar45;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar46;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar47;
  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *pCVar48;
  Il2CppObject *pIVar49;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar50;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar51;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar52;
  int *piVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar57;
  MethodInfo *pMVar58;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar59;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_4b0;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_300;
  int local_2c0 [106];
  undefined1 local_118;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_110;
  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 local_d0;
  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 local_a4;
  undefined1 local_94 [12];
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fStack_88;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_7c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_74;
  float local_6c;
  float local_68;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_64;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_5c;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *local_54;
  int local_50;
  float local_4c;
  float local_48;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_44;
  float local_40;
  uint local_3c;
  float local_38;
  float local_34;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_30;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_28;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_20;
  float local_1c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_18;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D local_10;

  if (DAT_1151ca93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInParent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m54E3E2B6B272C090271464FA6F62C3508B76A5AA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m00E74FEB0C17C8E9608EA287F5A42340D9CE7C45_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m26F8EEFC4B8D781E8A2EED3AE0AE6FB0E6CF23E3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Contains_m77250866D78124C44DE377FF524BF12F30188AC6_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151ca93 = '\x01';
  }
  memset((uchar *)&local_d0,'\0',0x2c);
  local_40 = 0.0;
  local_a4.___m_Normal_1.___x_2 = 0.0;
  local_a4.___m_Normal_1.___y_3 = 0.0;
  local_a4.___m_Normal_1.___z_4 = 0.0;
  local_a4.___m_Distance_2 = 0.0;
  local_44 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0;
  pOVar38 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
            Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar37 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar38,(MethodInfo *)0x0);
  if (!bVar37) {
    param_1->___valid_18 = false;
    param_1->___validPaint_19 = false;
    param_1->___validAdd_20 = false;
    param_1->___validRemove_21 = false;
    param_1->___validBucket_22 = false;
    return;
  }
  local_54 = param_1->___voxel_9;
  if (param_3 != param_1->___lastId_5) {
    local_54 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
    param_1->___lastId_5 = param_3;
    if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___floodVoxels_25 ==
        (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) goto LAB_10412dab;
    List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
              ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___floodVoxels_25,
               List_1_Clear_m26F8EEFC4B8D781E8A2EED3AE0AE6FB0E6CF23E3_RuntimeMethod_var);
    param_1->___lastHash_12 = -1;
    param_1->___floodIndex_24 = 0;
  }
  local_20 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
             Vector2_GetHashCode_m9A5DD8406289F38806CC42C394E324C1C2AB3732
                       (&param_2,(MethodInfo *)0x0);
  if ((pOVar38 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) ||
     (pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pOVar38,
                           (MethodInfo *)0x0),
     pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10412dab;
  pMVar40 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
                      (&local_300,pTVar39,(MethodInfo *)0x0);
  local_110.___m00_0 = pMVar40->___m00_0;
  local_110.___m10_1 = pMVar40->___m10_1;
  local_110.___m20_2 = pMVar40->___m20_2;
  local_110.___m30_3 = pMVar40->___m30_3;
  local_110.___m01_4 = pMVar40->___m01_4;
  local_110.___m11_5 = pMVar40->___m11_5;
  local_110.___m21_6 = pMVar40->___m21_6;
  local_110.___m31_7 = pMVar40->___m31_7;
  local_110.___m02_8 = pMVar40->___m02_8;
  local_110.___m12_9 = pMVar40->___m12_9;
  local_110.___m22_10 = pMVar40->___m22_10;
  local_110.___m32_11 = pMVar40->___m32_11;
  local_110.___m03_12 = pMVar40->___m03_12;
  local_110.___m13_13 = pMVar40->___m13_13;
  local_110.___m23_14 = pMVar40->___m23_14;
  local_110.___m33_15 = pMVar40->___m33_15;
  iVar41 = Matrix4x4_GetHashCode_m102B903082CD1C786C221268A19679820E365B59
                     (&local_110,(MethodInfo *)0x0);
  local_10.___Item3_2 = (Il2CppObject *)0x0;
  param_1->___lastHash_12 = (int)local_20 + param_3 * 0xf67 + iVar41;
  VVar22.___z_4 = 0.0;
  VVar22.___x_2 = param_2.___x_0;
  VVar22.___y_3 = param_2.___y_1;
  pRVar42 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB
                      ((Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *)local_94,
                       (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)pOVar38,VVar22,
                       (MethodInfo *)0x0);
  fVar8 = (pRVar42->___m_Origin_0).___y_3;
  fVar9 = (pRVar42->___m_Origin_0).___z_4;
  fVar13 = (pRVar42->___m_Direction_1).___x_2;
  fVar34 = (pRVar42->___m_Direction_1).___y_3;
  fVar35 = (pRVar42->___m_Direction_1).___z_4;
  (param_1->___ray_6).___m_Origin_0.___x_2 = (pRVar42->___m_Origin_0).___x_2;
  (param_1->___ray_6).___m_Origin_0.___y_3 = fVar8;
  (param_1->___ray_6).___m_Origin_0.___z_4 = fVar9;
  (param_1->___ray_6).___m_Direction_1.___x_2 = fVar13;
  (param_1->___ray_6).___m_Direction_1.___y_3 = fVar34;
  (param_1->___ray_6).___m_Direction_1.___z_4 = fVar35;
  param_1->___occupied_16 = false;
  memset((uchar *)local_2c0,'\0',0x1b0);
  local_118 = 0xff;
  piVar53 = local_2c0;
  pVVar46 = &param_1->___dstVert_8;
  for (iVar41 = 0x6c; iVar41 != 0; iVar41 = iVar41 + -1) {
    (pVVar46->___hexPos_0).___x_0 = *piVar53;
    piVar53 = piVar53 + 1;
    pVVar46 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar46->___hexPos_0).___y_1;
  }
  memset((uchar *)local_2c0,'\0',0x1b0);
  local_118 = 0xff;
  param_1->___dstHeight_11 = 0;
  param_1->___voxel_9 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
  piVar53 = local_2c0;
  pVVar46 = &param_1->___srcVert_7;
  for (iVar41 = 0x6c; iVar41 != 0; iVar41 = iVar41 + -1) {
    (pVVar46->___hexPos_0).___x_0 = *piVar53;
    piVar53 = piVar53 + 1;
    pVVar46 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar46->___hexPos_0).___y_1;
  }
  pRVar42 = &param_1->___ray_6;
  piVar43 = KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                      ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_10,
                       (KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E *)pRVar42,
                       (MethodInfo *)0x0);
  local_64.___x_0 = (float)piVar43->___x_0;
  local_64.___y_1 = (float)piVar43->___y_1;
  fVar8 = (float)piVar43->___z_2;
  pVVar44 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                      (&local_10,(Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)pRVar42,
                       (MethodInfo *)0x0);
  local_18.___x_0 = (float)pVVar44->___Item1_0;
  local_18.___y_1 = (float)pVVar44->___Item2_1;
  local_20 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar44->___Item3_2;
  if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->cctor_finished
         == 0)) {
    il2cpp_runtime_class_init
              (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
  }
  VVar14.___z_4 = fVar8;
  VVar14.___x_2 = local_64.___x_0;
  VVar14.___y_3 = local_64.___y_1;
  VVar17.___z_4 = (float)local_20;
  VVar17.___x_2 = local_18.___x_0;
  VVar17.___y_3 = local_18.___y_1;
  bVar37 = Physics_Raycast_mCBD5F7D498C246713EDDBB446E97205DA206C49C
                     (VVar14,VVar17,&local_d0,1e+07,
                      *(int *)((int)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                    ->static_fields + 0x20),(MethodInfo *)0x0);
  if (bVar37) {
    pCVar48 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E
                        (&local_d0,(MethodInfo *)0x0);
    if (pCVar48 == (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 *)0x0) goto LAB_10412dab;
    pVVar47 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pCVar48,
                         Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                        );
    param_1->___voxel_9 = pVVar47;
    piVar43 = KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                        ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_10,
                         (KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E *)&local_d0,
                         (MethodInfo *)0x0);
    iVar41 = piVar43->___y_1;
    fVar8 = (float)piVar43->___z_2;
    (param_1->___pointerHitPos_13).___x_2 = (float)piVar43->___x_0;
    (param_1->___pointerHitPos_13).___y_3 = (float)iVar41;
    (param_1->___pointerHitPos_13).___z_4 = fVar8;
    pVVar44 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                        (&local_10,(Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)&local_d0
                         ,(MethodInfo *)0x0);
    pVVar47 = param_1->___voxel_9;
    pIVar36 = pVVar44->___Item2_1;
    pIVar49 = pVVar44->___Item3_2;
    (param_1->___pointerHitDir_14).___x_2 = (float)pVVar44->___Item1_0;
    (param_1->___pointerHitDir_14).___y_3 = (float)pIVar36;
    (param_1->___pointerHitDir_14).___z_4 = (float)pIVar49;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar37 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar47,
                        (MethodInfo *)0x0);
    if (bVar37) {
      if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
      goto LAB_10412dab;
      pGVar11 = param_1->___master_4->___grid_5;
      if (((param_1->___voxel_9 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) ||
          (pIVar49 = Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared
                               ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                param_1->___voxel_9,
                                Component_GetComponentInParent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m54E3E2B6B272C090271464FA6F62C3508B76A5AA_RuntimeMethod_var
                               ), pIVar49 == (Il2CppObject *)0x0)) ||
         (pGVar11 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0))
      goto LAB_10412dab;
      pVVar46 = GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
                          (&local_4b0,pGVar11,
                           *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)&pIVar49[1].monitor,
                           (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0,(MethodInfo *)0x0
                          );
      pVVar47 = param_1->___voxel_9;
      piVar53 = local_2c0;
      for (iVar41 = 0x6c; iVar41 != 0; iVar41 = iVar41 + -1) {
        *piVar53 = (pVVar46->___hexPos_0).___x_0;
        pVVar46 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar46->___hexPos_0).___y_1;
        piVar53 = piVar53 + 1;
      }
      piVar53 = local_2c0;
      pVVar46 = &param_1->___srcVert_7;
      for (iVar41 = 0x6c; fVar8 = __real_3f000000, iVar41 != 0; iVar41 = iVar41 + -1) {
        (pVVar46->___hexPos_0).___x_0 = *piVar53;
        piVar53 = piVar53 + 1;
        pVVar46 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar46->___hexPos_0).___y_1;
      }
      if (pVVar47 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) goto LAB_10412dab;
      uVar1 = (param_1->___pointerHitDir_14).___x_2;
      uVar5 = (param_1->___pointerHitDir_14).___y_3;
      local_10.___Item1_0 = (Il2CppObject *)uVar1;
      local_10.___Item2_1 = (Il2CppObject *)uVar5;
      param_1->___srcHeight_10 = (uint)pVVar47->___height_5;
      local_10.___Item3_2 = (Il2CppObject *)(param_1->___pointerHitDir_14).___z_4;
      piVar53 = local_2c0;
      pVVar46 = &param_1->___dstVert_8;
      for (iVar41 = 0x6c; iVar41 != 0; iVar41 = iVar41 + -1) {
        (pVVar46->___hexPos_0).___x_0 = *piVar53;
        piVar53 = piVar53 + 1;
        pVVar46 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar46->___hexPos_0).___y_1;
      }
      if (fVar8 < (float)local_10.___Item2_1) {
        param_1->___side_15 = -1;
        iVar41 = pVVar47->___height_5 + 1;
      }
      else {
        uVar2 = (param_1->___pointerHitDir_14).___x_2;
        uVar6 = (param_1->___pointerHitDir_14).___y_3;
        local_10.___Item1_0 = (Il2CppObject *)uVar2;
        local_10.___Item2_1 = (Il2CppObject *)uVar6;
        if (__real_bf000000 <= (float)uVar6) {
          param_1->___dstHeight_11 = (uint)pVVar47->___height_5;
          pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar47,
                               (MethodInfo *)0x0);
          if (((pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
              (pTVar39 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                                   (pTVar39,(MethodInfo *)0x0),
              pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
             ((pCVar50 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                         Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar39,
                                    Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                   ), local_20 = pCVar50,
              pCVar50 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0 ||
              (*(int *)&pCVar50[1].field_0x8 == 0)))) goto LAB_10412dab;
          iVar41 = *(int *)(*(int *)&pCVar50[1].field_0x8 + 0xc);
          local_50 = iVar41;
          if (0 < iVar41) {
            pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                (pCVar50,(MethodInfo *)0x0);
            if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            goto LAB_10412dab;
            pVVar45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_10,
                                 pTVar39,(MethodInfo *)0x0);
            local_18.___x_0 = pVVar45->___x_2;
            local_18.___y_1 = pVVar45->___y_3;
            local_1c = pVVar45->___z_4;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            fVar24.___z_2 = local_1c;
            fVar24.___x_0 = local_18.___x_0;
            fVar24.___y_1 = local_18.___y_1;
            local_28 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                 (fVar24,(MethodInfo *)0x0);
            fVar33.___x_0 = (param_1->___pointerHitPos_13).___x_2;
            fVar33.___y_1 = (param_1->___pointerHitPos_13).___y_3;
            fVar33.___z_2 = (param_1->___pointerHitPos_13).___z_4;
            fVar57 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                               (fVar33,(MethodInfo *)0x0);
            local_48 = local_30.___x_0 - local_28.___x_0;
            local_30.___y_1 = fVar57.___y_1;
            local_4c = local_30.___y_1 - local_28.___y_1;
            local_30 = fVar57;
            if (((*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)&pCVar50[1].field_0x8 ==
                  (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
                (pGVar51 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                     (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                                       &pCVar50[1].field_0x8,iVar41 + -1,
                                      List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var
                                     ),
                pGVar51 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) ||
               (pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar51,
                                     (MethodInfo *)0x0),
               pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10412dab;
            pfVar52 = (float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                      Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_10,
                                 pTVar39,(MethodInfo *)0x0);
            fVar57 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                               (*pfVar52,(MethodInfo *)0x0);
            local_5c.___y_1 = fVar57.___y_1;
            local_34 = local_5c.___x_0;
            local_38 = local_5c.___y_1;
            local_30.___y_1 = local_5c.___y_1;
            local_30.___x_0 = local_5c.___x_0;
            local_3c = 0;
            local_1c = 2.24208e-44;
            local_5c = fVar57;
            do {
              iVar41 = *(int *)&pCVar50[1].field_0x8;
              if (iVar41 == 0) goto LAB_10412dab;
              if (*(uint *)(iVar41 + 0xc) <= local_3c) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              pCVar50 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                         ((int)local_1c + *(int *)(iVar41 + 8));
              local_5c.___y_1 = (float)pCVar50;
              if ((pCVar50 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
                 (pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      (pCVar50,(MethodInfo *)0x0),
                 pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
              goto LAB_10412dab;
              pVVar45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&fStack_88,
                                   pTVar39,(MethodInfo *)0x0);
              uVar54._0_4_ = pVVar45->___x_2;
              uVar54._4_4_ = pVVar45->___y_3;
              fVar8 = pVVar45->___z_4;
              local_10.___Item2_1 = (Il2CppObject *)(undefined4)uVar54;
              local_10.___Item3_2 = (Il2CppObject *)uVar54._4_4_;
              if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
                uVar54 = CONCAT44(local_10.___Item3_2,local_10.___Item2_1);
              }
              fVar25.___z_2 = fVar8;
              fVar25.___x_0 = (float)(int)uVar54;
              fVar25.___y_1 = (float)(int)((ulonglong)uVar54 >> 0x20);
              fVar57 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                 (fVar25,(MethodInfo *)0x0);
              local_6c = local_34 - local_28.___x_0;
              local_68 = local_38 - local_28.___y_1;
              VVar16.___y_1 = local_68;
              VVar16.___x_0 = local_6c;
              local_7c = fVar57;
              local_74 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                                   (VVar16,(MethodInfo *)0x0);
              local_38 = local_7c.___y_1;
              local_34 = local_7c.___x_0;
              if (___real_00000000 <= local_74.___x_0 * local_48 + local_74.___y_1 * local_4c) {
                local_64.___y_1 = local_7c.___y_1 - local_28.___y_1;
                local_64.___x_0 = local_7c.___x_0 - local_28.___x_0;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                local_18 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                                     (local_64,(MethodInfo *)0x0);
                if (local_18.___x_0 * local_48 + local_18.___y_1 * local_4c <= 0.0) {
                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              );
                  }
                  pfVar52 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                      (&fStack_88,local_28,0.0,(MethodInfo *)0x0);
                  local_18.___x_0 = pfVar52->___x_0;
                  local_18.___y_1 = pfVar52->___y_1;
                  fVar8 = pfVar52->___z_2;
                  pfVar52 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                      (&fStack_88,local_30,0.0,(MethodInfo *)0x0);
                  uVar55._0_4_ = pfVar52->___x_0;
                  uVar55._4_4_ = pfVar52->___y_1;
                  local_1c = pfVar52->___z_2;
                  local_10.___Item2_1 = (Il2CppObject *)(undefined4)uVar55;
                  local_10.___Item3_2 = (Il2CppObject *)uVar55._4_4_;
                  if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
                    uVar55 = CONCAT44(local_10.___Item3_2,local_10.___Item2_1);
                  }
                  VVar19.___z_4 = fVar8;
                  VVar19.___x_2 = local_18.___x_0;
                  VVar19.___y_3 = local_18.___y_1;
                  VVar26.___z_4 = local_1c;
                  VVar26.___x_2 = (float)(int)uVar55;
                  VVar26.___y_3 = (float)(int)((ulonglong)uVar55 >> 0x20);
                  Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF
                            (VVar19,VVar26,(MethodInfo *)0x0);
                  pfVar52 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                      (&fStack_88,local_28,0.0,(MethodInfo *)0x0);
                  uVar3 = pfVar52->___x_0;
                  uVar7 = pfVar52->___y_1;
                  fVar8 = pfVar52->___z_2;
                  local_10.___Item2_1 = (Il2CppObject *)uVar3;
                  local_10.___Item3_2 = (Il2CppObject *)uVar7;
                  pfVar52 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                                      (&fStack_88,fVar57,0.0,(MethodInfo *)0x0);
                  VVar20.___y_3 = (float)local_10.___Item3_2;
                  VVar20.___x_2 = (float)local_10.___Item2_1;
                  VVar20.___z_4 = fVar8;
                  Debug_DrawLine_m18DD512D802A3988C4E8FA9FBD47003951B719CF
                            (VVar20,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar52,
                             (MethodInfo *)0x0);
                  param_1->___side_15 = (schar)((int)(local_3c + local_50 + -1) % local_50);
                  pCVar50 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                             ((int)local_5c.___y_1 + 0x2c);
                  if (pCVar50 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)
                  goto LAB_10412dab;
                  local_10.___Item2_1 = *(Il2CppObject **)(local_20 + 1);
                  iVar41 = *(int *)&local_20[1].field_0x4;
                  if ((*(MonitorData **)(pCVar50 + 1) == (MonitorData *)local_10.___Item2_1) &&
                     (*(int *)&pCVar50[1].field_0x4 == iVar41)) {
                    pCVar50 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                               ((int)local_5c.___y_1 + 0x30);
                  }
                  else {
                    local_10.___Item3_2 = (Il2CppObject *)0x0;
                    if (*(int *)((int)local_5c.___y_1 + 0x30) == 0) goto LAB_10412dab;
                    if ((*(MonitorData **)(*(int *)((int)local_5c.___y_1 + 0x30) + 0xc) ==
                         (MonitorData *)local_10.___Item2_1) &&
                       (*(int *)(*(int *)((int)local_5c.___y_1 + 0x30) + 0x10) == iVar41)) {
                      pCVar50 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                 ((int)local_5c.___y_1 + 0x34);
                    }
                    else {
                      iVar12 = *(int *)((int)local_5c.___y_1 + 0x34);
                      if (iVar12 == 0) goto LAB_10412dab;
                      if ((*(MonitorData **)(iVar12 + 0xc) == (MonitorData *)local_10.___Item2_1) &&
                         (*(int *)(iVar12 + 0x10) == iVar41)) {
                        pCVar50 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                   ((int)local_5c.___y_1 + 0x38);
                      }
                    }
                  }
                  if (pCVar50 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)
                  goto LAB_10412dab;
                  (param_1->___dstVert_8).___hexPos_0.___x_0 = *(int *)(pCVar50 + 1);
                  (param_1->___dstVert_8).___hexPos_0.___y_1 = *(int *)&pCVar50[1].field_0x4;
                  pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      (pCVar50,(MethodInfo *)0x0);
                  if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                  goto LAB_10412dab;
                  pVVar45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                      ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                       &fStack_88,pTVar39,(MethodInfo *)0x0);
                  uVar56._0_4_ = pVVar45->___x_2;
                  uVar56._4_4_ = pVVar45->___y_3;
                  fVar8 = pVVar45->___z_4;
                  local_10.___Item2_1 = (Il2CppObject *)(undefined4)uVar56;
                  local_10.___Item3_2 = (Il2CppObject *)uVar56._4_4_;
                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              );
                    uVar56 = CONCAT44(local_10.___Item3_2,local_10.___Item2_1);
                  }
                  pMVar58 = (MethodInfo *)uVar56;
                  fVar27.___z_2 = fVar8;
                  fVar27.___x_0 = (float)(int)uVar56;
                  fVar27.___y_1 = (float)(int)((ulonglong)uVar56 >> 0x20);
                  fVar57 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                                     (fVar27,(MethodInfo *)0x0);
                  iVar21.___z_2 = 0;
                  iVar21.___x_0 = (int)fVar57.___x_0;
                  iVar21.___y_1 = (int)fVar57.___y_1;
                  local_18 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                             HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                       (iVar21,pMVar58);
                  (param_1->___dstVert_8).___planePos_1.___x_0 = local_18.___x_0;
                  (param_1->___dstVert_8).___planePos_1.___y_1 = local_18.___y_1;
                  if (param_1->___master_4 ==
                      (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
                  goto LAB_10412dab;
                  pGVar59 = param_1->___master_4->___graph_7;
                  pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      (pCVar50,(MethodInfo *)0x0);
                  if (pGVar59 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)
                  goto LAB_10412dab;
                  iVar41 = param_1->___dstHeight_11;
                  goto LAB_10412bd3;
                }
              }
              local_3c = local_3c + 1;
              local_1c = (float)((int)local_1c + 4);
              local_30.___y_1 = local_38;
              local_30.___x_0 = local_34;
              pCVar50 = local_20;
            } while ((int)local_3c < local_50);
          }
          goto LAB_10412be6;
        }
        param_1->___side_15 = -1;
        iVar41 = pVVar47->___height_5 - 1;
      }
      param_1->___dstHeight_11 = iVar41;
      if (param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
      goto LAB_10412dab;
      pGVar59 = param_1->___master_4->___graph_7;
      pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar47,
                           (MethodInfo *)0x0);
      if ((pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
         (pTVar39 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                              (pTVar39,(MethodInfo *)0x0),
         pGVar59 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_10412dab;
      iVar41 = param_1->___dstHeight_11;
LAB_10412bd3:
      iVar41 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                         (pGVar59,pTVar39,iVar41,(MethodInfo *)0x0);
      param_1->___occupied_16 = -1 < iVar41;
    }
  }
  else {
    pVVar45 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_10,
                         (MethodInfo *)0x0);
    local_94._8_4_ = 0.0;
    fStack_88.___x_0 = 0.0;
    fStack_88.___y_1 = 0.0;
    fStack_88.___z_2 = 0.0;
    Plane__ctor_m6D48D57827430EC6C89277695BF035DC3FFC1BF1
              ((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(local_94 + 8),*pVVar45,0.0,
               (MethodInfo *)0x0);
    local_a4.___m_Normal_1.___x_2 = (float)local_94._8_4_;
    local_a4.___m_Normal_1.___y_3 = fStack_88.___x_0;
    local_a4.___m_Normal_1.___z_4 = fStack_88.___y_1;
    local_a4.___m_Distance_2 = fStack_88.___z_2;
    uVar4 = (param_1->___ray_6).___m_Direction_1.___z_4;
    uVar28 = (pRVar42->___m_Origin_0).___x_2;
    uVar29 = (pRVar42->___m_Origin_0).___y_3;
    uVar30 = (pRVar42->___m_Origin_0).___z_4;
    RVar15.___m_Origin_0.___z_4 = (float)uVar30;
    RVar15.___m_Origin_0.___y_3 = (float)uVar29;
    RVar15.___m_Origin_0.___x_2 = (float)uVar28;
    uVar31 = (pRVar42->___m_Direction_1).___x_2;
    uVar32 = (pRVar42->___m_Direction_1).___y_3;
    RVar15.___m_Direction_1.___y_3 = (float)uVar32;
    RVar15.___m_Direction_1.___x_2 = (float)uVar31;
    RVar15.___m_Direction_1.___z_4 = (float)uVar4;
    bVar37 = Plane_Raycast_m8E3B0EF5B22DF336430373D4997155B647E99A24
                       (&local_a4,RVar15,&local_40,(MethodInfo *)0x0);
    if (bVar37) {
      param_1->___srcHeight_10 = -1;
      param_1->___dstHeight_11 = 0;
      param_1->___side_15 = -1;
      pVVar45 = Ray_GetPoint_mC92464E32E42603B7B3444938E8BB8ADA43AB240
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_10,pRVar42,
                           local_40,(MethodInfo *)0x0);
      fVar9 = pVVar45->___y_3;
      fVar8 = pVVar45->___z_4;
      (param_1->___pointerHitPos_13).___x_2 = pVVar45->___x_2;
      (param_1->___pointerHitPos_13).___y_3 = fVar9;
      (param_1->___pointerHitPos_13).___z_4 = fVar8;
      pVVar45 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_10,
                           (MethodInfo *)0x0);
      fVar8 = (param_1->___pointerHitPos_13).___z_4;
      fVar13 = pVVar45->___y_3;
      fVar9 = pVVar45->___z_4;
      (param_1->___pointerHitDir_14).___x_2 = pVVar45->___x_2;
      (param_1->___pointerHitDir_14).___y_3 = fVar13;
      local_18.___x_0 = (param_1->___pointerHitPos_13).___x_2;
      local_18.___y_1 = (param_1->___pointerHitPos_13).___y_3;
      (param_1->___pointerHitDir_14).___z_4 = fVar9;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      pMVar58 = (MethodInfo *)local_18.___x_0;
      fVar23.___z_2 = fVar8;
      fVar23.___x_0 = local_18.___x_0;
      fVar23.___y_1 = local_18.___y_1;
      fVar57 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                         (fVar23,(MethodInfo *)0x0);
      iVar18.___z_2 = 0;
      iVar18.___x_0 = (int)fVar57.___x_0;
      iVar18.___y_1 = (int)fVar57.___y_1;
      fVar57 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
               HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar18,pMVar58);
      pVVar46 = HoverData_TryGetVert_m9BC0A802AC9DAFAE427E915D0C38247A5EF36FC2
                          (&local_4b0,param_1,fVar57,(MethodInfo *)0x0);
      piVar53 = local_2c0;
      for (iVar41 = 0x6c; iVar41 != 0; iVar41 = iVar41 + -1) {
        *piVar53 = (pVVar46->___hexPos_0).___x_0;
        pVVar46 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar46->___hexPos_0).___y_1;
        piVar53 = piVar53 + 1;
      }
      piVar53 = local_2c0;
      pVVar46 = &param_1->___srcVert_7;
      for (iVar41 = 0x6c; iVar41 != 0; iVar41 = iVar41 + -1) {
        (pVVar46->___hexPos_0).___x_0 = *piVar53;
        piVar53 = piVar53 + 1;
        pVVar46 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar46->___hexPos_0).___y_1;
      }
      piVar53 = local_2c0;
      pVVar46 = &param_1->___dstVert_8;
      for (iVar41 = 0x6c; iVar41 != 0; iVar41 = iVar41 + -1) {
        (pVVar46->___hexPos_0).___x_0 = *piVar53;
        piVar53 = piVar53 + 1;
        pVVar46 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar46->___hexPos_0).___y_1;
      }
      bVar37 = Vert_get_validPosition_mC52CDBAC4CF4B6AE5B9AD389C688BBA9B071DA14
                         (&param_1->___srcVert_7,(MethodInfo *)0x0);
      if (bVar37) {
        if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            || (pGVar59 = param_1->___master_4->___graph_7,
               pGVar59 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
           (pDVar10 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                      pGVar59->___cornerDict_16,
           pDVar10 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0))
        goto LAB_10412dab;
        bVar37 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                           (pDVar10,(param_1->___dstVert_8).___hexPos_0,(Il2CppObject **)&local_44,
                            Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                           );
        if (bVar37) {
          if (local_44 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)
          goto LAB_10412dab;
          pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              (local_44,(MethodInfo *)0x0);
          if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             || (pGVar59 = param_1->___master_4->___graph_7,
                pGVar59 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0))
          goto LAB_10412dab;
          iVar41 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                             (pGVar59,pTVar39,param_1->___dstHeight_11,(MethodInfo *)0x0);
          if (-1 < iVar41) {
            if ((pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
               (pTVar39 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                    (pTVar39,iVar41,(MethodInfo *)0x0),
               pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_10412dab;
            pVVar47 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
                      Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar39,
                                 Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                                );
            param_1->___voxel_9 = pVVar47;
            param_1->___occupied_16 = true;
          }
        }
      }
      param_1->___floodIndex_24 = 0;
    }
  }
LAB_10412be6:
  pVVar47 = param_1->___voxel_9;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar37 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_54,
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar47,(MethodInfo *)0x0)
  ;
  if (bVar37) {
    pVVar47 = param_1->___voxel_9;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar37 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar47,
                        (MethodInfo *)0x0);
    if (bVar37) {
      if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___floodVoxels_25 ==
          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_10412dab;
      bVar37 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                         ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                          param_1->___floodVoxels_25,(Il2CppObject *)param_1->___voxel_9,
                          List_1_Contains_m77250866D78124C44DE377FF524BF12F30188AC6_RuntimeMethod_var
                         );
      if (!bVar37) {
        if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___floodVoxels_25 ==
            (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) goto LAB_10412dab;
        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___floodVoxels_25,
                   List_1_Clear_m26F8EEFC4B8D781E8A2EED3AE0AE6FB0E6CF23E3_RuntimeMethod_var);
        if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___floodVoxels_25 ==
            (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10412dab;
        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                  ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)param_1->___floodVoxels_25,
                   (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)param_1->___voxel_9,
                   List_1_Add_m00E74FEB0C17C8E9608EA287F5A42340D9CE7C45_RuntimeMethod_var);
        param_1->___floodIndex_24 = 0;
      }
    }
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar59 = param_1->___master_4->___graph_7,
     pGVar59 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    bVar37 = Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5
                       (pGVar59,(param_1->___dstVert_8).___hexPos_0,param_1->___dstHeight_11,
                        (MethodInfo *)0x0);
    pVVar47 = param_1->___voxel_9;
    param_1->___insideBorders_17 = bVar37;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar37 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar47,
                        (MethodInfo *)0x0);
    param_1->___validPaint_19 = bVar37;
    param_1->___validRemove_21 = bVar37;
    param_1->___validBucket_22 = bVar37;
    if ((((param_1->___occupied_16 == false) &&
         (bVar37 = Vert_get_validPosition_mC52CDBAC4CF4B6AE5B9AD389C688BBA9B071DA14
                             (&param_1->___dstVert_8,(MethodInfo *)0x0), bVar37)) &&
        (-1 < param_1->___dstHeight_11)) && (param_1->___dstHeight_11 < 0x100)) {
      param_1->___validAdd_20 = param_1->___insideBorders_17 != false;
      return;
    }
    param_1->___validAdd_20 = false;
    return;
  }
LAB_10412dab:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
