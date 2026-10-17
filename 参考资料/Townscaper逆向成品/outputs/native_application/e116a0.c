// RVA 0xe116a0 | Placemaker.GridGenerator$$GetQuad
// PDB: GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
// Body: [[10e116a0, 10e12464]]
// Direct callees:
// 10054800 List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1040d9a0 HexMath_GetHex2_mE56EDBCC3C0150BD23A6207637EF7F670F70D12C
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040e050 HexMath_RotateCCW2_m6EB1AF4C135A5FCECB8D5F8BC967FC2992D69F95
// 1040e0d0 HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB
// 104487b0 ExtraMath_Swap_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB4DDE8B5BF5403806C61439D7E7655EDB30A40A3_gshared
// 10448820 ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m93E71FE5877C538A79407C1583CD88FF6436DFC8_gshared
// 10448850 ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_gshared
// 10836df0 ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
// 10e0eb80 math_abs_m39E085344CAB3C463ED59EB27A6934FA1595FE07_inline
// 10e0ecf0 math_round_mBE2C0372A91ADC7AA8450F5D439D1B73E663A90E_inline
// 10e109c0 GridGenerator_GetClosestClusterPos_m7824F99A7919904038888BB85769659401FB0FED
// 10e10e90 GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
// 10e12520 GridGenerator_GetVertCost_mE9A723C2E72FFECBD94C3E5F35A58C6E9FCB9676
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB * __cdecl
GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
          (Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *__return_storage_ptr__,
          GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_2,MethodInfo *param_3)

