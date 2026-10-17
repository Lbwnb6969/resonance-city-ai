// RVA 0xe162a0 | Placemaker.GridGenerator$$IterateCluster
// PDB: GridGenerator_IterateCluster_mE0D6EE6333C24EC7F463E489DE96E2BBAAC23C63
// Body: [[10e162a0, 10e16501]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10227350 Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
// 1040e0d0 HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
// 1040f9e0 HexPatch_get_done_m318F4B36451CFF8C55C9C29EFC9EC174DE2F1676
// 10e10e90 GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
// 10e1652b FUN_10e1652b
// 10e17890 GridGenerator_IteratePatch_m2D1E08805727B48ACDCEA167F78886A7BC3C841B

void __cdecl
GridGenerator_IterateCluster_mE0D6EE6333C24EC7F463E489DE96E2BBAAC23C63
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *param_2,
          Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *param_3,MethodInfo *param_4)

{
  int iVar1;
  List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *pLVar2;
  List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *pLVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar5;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar6;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar7;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar8;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar9;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar10;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar11;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar12;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar13;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar15;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar16;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar17;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar18;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar19;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar20;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar21;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar22;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar23;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar24;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar25;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar26;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar27;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar28;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar29;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar30;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar31;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar32;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar33;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar34;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar35;
  undefined8 uVar36;
  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *pLVar37;
  uint uVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  bool bVar41;
  ushort uVar43;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar45;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar46;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar47;
  uint uVar48;
  byte bVar42;
  ushort uVar44;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLVar49;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLVar50;
  DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA *pDVar51;
  int iVar52;
  int iVar53;
  float fVar54;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar55;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar56;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar57;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar58;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar59;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar60;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar61;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar62;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar63;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar64;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar65;
  RangePositionInfo_tB46C25982A33E1DF36005E89A4A1EA3D397DB8BB RVar66;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar67;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar68;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar69;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar70;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar71;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar72;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_178;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_168;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_160;
  float fStack_158;
  float fStack_154;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_150;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fStack_148;
  float fStack_140;
  float fStack_13c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_138;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fStack_130;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_128;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_120;
  float fStack_118;
  float fStack_114;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_110;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fStack_108;
  float fStack_100;
  float fStack_fc;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_f8;
  float fStack_f0;
  float fStack_ec;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fStack_d8;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_bc;
  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *pLStack_b4;
  int iStack_b0;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLStack_ac;
  undefined4 local_a8;
  undefined8 uStack_a4;
  int local_9c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_98;
  float fStack_94;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLStack_90;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLStack_8c;
  undefined4 uStack_88;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_84;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_7c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_74;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLStack_6c;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLStack_68;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEStack_64;
  int iStack_60;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *local_5c;
  List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *pLStack_58;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_50;
  List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *local_4c;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLStack_48;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLStack_44;
  undefined1 local_3e [2];
  HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *local_3c;
  float local_38;
  uint local_34;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *local_30;
  float fStack_2c;
  undefined1 *puStack_24;
  undefined1 *local_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &__ehhandler__GridGenerator_IterateCluster_mE0D6EE6333C24EC7F463E489DE96E2BBAAC23C63;
  pvStack_1c = ExceptionList;
  local_20 = &stack0xfffffe60;
  ExceptionList = &pvStack_1c;
  puVar39 = &stack0xfffffffc;
  puVar40 = &stack0xfffffe60;
  if (DAT_1152266a == '\0') {
    ExceptionList = &pvStack_1c;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_Tisint2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_m7AABFAB0431C5CBED8FCBAC4BA67045FDE769382_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m95EC53E31E66F887D43D2F1506DA1E649CB1928E_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_tA610AA97890BF7F8C041401C4330AC7C6EF0C829_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m2618472E91E656C07209FD49A198A9423B162B5C_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m44E7616FCFAA9C699BEAA458BEEB093FAABABF94_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_IndexOf_mDCA30CF58A565E2FBB0839711BB1B10283B2CEE4_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mCBF9A935CABCC72FD9C8836CF896161DA6DB7324_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE2BE9738B91E1977329BEF4266A0F35679AADB74_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mE4AEA28BF3586911918C086B3A744C4E97C4A9F4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m09CA40A5136306FEEFD7553315B567BB4724F33C_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral414D9328FC79174B77C992F6B9E61A629B162223);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral9F3555B7BE9F4D4C4968FEED0D6078C41DEB64DE);
    DAT_1152266a = '\x01';
    puVar39 = puStack_24;
    puVar40 = local_20;
  }
  local_20 = puVar40;
  puStack_24 = puVar39;
  iVar60.___y_1 = local_34;
  iVar60.___x_0 = (int)local_30;
  iVar55.___y_1 = local_34;
  iVar55.___x_0 = (int)local_30;
  VVar30.___y_1 = VStack_150.___y_1;
  VVar30.___x_0 = VStack_150.___x_0;
  VVar29.___y_1 = VStack_150.___y_1;
  VVar29.___x_0 = VStack_150.___x_0;
  VVar25.___y_1 = VStack_74.___y_1;
  VVar25.___x_0 = VStack_74.___x_0;
  VVar24.___y_1 = VStack_74.___y_1;
  VVar24.___x_0 = VStack_74.___x_0;
  VVar20.___y_1 = VStack_7c.___y_1;
  VVar20.___x_0 = VStack_7c.___x_0;
  VVar19.___y_1 = VStack_7c.___y_1;
  VVar19.___x_0 = VStack_7c.___x_0;
  VVar15.___y_1 = VStack_bc.___y_1;
  VVar15.___x_0 = VStack_bc.___x_0;
  VVar61.___y_1 = VStack_bc.___y_1;
  VVar61.___x_0 = VStack_bc.___x_0;
  local_3e[0] = 0;
  local_3e[1] = 0;
  local_4c = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0;
  local_38 = 0.0;
  local_9c = 0;
  if (param_2 != (HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *)0x0) {
    if (param_2->___patchCount_3 < 3) {
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_3e,
                 (MethodInfo *)_stringLiteral414D9328FC79174B77C992F6B9E61A629B162223);
      local_14 = 0;
      iVar55 = GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
                         (param_1,param_2->___hexPos_0,(MethodInfo *)0x0);
      local_5c = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0;
      while( true ) {
        VVar29.___y_1 = VStack_150.___y_1;
        VVar29.___x_0 = VStack_150.___x_0;
        VVar24.___y_1 = VStack_74.___y_1;
        VVar24.___x_0 = VStack_74.___x_0;
        VVar19.___y_1 = VStack_7c.___y_1;
        VVar19.___x_0 = VStack_7c.___x_0;
        VVar61.___y_1 = VStack_bc.___y_1;
        VVar61.___x_0 = VStack_bc.___x_0;
        local_34 = iVar55.___y_1;
        local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)iVar55.___x_0;
        if ((int)(uint)param_2->___patchCount_3 <= (int)local_5c) break;
        if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
          iVar55.___y_1 = local_34;
          iVar55.___x_0 = (int)local_30;
        }
        local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)iVar55.___x_0;
        iVar55 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
                           (iVar55,(MethodInfo *)0x0);
        local_5c = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                   ((int)&local_5c->_padding_ + 1);
      }
      local_3c = (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)
                 ((param_2->___hexPos_0).___x_0 + (int)local_30);
      if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 !=
          (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
        iVar62.___y_1 = (param_2->___hexPos_0).___y_1 + local_34;
        iVar62.___x_0 = (int)local_3c;
        local_3c = (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)
                   Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                             ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                              param_1->___patchDict_10,iVar62,
                              Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                             );
        iVar55.___y_1 = local_34;
        iVar55.___x_0 = (int)local_30;
        VVar29.___y_1 = VStack_150.___y_1;
        VVar29.___x_0 = VStack_150.___x_0;
        VVar24.___y_1 = VStack_74.___y_1;
        VVar24.___x_0 = VStack_74.___x_0;
        VVar19.___y_1 = VStack_7c.___y_1;
        VVar19.___x_0 = VStack_7c.___x_0;
        VVar61.___y_1 = VStack_bc.___y_1;
        VVar61.___x_0 = VStack_bc.___x_0;
        if (local_3c != (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0) {
          bVar41 = HexPatch_get_done_m318F4B36451CFF8C55C9C29EFC9EC174DE2F1676
                             (local_3c,(MethodInfo *)0x0);
          if (!bVar41) {
            GridGenerator_IteratePatch_m2D1E08805727B48ACDCEA167F78886A7BC3C841B
                      (param_1,local_3c,(MethodInfo *)0x0);
            local_a8 = 0x5f1;
            local_9c = 1;
            FUN_10e1652b();
            return;
          }
          param_2->___patchCount_3 = param_2->___patchCount_3 + '\x01';
          local_a8 = 0x5f1;
          local_9c = 1;
          FUN_10e1652b();
          return;
        }
      }
    }
    else {
      VVar61 = VVar15;
      VVar19 = VVar20;
      VVar24 = VVar25;
      VVar29 = VVar30;
      iVar55 = iVar60;
      if (param_2->___vertIndexes_6 != (List_1_t985353431229C8151763A38589D03FBD829D85E5 *)0x0) {
        if (param_2->___vertIndexes_6->____size_2 == 0) {
          U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                    ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(local_3e + 1),
                     (MethodInfo *)_stringLiteral9F3555B7BE9F4D4C4968FEED0D6078C41DEB64DE);
          local_14 = 2;
          if ((ListPool_1_tA610AA97890BF7F8C041401C4330AC7C6EF0C829_il2cpp_TypeInfo_var->has_cctor
               != '\0') &&
             (ListPool_1_tA610AA97890BF7F8C041401C4330AC7C6EF0C829_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ListPool_1_tA610AA97890BF7F8C041401C4330AC7C6EF0C829_il2cpp_TypeInfo_var);
          }
          pDVar45 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                    ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                              (0x300,
                               ListPool_1_Get_m95EC53E31E66F887D43D2F1506DA1E649CB1928E_RuntimeMethod_var
                              );
          pDStack_50 = pDVar45;
          iVar56 = GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
                             (param_1,param_2->___hexPos_0,(MethodInfo *)0x0);
          iStack_60 = iVar56.___y_1;
          local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)iVar56.___x_0;
          pLStack_8c = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0;
          pLStack_44 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0;
          pLStack_48 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0;
          local_34 = 0;
          pLStack_90 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0;
          local_3c = (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)
                     (param_2->___hexPos_0).___x_0;
          pLStack_58 = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)
                       (param_2->___hexPos_0).___y_1;
          if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
            iVar56.___y_1 = iStack_60;
            iVar56.___x_0 = (int)local_30;
          }
          iStack_60 = iVar56.___y_1;
          local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)iVar56.___x_0;
          iVar63.___y_1 = (int)pLStack_58;
          iVar63.___x_0 = (int)local_3c;
          piVar46 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                              (&iStack_178,iVar63,(MethodInfo *)0x0);
          iVar57.___y_1 = iStack_60;
          iVar57.___x_0 = (int)local_30;
          uStack_c8._0_4_ = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)piVar46->___x_0;
          uStack_c8._4_4_ =
               (DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA *)piVar46->___y_1;
          local_3c = (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)piVar46->___z_2;
          fStack_2c = 0.0;
          pLVar49 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0;
          while( true ) {
            VVar29.___y_1 = VStack_150.___y_1;
            VVar29.___x_0 = VStack_150.___x_0;
            VVar31.___y_1 = VStack_150.___y_1;
            VVar31.___x_0 = VStack_150.___x_0;
            iStack_60 = iVar57.___y_1;
            local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)iVar57.___x_0;
            iVar55.___y_1 = local_34;
            iVar55.___x_0 = (int)local_30;
            VVar24.___y_1 = VStack_74.___y_1;
            VVar24.___x_0 = VStack_74.___x_0;
            VVar26.___y_1 = VStack_74.___y_1;
            VVar26.___x_0 = VStack_74.___x_0;
            VVar19.___y_1 = VStack_7c.___y_1;
            VVar19.___x_0 = VStack_7c.___x_0;
            VVar21.___y_1 = VStack_7c.___y_1;
            VVar21.___x_0 = VStack_7c.___x_0;
            VVar61.___y_1 = VStack_bc.___y_1;
            VVar61.___x_0 = VStack_bc.___x_0;
            VVar16.___y_1 = VStack_bc.___y_1;
            VVar16.___x_0 = VStack_bc.___x_0;
            pLStack_68 = pLStack_48;
            if (2 < (int)fStack_2c) break;
            VVar61 = VVar16;
            VVar19 = VVar21;
            VVar24 = VVar26;
            VVar29 = VVar31;
            if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10
                == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e172c7;
            iVar64.___y_1 = (param_2->___hexPos_0).___y_1 + iStack_60;
            iVar64.___x_0 = (param_2->___hexPos_0).___x_0 + (int)local_30;
            pEVar47 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                      Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                                ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                                 param_1->___patchDict_10,iVar64,
                                 Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                                );
            pEStack_64 = pEVar47;
            if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
            }
            iVar65.___y_1 = iStack_60;
            iVar65.___x_0 = (int)local_30;
            iVar57 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
                               (iVar65,(MethodInfo *)0x0);
            VVar32.___y_1 = VStack_150.___y_1;
            VVar32.___x_0 = VStack_150.___x_0;
            VVar29.___y_1 = VStack_150.___y_1;
            VVar29.___x_0 = VStack_150.___x_0;
            VVar27.___y_1 = VStack_74.___y_1;
            VVar27.___x_0 = VStack_74.___x_0;
            VVar24.___y_1 = VStack_74.___y_1;
            VVar24.___x_0 = VStack_74.___x_0;
            VVar22.___y_1 = VStack_7c.___y_1;
            VVar22.___x_0 = VStack_7c.___x_0;
            VVar19.___y_1 = VStack_7c.___y_1;
            VVar19.___x_0 = VStack_7c.___x_0;
            VVar17.___y_1 = VStack_bc.___y_1;
            VVar17.___x_0 = VStack_bc.___x_0;
            VVar61.___y_1 = VStack_bc.___y_1;
            VVar61.___x_0 = VStack_bc.___x_0;
            iStack_60 = iVar57.___y_1;
            iVar55.___y_1 = local_34;
            iVar55.___x_0 = iVar57.___x_0;
            iVar34.___y_1 = local_34;
            iVar34.___x_0 = iVar57.___x_0;
            if ((pEVar47 == (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0) ||
               (iVar52 = pEVar47->m_Items[0].___key_2, VVar61 = VVar17, VVar19 = VVar22,
               VVar24 = VVar27, VVar29 = VVar32, iVar55 = iVar34, iVar52 == 0)) goto LAB_10e172c7;
            pLStack_6c = *(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(iVar52 + 0xc);
            local_5c = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0;
            while( true ) {
              VVar29.___y_1 = VStack_150.___y_1;
              VVar29.___x_0 = VStack_150.___x_0;
              iStack_60 = iVar57.___y_1;
              local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)iVar57.___x_0;
              iVar55.___y_1 = local_34;
              iVar55.___x_0 = (int)local_30;
              VVar24.___y_1 = VStack_74.___y_1;
              VVar24.___x_0 = VStack_74.___x_0;
              VVar19.___y_1 = VStack_7c.___y_1;
              VVar19.___x_0 = VStack_7c.___x_0;
              VVar61.___y_1 = VStack_bc.___y_1;
              VVar61.___x_0 = VStack_bc.___x_0;
              if ((int)pLStack_6c <= (int)local_5c) break;
              pLVar2 = (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                       pEVar47->m_Items[0].___key_2;
              if (pLVar2 == (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)0x0)
              goto LAB_10e172c7;
              BVar58 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                 (pLVar2,(int)local_5c,
                                  List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                 );
              iVar55.___y_1 = local_34;
              iVar55.___x_0 = (int)local_30;
              VVar29.___y_1 = VStack_150.___y_1;
              VVar29.___x_0 = VStack_150.___x_0;
              VVar24.___y_1 = VStack_74.___y_1;
              VVar24.___x_0 = VStack_74.___x_0;
              VVar19.___y_1 = VStack_7c.___y_1;
              VVar19.___x_0 = VStack_7c.___x_0;
              VVar61.___y_1 = VStack_bc.___y_1;
              VVar61.___x_0 = VStack_bc.___x_0;
              pDVar51 = (DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA *)
                        BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              pLStack_58 = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)
                           BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              if ((fStack_2c == 0.0) ||
                 (((pLStack_58 != (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)uStack_c8 &&
                   (pDVar51 != uStack_c8._4_4_)) &&
                  (-(int)local_3c !=
                   (int)&pDVar51->m_Items[0].___flags_14 + (int)&pLStack_58[-1].____items_1)))) {
                uVar48 = 0xffffffff;
              }
              else {
                if (pDVar45 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                goto LAB_10e172c7;
                uVar48 = List_1_IndexOf_mD9D2A6EB4FC60AB4A20D441AC558BD32E6297FEF_gshared
                                   ((List_1_t13B1332790E09F181E14718B9800D8D500D6508A *)pDVar45,
                                    (RangePositionInfo_tB46C25982A33E1DF36005E89A4A1EA3D397DB8BB)
                                    BVar58,
                                    List_1_IndexOf_mDCA30CF58A565E2FBB0839711BB1B10283B2CEE4_RuntimeMethod_var
                                   );
              }
              uVar38 = local_34;
              VVar29.___y_1 = VStack_150.___y_1;
              VVar29.___x_0 = VStack_150.___x_0;
              VVar24.___y_1 = VStack_74.___y_1;
              VVar24.___x_0 = VStack_74.___x_0;
              VVar19.___y_1 = VStack_7c.___y_1;
              VVar19.___x_0 = VStack_7c.___x_0;
              VVar61.___y_1 = VStack_bc.___y_1;
              VVar61.___x_0 = VStack_bc.___x_0;
              if (uVar48 == 0xffffffff) {
                local_34 = local_34 + 1;
                iVar55.___y_1 = local_34;
                iVar55.___x_0 = (int)local_30;
                if (pDStack_50 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                goto LAB_10e172c7;
                RVar66.___rangeCounters_1 = pDVar51;
                RVar66.___curpos_0 = (BitSet_t36CD5E21CDE8972A6BCEF9E414933DD893966438 *)pLStack_58;
                List_1_Add_mF21FCE34343D965AE52941CB544C5FB1A22FA234_gshared
                          ((List_1_t13B1332790E09F181E14718B9800D8D500D6508A *)pDStack_50,RVar66,
                           List_1_Add_m2618472E91E656C07209FD49A198A9423B162B5C_RuntimeMethod_var);
                uVar48 = uVar38;
              }
              iVar55.___y_1 = local_34;
              iVar55.___x_0 = (int)local_30;
              VVar29.___y_1 = VStack_150.___y_1;
              VVar29.___x_0 = VStack_150.___x_0;
              VVar24.___y_1 = VStack_74.___y_1;
              VVar24.___x_0 = VStack_74.___x_0;
              VVar19.___y_1 = VStack_7c.___y_1;
              VVar19.___x_0 = VStack_7c.___x_0;
              VVar61.___y_1 = VStack_bc.___y_1;
              VVar61.___x_0 = VStack_bc.___x_0;
              if ((List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)param_2->___vertIndexes_6 ==
                  (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0) goto LAB_10e172c7;
              List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
                        ((List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)
                         param_2->___vertIndexes_6,SUB42(uVar48,0),
                         List_1_Add_m44E7616FCFAA9C699BEAA458BEEB093FAABABF94_RuntimeMethod_var);
              iVar57.___y_1 = iStack_60;
              iVar57.___x_0 = (int)local_30;
              local_5c = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                         ((int)&local_5c->_padding_ + 1);
              pEVar47 = pEStack_64;
              pDVar45 = pDStack_50;
            }
            iStack_178.___y_1 = (int)pLStack_8c;
            iStack_178.___x_0 = (int)pLStack_48;
            pLStack_90 = pLStack_8c;
            pLStack_8c = pLStack_44;
            fStack_2c = (float)((int)fStack_2c + 1);
            pLVar49 = pLStack_68;
            pLStack_48 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                         ((int)&pLStack_6c->_padding_ + (int)&pLStack_48->_padding_);
            pLStack_44 = pLStack_68;
          }
          (param_2->___patchVertOffsets_5).___x_0 = (int)pLStack_90;
          (param_2->___patchVertOffsets_5).___y_1 = (int)pLStack_8c;
          (param_2->___patchVertOffsets_5).___z_2 = (int)pLVar49;
          local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
          iVar55 = (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)((ulonglong)local_34 << 0x20);
          if (pDVar45 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
            pEStack_64 = pDVar45->___entries_1;
            while( true ) {
              if ((int)pEStack_64 <= (int)local_30) {
                DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                          (pDVar45,
                           ListPoolExtension_ReturnToPool_Tisint2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_m7AABFAB0431C5CBED8FCBAC4BA67045FDE769382_RuntimeMethod_var
                          );
                (&local_a8)[(int)local_38] = 0x5f1;
                local_9c = local_9c + 1;
                FUN_10e16910();
                return;
              }
              pLStack_58 = param_2->___relaxedVerts_7;
              if (pDVar45->___entries_1 <= local_30) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              fStack_2c = (float)(pDVar45->___buckets_0->m_Items[(int)local_30 * 2] -
                                 (param_2->___hexPos_0).___x_0);
              local_3c = (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)
                         (pDVar45->___buckets_0->m_Items[(int)local_30 * 2 + 1] -
                         (param_2->___hexPos_0).___y_1);
              if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (
                          GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var
                          );
              }
              iVar67.___y_1 = (int)local_3c;
              iVar67.___x_0 = (int)fStack_2c;
              fVar59 = GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
                                 (iVar67,(MethodInfo *)0x0);
              iVar55.___y_1 = local_34;
              iVar55.___x_0 = (int)local_30;
              VVar29.___y_1 = VStack_150.___y_1;
              VVar29.___x_0 = VStack_150.___x_0;
              VVar24.___y_1 = VStack_74.___y_1;
              VVar24.___x_0 = VStack_74.___x_0;
              VVar19.___y_1 = VStack_7c.___y_1;
              VVar19.___x_0 = VStack_7c.___x_0;
              VVar61.___y_1 = VStack_bc.___y_1;
              VVar61.___x_0 = VStack_bc.___x_0;
              if (pLStack_58 == (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0) break;
              List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                        (pLStack_58,fVar59,
                         List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_RuntimeMethod_var);
              local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                         ((int)&local_30->_padding_ + 1);
            }
          }
        }
        else {
          if (param_2->___relaxationSteps_2 == 0xff) {
            GridGenerator_UnmotivateClusterChildren_mB300EC8BB32EA947A751C1D01217C12F2DE58F33
                      (param_1,param_2,(MethodInfo *)0x0);
            param_2->___done_4 = true;
            ExceptionList = pvStack_1c;
            return;
          }
          iVar55 = GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
                             (param_1,param_2->___hexPos_0,(MethodInfo *)0x0);
          VVar29.___y_1 = VStack_150.___y_1;
          VVar29.___x_0 = VStack_150.___x_0;
          VVar24.___y_1 = VStack_74.___y_1;
          VVar24.___x_0 = VStack_74.___x_0;
          VVar19.___y_1 = VStack_7c.___y_1;
          VVar19.___x_0 = VStack_7c.___x_0;
          VVar61.___y_1 = VStack_bc.___y_1;
          VVar61.___x_0 = VStack_bc.___x_0;
          pLStack_44 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)iVar55.___y_1;
          local_34 = iVar55.___x_0;
          iVar55.___y_1 = local_34;
          iVar55.___x_0 = (int)local_30;
          if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 !=
              (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
            iVar68.___y_1 = (int)&pLStack_44->_padding_ + (param_2->___hexPos_0).___y_1;
            iVar68.___x_0 = (param_2->___hexPos_0).___x_0 + local_34;
            local_5c = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                       Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                                 ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                                  param_1->___patchDict_10,iVar68,
                                  Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                                 );
            if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
            }
            iVar69.___y_1 = (int)pLStack_44;
            iVar69.___x_0 = local_34;
            iVar55 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
                               (iVar69,(MethodInfo *)0x0);
            VVar29.___y_1 = VStack_150.___y_1;
            VVar29.___x_0 = VStack_150.___x_0;
            VVar24.___y_1 = VStack_74.___y_1;
            VVar24.___x_0 = VStack_74.___x_0;
            VVar19.___y_1 = VStack_7c.___y_1;
            VVar19.___x_0 = VStack_7c.___x_0;
            VVar61.___y_1 = VStack_bc.___y_1;
            VVar61.___x_0 = VStack_bc.___x_0;
            pLStack_44 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)iVar55.___y_1;
            local_34 = iVar55.___x_0;
            iVar55.___y_1 = local_34;
            iVar55.___x_0 = (int)local_30;
            if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10
                != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
              iVar70.___y_1 = (int)&pLStack_44->_padding_ + (param_2->___hexPos_0).___y_1;
              iVar70.___x_0 = local_34 + (param_2->___hexPos_0).___x_0;
              pLStack_ac = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                           Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                                     ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                                      param_1->___patchDict_10,iVar70,
                                      Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                                     );
              iVar8.___y_1 = (int)pLStack_44;
              iVar8.___x_0 = local_34;
              iVar60 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
                                 (iVar8,(MethodInfo *)0x0);
              iVar55.___y_1 = local_34;
              iVar55.___x_0 = (int)local_30;
              VVar29.___y_1 = VStack_150.___y_1;
              VVar29.___x_0 = VStack_150.___x_0;
              VVar24.___y_1 = VStack_74.___y_1;
              VVar24.___x_0 = VStack_74.___x_0;
              VVar19.___y_1 = VStack_7c.___y_1;
              VVar19.___x_0 = VStack_7c.___x_0;
              VVar61.___y_1 = VStack_bc.___y_1;
              VVar61.___x_0 = VStack_bc.___x_0;
              if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10
                  != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
                iVar71.___y_1 = iVar60.___y_1 + (param_2->___hexPos_0).___y_1;
                iVar71.___x_0 = (param_2->___hexPos_0).___x_0 + iVar60.___x_0;
                pLStack_44 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                             Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                                       ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                                        param_1->___patchDict_10,iVar71,
                                        Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                                       );
                iVar55.___y_1 = local_34;
                iVar55.___x_0 = (int)local_30;
                VVar33.___y_1 = VStack_150.___y_1;
                VVar33.___x_0 = VStack_150.___x_0;
                VVar29.___y_1 = VStack_150.___y_1;
                VVar29.___x_0 = VStack_150.___x_0;
                VVar28.___y_1 = VStack_74.___y_1;
                VVar28.___x_0 = VStack_74.___x_0;
                VVar24.___y_1 = VStack_74.___y_1;
                VVar24.___x_0 = VStack_74.___x_0;
                VVar23.___y_1 = VStack_7c.___y_1;
                VVar23.___x_0 = VStack_7c.___x_0;
                VVar19.___y_1 = VStack_7c.___y_1;
                VVar19.___x_0 = VStack_7c.___x_0;
                VVar18.___y_1 = VStack_bc.___y_1;
                VVar18.___x_0 = VStack_bc.___x_0;
                VVar61.___y_1 = VStack_bc.___y_1;
                VVar61.___x_0 = VStack_bc.___x_0;
                local_4c = param_2->___relaxedVerts_7;
                if (local_4c != (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0) {
                  local_34 = local_4c->____size_2;
                  iVar55.___y_1 = local_34;
                  pLVar3 = param_1->___deltas_14;
                  while (VVar61 = VVar18, VVar19 = VVar23, VVar24 = VVar28, VVar29 = VVar33,
                        pLVar3 != (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0) {
                    iVar55.___y_1 = local_34;
                    iVar55.___x_0 = (int)local_30;
                    iVar35.___y_1 = local_34;
                    iVar35.___x_0 = (int)local_30;
                    VVar29.___y_1 = VStack_150.___y_1;
                    VVar29.___x_0 = VStack_150.___x_0;
                    VVar19.___y_1 = VStack_7c.___y_1;
                    VVar19.___x_0 = VStack_7c.___x_0;
                    VVar61.___y_1 = VStack_bc.___y_1;
                    VVar61.___x_0 = VStack_bc.___x_0;
                    if ((int)local_34 <= pLVar3->____size_2) {
                      iStack_b0 = (param_2->___patchVertOffsets_5).___z_2;
                      uStack_c8._0_4_ =
                           (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)
                           (param_2->___patchVertOffsets_5).___x_0;
                      uStack_c8._4_4_ =
                           (DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA *)
                           (param_2->___patchVertOffsets_5).___y_1;
                      VVar61 = VStack_bc;
                      VVar19 = VStack_7c;
                      VVar24 = VStack_74;
                      VVar29 = VStack_150;
                      if (param_3 != (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0) {
                        do {
                          do {
                            bVar41 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared
                                               (param_3,
                                                Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var
                                               );
                            if ((!bVar41) || (param_2->___relaxationSteps_2 == 0xff)) {
                              ExceptionList = pvStack_1c;
                              return;
                            }
                            param_2->___relaxationSteps_2 = param_2->___relaxationSteps_2 + '\x01';
                            local_3c = (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0;
                            do {
                              pLVar49 = pLStack_ac;
                              uVar36 = uStack_c8;
                              pLVar50 = local_5c;
                              iVar55.___y_1 = local_34;
                              iVar55.___x_0 = (int)local_30;
                              VVar61 = VStack_bc;
                              VVar19 = VStack_7c;
                              VVar24 = VStack_74;
                              VVar29 = VStack_150;
                              if (local_5c ==
                                  (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
                              goto LAB_10e172c7;
                              pLStack_b4 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                                           local_5c->____syncRoot_4;
                              local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                                         param_2->___vertIndexes_6;
                              iVar55.___x_0 = (int)local_30;
                              pLStack_ac = pLStack_44;
                              iStack_60 = (int)(List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)
                                               uStack_c8;
                              uStack_c8 = CONCAT44(iStack_b0,uStack_c8._4_4_);
                              iVar52 = 0;
                              local_5c = pLVar49;
                              uStack_a4 = uVar36;
                              iStack_b0 = iStack_60;
                              pLStack_44 = pLVar50;
                              if (pLStack_b4 ==
                                  (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
                              goto LAB_10e172c7;
                              iVar53 = pLStack_b4->____size_2;
                              if (0 < iVar53) {
                                do {
                                  pLVar37 = pLStack_b4;
                                  bVar42 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                                     (pLStack_b4,iVar52,

                                                  List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                                  );
                                  iVar55.___y_1 = local_34;
                                  iVar55.___x_0 = (int)local_30;
                                  VVar61 = VStack_bc;
                                  VVar19 = VStack_7c;
                                  VVar24 = VStack_74;
                                  VVar29 = VStack_150;
                                  if (local_30 ==
                                      (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0)
                                  goto LAB_10e172c7;
                                  uVar43 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                                                     ((
                                                  List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *
                                                  )local_30,(uint)bVar42 + iStack_60,
                                                  List_1_get_Item_m09CA40A5136306FEEFD7553315B567BB4724F33C_RuntimeMethod_var
                                                  );
                                  pLStack_58 = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)
                                               (uint)uVar43;
                                  bVar42 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                                     (pLVar37,iVar52 + 1,

                                                  List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                                  );
                                  uVar43 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                                                     ((
                                                  List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *
                                                  )local_30,(uint)bVar42 + iStack_60,
                                                  List_1_get_Item_m09CA40A5136306FEEFD7553315B567BB4724F33C_RuntimeMethod_var
                                                  );
                                  pEStack_64 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1
                                                *)(uint)uVar43;
                                  bVar42 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                                     (pLVar37,iVar52 + 2,

                                                  List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                                  );
                                  uVar43 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                                                     ((
                                                  List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *
                                                  )local_30,(uint)bVar42 + iStack_60,
                                                  List_1_get_Item_m09CA40A5136306FEEFD7553315B567BB4724F33C_RuntimeMethod_var
                                                  );
                                  iVar1 = iVar52 + 3;
                                  iVar52 = iVar52 + 4;
                                  bVar42 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                                     (pLStack_b4,iVar1,

                                                  List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                                  );
                                  uVar44 = List_1_get_Item_m3923EAB2EC6624334DD50618C8C65B37CBF04BEF_inline
                                                     ((
                                                  List_1_tBBC4E953860E582A3E060CC10B1387AFC5A36FC5 *
                                                  )local_30,(uint)bVar42 + iStack_60,
                                                  List_1_get_Item_m09CA40A5136306FEEFD7553315B567BB4724F33C_RuntimeMethod_var
                                                  );
                                  pLStack_68 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                               (int)(short)pLStack_58;
                                  VVar61 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                     ((
                                                  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *
                                                  )local_4c,(int)pLStack_68,
                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                  );
                                  pLStack_6c = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                               (int)(short)pEStack_64;
                                  VStack_bc = VVar61;
                                  VVar61 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                     ((
                                                  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *
                                                  )local_4c,(int)pLStack_6c,
                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                  );
                                  pLVar3 = local_4c;
                                  pEStack_64 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1
                                                *)(int)(short)uVar43;
                                  VStack_74 = VVar61;
                                  VVar61 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                     ((
                                                  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *
                                                  )local_4c,(int)pEStack_64,
                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                  );
                                  pLStack_58 = (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)
                                               (int)(short)uVar44;
                                  VStack_7c = VVar61;
                                  VStack_84 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                        ((
                                                  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *
                                                  )pLVar3,(int)pLStack_58,
                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                  );
                                  pLStack_48 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                               ((VStack_74.___x_0 + VStack_bc.___x_0 +
                                                 VStack_7c.___x_0 + VStack_84.___x_0) *
                                               __real_3e800000);
                                  local_38 = (VStack_74.___y_1 + VStack_bc.___y_1 + VStack_7c.___y_1
                                             + VStack_84.___y_1) * __real_3e800000;
                                  fStack_2c = VStack_bc.___x_0 - (float)pLStack_48;
                                  pDStack_50 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                *)(VStack_bc.___y_1 - local_38);
                                  fStack_d0 = VStack_74.___x_0 - (float)pLStack_48;
                                  fStack_cc = VStack_74.___y_1 - local_38;
                                  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                       ->has_cctor != '\0') &&
                                     (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                      ->cctor_finished == 0)) {
                                    il2cpp_runtime_class_init
                                              (
                                              ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                              );
                                  }
                                  fVar72.___y_1 = fStack_cc;
                                  fVar72.___x_0 = fStack_d0;
                                  fVar59 = ExtraMath_Rotate2D270_m00D4CDB2568A3FC8E82C02FDC757C2F4E43BE847
                                                     (fVar72,(MethodInfo *)0x0);
                                  fStack_e0 = VStack_7c.___x_0 - (float)pLStack_48;
                                  fStack_2c = fStack_2c + fStack_d8.___x_0;
                                  fStack_d8.___y_1 = fVar59.___y_1;
                                  pDStack_50 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                *)((float)pDStack_50 + fStack_d8.___y_1);
                                  fStack_dc = VStack_7c.___y_1 - local_38;
                                  fVar9.___y_1 = fStack_dc;
                                  fVar9.___x_0 = fStack_e0;
                                  fStack_d8 = fVar59;
                                  fVar59 = ExtraMath_Rotate2D180_mCBAB607481B3DBAFDD1F1EA608747A4B1CCF66CC
                                                     (fVar9,(MethodInfo *)0x0);
                                  fStack_f0 = VStack_84.___x_0 - (float)pLStack_48;
                                  fStack_2c = fStack_e8.___x_0 + fStack_2c;
                                  fStack_e8.___y_1 = fVar59.___y_1;
                                  pDStack_50 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                *)(fStack_e8.___y_1 + (float)pDStack_50);
                                  fStack_ec = VStack_84.___y_1 - local_38;
                                  VVar4.___y_1 = fStack_ec;
                                  VVar4.___x_0 = fStack_f0;
                                  fStack_e8 = fVar59;
                                  VVar61 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                                                     (VVar4,(MethodInfo *)0x0);
                                  fStack_fc = VStack_f8.___y_1 + (float)pDStack_50;
                                  VStack_f8.___x_0 = VVar61.___x_0;
                                  fStack_100 = VStack_f8.___x_0 + fStack_2c;
                                  fVar59.___y_1 = fStack_fc;
                                  fVar59.___x_0 = fStack_100;
                                  VStack_f8 = VVar61;
                                  fStack_108 = math_normalize_mE8F2347FAC9C185C8F233533AA5CDCEB995F0718_inline
                                                         (fVar59,(MethodInfo *)0x0);
                                  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var
                                       ->has_cctor != '\0') &&
                                     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var
                                      ->cctor_finished == 0)) {
                                    il2cpp_runtime_class_init
                                              (
                                              GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var
                                              );
                                  }
                                  iVar55.___y_1 = local_34;
                                  iVar55.___x_0 = (int)local_30;
                                  pLVar49 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                            param_1->___deltas_14;
                                  pDStack_98 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                *)(*(float *)
                                                  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var
                                                  ->static_fields * fStack_108.___x_0);
                                  fStack_94 = *(float *)
                                                  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var
                                                  ->static_fields * fStack_108.___y_1;
                                  pDStack_50 = pDStack_98;
                                  fStack_2c = fStack_94;
                                  VVar61 = VStack_bc;
                                  VVar19 = VStack_7c;
                                  VVar24 = VStack_74;
                                  VVar29 = VStack_150;
                                  if (pLVar49 ==
                                      (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
                                  goto LAB_10e172c7;
                                  VVar61 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                     (pLVar49,(int)pLStack_68,

                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                  );
                                  fStack_118 = VStack_110.___x_0 +
                                               (((float)pLStack_48 + (float)pDStack_50) -
                                               VStack_bc.___x_0);
                                  VStack_110.___y_1 = VVar61.___y_1;
                                  fStack_114 = VStack_110.___y_1 +
                                               ((local_38 + fStack_2c) - VStack_bc.___y_1);
                                  VVar10.___y_1 = fStack_114;
                                  VVar10.___x_0 = fStack_118;
                                  VStack_110 = VVar61;
                                  List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                                            (pLVar49,(int)pLStack_68,VVar10,
                                             List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var
                                            );
                                  iVar55.___y_1 = local_34;
                                  iVar55.___x_0 = (int)local_30;
                                  pLStack_68 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                               param_1->___deltas_14;
                                  VVar61 = VStack_bc;
                                  VVar19 = VStack_7c;
                                  VVar24 = VStack_74;
                                  VVar29 = VStack_150;
                                  if (pLStack_68 ==
                                      (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
                                  goto LAB_10e172c7;
                                  VStack_128 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                         (pLStack_68,(int)pLStack_6c,

                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                  );
                                  fVar54 = fStack_94;
                                  VVar11.___y_1 = fStack_94;
                                  VVar11.___x_0 = (float)pDStack_98;
                                  VVar61 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                                                     (VVar11,(MethodInfo *)0x0);
                                  VStack_120.___y_1 = VVar61.___y_1;
                                  fStack_158 = VStack_128.___x_0 +
                                               (((float)pLStack_48 + VStack_120.___x_0) -
                                               VStack_74.___x_0);
                                  fStack_154 = VStack_128.___y_1 +
                                               ((local_38 + VStack_120.___y_1) - VStack_74.___y_1);
                                  VVar5.___y_1 = fStack_154;
                                  VVar5.___x_0 = fStack_158;
                                  VStack_120 = VVar61;
                                  List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                                            (pLStack_68,(int)pLStack_6c,VVar5,
                                             List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var
                                            );
                                  iVar55.___y_1 = local_34;
                                  iVar55.___x_0 = (int)local_30;
                                  pLStack_6c = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                               param_1->___deltas_14;
                                  VVar61 = VStack_bc;
                                  VVar19 = VStack_7c;
                                  VVar24 = VStack_74;
                                  VVar29 = VStack_150;
                                  if (pLStack_6c ==
                                      (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
                                  goto LAB_10e172c7;
                                  VStack_138 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                         (pLStack_6c,(int)pEStack_64,

                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                  );
                                  fVar12.___y_1 = fVar54;
                                  fVar12.___x_0 = (float)pDStack_98;
                                  fVar59 = ExtraMath_Rotate2D180_mCBAB607481B3DBAFDD1F1EA608747A4B1CCF66CC
                                                     (fVar12,(MethodInfo *)0x0);
                                  fStack_130.___y_1 = fVar59.___y_1;
                                  fStack_140 = VStack_138.___x_0 +
                                               (((float)pLStack_48 + fStack_130.___x_0) -
                                               VStack_7c.___x_0);
                                  fStack_13c = VStack_138.___y_1 +
                                               ((local_38 + fStack_130.___y_1) - VStack_7c.___y_1);
                                  VVar6.___y_1 = fStack_13c;
                                  VVar6.___x_0 = fStack_140;
                                  fStack_130 = fVar59;
                                  List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                                            (pLStack_6c,(int)pEStack_64,VVar6,
                                             List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var
                                            );
                                  iVar55.___y_1 = local_34;
                                  iVar55.___x_0 = (int)local_30;
                                  pLVar49 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                            param_1->___deltas_14;
                                  VVar61 = VStack_bc;
                                  VVar19 = VStack_7c;
                                  VVar24 = VStack_74;
                                  VVar29 = VStack_150;
                                  if (pLVar49 ==
                                      (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
                                  goto LAB_10e172c7;
                                  VVar61 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                     (pLVar49,(int)pLStack_58,

                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                  );
                                  fVar13.___y_1 = fStack_94;
                                  fVar13.___x_0 = (float)pDStack_98;
                                  VStack_150 = VVar61;
                                  fVar59 = ExtraMath_Rotate2D270_m00D4CDB2568A3FC8E82C02FDC757C2F4E43BE847
                                                     (fVar13,(MethodInfo *)0x0);
                                  fStack_148.___y_1 = fVar59.___y_1;
                                  VVar7.___y_1 = VStack_150.___y_1 +
                                                 ((local_38 + fStack_148.___y_1) - VStack_84.___y_1)
                                  ;
                                  VVar7.___x_0 = VStack_150.___x_0 +
                                                 (((float)pLStack_48 + fStack_148.___x_0) -
                                                 VStack_84.___x_0);
                                  fStack_148 = fVar59;
                                  List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                                            (pLVar49,(int)pLStack_58,VVar7,
                                             List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var
                                            );
                                } while (iVar52 < iVar53);
                              }
                              local_3c = (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)
                                         ((int)&local_3c->_padding_ + 1);
                            } while ((int)local_3c < 3);
                            iVar52 = 0;
                          } while ((int)local_34 < 1);
                          do {
                            VStack_168 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                   ((
                                                  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *
                                                  )local_4c,iVar52,
                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                  );
                            iVar55.___y_1 = local_34;
                            iVar55.___x_0 = (int)local_30;
                            VVar61 = VStack_bc;
                            VVar19 = VStack_7c;
                            VVar24 = VStack_74;
                            VVar29 = VStack_150;
                            if ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                param_1->___deltas_14 ==
                                (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
                            goto LAB_10e172c7;
                            VVar61 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                               ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                                param_1->___deltas_14,iVar52,
                                                List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                               );
                            VStack_160.___y_1 = VVar61.___y_1;
                            fVar54 = VStack_168.___x_0 + VStack_160.___x_0 * __real_3ecccccd;
                            iStack_178.___z_2 =
                                 (int)(VStack_168.___y_1 + VStack_160.___y_1 * __real_3ecccccd);
                            iStack_178.___y_1 = (int)fVar54;
                            VVar14.___y_1 = (float)iStack_178.___z_2;
                            VVar14.___x_0 = fVar54;
                            VStack_160 = VVar61;
                            List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                                      ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_4c,
                                       iVar52,VVar14,
                                       List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var
                                      );
                            iVar55.___y_1 = local_34;
                            iVar55.___x_0 = (int)local_30;
                            pLStack_8c = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0;
                            iVar53 = iVar52 + 1;
                            uStack_88 = 0;
                            VVar61 = VStack_bc;
                            VVar19 = VStack_7c;
                            VVar24 = VStack_74;
                            VVar29 = VStack_150;
                            if ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                param_1->___deltas_14 ==
                                (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0)
                            goto LAB_10e172c7;
                            List_1_set_Item_m0E40C7E017BB8ADBADBD6DE8947884FA4DEA2DE5_gshared
                                      ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                       param_1->___deltas_14,iVar52,
                                       (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)0x0,
                                       List_1_set_Item_mBF58896A1D4FE03DDF216AD7F78706A915F8878B_RuntimeMethod_var
                                      );
                            iVar52 = iVar53;
                          } while (iVar53 < (int)local_34);
                        } while( true );
                      }
                      break;
                    }
                    VStack_74.___x_0 = 0.0;
                    VStack_74.___y_1 = 0.0;
                    VVar24.___x_0 = 0.0;
                    VVar24.___y_1 = 0.0;
                    iVar55 = iVar35;
                    if (pLVar3 == (List_1_t4DAF4DE3AB09856B0B497582060C41D9B45A575D *)0x0) break;
                    List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_gshared
                              (pLVar3,(float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x0,
                               List_1_Add_m6A1559E0DC4F891A4219A889806E8724F3AE8463_RuntimeMethod_var
                              );
                    iVar55.___y_1 = local_34;
                    iVar55.___x_0 = (int)local_30;
                    VVar33.___y_1 = VStack_150.___y_1;
                    VVar33.___x_0 = VStack_150.___x_0;
                    VVar28.___y_1 = VStack_74.___y_1;
                    VVar28.___x_0 = VStack_74.___x_0;
                    VVar23.___y_1 = VStack_7c.___y_1;
                    VVar23.___x_0 = VStack_7c.___x_0;
                    VVar18.___y_1 = VStack_bc.___y_1;
                    VVar18.___x_0 = VStack_bc.___x_0;
                    pLVar3 = param_1->___deltas_14;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10e172c7:
  local_34 = iVar55.___y_1;
  local_30 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)iVar55.___x_0;
  VStack_bc = VVar61;
  VStack_7c = VVar19;
  VStack_74 = VVar24;
  VStack_150 = VVar29;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
