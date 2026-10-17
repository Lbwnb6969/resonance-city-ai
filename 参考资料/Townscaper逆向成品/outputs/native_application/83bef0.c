// RVA 0x83bef0 | Placemaker.Graphs.Flow$$Update
// PDB: Flow_Update_m61F4881962AA02A3CD56DE11EE775798318ADDCF
// Body: [[1083bef0, 1083c72c] [1083c734, 1083ddbf]]
// Direct callees:
// 10054800 List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
// 10066d80 List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
// 10068d00 Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10196010 _libm_sse2_sqrt_precise
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040f9e0 HexPatch_get_done_m318F4B36451CFF8C55C9C29EFC9EC174DE2F1676
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674550 Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10836300 ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
// 10838cb0 Flow_AddFlowTarget_mA92AC90CB2AD9628748E1DA445EE91AB978A8D8A
// 10839840 Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
// 1083bdf0 Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
// 1092cdc0 List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43fd0 Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
// 10a44170 Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Flow_Update_m61F4881962AA02A3CD56DE11EE775798318ADDCF
          (Flow_t39D4306CF6EAF469941A331619EEFD7CC66F9C46 *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar5;
  char *pcVar6;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar7;
  List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *pLVar8;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar9;
  HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *pHVar10;
  List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *pLVar11;
  Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49 *pDVar12;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar13;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar14;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar15;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar16;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar17;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar18;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar19;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar20;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar21;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar22;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 DVar23;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar24;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar25;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar26;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar27;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar28;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar29;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar30;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar31;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar32;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar33;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar34;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar35;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar36;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar37;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar38;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar39;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar40;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar41;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar42;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar43;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar44;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar45;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar46;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar47;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar48;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar49;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar50;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar51;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar52;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar53;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar54;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar55;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar56;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar57;
  bool bVar58;
  byte bVar59;
  int iVar60;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar61;
  Il2CppObject *pIVar62;
  Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *pDVar63;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar64;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *extraout_EAX;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar65;
  int iVar66;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar67;
  float fVar68;
  double dVar69;
  float fVar71;
  undefined1 auVar70 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar76;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar77;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar78;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar79;
  float fVar80;
  int local_4e0;
  int local_4d4;
  uint local_4cc;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4b8;
  float fStack_4ac;
  undefined8 local_4a8;
  float local_4a0;
  undefined8 local_49c;
  float local_494;
  undefined8 local_490;
  float local_488;
  undefined8 local_484;
  float local_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_468;
  float fStack_460;
  float fStack_45c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_458;
  float fStack_450;
  float fStack_44c;
  undefined1 local_448 [8];
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_418;
  int iStack_414;
  int iStack_410;
  bool bStack_40c;
  bool bStack_40b;
  undefined2 uStack_40a;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_408;
  undefined1 local_3f8 [48];
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_3c8;
  int iStack_3c4;
  int iStack_3c0;
  bool bStack_3bc;
  bool bStack_3bb;
  undefined2 uStack_3ba;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_3b8;
  undefined1 local_3a8 [8];
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_378;
  int iStack_374;
  int iStack_370;
  bool bStack_36c;
  bool bStack_36b;
  undefined2 uStack_36a;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_368;
  undefined1 local_358 [48];
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_328;
  int iStack_324;
  int iStack_320;
  bool bStack_31c;
  bool bStack_31b;
  undefined2 uStack_31a;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_318;
  undefined8 local_308;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined8 local_2e8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  String_t *local_2c4;
  int local_2c0;
  String_t *local_2bc;
  undefined1 local_2b8 [8];
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_298;
  float fStack_290;
  float fStack_28c;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_288;
  int iStack_284;
  int iStack_280;
  bool bStack_27c;
  bool bStack_27b;
  undefined2 uStack_27a;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_278;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_268;
  float fStack_25c;
  undefined8 local_254;
  float local_24c;
  undefined8 local_248;
  float local_240;
  undefined8 local_23c;
  float local_234;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_230;
  float fStack_224;
  undefined1 local_220 [8];
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  bool bStack_1e4;
  bool bStack_1e3;
  undefined2 uStack_1e2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1e0;
  undefined1 local_1d0 [48];
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_1a0;
  int iStack_19c;
  int iStack_198;
  bool bStack_194;
  bool bStack_193;
  undefined2 uStack_192;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_190;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_180;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_170;
  undefined1 local_160 [48];
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *local_130;
  int iStack_12c;
  int iStack_128;
  bool bStack_124;
  bool bStack_123;
  undefined2 uStack_122;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_120;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_110;
  float fStack_104;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_100;
  float fStack_f4;
  undefined8 local_ec;
  undefined8 local_e0;
  undefined8 local_d4;
  float local_cc;
  undefined8 local_c8;
  undefined8 local_bc;
  float local_b4;
  undefined8 local_b0;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 local_8c;
  float local_84;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_80;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_70;
  float fStack_64;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_60;
  float fStack_54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  float fStack_44;
  float local_34;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_30;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_20 [2];

  if (DAT_1151f40a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m2D824BA8DB5C08E453D1087232C69DB7E73AB353_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7ED1E524A3DE8D1223620101C9EB572E56434550_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m12161826693622E81B5DD33F2E8553106668DEB5_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f40a = '\x01';
  }
  memset(local_448,'\0',0x4c);
  memset(local_3f8,'\0',0x4c);
  memset(local_3a8,'\0',0x4c);
  memset(local_358,'\0',0x4c);
  BVar78.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
  BVar78.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
  BVar76.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
  BVar76.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
  BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
  BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
  if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
      (pGVar5 = param_1->___master_4->___graph_7, BVar77 = BVar76,
      pGVar5 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
     (pTVar61 = pGVar5->___corners_6, BVar77 = BVar78,
     pTVar61 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    iVar60 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                       (pTVar61,(MethodInfo *)0x0);
    local_4cc = 0;
    if (0 < iVar60) {
      do {
        BVar30.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
        BVar30.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
        BVar79.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
        BVar79.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
        if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            || (pGVar5 = param_1->___master_4->___graph_7, BVar77 = BVar79,
               pGVar5 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
           (pTVar61 = pGVar5->___corners_6, BVar77 = BVar30,
           pTVar61 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_1083ddbb;
        pTVar61 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (pTVar61,local_4cc,(MethodInfo *)0x0);
        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
        if (pTVar61 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_1083ddbb;
        pIVar62 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar61,
                             Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                            );
        BVar31.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
        BVar31.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
        if ((pIVar62 == (Il2CppObject *)0x0) ||
           (BVar77 = BVar31, pIVar62[4].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_1083ddbb;
        pcVar6 = (pIVar62[4].field0_0x0.klass)->namespaze;
        if (0 < (int)pcVar6) {
          iVar66 = 0;
          do {
            BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
            BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
            if (pIVar62[4].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_1083ddbb;
            pDVar63 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)local_220,
                                 (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                 pIVar62[4].field0_0x0.klass,iVar66,
                                 List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                );
            local_478 = (pDVar63->___delta_0).___x_0;
            fStack_474 = (pDVar63->___delta_0).___y_1;
            fStack_46c = (pDVar63->___smoothDelta_1).___y_1;
            local_4b8.___x_2 = (pDVar63->___pos_2).___x_0;
            local_4b8.___y_3 = (pDVar63->___pos_2).___y_1;
            local_468 = pDVar63->___pos_2;
            fStack_460 = (pDVar63->___invYPos_3).___x_0;
            fStack_45c = (pDVar63->___invYPos_3).___y_1;
            fStack_470 = (pDVar63->___smoothDelta_1).___y_1;
            local_458 = pDVar63->___smoothPos_4;
            fStack_450 = (float)pDVar63->___frame_5;
            fStack_44c = pDVar63->___time_6;
            local_1d0._16_4_ = (pDVar63->___pos_2).___x_0;
            local_1d0._20_4_ = (pDVar63->___pos_2).___y_1;
            local_1d0._24_4_ = (pDVar63->___invYPos_3).___x_0;
            local_1d0._28_4_ = (pDVar63->___invYPos_3).___y_1;
            local_1d0._32_4_ = (pDVar63->___smoothPos_4).___x_0;
            local_1d0._36_4_ = (pDVar63->___smoothPos_4).___y_1;
            local_1d0._40_4_ = pDVar63->___frame_5;
            local_1d0._44_4_ = pDVar63->___time_6;
            if (___real_00000000 < local_4b8.___x_2) {
              fStack_45c = fStack_450 / local_4b8.___x_2;
              local_4b8.___y_3 = (pDVar63->___smoothPos_4).___x_0 / local_4b8.___x_2;
              fStack_460 = (pDVar63->___smoothPos_4).___y_1 / local_4b8.___x_2;
              local_468 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                          ((ulonglong)(uint)local_4b8.___y_3 << 0x20);
              local_4b8.___x_2 = 0.0;
              local_240 = fStack_45c;
            }
            local_4b8.___z_4 = fStack_460;
            fStack_4ac = fStack_45c;
            fStack_46c = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                                   (fStack_470 + __real_3f800000,3.4028235e+38,(MethodInfo *)0x0);
            pVVar64 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                                (&local_180,(MethodInfo *)0x0);
            BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
            BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
            local_458.___x_0 = pVVar64->___x_2;
            local_458.___y_1 = pVVar64->___y_3;
            fStack_450 = pVVar64->___z_4;
            if (pIVar62[4].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_1083ddbb;
            DVar13.___delta_0.___y_1 = fStack_474;
            DVar13.___delta_0.___x_0 = local_478;
            DVar13.___smoothDelta_1.___x_0 = fStack_470;
            DVar13.___smoothDelta_1.___y_1 = fStack_46c;
            DVar13.___pos_2.___x_0 = local_4b8.___x_2;
            DVar13.___pos_2.___y_1 = local_4b8.___y_3;
            DVar13.___invYPos_3.___x_0 = local_4b8.___z_4;
            DVar13.___invYPos_3.___y_1 = fStack_4ac;
            DVar13.___smoothPos_4.___x_0 = (float)local_458.___x_0;
            DVar13.___smoothPos_4.___y_1 = (float)local_458.___y_1;
            DVar13.___frame_5 = (int)fStack_450;
            DVar13.___time_6 = fStack_44c;
            List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                      ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                       pIVar62[4].field0_0x0.klass,iVar66,DVar13,
                       List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var);
            BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
            BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
            iVar66 = iVar66 + 1;
          } while (iVar66 < (int)pcVar6);
          if (pIVar62[4].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_1083ddbb;
          pDVar63 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                              ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)local_220,
                               (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                               pIVar62[4].field0_0x0.klass,0,
                               List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                              );
          local_2f8 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
                      (pDVar63->___delta_0).___x_0;
          fStack_2f4 = (pDVar63->___delta_0).___y_1;
          fStack_2f0 = (pDVar63->___smoothDelta_1).___x_0;
          fStack_2ec = (pDVar63->___smoothDelta_1).___y_1;
          local_268.___x_2 = (pDVar63->___smoothPos_4).___x_0;
          local_268.___y_3 = (pDVar63->___smoothPos_4).___y_1;
          local_2d8 = pDVar63->___smoothPos_4;
          local_268.___z_4 = (float)pDVar63->___frame_5;
          fStack_25c = pDVar63->___time_6;
          local_100.___x_2 = (pDVar63->___pos_2).___x_0;
          local_100.___y_3 = (pDVar63->___pos_2).___y_1;
          local_100.___z_4 = (pDVar63->___invYPos_3).___x_0;
          fStack_f4 = (pDVar63->___invYPos_3).___y_1;
          local_4e0 = 1;
          local_4b8.___x_2 = (float)local_2f8;
          local_4b8.___y_3 = fStack_2f4;
          local_4b8.___z_4 = fStack_2f0;
          fStack_4ac = fStack_2ec;
          fStack_2d0 = local_268.___z_4;
          fStack_2cc = fStack_25c;
          if (1 < (int)pcVar6) {
            do {
              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
              local_4b8.___x_2 = (float)local_2f8;
              local_4b8.___y_3 = fStack_2f4;
              local_4b8.___z_4 = fStack_2f0;
              fStack_4ac = fStack_2ec;
              fStack_2d0 = local_268.___z_4;
              fStack_2cc = fStack_25c;
              if (pIVar62[4].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_1083ddbb;
              pDVar63 = List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_inline
                                  ((Data_t934275D962DE52AB58371FD10FD32C8F3B3C4408 *)local_220,
                                   (List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                   pIVar62[4].field0_0x0.klass,local_4e0,
                                   List_1_get_Item_m8033544F962F5345A561345C3A32428D42A18C42_RuntimeMethod_var
                                  );
              local_2b8._0_4_ = (pDVar63->___delta_0).___x_0;
              local_2b8._4_4_ = (pDVar63->___delta_0).___y_1;
              fStack_2b0 = (pDVar63->___smoothDelta_1).___x_0;
              fStack_2ac = (pDVar63->___smoothDelta_1).___y_1;
              local_70.___x_2 = (pDVar63->___pos_2).___x_0;
              local_70.___y_3 = (pDVar63->___pos_2).___y_1;
              local_70.___z_4 = (pDVar63->___invYPos_3).___x_0;
              fStack_64 = (pDVar63->___invYPos_3).___y_1;
              local_110.___x_2 = (pDVar63->___smoothPos_4).___x_0;
              local_110.___y_3 = (pDVar63->___smoothPos_4).___y_1;
              local_298 = pDVar63->___smoothPos_4;
              fStack_290 = (float)pDVar63->___frame_5;
              fStack_28c = pDVar63->___time_6;
              local_230.___x_2 = (float)local_2b8._0_4_;
              local_230.___y_3 = (float)local_2b8._4_4_;
              local_230.___z_4 = fStack_2b0;
              fStack_224 = fStack_2ac;
              local_110.___z_4 = fStack_290;
              fStack_104 = fStack_28c;
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar58 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                 ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                  local_4b8.___x_2,
                                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,
                                  (MethodInfo *)0x0);
              pVVar67 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)local_4b8.___x_2;
              fVar80 = local_4b8.___y_3;
              fVar68 = local_4b8.___z_4;
              fVar71 = fStack_4ac;
              fVar72 = local_268.___x_2;
              fVar73 = local_268.___y_3;
              fVar74 = local_268.___z_4;
              fVar75 = fStack_25c;
              if (bVar58) {
                if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
                }
                bVar58 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                                   ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                    local_230.___x_2,
                                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0,
                                    (MethodInfo *)0x0);
                pVVar67 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)local_4b8.___x_2;
                fVar80 = local_4b8.___y_3;
                fVar68 = local_4b8.___z_4;
                fVar71 = fStack_4ac;
                fVar72 = local_268.___x_2;
                fVar73 = local_268.___y_3;
                fVar74 = local_268.___z_4;
                fVar75 = fStack_25c;
                if (bVar58) {
                  local_50.___x_2 = local_4b8.___z_4;
                  local_50.___y_3 = local_4b8.___z_4;
                  local_50.___z_4 = local_4b8.___z_4;
                  fStack_44 = local_4b8.___z_4;
                  local_60.___x_2 = local_230.___z_4;
                  local_60.___y_3 = local_230.___z_4;
                  local_60.___z_4 = local_230.___z_4;
                  fStack_54 = local_230.___z_4;
                  if (local_4b8.___z_4 - local_230.___z_4 <= 0.0) {
                    if (local_4b8.___z_4 - local_230.___z_4 < 0.0) {
                      pVVar64 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                          (&local_170,(MethodInfo *)0x0);
                      local_490._0_4_ = pVVar64->___x_2;
                      local_490._4_4_ = pVVar64->___y_3;
                      local_494 = pVVar64->___z_4;
                      local_298.___x_0 = local_298.___x_0 - (float)local_490;
                      local_49c._0_4_ = pVVar64->___x_2;
                      local_49c._4_4_ = pVVar64->___y_3;
                      fStack_290 = fStack_290 - local_494;
                      local_298.___y_1 = local_298.___y_1 - local_490._4_4_;
                      local_488 = local_494;
                      local_484 = local_490;
                      local_47c = local_494;
                      local_24c = fStack_290;
                      fVar80 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                                         (fStack_2ac,local_50.___x_2 + __real_3f800000,
                                          (MethodInfo *)0x0);
                      fStack_2ac = (float)((int)fVar80 & 0xffff);
                      local_110.___x_2 = local_298.___x_0;
                      local_110.___y_3 = local_298.___y_1;
                      local_110.___z_4 = fStack_290;
                      fStack_104 = fStack_28c;
                      local_230.___x_2 = (float)local_2b8._0_4_;
                      local_230.___y_3 = (float)local_2b8._4_4_;
                      local_230.___z_4 = fStack_2b0;
                      pVVar67 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)local_4b8.___x_2;
                      fVar80 = local_4b8.___y_3;
                      fVar68 = local_4b8.___z_4;
                      fVar71 = fStack_4ac;
                      fVar72 = local_268.___x_2;
                      fVar73 = local_268.___y_3;
                      fVar74 = local_268.___z_4;
                      fVar75 = fStack_25c;
                      fStack_224 = fStack_2ac;
                    }
                  }
                  else {
                    pVVar64 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                        (&local_80,(MethodInfo *)0x0);
                    local_4a8._0_4_ = pVVar64->___x_2;
                    local_4a8._4_4_ = pVVar64->___y_3;
                    local_4a0 = pVVar64->___z_4;
                    local_2d8.___x_0 = local_2d8.___x_0 + (float)local_4a8;
                    fStack_2d0 = fStack_2d0 + local_4a0;
                    local_2d8.___y_1 = local_2d8.___y_1 + local_4a8._4_4_;
                    local_308 = local_4a8;
                    local_234 = fStack_2d0;
                    fVar80 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14
                                       (fStack_2ec,local_60.___x_2 + __real_3f800000,
                                        (MethodInfo *)0x0);
                    fStack_2ec = (float)((int)fVar80 & 0xffff);
                    pVVar67 = local_2f8;
                    fVar80 = fStack_2f4;
                    fVar68 = fStack_2f0;
                    fVar71 = fStack_2ec;
                    fVar72 = local_2d8.___x_0;
                    fVar73 = local_2d8.___y_1;
                    fVar74 = fStack_2d0;
                    fVar75 = fStack_2cc;
                  }
                }
              }
              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
              if (pIVar62[4].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_1083ddbb;
              DVar14.___delta_0.___y_1 = fVar80;
              DVar14.___delta_0.___x_0 = (float)pVVar67;
              DVar14.___smoothDelta_1.___x_0 = fVar68;
              DVar14.___smoothDelta_1.___y_1 = fVar71;
              DVar14.___pos_2.___x_0 = local_100.___x_2;
              DVar14.___pos_2.___y_1 = local_100.___y_3;
              DVar14.___invYPos_3.___x_0 = local_100.___z_4;
              DVar14.___invYPos_3.___y_1 = fStack_f4;
              DVar14.___smoothPos_4.___x_0 = fVar72;
              DVar14.___smoothPos_4.___y_1 = fVar73;
              DVar14.___frame_5 = (int)fVar74;
              DVar14.___time_6 = fVar75;
              List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                        ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                         pIVar62[4].field0_0x0.klass,local_4e0 + -1,DVar14,
                         List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                        );
              local_4e0 = local_4e0 + 1;
              local_2f8 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)local_230.___x_2;
              fStack_2f4 = local_230.___y_3;
              fStack_2f0 = local_230.___z_4;
              fStack_2ec = fStack_224;
              local_100.___x_2 = local_70.___x_2;
              local_100.___y_3 = local_70.___y_3;
              local_100.___z_4 = local_70.___z_4;
              fStack_f4 = fStack_64;
              local_268.___x_2 = local_110.___x_2;
              local_268.___y_3 = local_110.___y_3;
              local_268.___z_4 = local_110.___z_4;
              fStack_25c = fStack_104;
              local_2d8.___y_1 = local_110.___y_3;
              local_2d8.___x_0 = local_110.___x_2;
              local_4b8.___x_2 = local_230.___x_2;
              local_4b8.___y_3 = local_230.___y_3;
              local_4b8.___z_4 = local_230.___z_4;
              fStack_4ac = fStack_224;
              fStack_2d0 = local_110.___z_4;
              fStack_2cc = fStack_104;
            } while (local_4e0 < (int)pcVar6);
          }
          BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
          BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
          local_2f8 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)local_4b8.___x_2;
          fStack_2f4 = local_4b8.___y_3;
          fStack_2f0 = local_4b8.___z_4;
          fStack_2ec = fStack_4ac;
          local_268.___z_4 = fStack_2d0;
          fStack_25c = fStack_2cc;
          if (pIVar62[4].field0_0x0.klass == (Il2CppClass *)0x0) goto LAB_1083ddbb;
          DVar15.___delta_0.___y_1 = local_4b8.___y_3;
          DVar15.___delta_0.___x_0 = local_4b8.___x_2;
          DVar15.___smoothDelta_1.___x_0 = local_4b8.___z_4;
          DVar15.___smoothDelta_1.___y_1 = fStack_4ac;
          DVar15.___pos_2.___x_0 = local_100.___x_2;
          DVar15.___pos_2.___y_1 = local_100.___y_3;
          DVar15.___invYPos_3.___x_0 = local_100.___z_4;
          DVar15.___invYPos_3.___y_1 = fStack_f4;
          DVar15.___smoothPos_4.___x_0 = local_268.___x_2;
          DVar15.___smoothPos_4.___y_1 = local_268.___y_3;
          DVar15.___frame_5 = (int)fStack_2d0;
          DVar15.___time_6 = fStack_2cc;
          List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                    ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)pIVar62[4].field0_0x0.klass
                     ,(int)(pcVar6 + -1),DVar15,
                     List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var);
        }
        local_4cc = local_4cc + 1;
      } while ((int)local_4cc < iVar60);
    }
    pTVar61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                         (MethodInfo *)0x0);
    BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
    BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
    if (pTVar61 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar60 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                         (pTVar61,(MethodInfo *)0x0);
      while (iVar60 = iVar60 + -1, -1 < iVar60) {
        pTVar61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                             (MethodInfo *)0x0);
        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
        if (pTVar61 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_1083ddbb;
        pTVar61 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                            (pTVar61,iVar60,(MethodInfo *)0x0);
        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
        if (pTVar61 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_1083ddbb;
        pTVar61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar61,
                             (MethodInfo *)0x0);
        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
        if (pTVar61 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_1083ddbb;
        pVVar64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                            (&local_180,pTVar61,(MethodInfo *)0x0);
        uVar1 = pVVar64->___x_2;
        uVar3 = pVVar64->___y_3;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_170,(float)uVar1,(float)uVar3,pVVar64->___z_4,(MethodInfo *)0x0);
        Flow_AddFlowTarget_mA92AC90CB2AD9628748E1DA445EE91AB978A8D8A
                  (param_1,*extraout_EAX,(MethodInfo *)0x0);
      }
      BVar34.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
      BVar34.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
      BVar33.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
      BVar33.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
      BVar32.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
      BVar32.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
      BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
      BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
      pWVar7 = param_1->___master_4;
      if ((pWVar7 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pGVar5 = pWVar7->___graph_7, BVar77 = BVar32,
         pGVar5 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
        uVar2 = (pGVar5->___bounds_28).___c1_1.___y_1;
        uVar4 = (pGVar5->___bounds_28).___c1_1.___z_2;
        fStack_2f4 = (float)((pGVar5->___bounds_28).___c0_0.___y_1 + -0x48);
        fStack_2f0 = (float)((pGVar5->___bounds_28).___c0_0.___z_2 + -0x48);
        fStack_2ec = (float)((pGVar5->___bounds_28).___c1_1.___x_0 + 0x48);
        local_2f8 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)
                    ((pGVar5->___bounds_28).___c0_0.___x_0 + -0x48);
        local_2e8 = CONCAT44(uVar4 + 0x48,uVar2 + 0x48);
        fStack_474 = (float)((pGVar5->___bounds_28).___c0_0.___y_1 + -0x12);
        fStack_470 = (float)((pGVar5->___bounds_28).___c0_0.___z_2 + -0x12);
        local_478 = (float)((pGVar5->___bounds_28).___c0_0.___x_0 + -0x12);
        fStack_46c = (float)((pGVar5->___bounds_28).___c1_1.___x_0 + 0x12);
        local_468.___y_1 = (float)(uVar4 + 0x12);
        local_468.___x_0 = (float)(uVar2 + 0x12);
        BVar77 = BVar33;
        if ((pWVar7->___grid_5 != (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0) &&
           (pLVar8 = pWVar7->___grid_5->___patches_9, BVar77 = BVar34,
           pLVar8 != (List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *)0x0)) {
          local_2c0 = pLVar8->____size_2;
          local_4cc = 0;
          if (0 < local_2c0) {
            do {
              BVar37.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
              BVar37.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
              BVar36.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
              BVar36.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
              BVar35.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
              BVar35.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
              if (((param_1->___master_4 ==
                    (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                  (pGVar9 = param_1->___master_4->___grid_5, BVar77 = BVar35,
                  pGVar9 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)) ||
                 (pLVar8 = pGVar9->___patches_9, BVar77 = BVar36,
                 pLVar8 == (List_1_t927A37FDB2886AACED2696AF8B9C469E7A7CCCEC *)0x0))
              goto LAB_1083ddbb;
              if ((uint)pLVar8->____size_2 <= local_4cc) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              pHVar10 = *(HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 **)
                         (pLVar8->____items_1 + local_4cc * 4 + 0x10);
              BVar77 = BVar37;
              if (pHVar10 == (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0)
              goto LAB_1083ddbb;
              bVar58 = HexPatch_get_done_m318F4B36451CFF8C55C9C29EFC9EC174DE2F1676
                                 (pHVar10,(MethodInfo *)0x0);
              if (bVar58) {
                iVar29 = pHVar10->___hexPos_0;
                if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
                }
                piVar65 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                    (&local_30,iVar29,(MethodInfo *)0x0);
                local_308._0_4_ = piVar65->___x_0;
                local_308._4_4_ = piVar65->___y_1;
                iVar60 = piVar65->___z_2;
                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            );
                }
                iVar24.___c0_0.___y_1 = (int)fStack_2f4;
                iVar24.___c0_0.___x_0 = (int)local_2f8;
                iVar24.___c0_0.___z_2 = (int)fStack_2f0;
                iVar24.___c1_1.___x_0 = (int)fStack_2ec;
                iVar24.___c1_1.___y_1 = (int)local_2e8;
                iVar24.___c1_1.___z_2 = (int)((ulonglong)local_2e8 >> 0x20);
                iVar28.___z_2 = iVar60;
                iVar28.___x_0 = (int)local_308;
                iVar28.___y_1 = local_308._4_4_;
                bVar58 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                                   (iVar24,iVar28,(MethodInfo *)0x0);
                BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                if (bVar58) {
                  if (pHVar10->___quads_2 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0
                     ) goto LAB_1083ddbb;
                  iVar60 = pHVar10->___quads_2->____size_2;
                  local_308 = CONCAT44(local_308._4_4_,iVar60);
                  local_4d4 = 0;
                  if (0 < iVar60) {
                    do {
                      BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                      BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                      pLVar11 = (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                pHVar10->___verts_3;
                      if (pHVar10->___quads_2 ==
                          (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
                      goto LAB_1083ddbb;
                      bVar59 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                         (pHVar10->___quads_2,local_4d4,
                                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                         );
                      BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                      BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                      if (pLVar11 == (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)0x0)
                      goto LAB_1083ddbb;
                      BVar76 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                         (pLVar11,(uint)bVar59,
                                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                         );
                      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                                  );
                      }
                      piVar65 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                                          (local_20,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)
                                                    BVar76,(MethodInfo *)0x0);
                      iVar28 = *piVar65;
                      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                  );
                      }
                      iVar25.___c0_0.___y_1 = (int)fStack_474;
                      iVar25.___c0_0.___x_0 = (int)local_478;
                      iVar25.___c0_0.___z_2 = (int)fStack_470;
                      iVar25.___c1_1.___x_0 = (int)fStack_46c;
                      iVar25.___c1_1.___y_1 = (int)local_468.___x_0;
                      iVar25.___c1_1.___z_2 = (int)local_468.___y_1;
                      bVar58 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                                         (iVar25,iVar28,(MethodInfo *)0x0);
                      BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                      BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                      if (bVar58) {
                        pLVar11 = (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                  pHVar10->___verts_3;
                        if (pHVar10->___quads_2 ==
                            (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
                        goto LAB_1083ddbb;
                        bVar59 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                           (pHVar10->___quads_2,local_4d4 + 1,
                                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                           );
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (pLVar11 == (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)0x0)
                        goto LAB_1083ddbb;
                        BVar77 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                           (pLVar11,(uint)bVar59,
                                            List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                           );
                        local_2bc = BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
                        local_2c8 = (float)BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                        pLVar11 = (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                  pHVar10->___verts_3;
                        if (pHVar10->___quads_2 ==
                            (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
                        goto LAB_1083ddbb;
                        bVar59 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                           (pHVar10->___quads_2,local_4d4 + 2,
                                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                           );
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (pLVar11 == (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)0x0)
                        goto LAB_1083ddbb;
                        BVar78 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                           (pLVar11,(uint)bVar59,
                                            List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                           );
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        local_2c4 = BVar78.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
                        pLVar11 = (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                  pHVar10->___verts_3;
                        if (pHVar10->___quads_2 ==
                            (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0)
                        goto LAB_1083ddbb;
                        bVar59 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                           (pHVar10->___quads_2,local_4d4 + 3,
                                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                           );
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (pLVar11 == (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)0x0)
                        goto LAB_1083ddbb;
                        BVar79 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                           (pLVar11,(uint)bVar59,
                                            List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                           );
                        memset(local_448,'\0',0x4c);
                        memset(local_3f8,'\0',0x4c);
                        memset(local_3a8,'\0',0x4c);
                        memset(local_358,'\0',0x4c);
                        BVar39.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar39.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        BVar38.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar38.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (((param_1->___master_4 ==
                              (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                            (pGVar5 = param_1->___master_4->___graph_7, BVar77 = BVar38,
                            pGVar5 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
                           (pDVar12 = (Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49 *)
                                      pGVar5->___cornerDict_16, BVar77 = BVar39,
                           pDVar12 == (Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49 *)0x0)
                           ) goto LAB_1083ddbb;
                        bVar58 = Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265
                                           (pDVar12,(
                                                  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                                  BVar76,(int *)&local_418,
                                            Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                                           );
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (bVar58) {
                          if (local_418 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                          goto LAB_1083ddbb;
                          pTVar61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)local_418,(MethodInfo *)0x0);
                          BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          if (pTVar61 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          goto LAB_1083ddbb;
                          pVVar64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                              (&local_70,pTVar61,(MethodInfo *)0x0);
                          local_4a8._0_4_ = pVVar64->___x_2;
                          local_4a8._4_4_ = pVVar64->___y_3;
                          local_4a0 = pVVar64->___z_4;
                          pVVar64 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                              (&local_60,(MethodInfo *)0x0);
                          BVar40.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar40.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          local_b0._0_4_ = pVVar64->___x_2;
                          local_b0._4_4_ = pVVar64->___y_3;
                          local_b4 = pVVar64->___z_4;
                          local_bc._0_4_ = pVVar64->___x_2;
                          local_bc._4_4_ = pVVar64->___y_3;
                          local_408.___z_4 = local_b4 * __real_3f000000 + local_4a0;
                          local_408.___y_3 =
                               (float)local_b0._4_4_ * __real_3f000000 + local_4a8._4_4_;
                          local_408.___x_2 =
                               (float)(undefined4)local_b0 * __real_3f000000 + (float)local_4a8;
                          local_98 = local_b0;
                          local_34 = local_408.___z_4;
                          if ((local_418 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             || (BVar77 = BVar40,
                                local_418->___flowDatas_8 ==
                                (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                          goto LAB_1083ddbb;
                          iStack_414 = local_418->___flowDatas_8->____size_2;
                        }
                        BVar42.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar42.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        BVar41.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar41.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (((param_1->___master_4 ==
                              (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                            (pGVar5 = param_1->___master_4->___graph_7, BVar77 = BVar41,
                            pGVar5 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
                           (pDVar12 = (Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49 *)
                                      pGVar5->___cornerDict_16, BVar77 = BVar42,
                           pDVar12 == (Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49 *)0x0)
                           ) goto LAB_1083ddbb;
                        VVar26.___y_1 = (float)local_2bc;
                        VVar26.___x_0 = local_2c8;
                        bVar58 = Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265
                                           (pDVar12,VVar26,(int *)&local_3c8,
                                            Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                                           );
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (bVar58) {
                          if (local_3c8 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                          goto LAB_1083ddbb;
                          pTVar61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)local_3c8,(MethodInfo *)0x0);
                          BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          if (pTVar61 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          goto LAB_1083ddbb;
                          pVVar64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                              (&local_50,pTVar61,(MethodInfo *)0x0);
                          local_49c._0_4_ = pVVar64->___x_2;
                          local_49c._4_4_ = pVVar64->___y_3;
                          local_494 = pVVar64->___z_4;
                          pVVar64 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                              (&local_110,(MethodInfo *)0x0);
                          BVar43.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar43.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          local_c8._0_4_ = pVVar64->___x_2;
                          local_c8._4_4_ = pVVar64->___y_3;
                          local_cc = pVVar64->___z_4;
                          local_d4._0_4_ = pVVar64->___x_2;
                          local_d4._4_4_ = pVVar64->___y_3;
                          local_3b8.___z_4 = local_cc * __real_3f000000 + local_494;
                          local_3b8.___y_3 =
                               (float)local_c8._4_4_ * __real_3f000000 + local_49c._4_4_;
                          local_3b8.___x_2 =
                               (float)(undefined4)local_c8 * __real_3f000000 + (float)local_49c;
                          local_a4 = local_c8;
                          local_80.___z_4 = local_3b8.___z_4;
                          if ((local_3c8 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             || (BVar77 = BVar43,
                                local_3c8->___flowDatas_8 ==
                                (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                          goto LAB_1083ddbb;
                          iStack_3c4 = local_3c8->___flowDatas_8->____size_2;
                        }
                        BVar45.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar45.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        BVar44.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar44.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (((param_1->___master_4 ==
                              (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                            (pGVar5 = param_1->___master_4->___graph_7, BVar77 = BVar44,
                            pGVar5 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
                           (pDVar12 = (Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49 *)
                                      pGVar5->___cornerDict_16, BVar77 = BVar45,
                           pDVar12 == (Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49 *)0x0)
                           ) goto LAB_1083ddbb;
                        VVar27.___y_1 = (float)local_2c4;
                        VVar27.___x_0 = (float)BVar78.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                        bVar58 = Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265
                                           (pDVar12,VVar27,(int *)&local_378,
                                            Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                                           );
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (bVar58) {
                          if (local_378 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                          goto LAB_1083ddbb;
                          pTVar61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)local_378,(MethodInfo *)0x0);
                          BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          if (pTVar61 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          goto LAB_1083ddbb;
                          pVVar64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                              (&local_100,pTVar61,(MethodInfo *)0x0);
                          local_490._0_4_ = pVVar64->___x_2;
                          local_490._4_4_ = pVVar64->___y_3;
                          local_488 = pVVar64->___z_4;
                          pVVar64 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                              (&local_230,(MethodInfo *)0x0);
                          BVar46.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar46.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          local_ec._0_4_ = pVVar64->___x_2;
                          local_ec._4_4_ = pVVar64->___y_3;
                          local_84 = pVVar64->___z_4;
                          local_8c._0_4_ = pVVar64->___x_2;
                          local_8c._4_4_ = pVVar64->___y_3;
                          local_368.___z_4 = local_84 * __real_3f000000 + local_488;
                          local_368.___y_3 =
                               (float)local_ec._4_4_ * __real_3f000000 + local_490._4_4_;
                          local_368.___x_2 =
                               (float)(undefined4)local_ec * __real_3f000000 + (float)local_490;
                          local_170.___z_4 = local_368.___z_4;
                          local_e0 = local_ec;
                          if ((local_378 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             || (BVar77 = BVar46,
                                local_378->___flowDatas_8 ==
                                (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                          goto LAB_1083ddbb;
                          iStack_374 = local_378->___flowDatas_8->____size_2;
                        }
                        BVar48.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar48.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        BVar47.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar47.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (((param_1->___master_4 ==
                              (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                            (pGVar5 = param_1->___master_4->___graph_7, BVar77 = BVar47,
                            pGVar5 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
                           (pDVar12 = (Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49 *)
                                      pGVar5->___cornerDict_16, BVar77 = BVar48,
                           pDVar12 == (Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49 *)0x0)
                           ) goto LAB_1083ddbb;
                        bVar58 = Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265
                                           (pDVar12,(
                                                  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                                                  BVar79,(int *)&local_328,
                                            Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                                           );
                        BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                        BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                        if (bVar58) {
                          if (local_328 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                          goto LAB_1083ddbb;
                          pTVar61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)local_328,(MethodInfo *)0x0);
                          BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          if (pTVar61 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          goto LAB_1083ddbb;
                          pVVar64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                              (&local_268,pTVar61,(MethodInfo *)0x0);
                          local_484._0_4_ = pVVar64->___x_2;
                          local_484._4_4_ = pVVar64->___y_3;
                          local_47c = pVVar64->___z_4;
                          pVVar64 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50
                                              (&local_4b8,(MethodInfo *)0x0);
                          BVar49.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar49.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                          BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                          local_254._0_4_ = pVVar64->___x_2;
                          local_254._4_4_ = pVVar64->___y_3;
                          local_240 = pVVar64->___z_4;
                          local_248._0_4_ = pVVar64->___x_2;
                          local_248._4_4_ = pVVar64->___y_3;
                          local_318.___z_4 = local_240 * __real_3f000000 + local_47c;
                          local_318.___y_3 =
                               (float)local_254._4_4_ * __real_3f000000 + local_484._4_4_;
                          local_318.___x_2 =
                               (float)(undefined4)local_254 * __real_3f000000 + (float)local_484;
                          local_23c = local_254;
                          local_180.___z_4 = local_318.___z_4;
                          if ((local_328 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0)
                             || (BVar77 = BVar49,
                                local_328->___flowDatas_8 ==
                                (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                          goto LAB_1083ddbb;
                          iStack_324 = local_328->___flowDatas_8->____size_2;
                        }
                        iVar60 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                                           (iStack_414,iStack_3c4,(MethodInfo *)0x0);
                        iVar66 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                                           (iStack_374,iStack_324,(MethodInfo *)0x0);
                        iVar60 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                                           (iVar60,iVar66,(MethodInfo *)0x0);
                        Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
                                  (param_1,(FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_448,(MethodInfo *)0x0);
                        Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
                                  (param_1,(FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_3f8,(MethodInfo *)0x0);
                        Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
                                  (param_1,(FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_3a8,(MethodInfo *)0x0);
                        Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
                                  (param_1,(FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_358,(MethodInfo *)0x0);
                        dVar69 = __real_4000000000000000;
                        _libm_sse2_sqrt_precise();
                        fVar80 = (float)dVar69;
                        auVar70._8_8_ = 0;
                        auVar70._0_8_ = __real_4008000000000000;
                        _libm_sse2_sqrt_precise();
                        iVar66 = 0;
                        fVar68 = (float)auVar70._0_8_;
                        if (0 < iVar60) {
                          do {
                            if (bStack_40b == false) {
LAB_1083d133:
                              if (bStack_3bb == false) goto LAB_1083d16a;
                              if (bStack_36b != false) {
                                Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                          (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3f8,
                                           (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_3a8,1.0,(MethodInfo *)0x0);
                                goto LAB_1083d16a;
                              }
LAB_1083d1a1:
                              if ((bStack_31b != false) && (bStack_40b != false)) {
                                Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                          (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_358,
                                           (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_448,1.0,(MethodInfo *)0x0);
                              }
                            }
                            else {
                              if (((bStack_3bb != false) && (bStack_36b != false)) &&
                                 (bStack_31b != false)) {
                                Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                          (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_448,
                                           (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_3a8,fVar80,(MethodInfo *)0x0);
                                Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                          (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3f8,
                                           (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_358,fVar80,(MethodInfo *)0x0);
                              }
                              if (bStack_40b == false) goto LAB_1083d133;
                              if (bStack_3bb != false) {
                                Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                          (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_448,
                                           (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_3f8,1.0,(MethodInfo *)0x0);
                                goto LAB_1083d133;
                              }
LAB_1083d16a:
                              if (bStack_36b == false) goto LAB_1083d1a1;
                              if (bStack_31b != false) {
                                Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                          (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3a8,
                                           (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_358,1.0,(MethodInfo *)0x0);
                                goto LAB_1083d1a1;
                              }
                            }
                            BVar50.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                            BVar50.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                            BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                            BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                            if (iVar66 < iVar60 + -1) {
                              local_1e0.___z_4 = local_408.___z_4;
                              local_220._0_4_ = local_448._0_4_;
                              local_220._4_4_ = local_448._4_4_;
                              fStack_218 = fStack_440;
                              fStack_214 = fStack_43c;
                              local_190.___z_4 = local_3b8.___z_4;
                              local_210 = local_438;
                              fStack_20c = fStack_434;
                              fStack_208 = fStack_430;
                              fStack_204 = fStack_42c;
                              local_278.___z_4 = local_368.___z_4;
                              local_120.___z_4 = local_318.___z_4;
                              local_200 = local_428;
                              fStack_1fc = fStack_424;
                              fStack_1f8 = fStack_420;
                              fStack_1f4 = fStack_41c;
                              local_1d0._0_4_ = local_3f8._0_4_;
                              local_1d0._4_4_ = local_3f8._4_4_;
                              local_1d0._8_4_ = local_3f8._8_4_;
                              local_1d0._12_4_ = local_3f8._12_4_;
                              local_1d0._16_4_ = local_3f8._16_4_;
                              local_1d0._20_4_ = local_3f8._20_4_;
                              local_1d0._24_4_ = local_3f8._24_4_;
                              local_1d0._28_4_ = local_3f8._28_4_;
                              local_1f0 = local_418;
                              iStack_1ec = iStack_414;
                              bStack_1e4 = bStack_40c;
                              bStack_1e3 = bStack_40b;
                              uStack_1e2 = uStack_40a;
                              local_1d0._32_4_ = local_3f8._32_4_;
                              local_1d0._36_4_ = local_3f8._36_4_;
                              local_1d0._40_4_ = local_3f8._40_4_;
                              local_1d0._44_4_ = local_3f8._44_4_;
                              local_2b8._0_4_ = local_3a8._0_4_;
                              local_2b8._4_4_ = local_3a8._4_4_;
                              fStack_2b0 = fStack_3a0;
                              fStack_2ac = fStack_39c;
                              local_2a8 = local_398;
                              fStack_2a4 = fStack_394;
                              fStack_2a0 = fStack_390;
                              fStack_29c = fStack_38c;
                              iStack_1e8 = iStack_410 + 1;
                              local_298.___y_1 = fStack_384;
                              local_298.___x_0 = local_388;
                              fStack_290 = fStack_380;
                              fStack_28c = fStack_37c;
                              local_1a0 = local_3c8;
                              iStack_19c = iStack_3c4;
                              bStack_194 = bStack_3bc;
                              bStack_193 = bStack_3bb;
                              uStack_192 = uStack_3ba;
                              local_160._0_4_ = local_358._0_4_;
                              local_160._4_4_ = local_358._4_4_;
                              local_160._8_4_ = local_358._8_4_;
                              local_160._12_4_ = local_358._12_4_;
                              local_160._16_4_ = local_358._16_4_;
                              local_160._20_4_ = local_358._20_4_;
                              local_160._24_4_ = local_358._24_4_;
                              local_160._28_4_ = local_358._28_4_;
                              local_288 = local_378;
                              iStack_284 = iStack_374;
                              bStack_27c = bStack_36c;
                              bStack_27b = bStack_36b;
                              uStack_27a = uStack_36a;
                              iStack_198 = iStack_3c0 + 1;
                              local_160._32_4_ = local_358._32_4_;
                              local_160._36_4_ = local_358._36_4_;
                              local_160._40_4_ = local_358._40_4_;
                              local_160._44_4_ = local_358._44_4_;
                              local_1e0.___y_3 = local_408.___y_3;
                              local_130 = local_328;
                              iStack_12c = iStack_324;
                              bStack_124 = bStack_31c;
                              bStack_123 = bStack_31b;
                              uStack_122 = uStack_31a;
                              iStack_280 = iStack_370 + 1;
                              iStack_128 = iStack_320 + 1;
                              local_1e0.___x_2 = local_408.___x_2;
                              local_1e0.___y_3 = local_1e0.___y_3 + __real_3f800000;
                              local_190.___y_3 = local_3b8.___y_3;
                              local_190.___x_2 = local_3b8.___x_2;
                              local_190.___y_3 = local_190.___y_3 + __real_3f800000;
                              local_278.___y_3 = local_368.___y_3;
                              local_278.___x_2 = local_368.___x_2;
                              local_278.___y_3 = local_278.___y_3 + __real_3f800000;
                              local_120.___y_3 = local_318.___y_3;
                              local_120.___x_2 = local_318.___x_2;
                              local_120.___y_3 = local_120.___y_3 + __real_3f800000;
                              Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
                                        (param_1,(FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_220,(MethodInfo *)0x0);
                              Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
                                        (param_1,(FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_1d0,(MethodInfo *)0x0);
                              Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
                                        (param_1,(FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_2b8,(MethodInfo *)0x0);
                              Flow_SetupFlowData_mB5D878055BEF6DB2C2CAD9C317530DF9672C396E
                                        (param_1,(FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_160,(MethodInfo *)0x0);
                              if (bStack_40b == false) {
LAB_1083d83e:
                                if (bStack_3bb == false) goto LAB_1083d8b8;
                                if (bStack_36b != false) {
                                  if ((bStack_27b != false) && (bStack_193 != false)) {
                                    Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                              (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3f8,
                                               (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                *)local_2b8,fVar80,(MethodInfo *)0x0);
                                    Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                              (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3a8,
                                               (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                *)local_1d0,fVar80,(MethodInfo *)0x0);
                                  }
                                  goto LAB_1083d8b8;
                                }
LAB_1083d932:
                                if (bStack_31b == false) goto LAB_1083d9ac;
                                if (bStack_40b != false) {
                                  if ((bStack_1e3 != false) && (bStack_123 != false)) {
                                    Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                              (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_358,
                                               (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                *)local_220,fVar80,(MethodInfo *)0x0);
                                    Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                              (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_448,
                                               (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                *)local_160,fVar80,(MethodInfo *)0x0);
                                  }
                                  goto LAB_1083d9ac;
                                }
                              }
                              else {
                                if (((bStack_3bb != false) && (bStack_36b != false)) &&
                                   ((bStack_31b != false &&
                                    ((((bStack_1e3 != false && (bStack_193 != false)) &&
                                      (bStack_27b != false)) && (bStack_123 != false)))))) {
                                  Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                            (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_448,
                                             (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                              *)local_2b8,fVar68,(MethodInfo *)0x0);
                                  Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                            (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3f8,
                                             (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                              *)local_160,fVar68,(MethodInfo *)0x0);
                                  Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                            (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3a8,
                                             (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                              *)local_220,fVar68,(MethodInfo *)0x0);
                                  Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                            (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_358,
                                             (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                              *)local_1d0,fVar68,(MethodInfo *)0x0);
                                }
                                if (bStack_40b == false) goto LAB_1083d83e;
                                if (bStack_3bb != false) {
                                  if ((bStack_1e3 != false) && (bStack_193 != false)) {
                                    Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                              (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_448,
                                               (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                *)local_1d0,fVar80,(MethodInfo *)0x0);
                                    Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                              (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3f8,
                                               (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                *)local_220,fVar80,(MethodInfo *)0x0);
                                  }
                                  goto LAB_1083d83e;
                                }
LAB_1083d8b8:
                                if (bStack_36b == false) goto LAB_1083d932;
                                if (bStack_31b != false) {
                                  if ((bStack_123 != false) && (bStack_27b != false)) {
                                    Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                              (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3a8,
                                               (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                *)local_160,fVar80,(MethodInfo *)0x0);
                                    Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                              (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_358,
                                               (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                *)local_2b8,fVar80,(MethodInfo *)0x0);
                                  }
                                  goto LAB_1083d932;
                                }
LAB_1083d9ac:
                                if ((bStack_40b != false) && (bStack_1e3 != false)) {
                                  Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                            (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_448,
                                             (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                              *)local_220,1.0,(MethodInfo *)0x0);
                                }
                              }
                              if ((bStack_3bb != false) && (bStack_193 != false)) {
                                Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                          (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3f8,
                                           (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_1d0,1.0,(MethodInfo *)0x0);
                              }
                              if ((bStack_36b != false) && (bStack_27b != false)) {
                                Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                          (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_3a8,
                                           (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_2b8,1.0,(MethodInfo *)0x0);
                              }
                              if ((bStack_31b != false) && (bStack_123 != false)) {
                                Flow_FlowTwoFlows_m1E852DE64EC9A5DA317EDDFF47FCF6B5C75333FB
                                          (param_1,(
                                                  FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10
                                                  *)local_358,
                                           (FlowCalcData_tE192F96FF4C595046B12F4B104BF271EEC626A10 *
                                           )local_160,1.0,(MethodInfo *)0x0);
                              }
                              BVar54.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar54.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              if (bStack_40c != false) {
                                if ((local_418 ==
                                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
                                   (BVar77 = BVar54,
                                   local_418->___flowDatas_8 ==
                                   (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                                goto LAB_1083ddbb;
                                DVar20.___delta_0.___y_1 = (float)local_448._4_4_;
                                DVar20.___delta_0.___x_0 = (float)local_448._0_4_;
                                DVar20.___smoothDelta_1.___x_0 = fStack_440;
                                DVar20.___smoothDelta_1.___y_1 = fStack_43c;
                                DVar20.___pos_2.___x_0 = local_438;
                                DVar20.___pos_2.___y_1 = fStack_434;
                                DVar20.___invYPos_3.___x_0 = fStack_430;
                                DVar20.___invYPos_3.___y_1 = fStack_42c;
                                DVar20.___smoothPos_4.___x_0 = local_428;
                                DVar20.___smoothPos_4.___y_1 = fStack_424;
                                DVar20.___frame_5 = (int)fStack_420;
                                DVar20.___time_6 = fStack_41c;
                                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                           local_418->___flowDatas_8,iVar66,DVar20,
                                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                          );
                              }
                              BVar55.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar55.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              if (bStack_3bc != false) {
                                if ((local_3c8 ==
                                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
                                   (BVar77 = BVar55,
                                   local_3c8->___flowDatas_8 ==
                                   (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                                goto LAB_1083ddbb;
                                DVar21.___delta_0.___y_1 = (float)local_3f8._4_4_;
                                DVar21.___delta_0.___x_0 = (float)local_3f8._0_4_;
                                DVar21.___smoothDelta_1.___x_0 = (float)local_3f8._8_4_;
                                DVar21.___smoothDelta_1.___y_1 = (float)local_3f8._12_4_;
                                DVar21.___pos_2.___x_0 = (float)local_3f8._16_4_;
                                DVar21.___pos_2.___y_1 = (float)local_3f8._20_4_;
                                DVar21.___invYPos_3.___x_0 = (float)local_3f8._24_4_;
                                DVar21.___invYPos_3.___y_1 = (float)local_3f8._28_4_;
                                DVar21.___smoothPos_4.___x_0 = (float)local_3f8._32_4_;
                                DVar21.___smoothPos_4.___y_1 = (float)local_3f8._36_4_;
                                DVar21.___frame_5 = local_3f8._40_4_;
                                DVar21.___time_6 = (float)local_3f8._44_4_;
                                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                           local_3c8->___flowDatas_8,iVar66,DVar21,
                                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                          );
                              }
                              BVar56.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar56.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              if (bStack_36c != false) {
                                if ((local_378 ==
                                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
                                   (BVar77 = BVar56,
                                   local_378->___flowDatas_8 ==
                                   (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                                goto LAB_1083ddbb;
                                DVar22.___delta_0.___y_1 = (float)local_3a8._4_4_;
                                DVar22.___delta_0.___x_0 = (float)local_3a8._0_4_;
                                DVar22.___smoothDelta_1.___x_0 = fStack_3a0;
                                DVar22.___smoothDelta_1.___y_1 = fStack_39c;
                                DVar22.___pos_2.___x_0 = local_398;
                                DVar22.___pos_2.___y_1 = fStack_394;
                                DVar22.___invYPos_3.___x_0 = fStack_390;
                                DVar22.___invYPos_3.___y_1 = fStack_38c;
                                DVar22.___smoothPos_4.___x_0 = local_388;
                                DVar22.___smoothPos_4.___y_1 = fStack_384;
                                DVar22.___frame_5 = (int)fStack_380;
                                DVar22.___time_6 = fStack_37c;
                                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                           local_378->___flowDatas_8,iVar66,DVar22,
                                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                          );
                              }
                              BVar57.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar57.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              if (bStack_31c != false) {
                                if ((local_328 ==
                                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
                                   (BVar77 = BVar57,
                                   local_328->___flowDatas_8 ==
                                   (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                                goto LAB_1083ddbb;
                                DVar23.___delta_0.___y_1 = (float)local_358._4_4_;
                                DVar23.___delta_0.___x_0 = (float)local_358._0_4_;
                                DVar23.___smoothDelta_1.___x_0 = (float)local_358._8_4_;
                                DVar23.___smoothDelta_1.___y_1 = (float)local_358._12_4_;
                                DVar23.___pos_2.___x_0 = (float)local_358._16_4_;
                                DVar23.___pos_2.___y_1 = (float)local_358._20_4_;
                                DVar23.___invYPos_3.___x_0 = (float)local_358._24_4_;
                                DVar23.___invYPos_3.___y_1 = (float)local_358._28_4_;
                                DVar23.___smoothPos_4.___x_0 = (float)local_358._32_4_;
                                DVar23.___smoothPos_4.___y_1 = (float)local_358._36_4_;
                                DVar23.___frame_5 = local_358._40_4_;
                                DVar23.___time_6 = (float)local_358._44_4_;
                                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                           local_328->___flowDatas_8,iVar66,DVar23,
                                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                          );
                              }
                              local_408.___z_4 = local_1e0.___z_4;
                              local_448._0_4_ = local_220._0_4_;
                              local_448._4_4_ = local_220._4_4_;
                              fStack_440 = fStack_218;
                              fStack_43c = fStack_214;
                              local_3b8.___z_4 = local_190.___z_4;
                              local_438 = local_210;
                              fStack_434 = fStack_20c;
                              fStack_430 = fStack_208;
                              fStack_42c = fStack_204;
                              local_368.___z_4 = local_278.___z_4;
                              local_318.___z_4 = local_120.___z_4;
                              local_428 = local_200;
                              fStack_424 = fStack_1fc;
                              fStack_420 = fStack_1f8;
                              fStack_41c = fStack_1f4;
                              local_418 = local_1f0;
                              iStack_414 = iStack_1ec;
                              iStack_410 = iStack_1e8;
                              bStack_40c = bStack_1e4;
                              bStack_40b = bStack_1e3;
                              uStack_40a = uStack_1e2;
                              local_408.___x_2 = local_1e0.___x_2;
                              local_408.___y_3 = local_1e0.___y_3;
                              local_3f8._0_4_ = local_1d0._0_4_;
                              local_3f8._4_4_ = local_1d0._4_4_;
                              local_3f8._8_4_ = local_1d0._8_4_;
                              local_3f8._12_4_ = local_1d0._12_4_;
                              local_3f8._16_4_ = local_1d0._16_4_;
                              local_3f8._20_4_ = local_1d0._20_4_;
                              local_3f8._24_4_ = local_1d0._24_4_;
                              local_3f8._28_4_ = local_1d0._28_4_;
                              local_3f8._32_4_ = local_1d0._32_4_;
                              local_3f8._36_4_ = local_1d0._36_4_;
                              local_3f8._40_4_ = local_1d0._40_4_;
                              local_3f8._44_4_ = local_1d0._44_4_;
                              local_3c8 = local_1a0;
                              iStack_3c4 = iStack_19c;
                              iStack_3c0 = iStack_198;
                              bStack_3bc = bStack_194;
                              bStack_3bb = bStack_193;
                              uStack_3ba = uStack_192;
                              local_3b8.___x_2 = local_190.___x_2;
                              local_3b8.___y_3 = local_190.___y_3;
                              local_3a8._0_4_ = local_2b8._0_4_;
                              local_3a8._4_4_ = local_2b8._4_4_;
                              fStack_3a0 = fStack_2b0;
                              fStack_39c = fStack_2ac;
                              local_398 = local_2a8;
                              fStack_394 = fStack_2a4;
                              fStack_390 = fStack_2a0;
                              fStack_38c = fStack_29c;
                              local_388 = local_298.___x_0;
                              fStack_384 = local_298.___y_1;
                              fStack_380 = fStack_290;
                              fStack_37c = fStack_28c;
                              local_378 = local_288;
                              iStack_374 = iStack_284;
                              iStack_370 = iStack_280;
                              bStack_36c = bStack_27c;
                              bStack_36b = bStack_27b;
                              uStack_36a = uStack_27a;
                              local_368.___x_2 = local_278.___x_2;
                              local_368.___y_3 = local_278.___y_3;
                              local_358._0_4_ = local_160._0_4_;
                              local_358._4_4_ = local_160._4_4_;
                              local_358._8_4_ = local_160._8_4_;
                              local_358._12_4_ = local_160._12_4_;
                              local_358._16_4_ = local_160._16_4_;
                              local_358._20_4_ = local_160._20_4_;
                              local_358._24_4_ = local_160._24_4_;
                              local_358._28_4_ = local_160._28_4_;
                              local_358._32_4_ = local_160._32_4_;
                              local_358._36_4_ = local_160._36_4_;
                              local_358._40_4_ = local_160._40_4_;
                              local_358._44_4_ = local_160._44_4_;
                              local_328 = local_130;
                              iStack_324 = iStack_12c;
                              iStack_320 = iStack_128;
                              bStack_31c = bStack_124;
                              bStack_31b = bStack_123;
                              uStack_31a = uStack_122;
                              local_318.___x_2 = local_120.___x_2;
                              local_318.___y_3 = local_120.___y_3;
                            }
                            else {
                              if (bStack_40c != false) {
                                if ((local_418 ==
                                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
                                   (BVar77 = BVar50,
                                   local_418->___flowDatas_8 ==
                                   (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                                goto LAB_1083ddbb;
                                DVar16.___delta_0.___y_1 = (float)local_448._4_4_;
                                DVar16.___delta_0.___x_0 = (float)local_448._0_4_;
                                DVar16.___smoothDelta_1.___x_0 = fStack_440;
                                DVar16.___smoothDelta_1.___y_1 = fStack_43c;
                                DVar16.___pos_2.___x_0 = local_438;
                                DVar16.___pos_2.___y_1 = fStack_434;
                                DVar16.___invYPos_3.___x_0 = fStack_430;
                                DVar16.___invYPos_3.___y_1 = fStack_42c;
                                DVar16.___smoothPos_4.___x_0 = local_428;
                                DVar16.___smoothPos_4.___y_1 = fStack_424;
                                DVar16.___frame_5 = (int)fStack_420;
                                DVar16.___time_6 = fStack_41c;
                                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                           local_418->___flowDatas_8,iVar66,DVar16,
                                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                          );
                              }
                              BVar51.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar51.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              if (bStack_3bc != false) {
                                if ((local_3c8 ==
                                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
                                   (BVar77 = BVar51,
                                   local_3c8->___flowDatas_8 ==
                                   (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                                goto LAB_1083ddbb;
                                DVar17.___delta_0.___y_1 = (float)local_3f8._4_4_;
                                DVar17.___delta_0.___x_0 = (float)local_3f8._0_4_;
                                DVar17.___smoothDelta_1.___x_0 = (float)local_3f8._8_4_;
                                DVar17.___smoothDelta_1.___y_1 = (float)local_3f8._12_4_;
                                DVar17.___pos_2.___x_0 = (float)local_3f8._16_4_;
                                DVar17.___pos_2.___y_1 = (float)local_3f8._20_4_;
                                DVar17.___invYPos_3.___x_0 = (float)local_3f8._24_4_;
                                DVar17.___invYPos_3.___y_1 = (float)local_3f8._28_4_;
                                DVar17.___smoothPos_4.___x_0 = (float)local_3f8._32_4_;
                                DVar17.___smoothPos_4.___y_1 = (float)local_3f8._36_4_;
                                DVar17.___frame_5 = local_3f8._40_4_;
                                DVar17.___time_6 = (float)local_3f8._44_4_;
                                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                           local_3c8->___flowDatas_8,iVar66,DVar17,
                                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                          );
                              }
                              BVar52.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar52.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              if (bStack_36c != false) {
                                if ((local_378 ==
                                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
                                   (BVar77 = BVar52,
                                   local_378->___flowDatas_8 ==
                                   (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                                goto LAB_1083ddbb;
                                DVar18.___delta_0.___y_1 = (float)local_3a8._4_4_;
                                DVar18.___delta_0.___x_0 = (float)local_3a8._0_4_;
                                DVar18.___smoothDelta_1.___x_0 = fStack_3a0;
                                DVar18.___smoothDelta_1.___y_1 = fStack_39c;
                                DVar18.___pos_2.___x_0 = local_398;
                                DVar18.___pos_2.___y_1 = fStack_394;
                                DVar18.___invYPos_3.___x_0 = fStack_390;
                                DVar18.___invYPos_3.___y_1 = fStack_38c;
                                DVar18.___smoothPos_4.___x_0 = local_388;
                                DVar18.___smoothPos_4.___y_1 = fStack_384;
                                DVar18.___frame_5 = (int)fStack_380;
                                DVar18.___time_6 = fStack_37c;
                                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                           local_378->___flowDatas_8,iVar66,DVar18,
                                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                          );
                              }
                              BVar53.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar53.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2bc;
                              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_2c8;
                              if (bStack_31c != false) {
                                if ((local_328 ==
                                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) ||
                                   (BVar77 = BVar53,
                                   local_328->___flowDatas_8 ==
                                   (List_1_t569265593A89FA799E916FF2D345C50EFB59729A *)0x0))
                                goto LAB_1083ddbb;
                                DVar19.___delta_0.___y_1 = (float)local_358._4_4_;
                                DVar19.___delta_0.___x_0 = (float)local_358._0_4_;
                                DVar19.___smoothDelta_1.___x_0 = (float)local_358._8_4_;
                                DVar19.___smoothDelta_1.___y_1 = (float)local_358._12_4_;
                                DVar19.___pos_2.___x_0 = (float)local_358._16_4_;
                                DVar19.___pos_2.___y_1 = (float)local_358._20_4_;
                                DVar19.___invYPos_3.___x_0 = (float)local_358._24_4_;
                                DVar19.___invYPos_3.___y_1 = (float)local_358._28_4_;
                                DVar19.___smoothPos_4.___x_0 = (float)local_358._32_4_;
                                DVar19.___smoothPos_4.___y_1 = (float)local_358._36_4_;
                                DVar19.___frame_5 = local_358._40_4_;
                                DVar19.___time_6 = (float)local_358._44_4_;
                                List_1_set_Item_mBB3210AE523ADFA4940782417AF3B7A521C6F81B_gshared
                                          ((List_1_tA26CAE48E9EC63069FE2DBAE3829BD4E5CA3767C *)
                                           local_328->___flowDatas_8,iVar66,DVar19,
                                           List_1_set_Item_m965F86E581524243D5F8B14323A000C3B6747EE9_RuntimeMethod_var
                                          );
                              }
                            }
                            iVar66 = iVar66 + 1;
                          } while (iVar66 < iVar60);
                        }
                      }
                      local_4d4 = local_4d4 + 4;
                    } while (local_4d4 < (int)local_308);
                  }
                }
              }
              local_4cc = local_4cc + 1;
            } while ((int)local_4cc < local_2c0);
          }
          return;
        }
      }
    }
  }
LAB_1083ddbb:
  local_2bc = BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
  local_2c8 = (float)BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
