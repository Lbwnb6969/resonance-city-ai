// RVA 0xe1bbc0 | Placemaker.GridGenerator$$OnDrawGizmos
// PDB: GridGenerator_OnDrawGizmos_m436D9F6949CB5FD6B5DEB020A0F127F21BE72E3D
// Body: [[10e1bbc0, 10e1d3a3]]
// Direct callees:
// 10054800 List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a45150 Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
// 10e13ca0 GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
// 10e1d3de FUN_10e1d3de
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void __cdecl
GridGenerator_OnDrawGizmos_m436D9F6949CB5FD6B5DEB020A0F127F21BE72E3D
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,MethodInfo *param_2)

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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  void *pvVar23;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar24;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar27;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar29;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar31;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar32;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar33;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar35;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar36;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar37;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar38;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar39;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar40;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar41;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar42;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar43;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar44;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar45;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar46;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar47;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar48;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar49;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar50;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar51;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar52;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar53;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar54;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar55;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar56;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar57;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar58;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar59;
  Il2CppObject *pIVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  bool bVar63;
  byte bVar64;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar65;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar66;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar67;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar68;
  undefined8 *extraout_EAX;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_00;
  undefined8 *extraout_EAX_01;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_02;
  undefined8 *extraout_EAX_03;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_04;
  undefined8 *extraout_EAX_05;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_06;
  undefined8 *extraout_EAX_07;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_08;
  undefined8 *extraout_EAX_09;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_10;
  undefined8 *extraout_EAX_11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_12;
  undefined8 *extraout_EAX_13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_14;
  undefined8 *extraout_EAX_15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_16;
  undefined8 *extraout_EAX_17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_18;
  undefined8 *extraout_EAX_19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_20;
  undefined8 *extraout_EAX_21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_22;
  undefined8 *extraout_EAX_23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_24;
  undefined8 *extraout_EAX_25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_26;
  float fVar69;
  MonitorData *pMVar70;
  float fVar71;
  float fVar72;
  List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *pLVar73;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar74;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar75;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_548;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_538;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_528;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_518;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_508;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4f8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_4e8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_4d8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4b8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4a8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_498;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_488;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_478;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_468;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_458;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_448;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_438;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_428;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_418;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_408;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_3f8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_3e8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_3d8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_3c8;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_3b8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_378;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_368;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_358;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_348;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_338;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_328;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_318;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_308;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_2f4;
  undefined8 local_2e4;
  undefined8 local_2d8;
  undefined8 local_2cc;
  undefined8 local_2c0;
  undefined8 local_2b4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2a8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_298;
  undefined8 local_288;
  undefined8 local_27c;
  undefined8 local_270;
  undefined8 local_264;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  int local_238;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_230;
  undefined4 uStack_224;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_220;
  undefined4 uStack_214;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_210;
  float fStack_204;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1e8;
  undefined8 local_1dc;
  undefined8 local_1d0;
  undefined8 local_1c4;
  int local_1bc;
  undefined8 local_1b8;
  int local_1b0;
  undefined8 local_1ac;
  undefined8 local_1a0;
  undefined8 local_194;
  int local_18c;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_188;
  float local_178;
  float fStack_174;
  float local_170;
  float local_168;
  float fStack_164;
  float local_160;
  float local_158;
  float fStack_154;
  float local_150;
  float local_148;
  float fStack_144;
  float local_140;
  undefined8 local_138;
  int local_130;
  undefined8 local_12c;
  undefined4 local_120;
  Il2CppObject *local_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float local_108;
  float fStack_104;
  float local_100;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e0;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined4 local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  String_t *local_88;
  String_t *local_84;
  String_t *local_80;
  String_t *local_78;
  String_t *local_70;
  List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *local_68;
  MonitorData *local_64;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_60;
  uint local_50;
  String_t *local_44;
  undefined8 local_40;
  float local_38;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  undefined1 *puStack_24;
  undefined1 *local_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &__ehhandler__GridGenerator_OnDrawGizmos_m436D9F6949CB5FD6B5DEB020A0F127F21BE72E3D;
  pvStack_1c = ExceptionList;
  local_20 = &stack0xfffffa68;
  ExceptionList = &pvStack_1c;
  puVar61 = &stack0xfffffffc;
  puVar62 = &stack0xfffffa68;
  if (DAT_11522678 == '\0') {
    ExceptionList = &pvStack_1c;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m0D4815060AC903CE2A779C5E6E4893549C46D065_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m58DEA16F051C468A0E0FDC14C5A2AA18967974BF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m59A5DA656C0F7A38CE725D9F6C66928F3218D2FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mEFAA469356EA0ECAAF15CFBBB274DB1412855033_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m60B458D3F9F79F2D48B12089979A33E0B13B767E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m73854385E08029D25A3B620C398D02ADB0A1677B_RuntimeMethod_var
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
                       List_1_GetEnumerator_m76EEACE1D91A088E4499D8E07A48DA832068CBEB_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_mFE3F929921B16A7638A07DD5B0601D19C259B2DA_RuntimeMethod_var
              );
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
              ((uint *)&List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var)
    ;
    DAT_11522678 = '\x01';
    puVar61 = puStack_24;
    puVar62 = local_20;
  }
  local_20 = puVar62;
  puStack_24 = puVar61;
  local_11c = (Il2CppObject *)0x0;
  local_9c = 0;
  local_1f8 = 0;
  local_250 = 0;
  uStack_24c = 0;
  uStack_248 = 0;
  uStack_244 = 0;
  local_f4 = 0;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  pvVar23 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  local_188.___list_0 = *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)((int)pvVar23 + 0x9c);
  local_188.___index_1 = *(int *)((int)pvVar23 + 0xa0);
  local_188.___version_2 = *(int *)((int)pvVar23 + 0xa4);
  local_188.___current_3 = *(Il2CppObject **)((int)pvVar23 + 0xa8);
  local_230.___x_2 = *(float *)((int)pvVar23 + 0xac);
  local_230.___y_3 = *(float *)((int)pvVar23 + 0xb0);
  local_230.___z_4 = *(float *)((int)pvVar23 + 0xb4);
  uStack_224 = *(undefined4 *)((int)pvVar23 + 0xb8);
  local_220.___x_2 = *(float *)((int)pvVar23 + 0xbc);
  local_220.___y_3 = *(float *)((int)pvVar23 + 0xc0);
  local_220.___z_4 = *(float *)((int)pvVar23 + 0xc4);
  uStack_214 = *(undefined4 *)((int)pvVar23 + 200);
  local_210.___x_2 = *(float *)((int)pvVar23 + 0xcc);
  local_210.___y_3 = *(float *)((int)pvVar23 + 0xd0);
  local_210.___z_4 = *(float *)((int)pvVar23 + 0xd4);
  fStack_204 = *(float *)((int)pvVar23 + 0xd8);
  pVVar65 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(&local_e0,(MethodInfo *)0x0);
  local_d0._0_4_ = pVVar65->___x_2;
  local_d0._4_4_ = pVVar65->___y_3;
  local_c8 = pVVar65->___z_4;
  local_c0._0_4_ = pVVar65->___x_2;
  local_c0._4_4_ = pVVar65->___y_3;
  local_e0.___z_4 = local_c8 * __real_3df925fe;
  VVar42.___y_3 = (float)local_d0._4_4_ * __real_3df925fe;
  VVar42.___x_2 = (float)(undefined4)local_d0 * __real_3df925fe;
  VVar42.___z_4 = local_e0.___z_4;
  local_b8 = local_c8;
  local_b0 = local_d0;
  local_a8 = local_c8;
  pMVar66 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
                      (&local_3b8,VVar42,(MethodInfo *)0x0);
  MVar24.___m10_1 = (float)local_188.___index_1;
  MVar24.___m00_0 = (float)local_188.___list_0;
  MVar24.___m20_2 = (float)local_188.___version_2;
  MVar24.___m30_3 = (float)local_188.___current_3;
  MVar24.___m01_4 = local_230.___x_2;
  MVar24.___m11_5 = local_230.___y_3;
  MVar24.___m21_6 = local_230.___z_4;
  MVar24.___m31_7 = (float)uStack_224;
  MVar24.___m02_8 = local_220.___x_2;
  MVar24.___m12_9 = local_220.___y_3;
  MVar24.___m22_10 = local_220.___z_4;
  MVar24.___m32_11 = (float)uStack_214;
  MVar24.___m03_12 = local_210.___x_2;
  MVar24.___m13_13 = local_210.___y_3;
  MVar24.___m23_14 = local_210.___z_4;
  MVar24.___m33_15 = fStack_204;
  pMVar66 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                      (&local_3b8,MVar24,*pMVar66,(MethodInfo *)0x0);
  pMVar66 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                      (&local_3b8,*pMVar66,
                       *(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                        ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                              ->static_fields + 0x1c),(MethodInfo *)0x0);
  Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar66,(MethodInfo *)0x0);
  pvVar23 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  local_188.___list_0 = *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)((int)pvVar23 + 0x9c);
  local_188.___index_1 = *(int *)((int)pvVar23 + 0xa0);
  local_188.___version_2 = *(int *)((int)pvVar23 + 0xa4);
  local_188.___current_3 = *(Il2CppObject **)((int)pvVar23 + 0xa8);
  local_230.___x_2 = *(float *)((int)pvVar23 + 0xac);
  local_230.___y_3 = *(float *)((int)pvVar23 + 0xb0);
  local_230.___z_4 = *(float *)((int)pvVar23 + 0xb4);
  uStack_224 = *(undefined4 *)((int)pvVar23 + 0xb8);
  local_220.___x_2 = *(float *)((int)pvVar23 + 0xbc);
  local_220.___y_3 = *(float *)((int)pvVar23 + 0xc0);
  local_220.___z_4 = *(float *)((int)pvVar23 + 0xc4);
  uStack_214 = *(undefined4 *)((int)pvVar23 + 200);
  local_210.___x_2 = *(float *)((int)pvVar23 + 0xcc);
  local_210.___y_3 = *(float *)((int)pvVar23 + 0xd0);
  local_210.___z_4 = *(float *)((int)pvVar23 + 0xd4);
  fStack_204 = *(float *)((int)pvVar23 + 0xd8);
  pVVar65 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(&local_e0,(MethodInfo *)0x0);
  local_d0._0_4_ = pVVar65->___x_2;
  local_d0._4_4_ = pVVar65->___y_3;
  local_c8 = pVVar65->___z_4;
  local_c0._0_4_ = pVVar65->___x_2;
  local_c0._4_4_ = pVVar65->___y_3;
  local_e0.___z_4 = local_c8 * __real_3df925fe;
  VVar43.___y_3 = (float)local_d0._4_4_ * __real_3df925fe;
  VVar43.___x_2 = (float)(undefined4)local_d0 * __real_3df925fe;
  VVar43.___z_4 = local_e0.___z_4;
  local_b8 = local_c8;
  local_b0 = local_d0;
  local_a8 = local_c8;
  pMVar66 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
                      (&local_3b8,VVar43,(MethodInfo *)0x0);
  MVar25.___m10_1 = (float)local_188.___index_1;
  MVar25.___m00_0 = (float)local_188.___list_0;
  MVar25.___m20_2 = (float)local_188.___version_2;
  MVar25.___m30_3 = (float)local_188.___current_3;
  MVar25.___m01_4 = local_230.___x_2;
  MVar25.___m11_5 = local_230.___y_3;
  MVar25.___m21_6 = local_230.___z_4;
  MVar25.___m31_7 = (float)uStack_224;
  MVar25.___m02_8 = local_220.___x_2;
  MVar25.___m12_9 = local_220.___y_3;
  MVar25.___m22_10 = local_220.___z_4;
  MVar25.___m32_11 = (float)uStack_214;
  MVar25.___m03_12 = local_210.___x_2;
  MVar25.___m13_13 = local_210.___y_3;
  MVar25.___m23_14 = local_210.___z_4;
  MVar25.___m33_15 = fStack_204;
  pMVar66 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                      (&local_3b8,MVar25,*pMVar66,(MethodInfo *)0x0);
  pMVar66 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                      (&local_3b8,*pMVar66,
                       *(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                        ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                              ->static_fields + 0x1c),(MethodInfo *)0x0);
  Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar66,(MethodInfo *)0x0);
  if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___patches_9 ==
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
LAB_10e1de2d:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pEVar67 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                      (&local_188,
                       (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___patches_9,
                       List_1_GetEnumerator_mFE3F929921B16A7638A07DD5B0601D19C259B2DA_RuntimeMethod_var
                      );
  local_2f4.___list_0 = pEVar67->___list_0;
  local_2f4.___index_1 = pEVar67->___index_1;
  local_2f4.___version_2 = pEVar67->___version_2;
  local_2f4.___current_3 = pEVar67->___current_3;
  local_14 = 0;
  local_120 = 0;
LAB_10e1c120:
  bVar63 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                     (&local_2f4,
                      Enumerator_MoveNext_m59A5DA656C0F7A38CE725D9F6C66928F3218D2FA_RuntimeMethod_var
                     );
  pIVar60 = local_2f4.___current_3;
  if (!bVar63) {
    local_200 = 0x47a;
    local_1f8 = 1;
    FUN_10e1d3de();
    return;
  }
  local_88 = (String_t *)local_2f4.___current_3;
  if ((String_t *)local_2f4.___current_3 != (String_t *)0x0) {
    fVar72 = __real_3d4ccccd;
    if ((char)((String_t *)((int)local_2f4.___current_3 + 0x10))->___m_firstChar_1 != '\0') {
      fVar72 = __real_3dcccccd;
    }
    local_60.___m_Left_0 = 0.0;
    local_60.___m_Right_1 = 0.0;
    local_60.___m_Top_2 = 0.0;
    local_60.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_60,0.0,0.0,0.0,fVar72,(MethodInfo *)0x0);
    CVar40.___g_1 = local_60.___m_Right_1;
    CVar40.___r_0 = local_60.___m_Left_0;
    CVar40.___b_2 = local_60.___m_Top_2;
    CVar40.___a_3 = local_60.___m_Bottom_3;
    Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar40,(MethodInfo *)0x0);
    if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 !=
        (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
      bVar63 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                         ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                          param_1->___bitDict_8,
                          *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)((int)pIVar60 + 8),
                          &local_11c,
                          Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
                         );
      if (!bVar63) goto LAB_10e1c1ff;
      if ((local_11c != (Il2CppObject *)0x0) && (local_11c[3].monitor != (MonitorData *)0x0))
      goto code_r0x10e1c1f5;
    }
  }
  goto LAB_10e1de2d;
