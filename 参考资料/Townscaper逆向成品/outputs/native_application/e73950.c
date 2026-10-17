// RVA 0xe73950 | Placemaker.Graphs.Graph$$RemoveVoxel
// PDB: Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
// Body: [[10e73950, 10e73b7c] [10e73b86, 10e73c86] [10e73c8a, 10e745b9] [10e745bd, 10e74b8d]]
// Direct callees:
// 10066d80 List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101e5260 WorldMeshes_ReturnMesh_m0156414885AF96ED8141576B7C61F779BE4D25C7
// 1021c700 Dictionary_2_Add_mC0E73F61FE94D62C2E307CF3576FE002EAC6A138_gshared
// 1021f6d0 Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
// 1021fad0 Dictionary_2_Remove_m51EC32073B937969772D20254244309A9015A19D_gshared
// 102fb430 Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
// 102fb9e0 Square_SetRelation_m102CB342DDE7254B6A59CFA5D31BD7C3B855EB5F
// 103d8c80 ModuleBuilder_MarkQubeForDeconstruction_m2C55EB76B1E330A9ABF458C728AF922B9BEAE61A
// 103f4e50 WaveFunctionCollapse_QubeRemoved_m7E669C478D18408105C68C8FC45337F5A545C790
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 10448760 ExtraMath_Swap_TisRuntimeObject_m78DDC77B8A53A358AFB6BCBAD92BD2F5859932A2_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066e440 Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10672730 Vector2_SignedAngle_m007FAC4E36153EEBC62347D6FA67162238C34C69
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10809850 Qube_get_empty_m9B1AFF501673EB33EC7776F5423C4E96B8DEC40D
// 1081c1e0 Sandbanker_Reset_m58D520C0F47DC4F9FC0756C9953650479D36DC13
// 10836cb0 ExtraMath_OnEdge_mE45946122DEEB1A1C0BA0E937223C96D8EC9F6EE
// 10872190 AoBaker_GetShadowMesh_m62766243AA3EEF9475B3421CBA1088EF406CC372
// 10880550 Bitwise_GetByte_m401A6C322CEC1A11FCCA7C1D56B75D5807C1527F
// 1092cd60 List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
// 1092cdc0 List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10a43fd0 Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ab20 Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e738f0 Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
// 1113d0a0 MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406

void __cdecl
Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_2,MethodInfo *param_3)