{
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar13;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar14;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar16;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar17;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar18;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar19;
  undefined3 uVar20;
  bool bVar21;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar23;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar24;
  byte bVar22;
  char cVar25;
  byte bVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  float fVar31;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar32;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar33;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar34;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar35;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar36;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar37;
  float fVar38;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_120;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_114;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_108;
  int local_fc;
  int iStack_f8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_f0;
  float local_e8;
  float local_e4;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_b4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_a8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_9c;
  float local_90;
  float local_8c;
  float local_88;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_84;
  float local_7c;
  float fStack_78;
  float local_74;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_70;
  SemaphoreImpl *local_64;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_60;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_40;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_38;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_30;
  float local_28;
  float local_24;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_20;
  Il2CppObject *local_18;
  byte local_13;
  byte local_12;
  byte local_11;
  Il2CppObject *local_10;
  int local_c;
  byte local_7;
  byte local_6;
  char local_5;

  if (DAT_11522675 == '\0') {
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
                       ExtraMath_Swap_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB4DDE8B5BF5403806C61439D7E7655EDB30A40A3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ExtraMath_Swap_Tisint3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_m5C92A90F70A6CAED1BB08BE3BDE60726867B00AD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ExtraMath_Swap_Tisint3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_mAE731873841FE661CA1D691BA291CC8060951802_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
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
    DAT_11522675 = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  local_10 = (Il2CppObject *)0x0;
  memset(&__return_storage_ptr__->___quadIndex_0,'\0',0x44);
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
  pfVar23 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                      (&local_a8,param_2,(MethodInfo *)0x0);
  local_84.___x_0 = pfVar23->___x_0;
  local_84.___y_1 = pfVar23->___y_1;
  local_74 = pfVar23->___z_2;
  local_7c = local_84.___x_0;
  fStack_78 = local_84.___y_1;
  local_4c = local_84.___x_0;
  fStack_48 = local_84.___y_1;
  local_44 = local_74;
  local_28 = local_74;
  local_90 = math_round_mBE2C0372A91ADC7AA8450F5D439D1B73E663A90E_inline
                       (local_84.___x_0,(MethodInfo *)0x0);
  local_8c = math_round_mBE2C0372A91ADC7AA8450F5D439D1B73E663A90E_inline
                       (fStack_48,(MethodInfo *)0x0);
  local_88 = math_round_mBE2C0372A91ADC7AA8450F5D439D1B73E663A90E_inline(local_44,(MethodInfo *)0x0)
  ;
  local_4c = (float)(int)local_90;
  fStack_48 = (float)(int)local_8c;
  iVar13.___y_1 = (int)fStack_48;
  iVar13.___x_0 = (int)local_4c;
  iVar13.___z_2 = (int)local_88;
  piVar24 = GridGenerator_GetClosestClusterPos_m7824F99A7919904038888BB85769659401FB0FED
                      ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_a8,param_1,iVar13,
                       (MethodInfo *)0x0);
  uVar30._0_4_ = piVar24->___x_0;
  uVar30._4_4_ = piVar24->___y_1;
  iVar27 = piVar24->___z_2;
  fStack_48 = (float)(undefined4)uVar30;
  local_44 = (float)uVar30._4_4_;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
    uVar30 = CONCAT44(local_44,fStack_48);
  }
  iVar14.___z_2 = iVar27;
  iVar14.___x_0 = (int)uVar30;
  iVar14.___y_1 = (int)((ulonglong)uVar30 >> 0x20);
  iVar32 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar14,(MethodInfo *)0x0);
  local_c = iVar32.___y_1;
  iVar27 = iVar32.___x_0;
  iVar33 = GridGenerator_GetPatchOffset_m025E033F6EF8E282C9DC571A2001949E6E73511D
                     (param_1,iVar32,(MethodInfo *)0x0);
  local_70.___z_4 = 0.0;
  iVar34.___y_1 = iVar33.___y_1 + local_c;
  iVar34.___x_0 = iVar33.___x_0 + iVar27;
  piVar24 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                      ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_a8,iVar34,
                       (MethodInfo *)0x0);
  local_60.___x_2 = (float)piVar24->___x_0;
  local_60.___y_3 = (float)piVar24->___y_1;
  local_60.___z_4 = (float)piVar24->___z_2;
  iVar34 = HexMath_RotateCW2_mD1082E727BC8D5F3EA036E2B6B8F0397D09AF1DB(iVar33,(MethodInfo *)0x0);
  iVar32.___y_1 = iVar34.___y_1 + local_c;
  iVar32.___x_0 = iVar34.___x_0 + iVar27;
  piVar24 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                      ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_a8,iVar32,
                       (MethodInfo *)0x0);
  local_9c.___x_2 = (float)piVar24->___x_0;
  local_9c.___y_3 = (float)piVar24->___y_1;
  local_9c.___z_4 = (float)piVar24->___z_2;
  iVar32 = HexMath_RotateCCW2_m6EB1AF4C135A5FCECB8D5F8BC967FC2992D69F95(iVar33,(MethodInfo *)0x0);
  iVar33.___y_1 = iVar32.___y_1 + local_c;
  iVar33.___x_0 = iVar32.___x_0 + iVar27;
  piVar24 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                      ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_a8,iVar33,
                       (MethodInfo *)0x0);
  local_b4.___x_2 = (float)piVar24->___x_0;
  local_b4.___y_3 = (float)piVar24->___y_1;
  local_b4.___z_4 = (float)piVar24->___z_2;
  local_50 = (local_7c - (float)(int)local_60.___x_2) * (local_7c - (float)(int)local_60.___x_2) +
             (fStack_78 - (float)(int)local_60.___y_3) * (fStack_78 - (float)(int)local_60.___y_3) +
             (local_74 - (float)(int)local_60.___z_4) * (local_74 - (float)(int)local_60.___z_4);
  local_24 = (local_7c - (float)(int)local_9c.___x_2) * (local_7c - (float)(int)local_9c.___x_2) +
             (fStack_78 - (float)(int)local_9c.___y_3) * (fStack_78 - (float)(int)local_9c.___y_3) +
             (local_74 - (float)(int)local_9c.___z_4) * (local_74 - (float)(int)local_9c.___z_4);
  local_54 = (fStack_78 - (float)(int)local_b4.___y_3) * (fStack_78 - (float)(int)local_b4.___y_3) +
             (local_7c - (float)(int)local_b4.___x_2) * (local_7c - (float)(int)local_b4.___x_2) +
             (local_74 - (float)(int)local_b4.___z_4) * (local_74 - (float)(int)local_b4.___z_4);
  if (local_54 < local_50) {
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m93E71FE5877C538A79407C1583CD88FF6436DFC8_gshared
              (&local_60,&local_b4,
               ExtraMath_Swap_Tisint3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_mAE731873841FE661CA1D691BA291CC8060951802_RuntimeMethod_var
              );
    ExtraMath_Swap_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB4DDE8B5BF5403806C61439D7E7655EDB30A40A3_gshared
              (&local_50,&local_54,
               ExtraMath_Swap_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB4DDE8B5BF5403806C61439D7E7655EDB30A40A3_RuntimeMethod_var
              );
  }
  if (local_24 < local_50) {
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m93E71FE5877C538A79407C1583CD88FF6436DFC8_gshared
              (&local_60,&local_9c,
               ExtraMath_Swap_Tisint3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_mAE731873841FE661CA1D691BA291CC8060951802_RuntimeMethod_var
              );
    ExtraMath_Swap_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB4DDE8B5BF5403806C61439D7E7655EDB30A40A3_gshared
              (&local_50,&local_24,
               ExtraMath_Swap_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB4DDE8B5BF5403806C61439D7E7655EDB30A40A3_RuntimeMethod_var
              );
  }
  if (local_24 < local_54) {
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m93E71FE5877C538A79407C1583CD88FF6436DFC8_gshared
              (&local_9c,&local_b4,
               ExtraMath_Swap_Tisint3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_mAE731873841FE661CA1D691BA291CC8060951802_RuntimeMethod_var
              );
    ExtraMath_Swap_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB4DDE8B5BF5403806C61439D7E7655EDB30A40A3_gshared
              (&local_24,&local_54,
               ExtraMath_Swap_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB4DDE8B5BF5403806C61439D7E7655EDB30A40A3_RuntimeMethod_var
              );
  }
  local_c8 = param_2.___y_1 - ___real_40600000;
  local_c0 = param_2.___y_1 + ___real_40900000;
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  fVar15.___z_2 = local_28;
  fVar15.___x_0 = local_84.___x_0;
  fVar15.___y_1 = local_84.___y_1;
  fVar35 = HexMath_GetHex2_mE56EDBCC3C0150BD23A6207637EF7F670F70D12C(fVar15,(MethodInfo *)0x0);
  local_c4 = GridGenerator_GetVertCost_mE9A723C2E72FFECBD94C3E5F35A58C6E9FCB9676
                       (param_1,fVar35,(MethodInfo *)0x0);
  local_c4 = local_c4 - __real_3f000000;
  local_28 = 0.0;
  do {
    fVar38 = local_60.___z_4;
    local_70.___x_2 = local_60.___x_2;
    local_70.___y_3 = local_60.___y_3;
    local_114.___x_2 = local_60.___x_2;
    local_114.___y_3 = local_60.___y_3;
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    ExtraMath_Swap_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE88A46A5EC903029D69ED80EDE8527D78AEC4FE5_gshared
              (&local_60,&local_9c,&local_b4,
               ExtraMath_Swap_Tisint3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921_m5C92A90F70A6CAED1BB08BE3BDE60726867B00AD_RuntimeMethod_var
              );
    local_fc = (int)local_114.___x_2 - (int)local_90;
    iStack_f8 = (int)local_114.___y_3 - (int)local_8c;
    iVar16.___y_1 = iStack_f8;
    iVar16.___x_0 = local_fc;
    iVar16.___z_2 = (int)fVar38 - (int)local_88;
    piVar24 = math_abs_m39E085344CAB3C463ED59EB27A6934FA1595FE07_inline
                        (&local_120,iVar16,(MethodInfo *)0x0);
    local_108.___x_0 = (float)piVar24->___x_0;
    local_108.___y_1 = (float)piVar24->___y_1;
    if ((((int)local_108.___x_0 < 0x55) &&
        (local_a8._0_8_ = local_108._0_8_, (int)local_108.___y_1 < 0x55)) &&
       (piVar24->___z_2 < 0x55)) {
      pDVar1 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8;
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
      }
      iVar17.___z_2 = (int)fVar38;
      iVar17.___x_0 = (int)local_70.___x_2;
      iVar17.___y_1 = (int)local_70.___y_3;
      iVar32 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar17,(MethodInfo *)0x0);
      if (pDVar1 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
LAB_10e12460:
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      bVar21 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                         (pDVar1,iVar32,&local_18,
                          Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
                         );
      if (bVar21) {
        if (local_18 == (Il2CppObject *)0x0) goto LAB_10e12460;
        if ((*(char *)&local_18[3].field0_0x0 == '\x05') && (*(char *)&local_18[2].monitor != '\0'))
        {
          if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 ==
              (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e12460;
          bVar21 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                             ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                              param_1->___patchDict_10,
                              *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)
                               &local_18[1].monitor,&local_10,
                              Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
                             );
          if (bVar21) {
            if ((local_10 == (Il2CppObject *)0x0) || (local_10[2].monitor == (MonitorData *)0x0))
            goto LAB_10e12460;
            local_64 = ((local_10[2].monitor)->semaphore).m_Semaphore;
            iVar29 = 0;
            local_c = 0;
            iVar27 = ((int)((int)&local_64->m_Handle + ((int)local_64 >> 0x1f & 3U)) >> 2) + -1;
            do {
              iVar28 = (iVar27 + local_c) / 2;
              if (local_10 == (Il2CppObject *)0x0) goto LAB_10e12460;
              local_70.___y_3 = (float)local_10[3].field0_0x0.klass;
              if (local_10[2].monitor == (MonitorData *)0x0) goto LAB_10e12460;
              bVar22 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                 ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                                  local_10[2].monitor,iVar28 * 4,
                                  List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                 );
              if ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)local_70.___y_3 ==
                  (List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)0x0) goto LAB_10e12460;
              BVar36 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                 ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                  local_70.___y_3,(uint)bVar22,
                                  List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                 );
              local_cc = (float)(int)BVar36.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              local_d0 = (float)(int)BVar36.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              fVar35.___y_1 = local_cc;
              fVar35.___x_0 = local_d0;
              fVar38 = GridGenerator_GetVertCost_mE9A723C2E72FFECBD94C3E5F35A58C6E9FCB9676
                                 (param_1,fVar35,(MethodInfo *)0x0);
              local_70.___y_3 = fVar38;
              if (local_c4 == fVar38) break;
              if (local_c4 < fVar38) {
                iVar27 = iVar28 + -1;
              }
              else {
                local_c = iVar28 + 1;
              }
              iVar29 = iVar29 + 1;
            } while (iVar29 < 5);
            iVar27 = iVar28 + 1;
            if (local_c4 <= fVar38) {
              iVar27 = iVar28;
            }
            iVar27 = iVar27 * 4;
            cVar25 = iVar27 < (int)local_64;
            iVar29 = iVar27 + -4;
            bVar26 = (byte)((uint)iVar29 >> 0x1f) ^ 1;
            local_c = iVar29;
            local_5 = cVar25;
            bVar22 = 1;
            if (bVar26 != 0 || (bool)cVar25) {
              do {
                local_7 = bVar22;
                local_6 = local_7 ^ 1;
                iVar28 = iVar27;
                if (local_7 == 0) {
                  if (bVar26 != 0) {
                    local_c = iVar29 + -4;
                    bVar26 = (byte)((uint)local_c >> 0x1f) ^ 1;
                    iVar27 = iVar29;
LAB_10e11eaf:
                    if ((((local_10 == (Il2CppObject *)0x0) ||
                         (local_10[2].monitor == (MonitorData *)0x0)) ||
                        (local_11 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                                               local_10[2].monitor,iVar27,
                                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                              ), local_18 == (Il2CppObject *)0x0)) ||
                       (local_18[3].monitor == (MonitorData *)0x0)) goto LAB_10e12460;
                    local_20 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                         ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                          local_18[3].monitor,(uint)local_11,
                                          List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                         );
                    iVar29 = local_c;
                    cVar25 = local_5;
                    if (local_7 == 0) {
                      if (local_c8 <= local_20.___y_1) {
LAB_10e11f33:
                        local_70.___z_4 = (float)((int)local_70.___z_4 + 1);
                        if ((local_20.___x_0 - param_2.___x_0) * (local_20.___x_0 - param_2.___x_0)
                            + (local_20.___y_1 - param_2.___y_1) *
                              (local_20.___y_1 - param_2.___y_1) <= __real_40c00000) {
                          if (((local_10 == (Il2CppObject *)0x0) ||
                              (local_10[2].monitor == (MonitorData *)0x0)) ||
                             ((local_7 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                                   ((
                                                  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *
                                                  )local_10[2].monitor,iVar27 + 1,
                                                  List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                                  ), local_18 == (Il2CppObject *)0x0 ||
                              (local_18[3].monitor == (MonitorData *)0x0)))) goto LAB_10e12460;
                          VVar37 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                              local_18[3].monitor,(uint)local_7,
                                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                             );
                          local_d8 = local_38.___x_0 - local_20.___x_0;
                          local_38.___y_1 = VVar37.___y_1;
                          local_d4 = local_38.___y_1 - local_20.___y_1;
                          local_38 = VVar37;
                          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                               ->has_cctor != '\0') &&
                             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                              ->cctor_finished == 0)) {
                            il2cpp_runtime_class_init
                                      (
                                      ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                      );
                          }
                          VVar37.___y_1 = local_d4;
                          VVar37.___x_0 = local_d8;
                          VVar37 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                                             (VVar37,(MethodInfo *)0x0);
                          local_e0.___x_0 = VVar37.___x_0;
                          fVar31 = (param_2.___x_0 - local_20.___x_0) * local_e0.___x_0;
                          fVar38 = local_e0.___y_1 * (param_2.___y_1 - local_20.___y_1);
                          iVar29 = local_c;
                          cVar25 = local_5;
                          local_e0 = VVar37;
                          if (0.0 <= fVar31 + fVar38) {
                            if ((((local_10 == (Il2CppObject *)0x0) ||
                                 (local_10[2].monitor == (MonitorData *)0x0)) ||
                                (local_12 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                                      ((
                                                  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *
                                                  )local_10[2].monitor,iVar27 + 2,
                                                  List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                                  ), local_18 == (Il2CppObject *)0x0)) ||
                               (local_18[3].monitor == (MonitorData *)0x0)) goto LAB_10e12460;
                            VVar37 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                               ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                                local_18[3].monitor,(uint)local_12,
                                                List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                               );
                            local_e8 = local_30.___x_0 - local_38.___x_0;
                            local_30.___y_1 = VVar37.___y_1;
                            local_e4 = local_30.___y_1 - local_38.___y_1;
                            local_30 = VVar37;
                            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                 ->has_cctor != '\0') &&
                               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                ->cctor_finished == 0)) {
                              il2cpp_runtime_class_init
                                        (
                                        ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                        );
                            }
                            VVar18.___y_1 = local_e4;
                            VVar18.___x_0 = local_e8;
                            VVar37 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                                               (VVar18,(MethodInfo *)0x0);
                            fVar31 = local_f0.___x_0 * (param_2.___x_0 - local_38.___x_0);
                            local_f0.___y_1 = VVar37.___y_1;
                            fVar38 = local_f0.___y_1 * (param_2.___y_1 - local_38.___y_1);
                            iVar29 = local_c;
                            cVar25 = local_5;
                            local_f0 = VVar37;
                            if (0.0 <= fVar31 + fVar38) {
                              if (((local_10 == (Il2CppObject *)0x0) ||
                                  (local_10[2].monitor == (MonitorData *)0x0)) ||
                                 ((local_13 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                                                        ((
                                                  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *
                                                  )local_10[2].monitor,iVar27 + 3,
                                                  List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                                                  ), local_18 == (Il2CppObject *)0x0 ||
                                  (local_18[3].monitor == (MonitorData *)0x0)))) goto LAB_10e12460;
                              VVar37 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                 ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9
                                                   *)local_18[3].monitor,(uint)local_13,
                                                  List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                                 );
                              local_bc = local_40.___x_0 - local_30.___x_0;
                              local_40.___y_1 = VVar37.___y_1;
                              local_b8 = local_40.___y_1 - local_30.___y_1;
                              local_40 = VVar37;
                              if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                   ->has_cctor != '\0') &&
                                 (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                  ->cctor_finished == 0)) {
                                il2cpp_runtime_class_init
                                          (
                                          ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                          );
                              }
                              VVar19.___y_1 = local_b8;
                              VVar19.___x_0 = local_bc;
                              VVar37 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                                                 (VVar19,(MethodInfo *)0x0);
                              fVar38 = fStack_78 * (param_2.___x_0 - local_30.___x_0);
                              fStack_78 = VVar37.___x_0;
                              local_74 = VVar37.___y_1;
                              iVar29 = local_c;
                              cVar25 = local_5;
                              if (0.0 <= fVar38 + local_74 * (param_2.___y_1 - local_30.___y_1)) {
                                local_84.___y_1 = local_20.___y_1 - local_40.___y_1;
                                local_84.___x_0 = local_20.___x_0 - local_40.___x_0;
                                if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                     ->has_cctor != '\0') &&
                                   (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                    ->cctor_finished == 0)) {
                                  il2cpp_runtime_class_init
                                            (
                                            ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                            );
                                }
                                VVar37 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                                                   (local_84,(MethodInfo *)0x0);
                                fVar38 = fStack_48 * (param_2.___x_0 - local_40.___x_0);
                                fStack_48 = VVar37.___x_0;
                                local_44 = VVar37.___y_1;
                                iVar29 = local_c;
                                cVar25 = local_5;
                                if (0.0 <= fVar38 + local_44 * (param_2.___y_1 - local_40.___y_1)) {
                                  memset(&__return_storage_ptr__->___quadIndex_0,'\0',0x44);
                                  (__return_storage_ptr__->___p0_5).___x_0 = local_20.___x_0;
                                  (__return_storage_ptr__->___p0_5).___y_1 = local_20.___y_1;
                                  (__return_storage_ptr__->___p1_6).___x_0 = local_38.___x_0;
                                  (__return_storage_ptr__->___p1_6).___y_1 = local_38.___y_1;
                                  (__return_storage_ptr__->___p2_7).___x_0 = local_30.___x_0;
                                  (__return_storage_ptr__->___p2_7).___y_1 = local_30.___y_1;
                                  (__return_storage_ptr__->___p3_8).___x_0 = local_40.___x_0;
                                  (__return_storage_ptr__->___p3_8).___y_1 = local_40.___y_1;
                                  if ((local_10 != (Il2CppObject *)0x0) &&
                                     (local_10[3].field0_0x0.klass != (Il2CppClass *)0x0)) {
                                    BVar36 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                                       ((
                                                  List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *
                                                  )local_10[3].field0_0x0.klass,(uint)local_11,
                                                  List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                                  );
                                    (__return_storage_ptr__->___v0_1).___x_0 =
                                         BVar36.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                                    (__return_storage_ptr__->___v0_1).___y_1 =
                                         (int)BVar36.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
                                    if ((local_10 != (Il2CppObject *)0x0) &&
                                       (local_10[3].field0_0x0.klass != (Il2CppClass *)0x0)) {
                                      BVar36 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                                         ((
                                                  List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *
                                                  )local_10[3].field0_0x0.klass,(uint)local_7,
                                                  List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                                  );
                                      (__return_storage_ptr__->___v1_2).___x_0 =
                                           BVar36.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                                      (__return_storage_ptr__->___v1_2).___y_1 =
                                           (int)BVar36.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
                                      if ((local_10 != (Il2CppObject *)0x0) &&
                                         (local_10[3].field0_0x0.klass != (Il2CppClass *)0x0)) {
                                        BVar36 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                                           ((
                                                  List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *
                                                  )local_10[3].field0_0x0.klass,(uint)local_12,
                                                  List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                                  );
                                        (__return_storage_ptr__->___v2_3).___x_0 =
                                             BVar36.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                                        (__return_storage_ptr__->___v2_3).___y_1 =
                                             (int)BVar36.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
                                        if ((local_10 != (Il2CppObject *)0x0) &&
                                           (local_10[3].field0_0x0.klass != (Il2CppClass *)0x0)) {
                                          BVar36 =
                                                  List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                                                            ((
                                                  List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *
                                                  )local_10[3].field0_0x0.klass,(uint)local_13,
                                                  List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                                                  );
                                          (__return_storage_ptr__->___v3_4).___x_0 =
                                               BVar36.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                                          (__return_storage_ptr__->___v3_4).___y_1 =
                                               (int)BVar36.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
                                          __return_storage_ptr__->___quadIndex_0 =
                                               (uchar)((int)(iVar27 + (iVar27 >> 0x1f & 3U)) >> 2);
                                          uVar20 = *(undefined3 *)&__return_storage_ptr__->field_0x1
                                          ;
                                          iVar27 = (__return_storage_ptr__->___v0_1).___x_0;
                                          iVar29 = (__return_storage_ptr__->___v0_1).___y_1;
                                          iVar28 = (__return_storage_ptr__->___v1_2).___x_0;
                                          fVar38 = (__return_storage_ptr__->___p3_8).___y_1;
                                          iVar2 = (__return_storage_ptr__->___v1_2).___y_1;
                                          iVar3 = (__return_storage_ptr__->___v2_3).___x_0;
                                          iVar4 = (__return_storage_ptr__->___v2_3).___y_1;
                                          iVar5 = (__return_storage_ptr__->___v3_4).___x_0;
                                          iVar6 = (__return_storage_ptr__->___v3_4).___y_1;
                                          fVar31 = (__return_storage_ptr__->___p0_5).___x_0;
                                          fVar7 = (__return_storage_ptr__->___p0_5).___y_1;
                                          fVar8 = (__return_storage_ptr__->___p1_6).___x_0;
                                          fVar9 = (__return_storage_ptr__->___p1_6).___y_1;
                                          fVar10 = (__return_storage_ptr__->___p2_7).___x_0;
                                          fVar11 = (__return_storage_ptr__->___p2_7).___y_1;
                                          fVar12 = (__return_storage_ptr__->___p3_8).___x_0;
                                          __return_storage_ptr__->___quadIndex_0 =
                                               __return_storage_ptr__->___quadIndex_0;
                                          *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar20
                                          ;
                                          (__return_storage_ptr__->___v0_1).___x_0 = iVar27;
                                          (__return_storage_ptr__->___v0_1).___y_1 = iVar29;
                                          (__return_storage_ptr__->___v1_2).___x_0 = iVar28;
                                          (__return_storage_ptr__->___v1_2).___y_1 = iVar2;
                                          (__return_storage_ptr__->___v2_3).___x_0 = iVar3;
                                          (__return_storage_ptr__->___v2_3).___y_1 = iVar4;
                                          (__return_storage_ptr__->___v3_4).___x_0 = iVar5;
                                          (__return_storage_ptr__->___v3_4).___y_1 = iVar6;
                                          (__return_storage_ptr__->___p0_5).___x_0 = fVar31;
                                          (__return_storage_ptr__->___p0_5).___y_1 = fVar7;
                                          (__return_storage_ptr__->___p1_6).___x_0 = fVar8;
                                          (__return_storage_ptr__->___p1_6).___y_1 = fVar9;
                                          (__return_storage_ptr__->___p2_7).___x_0 = fVar10;
                                          (__return_storage_ptr__->___p2_7).___y_1 = fVar11;
                                          (__return_storage_ptr__->___p3_8).___x_0 = fVar12;
                                          (__return_storage_ptr__->___p3_8).___y_1 = fVar38;
                                          return __return_storage_ptr__;
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_10e12460;
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        bVar26 = 0;
                      }
                    }
                    else {
                      if (local_20.___y_1 <= local_c0) goto LAB_10e11f33;
                      local_5 = '\0';
                      cVar25 = local_5;
                    }
                  }
                }
                else {
                  cVar25 = local_5;
                  if (local_5 != '\0') {
                    iVar28 = iVar27 + 4;
                    local_5 = iVar28 < (int)local_64;
                    goto LAB_10e11eaf;
                  }
                }
                iVar27 = iVar28;
                bVar22 = local_6;
              } while (bVar26 != 0 || cVar25 != '\0');
            }
          }
        }
      }
    }
    local_28 = (float)((int)local_28 + 1);
    if (2 < (int)local_28) {
      memset(&__return_storage_ptr__->___quadIndex_0,'\0',0x44);
      return __return_storage_ptr__;
    }
  } while( true );
}