code_r0x10e1c1f5:
  if ((int)((local_11c[3].monitor)->semaphore).m_Semaphore < 1) {
LAB_10e1c1ff:
    local_64 = (MonitorData *)((String_t *)((int)pIVar60 + 0x10))->_padding_;
    local_68 = (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
               ((String_t *)((int)pIVar60 + 0x10))->___m_stringLength_0;
    for (local_50 = 0; pLVar73 = local_68,
        local_44 = (String_t *)(uint)*(ushort *)&local_88[1]._padding_,
        (int)local_50 < (int)local_44; local_50 = local_50 + 3) {
      if ((local_64 == (MonitorData *)0x0) ||
         (bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)local_64,local_50,
                              List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                             ), pLVar73 == (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)0x0))
      goto LAB_10e1de2d;
      BVar74 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (pLVar73,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)local_64,local_50 + 1,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      BVar75 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (local_68,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      local_44 = BVar75.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_70 = (String_t *)BVar75.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)local_64,local_50 + 2,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      BVar75 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (local_68,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      local_78 = BVar75.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_80 = (String_t *)BVar75.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
        BVar75.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_78;
        BVar75.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_80;
      }
      local_78 = BVar75.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_80 = (String_t *)BVar75.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_448,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar74,
                           (MethodInfo *)0x0);
      local_264._0_4_ = piVar68->___x_0;
      local_264._4_4_ = piVar68->___y_1;
      local_118 = (float)(int)(undefined4)local_264;
      local_270._0_4_ = piVar68->___x_0;
      local_270._4_4_ = piVar68->___y_1;
      fStack_114 = (float)(int)local_270._4_4_;
      uVar1 = piVar68->___x_0;
      uVar12 = piVar68->___y_1;
      local_110 = (float)piVar68->___z_2;
      iVar44.___y_1 = (int)local_44;
      iVar44.___x_0 = (int)local_70;
      local_60.___m_Right_1 = (float)uVar1;
      local_60.___m_Top_2 = (float)uVar12;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_4d8,iVar44,(MethodInfo *)0x0);
      local_27c._0_4_ = piVar68->___x_0;
      local_27c._4_4_ = piVar68->___y_1;
      local_98 = (float)(int)(undefined4)local_27c;
      local_2e4._0_4_ = piVar68->___x_0;
      local_2e4._4_4_ = piVar68->___y_1;
      fStack_94 = (float)(int)local_2e4._4_4_;
      uVar2 = piVar68->___x_0;
      uVar13 = piVar68->___y_1;
      local_90 = (float)piVar68->___z_2;
      iVar45.___y_1 = (int)local_78;
      iVar45.___x_0 = (int)local_80;
      local_60.___m_Right_1 = (float)uVar2;
      local_60.___m_Top_2 = (float)uVar13;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_4e8,iVar45,(MethodInfo *)0x0);
      local_288._0_4_ = piVar68->___x_0;
      local_288._4_4_ = piVar68->___y_1;
      local_108 = (float)(int)(undefined4)local_288;
      local_2b4._0_4_ = piVar68->___x_0;
      local_2b4._4_4_ = piVar68->___y_1;
      fStack_104 = (float)(int)local_2b4._4_4_;
      uVar3 = piVar68->___x_0;
      uVar14 = piVar68->___y_1;
      local_100 = (float)piVar68->___z_2;
      local_60.___m_Right_1 = (float)uVar3;
      local_60.___m_Top_2 = (float)uVar14;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_4f8,local_118,fStack_114,local_110,(MethodInfo *)0x0);
      local_40 = *extraout_EAX;
      local_38 = *(float *)(extraout_EAX + 1);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_508,local_98,fStack_94,local_90,(MethodInfo *)0x0);
      VVar26.___z_4 = local_38;
      VVar26.___x_2 = (float)(undefined4)local_40;
      VVar26.___y_3 = local_40._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                (VVar26,*extraout_EAX_00,(MethodInfo *)0x0);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_518,local_98,fStack_94,local_90,(MethodInfo *)0x0);
      local_40 = *extraout_EAX_01;
      local_38 = *(float *)(extraout_EAX_01 + 1);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_528,local_108,fStack_104,local_100,(MethodInfo *)0x0);
      VVar27.___z_4 = local_38;
      VVar27.___x_2 = (float)(undefined4)local_40;
      VVar27.___y_3 = local_40._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                (VVar27,*extraout_EAX_02,(MethodInfo *)0x0);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_538,local_108,fStack_104,local_100,(MethodInfo *)0x0);
      local_40 = *extraout_EAX_03;
      local_38 = *(float *)(extraout_EAX_03 + 1);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_458,local_118,fStack_114,local_110,(MethodInfo *)0x0);
      VVar28.___z_4 = local_38;
      VVar28.___x_2 = (float)(undefined4)local_40;
      VVar28.___y_3 = local_40._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                (VVar28,*extraout_EAX_04,(MethodInfo *)0x0);
      local_2a = GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                           (param_1,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar74,
                            (MethodInfo *)0x0);
      iVar46.___y_1 = (int)local_44;
      iVar46.___x_0 = (int)local_70;
      local_29 = GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                           (param_1,iVar46,(MethodInfo *)0x0);
      iVar47.___y_1 = (int)local_78;
      iVar47.___x_0 = (int)local_80;
      local_2b = GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                           (param_1,iVar47,(MethodInfo *)0x0);
      fVar72 = local_110;
      fVar69 = local_90;
      if ((local_2a & local_29) != 0) {
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_468,local_118,fStack_114,local_110,(MethodInfo *)0x0);
        fVar69 = local_90;
        local_40 = *extraout_EAX_05;
        local_38 = *(float *)(extraout_EAX_05 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_478,local_98,fStack_94,local_90,(MethodInfo *)0x0);
        VVar29.___z_4 = local_38;
        VVar29.___x_2 = (float)(undefined4)local_40;
        VVar29.___y_3 = local_40._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                  (VVar29,*extraout_EAX_06,(MethodInfo *)0x0);
      }
      fVar71 = local_100;
      if ((local_2b & local_29) != 0) {
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_488,local_98,fStack_94,fVar69,(MethodInfo *)0x0);
        fVar71 = local_100;
        local_40 = *extraout_EAX_07;
        local_38 = *(float *)(extraout_EAX_07 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_4a8,local_108,fStack_104,local_100,(MethodInfo *)0x0);
        VVar30.___z_4 = local_38;
        VVar30.___x_2 = (float)(undefined4)local_40;
        VVar30.___y_3 = local_40._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                  (VVar30,*extraout_EAX_08,(MethodInfo *)0x0);
      }
      if ((local_2b & local_2a) != 0) {
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_4b8,local_108,fStack_104,fVar71,(MethodInfo *)0x0);
        local_40 = *extraout_EAX_09;
        fVar69 = *(float *)(extraout_EAX_09 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_4c8,local_118,fStack_114,fVar72,(MethodInfo *)0x0);
        VVar31.___z_4 = fVar69;
        VVar31.___x_2 = (float)(undefined4)local_40;
        VVar31.___y_3 = local_40._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                  (VVar31,*extraout_EAX_10,(MethodInfo *)0x0);
      }
    }
    while( true ) {
      pMVar70 = local_64;
      pLVar73 = local_68;
      if (local_64 == (MonitorData *)0x0) goto LAB_10e1de2d;
      if ((int)(local_64->semaphore).m_Semaphore <= (int)local_44) break;
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)local_64,(int)local_44
                          ,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      if (pLVar73 == (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)0x0) goto LAB_10e1de2d;
      BVar75 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (pLVar73,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)local_64,
                          (int)local_44 + 1,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      BVar74 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (local_68,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      local_80 = BVar74.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_78 = (String_t *)BVar74.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)local_64,
                          (int)local_44 + 2,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      BVar74 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (local_68,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      local_70 = BVar74.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_50 = BVar74.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)local_64,
                          (int)local_44 + 3,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      BVar74 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (local_68,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      local_84 = BVar74.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_38 = (float)BVar74.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
        BVar74.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_84;
        BVar74.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_38;
      }
      local_84 = BVar74.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_38 = (float)BVar74.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_548,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar75,
                           (MethodInfo *)0x0);
      local_2c0._0_4_ = piVar68->___x_0;
      local_2c0._4_4_ = piVar68->___y_1;
      local_168 = (float)(int)(undefined4)local_2c0;
      local_2cc._0_4_ = piVar68->___x_0;
      local_2cc._4_4_ = piVar68->___y_1;
      fStack_164 = (float)(int)local_2cc._4_4_;
      uVar4 = piVar68->___x_0;
      uVar15 = piVar68->___y_1;
      local_160 = (float)piVar68->___z_2;
      iVar48.___y_1 = (int)local_80;
      iVar48.___x_0 = (int)local_78;
      local_60.___m_Right_1 = (float)uVar4;
      local_60.___m_Top_2 = (float)uVar15;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_3c8,iVar48,(MethodInfo *)0x0);
      local_2d8._0_4_ = piVar68->___x_0;
      local_2d8._4_4_ = piVar68->___y_1;
      local_238 = piVar68->___z_2;
      local_178 = (float)(int)(undefined4)local_2d8;
      local_240._0_4_ = piVar68->___x_0;
      local_240._4_4_ = piVar68->___y_1;
      fStack_174 = (float)(int)local_240._4_4_;
      uVar5 = piVar68->___x_0;
      uVar16 = piVar68->___y_1;
      local_170 = (float)piVar68->___z_2;
      iVar49.___y_1 = (int)local_70;
      iVar49.___x_0 = local_50;
      local_60.___m_Right_1 = (float)uVar5;
      local_60.___m_Top_2 = (float)uVar16;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_3d8,iVar49,(MethodInfo *)0x0);
      local_1b8._0_4_ = piVar68->___x_0;
      local_1b8._4_4_ = piVar68->___y_1;
      local_148 = (float)(int)(undefined4)local_1b8;
      local_1b0 = piVar68->___z_2;
      local_1ac._0_4_ = piVar68->___x_0;
      local_1ac._4_4_ = piVar68->___y_1;
      fStack_144 = (float)(int)local_1ac._4_4_;
      uVar6 = piVar68->___x_0;
      uVar17 = piVar68->___y_1;
      local_140 = (float)piVar68->___z_2;
      iVar50.___y_1 = (int)local_84;
      iVar50.___x_0 = (int)local_38;
      local_60.___m_Right_1 = (float)uVar6;
      local_60.___m_Top_2 = (float)uVar17;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_498,iVar50,(MethodInfo *)0x0);
      local_1e8._0_4_ = piVar68->___x_0;
      local_1e8._4_4_ = piVar68->___y_1;
      local_158 = (float)(int)(undefined4)local_1e8;
      local_18c = piVar68->___z_2;
      local_194._0_4_ = piVar68->___x_0;
      local_194._4_4_ = piVar68->___y_1;
      fStack_154 = (float)(int)local_194._4_4_;
      uVar7 = piVar68->___x_0;
      uVar18 = piVar68->___y_1;
      local_150 = (float)piVar68->___z_2;
      local_60.___m_Right_1 = (float)uVar7;
      local_60.___m_Top_2 = (float)uVar18;
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_3e8,local_168,fStack_164,local_160,(MethodInfo *)0x0);
      local_60.___m_Top_2 = (float)*extraout_EAX_11;
      local_60.___m_Bottom_3 = (float)((ulonglong)*extraout_EAX_11 >> 0x20);
      local_40._4_4_ = *(float *)(extraout_EAX_11 + 1);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_3f8,local_178,fStack_174,local_170,(MethodInfo *)0x0);
      VVar32.___y_3 = local_60.___m_Bottom_3;
      VVar32.___x_2 = local_60.___m_Top_2;
      VVar32.___z_4 = local_40._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                (VVar32,*extraout_EAX_12,(MethodInfo *)0x0);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_408,local_178,fStack_174,local_170,(MethodInfo *)0x0);
      local_40._4_4_ = *(float *)(extraout_EAX_13 + 1);
      local_60.___m_Top_2 = (float)*extraout_EAX_13;
      local_60.___m_Bottom_3 = (float)((ulonglong)*extraout_EAX_13 >> 0x20);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_418,local_148,fStack_144,local_140,(MethodInfo *)0x0);
      VVar33.___y_3 = local_60.___m_Bottom_3;
      VVar33.___x_2 = local_60.___m_Top_2;
      VVar33.___z_4 = local_40._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                (VVar33,*extraout_EAX_14,(MethodInfo *)0x0);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_428,local_148,fStack_144,local_140,(MethodInfo *)0x0);
      local_40._4_4_ = *(float *)(extraout_EAX_15 + 1);
      local_60.___m_Top_2 = (float)*extraout_EAX_15;
      local_60.___m_Bottom_3 = (float)((ulonglong)*extraout_EAX_15 >> 0x20);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_438,local_158,fStack_154,local_150,(MethodInfo *)0x0);
      VVar34.___y_3 = local_60.___m_Bottom_3;
      VVar34.___x_2 = local_60.___m_Top_2;
      VVar34.___z_4 = local_40._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                (VVar34,*extraout_EAX_16,(MethodInfo *)0x0);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_298,local_158,fStack_154,local_150,(MethodInfo *)0x0);
      local_40 = CONCAT44(*(undefined4 *)(extraout_EAX_17 + 1),(undefined4)local_40);
      local_60.___m_Top_2 = (float)*extraout_EAX_17;
      local_60.___m_Bottom_3 = (float)((ulonglong)*extraout_EAX_17 >> 0x20);
      Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                (&local_318,local_168,fStack_164,local_160,(MethodInfo *)0x0);
      VVar35.___y_3 = local_60.___m_Bottom_3;
      VVar35.___x_2 = local_60.___m_Top_2;
      VVar35.___z_4 = local_40._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                (VVar35,*extraout_EAX_18,(MethodInfo *)0x0);
      GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                (param_1,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar75,(MethodInfo *)0x0);
      iVar51.___y_1 = (int)local_80;
      iVar51.___x_0 = (int)local_78;
      GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                (param_1,iVar51,(MethodInfo *)0x0);
      iVar52.___y_1 = (int)local_70;
      iVar52.___x_0 = local_50;
      GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                (param_1,iVar52,(MethodInfo *)0x0);
      iVar53.___y_1 = (int)local_84;
      iVar53.___x_0 = (int)local_38;
      GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                (param_1,iVar53,(MethodInfo *)0x0);
      local_44 = (String_t *)((int)local_44 + 4);
    }
    local_60.___m_Left_0 = 0.0;
    local_60.___m_Right_1 = 0.0;
    local_60.___m_Top_2 = 0.0;
    local_60.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_60,1.0,1.0,1.0,0.2,(MethodInfo *)0x0);
    CVar41.___g_1 = local_60.___m_Right_1;
    CVar41.___r_0 = local_60.___m_Left_0;
    CVar41.___b_2 = local_60.___m_Top_2;
    CVar41.___a_3 = local_60.___m_Bottom_3;
    Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar41,(MethodInfo *)0x0);
    if (local_88 == (String_t *)0x0) goto LAB_10e1de2d;
    for (local_44 = (String_t *)(uint)*(ushort *)&local_88[1]._padding_;
        (int)local_44 < (int)(pMVar70->semaphore).m_Semaphore;
        local_44 = (String_t *)((int)local_44 + 4)) {
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pMVar70,(int)local_44,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      if (pLVar73 == (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)0x0) goto LAB_10e1de2d;
      BVar74 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (pLVar73,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      local_88 = BVar74.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_38 = (float)BVar74.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pMVar70,
                          (int)local_44 + 1,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      BVar74 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (pLVar73,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      local_84 = BVar74.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_80 = (String_t *)BVar74.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pMVar70,
                          (int)local_44 + 2,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      BVar74 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (pLVar73,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      local_78 = BVar74.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      local_70 = (String_t *)BVar74.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      bVar64 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                         ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pMVar70,
                          (int)local_44 + 3,
                          List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                         );
      BVar74 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                         (pLVar73,(uint)bVar64,
                          List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                         );
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
      }
      iVar54.___y_1 = (int)local_88;
      iVar54.___x_0 = (int)local_38;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_328,iVar54,(MethodInfo *)0x0);
      local_1a0._0_4_ = piVar68->___x_0;
      local_1a0._4_4_ = piVar68->___y_1;
      local_1f4._0_4_ = piVar68->___x_0;
      local_1f4._4_4_ = piVar68->___y_1;
      local_d0 = CONCAT44((float)(int)local_1f4._4_4_,(float)(int)(undefined4)local_1a0);
      uVar8 = piVar68->___x_0;
      uVar19 = piVar68->___y_1;
      local_c8 = (float)piVar68->___z_2;
      iVar55.___y_1 = (int)local_84;
      iVar55.___x_0 = (int)local_80;
      local_60.___m_Right_1 = (float)uVar8;
      local_60.___m_Top_2 = (float)uVar19;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_338,iVar55,(MethodInfo *)0x0);
      local_1c4._0_4_ = piVar68->___x_0;
      local_1c4._4_4_ = piVar68->___y_1;
      local_f0 = (float)(int)(undefined4)local_1c4;
      local_1bc = piVar68->___z_2;
      local_1d0._0_4_ = piVar68->___x_0;
      local_1d0._4_4_ = piVar68->___y_1;
      fStack_ec = (float)(int)local_1d0._4_4_;
      uVar9 = piVar68->___x_0;
      uVar20 = piVar68->___y_1;
      local_e8 = (float)piVar68->___z_2;
      iVar56.___y_1 = (int)local_78;
      iVar56.___x_0 = (int)local_70;
      local_60.___m_Right_1 = (float)uVar9;
      local_60.___m_Top_2 = (float)uVar20;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_348,iVar56,(MethodInfo *)0x0);
      local_1dc._0_4_ = piVar68->___x_0;
      local_1dc._4_4_ = piVar68->___y_1;
      local_130 = piVar68->___z_2;
      local_138._0_4_ = piVar68->___x_0;
      local_138._4_4_ = piVar68->___y_1;
      local_c0 = CONCAT44((float)(int)local_138._4_4_,(float)(int)(undefined4)local_1dc);
      uVar10 = piVar68->___x_0;
      uVar21 = piVar68->___y_1;
      local_b8 = (float)piVar68->___z_2;
      local_60.___m_Right_1 = (float)uVar10;
      local_60.___m_Top_2 = (float)uVar21;
      piVar68 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                          (&local_308,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar74,
                           (MethodInfo *)0x0);
      local_12c._0_4_ = piVar68->___x_0;
      local_12c._4_4_ = piVar68->___y_1;
      local_e0.___z_4 = (float)piVar68->___z_2;
      local_e0.___x_2 = (float)piVar68->___x_0;
      local_e0.___y_3 = (float)piVar68->___y_1;
      local_b0 = CONCAT44((float)(int)local_e0.___y_3,(float)(int)(undefined4)local_12c);
      uVar11 = piVar68->___x_0;
      uVar22 = piVar68->___y_1;
      local_a8 = (float)piVar68->___z_2;
      iVar57.___y_1 = (int)local_88;
      iVar57.___x_0 = (int)local_38;
      local_60.___m_Right_1 = (float)uVar11;
      local_60.___m_Top_2 = (float)uVar22;
      local_29 = GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                           (param_1,iVar57,(MethodInfo *)0x0);
      iVar58.___y_1 = (int)local_84;
      iVar58.___x_0 = (int)local_80;
      local_2b = GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                           (param_1,iVar58,(MethodInfo *)0x0);
      iVar59.___y_1 = (int)local_78;
      iVar59.___x_0 = (int)local_70;
      local_2a = GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                           (param_1,iVar59,(MethodInfo *)0x0);
      local_2c = GridGenerator_IsBorder_mDA72197E08FF827D1BC1DBFA9A10474FA225D26A
                           (param_1,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)BVar74,
                            (MethodInfo *)0x0);
      fVar69 = local_c8;
      fVar72 = local_e8;
      if ((local_29 & local_2b) != 0) {
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_358,(float)local_d0,(float)((ulonglong)local_d0 >> 0x20),local_c8,
                   (MethodInfo *)0x0);
        fVar72 = local_e8;
        local_40 = CONCAT44(*(undefined4 *)(extraout_EAX_19 + 1),(undefined4)local_40);
        local_60.___m_Top_2 = (float)*extraout_EAX_19;
        local_60.___m_Bottom_3 = (float)((ulonglong)*extraout_EAX_19 >> 0x20);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_368,local_f0,fStack_ec,local_e8,(MethodInfo *)0x0);
        VVar36.___y_3 = local_60.___m_Bottom_3;
        VVar36.___x_2 = local_60.___m_Top_2;
        VVar36.___z_4 = local_40._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                  (VVar36,*extraout_EAX_20,(MethodInfo *)0x0);
      }
      fVar71 = local_b8;
      if ((local_2a & local_2b) != 0) {
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_378,local_f0,fStack_ec,fVar72,(MethodInfo *)0x0);
        fVar71 = local_b8;
        local_40 = CONCAT44(*(undefined4 *)(extraout_EAX_21 + 1),(undefined4)local_40);
        local_60.___m_Top_2 = (float)*extraout_EAX_21;
        local_60.___m_Bottom_3 = (float)((ulonglong)*extraout_EAX_21 >> 0x20);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_2a8,(float)local_c0,(float)((ulonglong)local_c0 >> 0x20),local_b8,
                   (MethodInfo *)0x0);
        VVar37.___y_3 = local_60.___m_Bottom_3;
        VVar37.___x_2 = local_60.___m_Top_2;
        VVar37.___z_4 = local_40._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                  (VVar37,*extraout_EAX_22,(MethodInfo *)0x0);
      }
      fVar72 = local_a8;
      if ((local_2c & local_2a) != 0) {
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_210,(float)local_c0,(float)((ulonglong)local_c0 >> 0x20),fVar71,
                   (MethodInfo *)0x0);
        fVar72 = local_a8;
        local_40 = CONCAT44(*(undefined4 *)(extraout_EAX_23 + 1),(undefined4)local_40);
        local_60.___m_Top_2 = (float)*extraout_EAX_23;
        local_60.___m_Bottom_3 = (float)((ulonglong)*extraout_EAX_23 >> 0x20);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_220,(float)local_b0,(float)((ulonglong)local_b0 >> 0x20),local_a8,
                   (MethodInfo *)0x0);
        VVar38.___y_3 = local_60.___m_Bottom_3;
        VVar38.___x_2 = local_60.___m_Top_2;
        VVar38.___z_4 = local_40._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                  (VVar38,*extraout_EAX_24,(MethodInfo *)0x0);
      }
      if ((local_2c & local_29) != 0) {
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_230,(float)local_b0,(float)((ulonglong)local_b0 >> 0x20),fVar72,
                   (MethodInfo *)0x0);
        fVar72 = *(float *)(extraout_EAX_25 + 1);
        local_60.___m_Top_2 = (float)*extraout_EAX_25;
        local_60.___m_Bottom_3 = (float)((ulonglong)*extraout_EAX_25 >> 0x20);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_188,(float)local_d0,
                   (float)((ulonglong)local_d0 >> 0x20),fVar69,(MethodInfo *)0x0);
        VVar39.___y_3 = local_60.___m_Bottom_3;
        VVar39.___x_2 = local_60.___m_Top_2;
        VVar39.___z_4 = fVar72;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                  (VVar39,*extraout_EAX_26,(MethodInfo *)0x0);
      }
      pMVar70 = local_64;
      pLVar73 = local_68;
    }
  }
  goto LAB_10e1c120;
}