{
  char *pcVar1;
  uchar *puVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *pVVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *pVVar4;
  Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *pSVar5;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar6;
  List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *pLVar7;
  DataU5BU5D_tD5ADDBD3E5CE9983D92AA304E103A4A810825781 *pDVar8;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar9;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar10;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar11;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar12;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar13;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *pWVar14;
  AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *pAVar15;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *pMVar16;
  WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *pWVar17;
  float *pfVar18;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar19;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar20;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar21;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar22;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar23;
  int2x2_t0BF7ADC262C8A7AA49278095CC23401CA390F27B iVar24;
  int2x2_t0BF7ADC262C8A7AA49278095CC23401CA390F27B iVar25;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar26;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar27;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar28;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar29;
  float fVar30;
  float fVar31;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar32;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar33;
  undefined1 auVar34 [48];
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *pCVar35;
  bool bVar36;
  uchar uVar37;
  char cVar38;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar39;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar40;
  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *pMVar41;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar42;
  Il2CppObject *pIVar43;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar44;
  int iVar45;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *pDVar46;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 *plVar47;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar49;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar50;
  MethodInfo *unaff_EDI;
  uint uVar51;
  Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC RVar52;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar53;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar54;
  float fVar55;
  undefined4 uStack_1e4;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 local_1b8;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  int iStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  int iStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  int iStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_88;
  float fStack_84;
  int iStack_80;
  float fStack_7c;
  int local_78;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_74;
  int local_68;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_64;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_58;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_40;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *local_3c;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_38;
  uint local_34;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_30;
  undefined8 local_2c;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *local_24;
  byte local_1d;
  ValueTuple_2_t5F161220C70E1DE0316457C0E595420591447B84 local_1c;
  uint local_14;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *local_10;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_c;
  List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *local_8;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar48;

  if (DAT_1152283c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_mCAB2C5E75B9AC6477D7503D956EA7CA965BBC24F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_mC0E73F61FE94D62C2E307CF3576FE002EAC6A138_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_m05B024D372CD7EBCE09B88EA18D8E54A9F481F1B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_m51EC32073B937969772D20254244309A9015A19D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Remove_m7DAFD16559E6A7D8069E47296DBBC4C7FB709D05_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ExtraMath_Swap_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_mDF0EBA1452EE70539564D2ED66C7787B30832B1D_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mCA6B2FCA32FC5274BDC9F3246426AA25CE9DB1A6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Remove_m3AE7810D96DD8F514602C9D26A5C0E8EF96C5BA5_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBE1EB191A0C65AEC9394B95448BE10D5F8D60CB6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m88F84B8C8231023D91AE957F85606EBA9A563083_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral68D7A24B1685B94A2179DC7AA39C79A25B6C3BBB);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var);
    DAT_1152283c = '\x01';
  }
  local_c = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0;
  local_30 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0;
  local_40 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0;
  local_38 = (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0;
  if (((param_2 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) &&
      (pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                            (MethodInfo *)0x0),
      pTVar39 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) &&
     (pTVar39 = Transform_GetParent_mA53F6AE810935DDED00A9FEEE1830F4EF797F73B
                          (pTVar39,(MethodInfo *)0x0),
     pTVar39 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pOVar40 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
              Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar39,
                         Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                        );
    local_10 = pOVar40;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar36 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar40,(MethodInfo *)0x0)
    ;
    if (!bVar36) {
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                ((Il2CppObject *)_stringLiteral68D7A24B1685B94A2179DC7AA39C79A25B6C3BBB,
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_2,(MethodInfo *)0x0);
      return;
    }
    if (param_2->___height_5 == '\0') {
      if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pSVar5 = param_1->___master_4->___sandbanker_22,
         pSVar5 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) goto LAB_10e74b89;
      Sandbanker_Reset_m58D520C0F47DC4F9FC0756C9953650479D36DC13(pSVar5,(MethodInfo *)0x0);
    }
    if (pOVar40 != (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) {
      pOVar6 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pOVar40[2]._padding_;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar36 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                         (pOVar6,(MethodInfo *)0x0);
      if (bVar36) {
        pLVar7 = (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pOVar40[2].___m_CachedPtr_0;
        if (pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0) goto LAB_10e74b89;
        uVar51 = (uint)param_2->___height_5;
        if ((uint)pLVar7->____size_2 <= uVar51) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pDVar8 = pLVar7->____items_1;
        pfVar18 = &pDVar8->m_Items[uVar51].___delta_0.___y_1;
        fStack_b4 = *pfVar18;
        fStack_b0 = pDVar8->m_Items[uVar51].___smoothDelta_1.___x_0;
        fStack_ac = pDVar8->m_Items[uVar51].___smoothDelta_1.___y_1;
        pVVar3 = &pDVar8->m_Items[uVar51].___pos_2;
        pVVar4 = &pDVar8->m_Items[uVar51].___smoothPos_4;
        local_b8 = 0.0;
        if (pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0) goto LAB_10e74b89;
        auVar34._12_4_ = pVVar3->___x_0;
        auVar34._0_12_ = *(undefined1 (*) [12])pfVar18;
        auVar34._16_4_ = pVVar3->___y_1;
        auVar34._20_4_ = pVVar3[1].___x_0;
        auVar34._24_4_ = pVVar3[1].___y_1;
        auVar34._28_4_ = pVVar4->___x_0;
        auVar34._32_4_ = pVVar4->___y_1;
        auVar34._36_4_ = *(int *)(pVVar4 + 1);
        auVar34._40_4_ = *(float *)((int)(pVVar4 + 1) + 4);
        auVar34._44_4_ = 0;
        List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                  (pLVar7,(uint)param_2->___height_5,
                   (Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408)(auVar34 << 0x20),
                   List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var);
        pOVar40 = local_10;
      }
      pMVar41 = (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *)
                Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                           Component_GetComponent_TisMeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98_mCAB2C5E75B9AC6477D7503D956EA7CA965BBC24F_RuntimeMethod_var
                          );
      if (pMVar41 != (MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 *)0x0) {
        MeshCollider_set_sharedMesh_m5E39BE3C85A9D21D846E8B7DBA1ED14820ED0406
                  (pMVar41,(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0,(MethodInfo *)0x0);
        pMVar42 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                  Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                             Component_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m4E31C5D3D0490AEE405B54BE9F61802EA425B9DC_RuntimeMethod_var
                            );
        if (pMVar42 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
          MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                    (pMVar42,(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0,(MethodInfo *)0x0
                    );
          pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                               (MethodInfo *)0x0);
          if (pTVar39 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                      (pTVar39,param_1->___voxelPool_11,(MethodInfo *)0x0);
            if (pOVar40[1].___m_CachedPtr_0 != 0) {
              local_24 = *(Square_tD1B7B6748B35059E198069769341DA3192352B8F **)
                          (pOVar40[1].___m_CachedPtr_0 + 0xc);
              while (local_24 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
                                &local_24[-1].field_0x13f, -1 < (int)local_24) {
                iVar45 = pOVar40[1].___m_CachedPtr_0;
                if (iVar45 == 0) goto LAB_10e74b89;
                if (*(undefined1 **)(iVar45 + 0xc) <= local_24) {
                    /* WARNING: Subroutine does not return */
                  ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                            ((MethodInfo *)0x0);
                }
                pCVar9 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                          (*(int *)(iVar45 + 8) + 0x10 + (int)local_24 * 4);
                if (((pCVar9 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
                    (pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                         (pCVar9,(MethodInfo *)0x0),
                    pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
                   (pTVar39 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                        (pTVar39,param_2->___height_5 + 1,(MethodInfo *)0x0),
                   pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                goto LAB_10e74b89;
                pIVar43 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar39,
                                     Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                    );
                local_2c = CONCAT44(pIVar43,(undefined4)local_2c);
                pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    (pCVar9,(MethodInfo *)0x0);
                if ((pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
                   (pTVar39 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                        (pTVar39,(uint)param_2->___height_5,(MethodInfo *)0x0),
                   pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                goto LAB_10e74b89;
                pQVar44 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                          Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar39,
                                     Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                    );
                local_8 = *(List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 **)&pCVar9[3].field_0x8
                ;
                local_3c = pQVar44;
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                bVar36 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                   ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_8,
                                    local_10,(MethodInfo *)0x0);
                if (bVar36) {
                  if ((local_2c._4_4_ == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
                     (pQVar44 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0))
                  goto LAB_10e74b89;
                  (pQVar44->___cornerValues_13).___v4_4 = '\x12';
                  *(undefined1 *)((int)local_2c._4_4_ + 0x24) = 0x12;
                  *(byte *)((int)local_2c._4_4_ + 0xc) = *(byte *)((int)local_2c._4_4_ + 0xc) ^ 1;
                  pQVar44->___voxelCount_4 = pQVar44->___voxelCount_4 ^ 0x10;
                }
                else {
                  local_8 = *(List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 **)(pCVar9 + 4);
                  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)
                    ;
                  }
                  bVar36 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                     ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_8,
                                      local_10,(MethodInfo *)0x0);
                  if (bVar36) {
                    if ((local_2c._4_4_ == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) ||
                       (pQVar44 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0))
                    goto LAB_10e74b89;
                    (pQVar44->___cornerValues_13).___v5_5 = '\x12';
                    *(undefined1 *)((int)local_2c._4_4_ + 0x25) = 0x12;
                    *(byte *)((int)local_2c._4_4_ + 0xc) = *(byte *)((int)local_2c._4_4_ + 0xc) ^ 2;
                    pQVar44->___voxelCount_4 = pQVar44->___voxelCount_4 ^ 0x20;
                  }
                  else {
                    local_8 = *(List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 **)
                               &pCVar9[4].field_0x4;
                    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                         has_cctor != '\0') &&
                       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                        cctor_finished == 0)) {
                      il2cpp_runtime_class_init
                                (
                                Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                );
                    }
                    bVar36 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_8,
                                        local_10,(MethodInfo *)0x0);
                    if (local_2c._4_4_ == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                    goto LAB_10e74b89;
                    if (bVar36) {
                      if (pQVar44 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                      goto LAB_10e74b89;
                      (pQVar44->___cornerValues_13).___v6_6 = '\x12';
                      *(undefined1 *)((int)local_2c._4_4_ + 0x26) = 0x12;
                      *(byte *)((int)local_2c._4_4_ + 0xc) =
                           *(byte *)((int)local_2c._4_4_ + 0xc) ^ 4;
                      pQVar44->___voxelCount_4 = pQVar44->___voxelCount_4 ^ 0x40;
                    }
                    else {
                      if (pQVar44 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0)
                      goto LAB_10e74b89;
                      (pQVar44->___cornerValues_13).___v7_7 = '\x12';
                      *(undefined1 *)((int)local_2c._4_4_ + 0x27) = 0x12;
                      *(byte *)((int)local_2c._4_4_ + 0xc) =
                           *(byte *)((int)local_2c._4_4_ + 0xc) ^ 8;
                      pQVar44->___voxelCount_4 = pQVar44->___voxelCount_4 ^ 0x80;
                    }
                  }
                }
                if (param_2->___height_5 == '\0') {
                  if (*(int *)&pCVar9[3].field_0x8 == 0) goto LAB_10e74b89;
                  pcVar1 = (char *)(*(int *)&pCVar9[3].field_0x8 + 0x2c);
                  *pcVar1 = *pcVar1 + -1;
                  if (*(int *)(pCVar9 + 4) == 0) goto LAB_10e74b89;
                  pcVar1 = (char *)(*(int *)(pCVar9 + 4) + 0x2c);
                  *pcVar1 = *pcVar1 + -1;
                  if (*(int *)&pCVar9[4].field_0x4 == 0) goto LAB_10e74b89;
                  pcVar1 = (char *)(*(int *)&pCVar9[4].field_0x4 + 0x2c);
                  *pcVar1 = *pcVar1 + -1;
                  if (*(int *)&pCVar9[4].field_0x8 == 0) goto LAB_10e74b89;
                  pcVar1 = (char *)(*(int *)&pCVar9[4].field_0x8 + 0x2c);
                  *pcVar1 = *pcVar1 + -1;
                }
                iVar45 = *(int *)&pCVar9[3].field_0x8;
                if (iVar45 == 0) goto LAB_10e74b89;
                if (*(char *)(iVar45 + 0x24) == '\0') {
                  *(undefined1 *)(iVar45 + 0x24) = 1;
                  if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                      param_1->___cornerFlowQueue_20 ==
                      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e74b89;
                  OVar10.___moduleIndex_0 = *(ushort *)&pCVar9[3].field_0x8;
                  OVar10.___flags_1 = pCVar9[3].field_0xa;
                  OVar10._3_1_ = pCVar9[3].field_0xb;
                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                            ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                             param_1->___cornerFlowQueue_20,OVar10,
                             List_1_Add_mCA6B2FCA32FC5274BDC9F3246426AA25CE9DB1A6_RuntimeMethod_var)
                  ;
                }
                iVar45 = *(int *)(pCVar9 + 4);
                if (iVar45 == 0) goto LAB_10e74b89;
                if (*(char *)(iVar45 + 0x24) == '\0') {
                  *(undefined1 *)(iVar45 + 0x24) = 1;
                  if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                      param_1->___cornerFlowQueue_20 ==
                      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e74b89;
                  OVar11.___moduleIndex_0 = *(ushort *)&pCVar9[4].field_0x0;
                  OVar11.___flags_1 = pCVar9[4].field_0x2;
                  OVar11._3_1_ = pCVar9[4].field_0x3;
                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                            ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                             param_1->___cornerFlowQueue_20,OVar11,
                             List_1_Add_mCA6B2FCA32FC5274BDC9F3246426AA25CE9DB1A6_RuntimeMethod_var)
                  ;
                }
                iVar45 = *(int *)&pCVar9[4].field_0x4;
                if (iVar45 == 0) goto LAB_10e74b89;
                if (*(char *)(iVar45 + 0x24) == '\0') {
                  *(undefined1 *)(iVar45 + 0x24) = 1;
                  if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                      param_1->___cornerFlowQueue_20 ==
                      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e74b89;
                  OVar12.___moduleIndex_0 = *(ushort *)&pCVar9[4].field_0x4;
                  OVar12.___flags_1 = pCVar9[4].field_0x6;
                  OVar12._3_1_ = pCVar9[4].field_0x7;
                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                            ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                             param_1->___cornerFlowQueue_20,OVar12,
                             List_1_Add_mCA6B2FCA32FC5274BDC9F3246426AA25CE9DB1A6_RuntimeMethod_var)
                  ;
                }
                iVar45 = *(int *)&pCVar9[4].field_0x8;
                if (iVar45 == 0) goto LAB_10e74b89;
                if (*(char *)(iVar45 + 0x24) == '\0') {
                  *(undefined1 *)(iVar45 + 0x24) = 1;
                  if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                      param_1->___cornerFlowQueue_20 ==
                      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_10e74b89;
                  OVar13.___moduleIndex_0 = *(ushort *)&pCVar9[4].field_0x8;
                  OVar13.___flags_1 = pCVar9[4].field_0xa;
                  OVar13._3_1_ = pCVar9[4].field_0xb;
                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                            ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                             param_1->___cornerFlowQueue_20,OVar13,
                             List_1_Add_mCA6B2FCA32FC5274BDC9F3246426AA25CE9DB1A6_RuntimeMethod_var)
                  ;
                }
                iVar45 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                                   (0,param_2->___height_5 - 1,(MethodInfo *)0x0);
                local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                          (param_2->___height_5 + 2);
                if (iVar45 < (int)local_8) {
                  do {
                    if ((*(int *)&pCVar9[3].field_0x8 == 0) ||
                       (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                                  (*(int *)&pCVar9[3].field_0x8 + 0x20),
                       pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0))
                    goto LAB_10e74b89;
                    pDVar46 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                        (&local_1b8,pLVar7,iVar45,
                                         List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                        );
                    local_158 = (pDVar46->___delta_0).___x_0;
                    fStack_154 = (pDVar46->___delta_0).___y_1;
                    fStack_150 = (pDVar46->___smoothDelta_1).___x_0;
                    fStack_14c = (pDVar46->___smoothDelta_1).___y_1;
                    local_c8 = (pDVar46->___pos_2).___x_0;
                    fStack_c4 = (pDVar46->___pos_2).___y_1;
                    fStack_c0 = (pDVar46->___invYPos_3).___x_0;
                    fStack_bc = (pDVar46->___invYPos_3).___y_1;
                    local_d8 = (pDVar46->___smoothPos_4).___x_0;
                    fStack_d4 = (pDVar46->___smoothPos_4).___y_1;
                    iStack_d0 = pDVar46->___frame_5;
                    fStack_cc = pDVar46->___time_6;
                    if ((*(int *)(pCVar9 + 4) == 0) ||
                       (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                                  (*(int *)(pCVar9 + 4) + 0x20),
                       pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0))
                    goto LAB_10e74b89;
                    pDVar46 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                        (&local_1b8,pLVar7,iVar45,
                                         List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                        );
                    local_188 = (pDVar46->___delta_0).___x_0;
                    fStack_184 = (pDVar46->___delta_0).___y_1;
                    fStack_180 = (pDVar46->___smoothDelta_1).___x_0;
                    fStack_17c = (pDVar46->___smoothDelta_1).___y_1;
                    local_e8 = (pDVar46->___pos_2).___x_0;
                    fStack_e4 = (pDVar46->___pos_2).___y_1;
                    fStack_e0 = (pDVar46->___invYPos_3).___x_0;
                    fStack_dc = (pDVar46->___invYPos_3).___y_1;
                    local_f8 = (pDVar46->___smoothPos_4).___x_0;
                    fStack_f4 = (pDVar46->___smoothPos_4).___y_1;
                    iStack_f0 = pDVar46->___frame_5;
                    fStack_ec = pDVar46->___time_6;
                    if ((*(int *)&pCVar9[4].field_0x4 == 0) ||
                       (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                                  (*(int *)&pCVar9[4].field_0x4 + 0x20),
                       pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0))
                    goto LAB_10e74b89;
                    pDVar46 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                        (&local_1b8,pLVar7,iVar45,
                                         List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                        );
                    local_b8 = (pDVar46->___delta_0).___x_0;
                    fStack_b4 = (pDVar46->___delta_0).___y_1;
                    fStack_b0 = (pDVar46->___smoothDelta_1).___x_0;
                    fStack_ac = (pDVar46->___smoothDelta_1).___y_1;
                    local_108 = (pDVar46->___pos_2).___x_0;
                    fStack_104 = (pDVar46->___pos_2).___y_1;
                    fStack_100 = (pDVar46->___invYPos_3).___x_0;
                    fStack_fc = (pDVar46->___invYPos_3).___y_1;
                    local_118 = (pDVar46->___smoothPos_4).___x_0;
                    fStack_114 = (pDVar46->___smoothPos_4).___y_1;
                    iStack_110 = pDVar46->___frame_5;
                    fStack_10c = pDVar46->___time_6;
                    if ((*(int *)&pCVar9[4].field_0x8 == 0) ||
                       (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                                  (*(int *)&pCVar9[4].field_0x8 + 0x20),
                       pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0))
                    goto LAB_10e74b89;
                    pDVar46 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                        (&local_1b8,pLVar7,iVar45,
                                         List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                        );
                    fStack_154 = (float)CONCAT31(fStack_154._1_3_,fStack_154._0_1_ + -1);
                    fStack_184 = (float)CONCAT31(fStack_184._1_3_,fStack_184._0_1_ + -1);
                    fStack_b4 = (float)CONCAT31(fStack_b4._1_3_,fStack_b4._0_1_ + -1);
                    fVar55 = (pDVar46->___delta_0).___x_0;
                    fVar30 = (pDVar46->___smoothDelta_1).___x_0;
                    fVar31 = (pDVar46->___smoothDelta_1).___y_1;
                    local_128 = (pDVar46->___pos_2).___x_0;
                    fStack_124 = (pDVar46->___pos_2).___y_1;
                    fStack_120 = (pDVar46->___invYPos_3).___x_0;
                    fStack_11c = (pDVar46->___invYPos_3).___y_1;
                    local_88 = (pDVar46->___smoothPos_4).___x_0;
                    fStack_84 = (pDVar46->___smoothPos_4).___y_1;
                    iStack_80 = pDVar46->___frame_5;
                    fStack_7c = pDVar46->___time_6;
                    uStack_1e4 = CONCAT31(*(undefined3 *)((int)&(pDVar46->___delta_0).___y_1 + 1),
                                          *(char *)&(pDVar46->___delta_0).___y_1 + -1);
                    if ((*(int *)&pCVar9[3].field_0x8 == 0) ||
                       (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                                  (*(int *)&pCVar9[3].field_0x8 + 0x20),
                       pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0))
                    goto LAB_10e74b89;
                    DVar19.___delta_0.___y_1 = fStack_154;
                    DVar19.___delta_0.___x_0 = local_158;
                    DVar19.___smoothDelta_1.___x_0 = fStack_150;
                    DVar19.___smoothDelta_1.___y_1 = fStack_14c;
                    DVar19.___pos_2.___x_0 = local_c8;
                    DVar19.___pos_2.___y_1 = fStack_c4;
                    DVar19.___invYPos_3.___x_0 = fStack_c0;
                    DVar19.___invYPos_3.___y_1 = fStack_bc;
                    DVar19.___smoothPos_4.___x_0 = local_d8;
                    DVar19.___smoothPos_4.___y_1 = fStack_d4;
                    DVar19.___frame_5 = iStack_d0;
                    DVar19.___time_6 = fStack_cc;
                    List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                              (pLVar7,iVar45,DVar19,
                               List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                              );
                    if ((*(int *)(pCVar9 + 4) == 0) ||
                       (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                                  (*(int *)(pCVar9 + 4) + 0x20),
                       pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0))
                    goto LAB_10e74b89;
                    DVar20.___delta_0.___y_1 = fStack_184;
                    DVar20.___delta_0.___x_0 = local_188;
                    DVar20.___smoothDelta_1.___x_0 = fStack_180;
                    DVar20.___smoothDelta_1.___y_1 = fStack_17c;
                    DVar20.___pos_2.___x_0 = local_e8;
                    DVar20.___pos_2.___y_1 = fStack_e4;
                    DVar20.___invYPos_3.___x_0 = fStack_e0;
                    DVar20.___invYPos_3.___y_1 = fStack_dc;
                    DVar20.___smoothPos_4.___x_0 = local_f8;
                    DVar20.___smoothPos_4.___y_1 = fStack_f4;
                    DVar20.___frame_5 = iStack_f0;
                    DVar20.___time_6 = fStack_ec;
                    List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                              (pLVar7,iVar45,DVar20,
                               List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                              );
                    if ((*(int *)&pCVar9[4].field_0x4 == 0) ||
                       (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                                  (*(int *)&pCVar9[4].field_0x4 + 0x20),
                       pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0))
                    goto LAB_10e74b89;
                    DVar21.___delta_0.___y_1 = fStack_b4;
                    DVar21.___delta_0.___x_0 = local_b8;
                    DVar21.___smoothDelta_1.___x_0 = fStack_b0;
                    DVar21.___smoothDelta_1.___y_1 = fStack_ac;
                    DVar21.___pos_2.___x_0 = local_108;
                    DVar21.___pos_2.___y_1 = fStack_104;
                    DVar21.___invYPos_3.___x_0 = fStack_100;
                    DVar21.___invYPos_3.___y_1 = fStack_fc;
                    DVar21.___smoothPos_4.___x_0 = local_118;
                    DVar21.___smoothPos_4.___y_1 = fStack_114;
                    DVar21.___frame_5 = iStack_110;
                    DVar21.___time_6 = fStack_10c;
                    List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                              (pLVar7,iVar45,DVar21,
                               List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                              );
                    if ((*(int *)&pCVar9[4].field_0x8 == 0) ||
                       (pLVar7 = *(List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C **)
                                  (*(int *)&pCVar9[4].field_0x8 + 0x20),
                       pLVar7 == (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)0x0))
                    goto LAB_10e74b89;
                    DVar22.___delta_0.___y_1 = (float)uStack_1e4;
                    DVar22.___delta_0.___x_0 = fVar55;
                    DVar22.___smoothDelta_1.___x_0 = fVar30;
                    DVar22.___smoothDelta_1.___y_1 = fVar31;
                    DVar22.___pos_2.___x_0 = local_128;
                    DVar22.___pos_2.___y_1 = fStack_124;
                    DVar22.___invYPos_3.___x_0 = fStack_120;
                    DVar22.___invYPos_3.___y_1 = fStack_11c;
                    DVar22.___smoothPos_4.___x_0 = local_88;
                    DVar22.___smoothPos_4.___y_1 = fStack_84;
                    DVar22.___frame_5 = iStack_80;
                    DVar22.___time_6 = fStack_7c;
                    List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                              (pLVar7,iVar45,DVar22,
                               List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                              );
                    iVar45 = iVar45 + 1;
                  } while (iVar45 < (int)local_8);
                }
                if (*(char *)((int)local_2c._4_4_ + 0xc) == '\0') {
                  local_1d = param_2->___height_5;
                  pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      (pCVar9,(MethodInfo *)0x0);
                  if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                  goto LAB_10e74b89;
                  iVar45 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                     (pTVar39,(MethodInfo *)0x0);
                  if (local_1d + 2 == iVar45) {
                    uVar37 = Bitwise_GetByte_m401A6C322CEC1A11FCCA7C1D56B75D5807C1527F
                                       (pCVar9[1].field_0x4 != -1,*(char *)(pCVar9 + 2) != -1,
                                        pCVar9[2].field_0x8 != -1,pCVar9[3].field_0x4 != -1,true,
                                        false,false,false,(MethodInfo *)0x0);
                    local_34 = CONCAT31(local_34._1_3_,uVar37);
                    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        (pCVar9,(MethodInfo *)0x0);
                    if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                    goto LAB_10e74b89;
                    local_14 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                         (pTVar39,(MethodInfo *)0x0);
                    while (uVar51 = local_14 - 1, local_14 = uVar51, -1 < (int)uVar51) {
                      pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          (pCVar9,(MethodInfo *)0x0);
                      if (((pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          || (pTVar39 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                                  (pTVar39,uVar51,(MethodInfo *)0x0),
                             pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                         || (pQVar44 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                                       Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                                 ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pTVar39,
                                                  Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                                 ),
                            pQVar44 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0))
                      goto LAB_10e74b89;
                      uVar37 = '\x0f';
                      if (local_14 != 0) {
                        uVar37 = '\0';
                      }
                      if (pQVar44->___voxelCount_4 != uVar37) break;
                      if ((param_1->___master_4 ==
                           (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                         (pWVar14 = param_1->___master_4->___waveFunctionCollapse_10,
                         pWVar14 ==
                         (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0))
                      goto LAB_10e74b89;
                      WaveFunctionCollapse_QubeRemoved_m7E669C478D18408105C68C8FC45337F5A545C790
                                (pWVar14,pQVar44,(uchar)local_34,(MethodInfo *)0x0);
                      if ((local_14 == 0) &&
                         (bVar36 = Qube_get_empty_m9B1AFF501673EB33EC7776F5423C4E96B8DEC40D
                                             (pQVar44,(MethodInfo *)0x0), !bVar36)) {
                        if ((param_1->___master_4 ==
                             (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                           (pSVar5 = param_1->___master_4->___sandbanker_22,
                           pSVar5 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0))
                        goto LAB_10e74b89;
                        Sandbanker_Reset_m58D520C0F47DC4F9FC0756C9953650479D36DC13
                                  (pSVar5,(MethodInfo *)0x0);
                      }
                      if (-1 < pQVar44->___shadowIndex_7) {
                        if ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                            param_1->___shadowMeshIndexes_23 ==
                            (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0)
                        goto LAB_10e74b89;
                        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                  ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)
                                   param_1->___shadowMeshIndexes_23,
                                   (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                   pQVar44->___shadowIndex_7,
                                   List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var
                                  );
                        if ((param_1->___master_4 ==
                             (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                           (pAVar15 = param_1->___master_4->___aoBaker_11,
                           pAVar15 == (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)0x0))
                        goto LAB_10e74b89;
                        local_1c = AoBaker_GetShadowMesh_m62766243AA3EEF9475B3421CBA1088EF406CC372
                                             (pAVar15,pQVar44->___shadowIndex_7,(MethodInfo *)0x0);
                        if (local_1c.___Item1_0 ==
                            (ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *)0x0)
                        goto LAB_10e74b89;
                        local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                  (local_1c.___Item1_0)->___shadowMeshVerts_4;
                        plVar47 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430
                                   *)Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                               (&local_58,(MethodInfo *)0x0);
                        if (local_8 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                        goto LAB_10e74b89;
                        List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                                  (local_8,local_1c.___Item2_1,*plVar47,
                                   List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                                  );
                        local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                  (local_1c.___Item1_0)->___shadowMeshVerts_4;
                        plVar47 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430
                                   *)Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                               (&local_4c,(MethodInfo *)0x0);
                        if (local_8 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                        goto LAB_10e74b89;
                        List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                                  (local_8,local_1c.___Item2_1 + 1,*plVar47,
                                   List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                                  );
                        local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                  (local_1c.___Item1_0)->___shadowMeshVerts_4;
                        plVar47 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430
                                   *)Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                               (&VStack_74,(MethodInfo *)0x0);
                        if (local_8 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                        goto LAB_10e74b89;
                        List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                                  (local_8,local_1c.___Item2_1 + 2,*plVar47,
                                   List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                                  );
                        local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                                  (local_1c.___Item1_0)->___shadowMeshVerts_4;
                        plVar47 = (lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430
                                   *)Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                               ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *
                                                )&iStack_64,(MethodInfo *)0x0);
                        if (local_8 == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
                        goto LAB_10e74b89;
                        List_1_set_Item_m3A55C649578FEA19B80D35A7BF3694FCF0ABB07B_gshared
                                  (local_8,local_1c.___Item2_1 + 3,*plVar47,
                                   List_1_set_Item_m47BD350016A981C60BB5DA25E124EE6F98450406_RuntimeMethod_var
                                  );
                        (local_1c.___Item1_0)->___dirty_7 = true;
                        pQVar44->___shadowIndex_7 = -1;
                      }
                      if ((param_1->___master_4 ==
                           (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                         (pMVar16 = param_1->___master_4->___moduleBuilder_16,
                         pMVar16 == (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0))
                      goto LAB_10e74b89;
                      ModuleBuilder_MarkQubeForDeconstruction_m2C55EB76B1E330A9ABF458C728AF922B9BEAE61A
                                (pMVar16,pQVar44,(MethodInfo *)0x0);
                      pQVar44->___existanceIndex_9 = pQVar44->___existanceIndex_9 + 1;
                    }
                  }
                }
                Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
                          (param_1,local_2c._4_4_,(MethodInfo *)0x0);
                Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
                          (param_1,local_3c,(MethodInfo *)0x0);
                pOVar40 = local_10;
              }
              pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pOVar40,
                                   (MethodInfo *)0x0);
              if (pTVar39 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                iVar45 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                   (pTVar39,(MethodInfo *)0x0);
                if (iVar45 != 0) {
LAB_10e74b39:
                  if (param_2->___height_5 + 1 == param_1->___boundsHeight_27) {
                    param_1->___recalculateHeightBounds_43 = true;
                  }
                  return;
                }
                if (pOVar40[1].___m_CachedPtr_0 == 0) goto LAB_10e74b89;
                local_34 = *(int *)(pOVar40[1].___m_CachedPtr_0 + 0xc) - 1;
                if (-1 < (int)local_34) {
                  local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                            (local_34 * 4 + 0x10);
                  do {
                    iVar45 = local_10[1].___m_CachedPtr_0;
                    if (iVar45 == 0) goto LAB_10e74b89;
                    if (*(uint *)(iVar45 + 0xc) <= local_34) {
                    /* WARNING: Subroutine does not return */
                      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                ((MethodInfo *)0x0);
                    }
                    pSVar50 = *(Square_tD1B7B6748B35059E198069769341DA3192352B8F **)
                               ((int)&local_8->_padding_ + *(int *)(iVar45 + 8));
                    local_24 = pSVar50;
                    if (pSVar50 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0)
                    goto LAB_10e74b89;
                    puVar2 = &pSVar50->___motivations_16;
                    *puVar2 = *puVar2 + 0xff;
                    if (*puVar2 == '\0') {
                      local_c = pSVar50->___c0_8;
                      local_30 = pSVar50->___c1_9;
                      local_40 = pSVar50->___c2_10;
                      local_38 = pSVar50->___c3_11;
                      local_14 = local_14 & 0xffffff00;
                      local_1c.___Item2_1 =
                           *(int *)int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var
                                   ->static_fields;
                      local_1c.___Item1_0 =
                           *(ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 **)
                            ((int)int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var
                                  ->static_fields + 4);
                      do {
                        RVar52 = Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
                                           (pSVar50,(schar)local_14,(MethodInfo *)0x0);
                        pSVar48 = RVar52.___square_0;
                        local_2c = CONCAT44(RVar52._4_4_,(undefined4)local_2c);
                        if (local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                        goto LAB_10e74b89;
                        local_1c.___Item2_1 = local_1c.___Item2_1 + (local_c->___hexPos_4).___x_0;
                        local_1c.___Item1_0 =
                             (ShadowMesh_t242AFD9598DDF08516763DB2C10CADE97E9C6A35 *)
                             ((int)&(local_1c.___Item1_0)->_padding_ + (local_c->___hexPos_4).___y_1
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
                        bVar36 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                           ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                            pSVar48,(MethodInfo *)0x0);
                        pSVar50 = local_24;
                        if (bVar36) {
                          Square_SetRelation_m102CB342DDE7254B6A59CFA5D31BD7C3B855EB5F
                                    (local_24,(schar)local_14,-1,
                                     (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0,
                                     (MethodInfo *)0x0);
                          if (pSVar48 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0)
                          goto LAB_10e74b89;
                          Square_SetRelation_m102CB342DDE7254B6A59CFA5D31BD7C3B855EB5F
                                    (pSVar48,(schar)((ulonglong)local_2c >> 0x20),-1,
                                     (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0,
                                     (MethodInfo *)0x0);
                          if ((local_30 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             || (local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             ) goto LAB_10e74b89;
                          local_78 = (local_30->___hexPos_4).___x_0;
                          VStack_74.___x_2 = (float)(local_30->___hexPos_4).___y_1;
                          VStack_74.___y_3 = (float)(local_c->___hexPos_4).___x_0;
                          VStack_74.___z_4 = (float)(local_c->___hexPos_4).___y_1;
                          if (param_1->___edgeDict_18 ==
                              (Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)0x0)
                          goto LAB_10e74b89;
                          iVar24.___c1_1.___x_0 = (int)VStack_74.___y_3;
                          iVar24.___c0_0 = local_30->___hexPos_4;
                          iVar24.___c1_1.___y_1 = (int)VStack_74.___z_4;
                          RVar52._4_4_ = local_2c._4_4_;
                          RVar52.___square_0 = pSVar48;
                          Dictionary_2_Add_mC0E73F61FE94D62C2E307CF3576FE002EAC6A138_gshared
                                    (param_1->___edgeDict_18,iVar24,RVar52,
                                     Dictionary_2_Add_mC0E73F61FE94D62C2E307CF3576FE002EAC6A138_RuntimeMethod_var
                                    );
                        }
                        else {
                          if ((local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             || (local_30 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0
                                )) goto LAB_10e74b89;
                          local_68 = (local_c->___hexPos_4).___x_0;
                          iStack_64.___x_0 = (local_c->___hexPos_4).___y_1;
                          iStack_64.___y_1 = (local_30->___hexPos_4).___x_0;
                          iStack_64.___z_2 = (local_30->___hexPos_4).___y_1;
                          if (param_1->___edgeDict_18 ==
                              (Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)0x0)
                          goto LAB_10e74b89;
                          iVar25.___c1_1.___x_0 = iStack_64.___y_1;
                          iVar25.___c0_0 = local_c->___hexPos_4;
                          iVar25.___c1_1.___y_1 = iStack_64.___z_2;
                          Dictionary_2_Remove_m51EC32073B937969772D20254244309A9015A19D_gshared
                                    (param_1->___edgeDict_18,iVar25,
                                     Dictionary_2_Remove_m51EC32073B937969772D20254244309A9015A19D_RuntimeMethod_var
                                    );
                          pSVar50 = local_24;
                        }
                        if ((((local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             || ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                                 local_c->___squares_5 ==
                                 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0)) ||
                            (List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                                       ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                                        local_c->___squares_5,(Il2CppObject *)pSVar50,
                                        List_1_Remove_m3AE7810D96DD8F514602C9D26A5C0E8EF96C5BA5_RuntimeMethod_var
                                       ), pCVar35 = local_c,
                            local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)) ||
                           (local_c->___squares_5 ==
                            (List_1_t4E89C88A812BE3D2F69EB42534537782B7FA1EB3 *)0x0))
                        goto LAB_10e74b89;
                        if (local_c->___squares_5->____size_2 == 0) {
                          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                               ->has_cctor != '\0') &&
                             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                              cctor_finished == 0)) {
                            il2cpp_runtime_class_init
                                      (
                                      Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                      );
                          }
                          bVar36 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                                             ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                              pCVar35,local_10,(MethodInfo *)0x0);
                          if (!bVar36) goto LAB_10e74832;
                          if ((((local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                               || ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                                   param_1->___cornerDict_16 ==
                                   (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0))
                              || (Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
                                            ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920
                                              *)param_1->___cornerDict_16,local_c->___hexPos_4,
                                             Dictionary_2_Remove_m7DAFD16559E6A7D8069E47296DBBC4C7FB709D05_RuntimeMethod_var
                                            ),
                                 local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                              ) || ((pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                         ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)local_c,(MethodInfo *)0x0),
                                    pTVar39 ==
                                    (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0 ||
                                    (Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                                               (pTVar39,param_1->___cornerPool_7,(MethodInfo *)0x0),
                                    local_c ==
                                    (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0))))
                          goto LAB_10e74b89;
                          local_c->___angle_10 = 0.0;
                        }
                        else {
LAB_10e74832:
                          pCVar35 = local_c;
                          if ((local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             || (local_3c = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                                            local_c->___angle_10,
                                local_38 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             ) goto LAB_10e74b89;
                          local_2c = 0;
                          local_4c.___z_4 =
                               (float)((local_38->___hexPos_4).___y_1 -
                                      (local_c->___hexPos_4).___y_1);
                          local_4c.___y_3 =
                               (float)((local_38->___hexPos_4).___x_0 -
                                      (local_c->___hexPos_4).___x_0);
                          iVar28.___y_1 = (int)local_4c.___z_4;
                          iVar28.___x_0 = (int)local_4c.___y_3;
                          iVar28.___z_2 = 0;
                          VVar53 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                   HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                             (iVar28,unaff_EDI);
                          if ((local_30 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             || (local_c == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             ) goto LAB_10e74b89;
                          local_2c = 0;
                          local_58.___z_4 =
                               (float)((local_30->___hexPos_4).___y_1 -
                                      (local_c->___hexPos_4).___y_1);
                          local_58.___y_3 =
                               (float)((local_30->___hexPos_4).___x_0 -
                                      (local_c->___hexPos_4).___x_0);
                          iVar29.___y_1 = (int)local_58.___z_4;
                          iVar29.___x_0 = (int)local_58.___y_3;
                          iVar29.___z_2 = 0;
                          VVar54 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                   HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                                             (iVar29,unaff_EDI);
                          fVar55 = Vector2_SignedAngle_m007FAC4E36153EEBC62347D6FA67162238C34C69
                                             (VVar53,VVar54,(MethodInfo *)0x0);
                          local_2c = CONCAT44(fVar55,(undefined4)local_2c);
                          pCVar35->___angle_10 = (float)local_3c - fVar55;
                          pSVar50 = local_24;
                        }
                        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                             ->has_cctor != '\0') &&
                           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            ->cctor_finished == 0)) {
                          il2cpp_runtime_class_init
                                    (
                                    ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                    );
                        }
                        ExtraMath_Swap_TisRuntimeObject_m78DDC77B8A53A358AFB6BCBAD92BD2F5859932A2_gshared
                                  ((Il2CppObject **)&local_c,(Il2CppObject **)&local_30,
                                   (Il2CppObject **)&local_40,(Il2CppObject **)&local_38,
                                   ExtraMath_Swap_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_mDF0EBA1452EE70539564D2ED66C7787B30832B1D_RuntimeMethod_var
                                  );
                        cVar38 = (char)local_14 + '\x01';
                        local_14 = CONCAT31(local_14._1_3_,cVar38);
                      } while (cVar38 < '\x04');
                      if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                          param_1->___squareDict_17 ==
                          (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
                      goto LAB_10e74b89;
                      iVar27.___y_1 = (int)local_1c.___Item1_0;
                      iVar27.___x_0 = local_1c.___Item2_1;
                      Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
                                ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                                 param_1->___squareDict_17,iVar27,
                                 Dictionary_2_Remove_m05B024D372CD7EBCE09B88EA18D8E54A9F481F1B_RuntimeMethod_var
                                );
                      pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                           pSVar50,(MethodInfo *)0x0);
                      if (pTVar39 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                      goto LAB_10e74b89;
                      Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                                (pTVar39,param_1->___squarePool_9,(MethodInfo *)0x0);
                    }
                    local_8 = (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)
                              &local_8[-1].____syncRoot_4;
                    local_34 = local_34 - 1;
                    pOVar40 = local_10;
                  } while (-1 < (int)local_34);
                }
                pOVar6 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pOVar40[2]._padding_;
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                bVar36 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                   (pOVar6,(MethodInfo *)0x0);
                if (bVar36) {
                  if ((param_1->___master_4 ==
                       (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                     (pWVar17 = param_1->___master_4->___worldMeshes_9,
                     pWVar17 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0))
                  goto LAB_10e74b89;
                  WorldMeshes_ReturnMesh_m0156414885AF96ED8141576B7C61F779BE4D25C7
                            (pWVar17,(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)
                                     pOVar40[2]._padding_,(MethodInfo *)0x0);
                  pOVar40[2]._padding_ = 0;
                  if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pOVar40[2]._padding_ ==
                      (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) goto LAB_10e74b89;
                  List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                             pOVar40[2]._padding_,
                             List_1_Clear_m17AB4CF64254D2A036FA95D9ECC208B39A4A6E50_RuntimeMethod_var
                            );
                }
                if (param_1->___recalculateHexBounds_42 == false) {
                  local_88 = (float)(param_1->___bounds_28).___c0_0.___x_0;
                  fStack_84 = (float)(param_1->___bounds_28).___c0_0.___y_1;
                  iStack_80 = (param_1->___bounds_28).___c0_0.___z_2;
                  fStack_7c = (float)(param_1->___bounds_28).___c1_1.___x_0;
                  iVar32.___x_0 = pOVar40[1]._padding_;
                  iVar32.___y_1 = pOVar40[1]._padding_;
                  local_4c.___y_3 = (float)(param_1->___bounds_28).___c1_1.___y_1;
                  local_4c.___z_4 = (float)(param_1->___bounds_28).___c1_1.___z_2;
                  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                              );
                  }
                  piVar49 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                      (&iStack_64,iVar32,(MethodInfo *)0x0);
                  local_58.___y_3 = (float)piVar49->___x_0;
                  local_58.___z_4 = (float)piVar49->___y_1;
                  iVar45 = piVar49->___z_2;
                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                       has_cctor != '\0') &&
                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              );
                  }
                  iVar23.___c0_0.___y_1 = (int)fStack_84;
                  iVar23.___c0_0.___x_0 = (int)local_88;
                  iVar23.___c0_0.___z_2 = iStack_80;
                  iVar23.___c1_1.___x_0 = (int)fStack_7c;
                  iVar23.___c1_1.___y_1 = (int)local_4c.___y_3;
                  iVar23.___c1_1.___z_2 = (int)local_4c.___z_4;
                  iVar26.___z_2 = iVar45;
                  iVar26.___x_0 = (int)local_58.___y_3;
                  iVar26.___y_1 = (int)local_58.___z_4;
                  bVar36 = ExtraMath_OnEdge_mE45946122DEEB1A1C0BA0E937223C96D8EC9F6EE
                                     (iVar23,iVar26,(MethodInfo *)0x0);
                  pOVar40 = local_10;
                  if (bVar36) {
                    param_1->___recalculateHexBounds_42 = true;
                  }
                }
                if (pOVar40[1].___m_CachedPtr_0 != 0) {
                  if (*(int *)(pOVar40[1].___m_CachedPtr_0 + 0xc) != 0) goto LAB_10e74b39;
                  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                      param_1->___cornerDict_16 !=
                      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
                    iVar33.___x_0 = pOVar40[1]._padding_;
                    iVar33.___y_1 = pOVar40[1]._padding_;
                    Dictionary_2_Remove_m015EB7A9E4C8CDD944B0FDE3AF4BD8641FFC57FF_gshared
                              ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                               param_1->___cornerDict_16,iVar33,
                               Dictionary_2_Remove_m7DAFD16559E6A7D8069E47296DBBC4C7FB709D05_RuntimeMethod_var
                              );
                    pOVar40[1]._padding_ = -1;
                    pOVar40[1]._padding_ = -1;
                    pTVar39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pOVar40,(MethodInfo *)0x0);
                    if (pTVar39 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                      Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                                (pTVar39,param_1->___cornerPool_7,(MethodInfo *)0x0);
                      goto LAB_10e74b39;
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
LAB_10e74b89:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
