// RVA 0xe19d20 | Placemaker.GridGenerator$$Measure
// PDB: GridGenerator_Measure_m1FA1F74ECC88B6963C8C8698E830755C895D9D2F
// Body: [[10e19d20, 10e1ad1a]]
// Direct callees:
// 1003e770 SetAt
// 10054800 List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
// 10055070 SetAt
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1021d760 Dictionary_2_GetEnumerator_m42E0EB162F4066A0FB7F3A2A02C8CC0318A39399_gshared
// 10227350 Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
// 103cd2a0 math_length_m25A33854A8D7F4A4B96C82171BE616376ECA25CE_inline
// 103cd320 math_max_m204D64C145FC2AA68E09CDB4E9F4C67FFE7D58AB_inline
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1040da00 HexMath_GetHex3_m93C715F98C4C7C0F754D4D419756B3D546287763
// 108363d0 ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
// 1091a770 Enumerator_MoveNext_m0368B37246AE5DE3067277D214F94AF912BBCFCC_gshared
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
// 10a43fe0 Mathf_Max_mC299EEF1FD6084E41A182E2033790DB50DEF5B39
// 10a44040 Mathf_Max_mF4D4C83FF7655E1D027E2D445280E72000958E2C
// 10e0eb80 math_abs_m39E085344CAB3C463ED59EB27A6934FA1595FE07_inline
// 10e1ad42 FUN_10e1ad42
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA

void __cdecl
GridGenerator_Measure_m1FA1F74ECC88B6963C8C8698E830755C895D9D2F
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
  MonitorData *pMVar19;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar20;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar21;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar22;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar23;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar24;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar25;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar26;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar27;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar28;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar29;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar30;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar31;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar32;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar33;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar34;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar35;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar36;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar37;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar38;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar39;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar40;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar41;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar42;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar43;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar44;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar45;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar46;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar47;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar48;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar49;
  Il2CppObject *pIVar50;
  undefined1 *puVar51;
  undefined1 *puVar52;
  bool bVar53;
  byte bVar54;
  Enumerator_t81F0095C2D5C396203071D667A6252EFAB3D76D6 *pEVar55;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar56;
  int iVar57;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *piVar58;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar59;
  String_t *pSVar61;
  int iVar62;
  undefined8 uVar63;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar64;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar65;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar66;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar67;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_3b8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_3a8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_398;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_388;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_378;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_368;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_358;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_348;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_338;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_328;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_318;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_308;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_2f8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_2e8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_2d8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_2c8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_2b8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_2a8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_298;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_288;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_278;
  Enumerator_t81F0095C2D5C396203071D667A6252EFAB3D76D6 local_268;
  undefined8 local_244;
  float local_23c;
  undefined8 local_238;
  undefined8 local_22c;
  int local_220;
  int iStack_21c;
  undefined8 local_20c;
  undefined8 local_200;
  undefined8 local_1f4;
  int local_1e8;
  int iStack_1e4;
  undefined8 local_1d4;
  undefined8 local_1c8;
  undefined8 local_1bc;
  int local_1b0;
  int iStack_1ac;
  undefined8 local_19c;
  undefined8 local_190;
  undefined8 local_184;
  Enumerator_t4DDEBDAED82360EF38E8BBE722F208519AE1835A local_174;
  int local_158;
  int iStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_134;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F local_f8;
  undefined8 local_e0;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_c8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_c0;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_b8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  String_t *local_94;
  uint local_90;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *local_84;
  int local_80;
  Il2CppObject *local_7c;
  float local_78;
  float local_74;
  uint local_70;
  Il2CppObject *local_68;
  String_t *local_64;
  uint local_60;
  int local_54;
  float local_50;
  Il2CppObject *local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  Il2CppClass *local_38;
  float local_30;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *local_2c;
  undefined1 *puStack_24;
  undefined1 *local_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  String_t *pSVar60;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &__ehhandler__GridGenerator_Measure_m1FA1F74ECC88B6963C8C8698E830755C895D9D2F;
  pvStack_1c = ExceptionList;
  local_20 = &stack0xfffffc38;
  ExceptionList = &pvStack_1c;
  puVar51 = &stack0xfffffffc;
  puVar52 = &stack0xfffffc38;
  if (DAT_1152266f == '\0') {
    ExceptionList = &pvStack_1c;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_GetEnumerator_mAE476A48777993C2CEF802A151693E6B31280713_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m694BCD17B1125D6AD838A86E8C17F1E5A8AF3007_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m5D00E4B1FA3EE398C0FFF6C052545360E1204B15_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m7ABC1E270B86DAF233B6E8C085753CD8CE30F814_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Key_m527B39A68ADCB059B7F7FFCE291DE47AD7BDABDF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Value_mF14692992DBA50205C7FB228656ABBD2122E4AA5_RuntimeMethod_var
              );
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
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD3672737537183C4C85F4CE832D31DE2C8061F96);
    DAT_1152266f = '\x01';
    puVar51 = puStack_24;
    puVar52 = local_20;
  }
  local_20 = puVar52;
  puStack_24 = puVar51;
  BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
  BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
  BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
  BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
  local_e0._0_4_ = 0;
  iVar57 = (int)local_e0;
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 0;
  iStack_d8 = 0;
  iStack_d4 = 0;
  local_98 = 0.0;
  iStack_d0 = 0;
  iStack_cc = 0;
  local_74 = 0.0;
  local_78 = 0.0;
  local_a4 = 0.0;
  local_a0 = 0.0;
  local_9c = 0.0;
  local_7c = (Il2CppObject *)0x0;
  local_a8 = 0.0;
  if ((Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)param_1->___bitDict_8 !=
      (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)0x0) {
    pEVar55 = Dictionary_2_GetEnumerator_m42E0EB162F4066A0FB7F3A2A02C8CC0318A39399_gshared
                        (&local_268,
                         (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
                         param_1->___bitDict_8,
                         Dictionary_2_GetEnumerator_mAE476A48777993C2CEF802A151693E6B31280713_RuntimeMethod_var
                        );
    local_174.___dictionary_0 =
         (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)pEVar55->___dictionary_0;
    local_174.___version_1 = pEVar55->___version_1;
    local_174.___index_2 = pEVar55->___index_2;
    local_174.___current_3.___key_0.___x_0 = (pEVar55->___current_3).___key_0.___tileX_0;
    local_174.___current_3.___key_0.___y_1 = (pEVar55->___current_3).___key_0.___tileZ_1;
    local_174.___current_3.___value_1 = (pEVar55->___current_3).___value_1;
    local_174.___getEnumeratorRetType_4 = pEVar55->___getEnumeratorRetType_4;
    local_14 = 0;
    while( true ) {
      bVar53 = Enumerator_MoveNext_m0368B37246AE5DE3067277D214F94AF912BBCFCC_gshared
                         (&local_174,
                          Enumerator_MoveNext_m5D00E4B1FA3EE398C0FFF6C052545360E1204B15_RuntimeMethod_var
                         );
      BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
      BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
      BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
      BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
      if (!bVar53) {
        FUN_10e1ad42();
        return;
      }
      local_68 = local_174.___current_3.___value_1;
      iVar57 = (int)local_e0;
      if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 ==
          (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) break;
      iVar34.___y_1 = local_174.___current_3.___key_0.___y_1;
      iVar34.___x_0 = local_174.___current_3.___key_0.___x_0;
      local_4c = Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                           ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                            param_1->___patchDict_10,iVar34,
                            Dictionary_2_get_Item_m8E7431B030DD0D30A3B90BC0E64E08576AE76DBE_RuntimeMethod_var
                           );
      iVar62 = 0;
      while( true ) {
        pIVar50 = local_4c;
        BVar49.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar49.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar48.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar48.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar47.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar47.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        BVar65.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar65.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        local_54 = iVar62;
        iVar57 = (int)local_e0;
        if ((local_4c == (Il2CppObject *)0x0) ||
           (pMVar19 = local_4c[2].monitor, BVar66 = BVar65, BVar67 = BVar48,
           pMVar19 == (MonitorData *)0x0)) goto LAB_10e1b032;
        if ((int)(pMVar19->semaphore).m_Semaphore <= iVar62) break;
        BVar66 = BVar47;
        BVar67 = BVar49;
        if (local_68 == (Il2CppObject *)0x0) goto LAB_10e1b032;
        local_38 = (Il2CppClass *)local_68[3].monitor;
        bVar54 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                           ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pMVar19,iVar62,
                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_38 == (Il2CppClass *)0x0) goto LAB_10e1b032;
        local_b0 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_38,
                              (uint)bVar54,
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        local_38 = (Il2CppClass *)local_68[3].monitor;
        iVar57 = (int)local_e0;
        if (pIVar50[2].monitor == (MonitorData *)0x0) goto LAB_10e1b032;
        local_64 = (String_t *)(iVar62 + 1);
        bVar54 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                           ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pIVar50[2].monitor,
                            (int)local_64,
                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_38 == (Il2CppClass *)0x0) goto LAB_10e1b032;
        local_b8 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_38,
                              (uint)bVar54,
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        local_38 = (Il2CppClass *)local_68[3].monitor;
        iVar57 = (int)local_e0;
        if (pIVar50[2].monitor == (MonitorData *)0x0) goto LAB_10e1b032;
        local_60 = iVar62 + 2;
        bVar54 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                           ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pIVar50[2].monitor,
                            local_60,
                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_38 == (Il2CppClass *)0x0) goto LAB_10e1b032;
        local_c0 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_38,
                              (uint)bVar54,
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        local_38 = (Il2CppClass *)local_68[3].monitor;
        iVar57 = (int)local_e0;
        if (pIVar50[2].monitor == (MonitorData *)0x0) goto LAB_10e1b032;
        local_40 = (float)(iVar62 + 3);
        bVar54 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                           ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pIVar50[2].monitor,
                            (int)local_40,
                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_38 == (Il2CppClass *)0x0) goto LAB_10e1b032;
        VVar64 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                           ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_38,
                            (uint)bVar54,
                            List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        local_38 = pIVar50[3].field0_0x0.klass;
        local_c8 = VVar64;
        iVar57 = (int)local_e0;
        if (pIVar50[2].monitor == (MonitorData *)0x0) goto LAB_10e1b032;
        bVar54 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                           ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pIVar50[2].monitor,
                            iVar62,
                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_38 == (Il2CppClass *)0x0) goto LAB_10e1b032;
        BVar65 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                           ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)local_38,
                            (uint)bVar54,
                            List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        pSVar60 = BVar65.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        local_70 = BVar65.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        local_38 = pIVar50[3].field0_0x0.klass;
        iVar57 = (int)local_e0;
        if (pIVar50[2].monitor == (MonitorData *)0x0) goto LAB_10e1b032;
        bVar54 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                           ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pIVar50[2].monitor,
                            (int)local_64,
                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_38 == (Il2CppClass *)0x0) goto LAB_10e1b032;
        BVar66 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                           ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)local_38,
                            (uint)bVar54,
                            List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        local_94 = BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        local_90 = BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        local_38 = pIVar50[3].field0_0x0.klass;
        iVar57 = (int)local_e0;
        if (pIVar50[2].monitor == (MonitorData *)0x0) goto LAB_10e1b032;
        bVar54 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                           ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pIVar50[2].monitor,
                            local_60,
                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_38 == (Il2CppClass *)0x0) goto LAB_10e1b032;
        BVar67 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                           ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)local_38,
                            (uint)bVar54,
                            List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                           );
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        local_64 = BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        local_60 = BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        local_38 = pIVar50[3].field0_0x0.klass;
        iVar57 = (int)local_e0;
        if (pIVar50[2].monitor == (MonitorData *)0x0) goto LAB_10e1b032;
        bVar54 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                           ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)pIVar50[2].monitor,
                            (int)local_40,
                            List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                           );
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_38 == (Il2CppClass *)0x0) goto LAB_10e1b032;
        BVar66 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                           ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)local_38,
                            (uint)bVar54,
                            List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                           );
        pSVar61 = BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        local_38 = (Il2CppClass *)BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        local_44 = local_b8.___y_1;
        local_50 = local_b0.___y_1;
        local_48 = local_c0.___y_1;
        local_30 = local_c8.___y_1;
        local_3c = (local_b8.___x_0 + local_b0.___x_0 + local_c0.___x_0 + local_c8.___x_0) *
                   __real_3e800000;
        local_40 = (local_b8.___y_1 + local_b0.___y_1 + local_c0.___y_1 + local_c8.___y_1) *
                   __real_3e800000;
        if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished ==
            0)) {
          il2cpp_runtime_class_init
                    (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
        }
        iVar35.___y_1 = (int)pSVar60;
        iVar35.___x_0 = local_70;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_298,iVar35,(MethodInfo *)0x0);
        local_190._0_4_ = piVar56->___x_0;
        local_190._4_4_ = piVar56->___y_1;
        local_2c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)piVar56->___z_2;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_398,
                             *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(local_4c + 1),
                             (MethodInfo *)0x0);
        local_19c._0_4_ = piVar56->___x_0;
        local_19c._4_4_ = piVar56->___y_1;
        local_1b0 = (int)local_190 - (undefined4)local_19c;
        iStack_1ac = local_190._4_4_ - local_19c._4_4_;
        uVar1 = piVar56->___x_0;
        uVar10 = piVar56->___y_1;
        iVar28.___y_1 = iStack_1ac;
        iVar28.___x_0 = local_1b0;
        iVar28.___z_2 = (int)local_2c - piVar56->___z_2;
        local_184 = local_19c;
        local_f8.___c1_1.___x_0 = uVar1;
        local_f8.___c1_1.___y_1 = uVar10;
        piVar56 = math_abs_m39E085344CAB3C463ED59EB27A6934FA1595FE07_inline
                            (&local_3a8,iVar28,(MethodInfo *)0x0);
        uStack_150._0_4_ = piVar56->___x_0;
        uStack_150._4_4_ = piVar56->___y_1;
        local_84 = (int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)piVar56->___z_2;
        iVar23.___y_1 = (int)local_94;
        iVar23.___x_0 = local_90;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_278,iVar23,(MethodInfo *)0x0);
        local_1c8._0_4_ = piVar56->___x_0;
        local_1c8._4_4_ = piVar56->___y_1;
        local_2c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)piVar56->___z_2;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_288,
                             *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(local_4c + 1),
                             (MethodInfo *)0x0);
        local_1d4._0_4_ = piVar56->___x_0;
        local_1d4._4_4_ = piVar56->___y_1;
        local_1e8 = (int)local_1c8 - (undefined4)local_1d4;
        iStack_1e4 = local_1c8._4_4_ - local_1d4._4_4_;
        uVar2 = piVar56->___x_0;
        uVar11 = piVar56->___y_1;
        iVar29.___y_1 = iStack_1e4;
        iVar29.___x_0 = local_1e8;
        iVar29.___z_2 = (int)local_2c - piVar56->___z_2;
        local_1bc = local_1d4;
        local_f8.___c1_1.___x_0 = uVar2;
        local_f8.___c1_1.___y_1 = uVar11;
        piVar56 = math_abs_m39E085344CAB3C463ED59EB27A6934FA1595FE07_inline
                            (&local_328,iVar29,(MethodInfo *)0x0);
        local_148._0_4_ = piVar56->___x_0;
        local_148._4_4_ = piVar56->___y_1;
        local_2c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)piVar56->___z_2;
        iVar24.___y_1 = (int)local_64;
        iVar24.___x_0 = local_60;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_2a8,iVar24,(MethodInfo *)0x0);
        local_200._0_4_ = piVar56->___x_0;
        local_200._4_4_ = piVar56->___y_1;
        local_80 = piVar56->___z_2;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_2b8,
                             *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(local_4c + 1),
                             (MethodInfo *)0x0);
        local_20c._0_4_ = piVar56->___x_0;
        local_20c._4_4_ = piVar56->___y_1;
        local_220 = (int)local_200 - (undefined4)local_20c;
        iStack_21c = local_200._4_4_ - local_20c._4_4_;
        uVar3 = piVar56->___x_0;
        uVar12 = piVar56->___y_1;
        iVar30.___y_1 = iStack_21c;
        iVar30.___x_0 = local_220;
        iVar30.___z_2 = local_80 - piVar56->___z_2;
        local_1f4 = local_20c;
        local_f8.___c1_1.___x_0 = uVar3;
        local_f8.___c1_1.___y_1 = uVar12;
        piVar56 = math_abs_m39E085344CAB3C463ED59EB27A6934FA1595FE07_inline
                            (&local_2c8,iVar30,(MethodInfo *)0x0);
        uVar4 = piVar56->___x_0;
        uVar13 = piVar56->___y_1;
        local_80 = piVar56->___z_2;
        iVar25.___y_1 = (int)pSVar61;
        iVar25.___x_0 = (int)local_38;
        local_f8.___c1_1.___y_1 = uVar4;
        local_f8.___c1_1.___z_2 = uVar13;
        HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                  (&local_2d8,iVar25,(MethodInfo *)0x0);
        HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                  (&local_2e8,*(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(local_4c + 1),
                   (MethodInfo *)0x0);
        iVar26.___z_2 = (int)local_84;
        iVar26.___x_0 = (int)uStack_150;
        iVar26.___y_1 = uStack_150._4_4_;
        iVar31.___z_2 = (int)local_2c;
        iVar31.___x_0 = (undefined4)local_148;
        iVar31.___y_1 = local_148._4_4_;
        local_84 = math_max_m204D64C145FC2AA68E09CDB4E9F4C67FFE7D58AB_inline
                             (&local_2f8,iVar26,iVar31,(MethodInfo *)0x0);
        iVar27.___z_2 = (int)local_2c;
        iVar27.___x_0 = (undefined4)local_148;
        iVar27.___y_1 = local_148._4_4_;
        iVar32.___y_1 = local_f8.___c1_1.___z_2;
        iVar32.___x_0 = local_f8.___c1_1.___y_1;
        iVar32.___z_2 = local_80;
        piVar56 = math_max_m204D64C145FC2AA68E09CDB4E9F4C67FFE7D58AB_inline
                            (&local_308,iVar27,iVar32,(MethodInfo *)0x0);
        piVar56 = math_max_m204D64C145FC2AA68E09CDB4E9F4C67FFE7D58AB_inline
                            (&local_318,*local_84,*piVar56,(MethodInfo *)0x0);
        local_134._0_4_ = (Il2CppObject *)piVar56->___x_0;
        local_134._4_4_ = (Il2CppObject *)piVar56->___y_1;
        local_2c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                   il2cpp_array_new_specific
                             (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var
                              ,3);
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_2c == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
        goto LAB_10e1b032;
        ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                  (local_2c,0,(Il2CppObject *)local_134);
        ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(local_2c,1,local_134._4_4_);
        ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(local_2c,2,local_134._4_4_);
        iVar57 = Mathf_Max_mC299EEF1FD6084E41A182E2033790DB50DEF5B39
                           ((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32 *)local_2c,
                            (MethodInfo *)0x0);
        local_fc = local_50 - local_40;
        local_a8 = (float)iVar57;
        local_100 = local_b0.___x_0 - local_3c;
        fVar36.___y_1 = local_fc;
        fVar36.___x_0 = local_100;
        local_50 = math_length_m25A33854A8D7F4A4B96C82171BE616376ECA25CE_inline
                             (fVar36,(MethodInfo *)0x0);
        local_104 = local_44 - local_40;
        local_108 = local_b8.___x_0 - local_3c;
        fVar37.___y_1 = local_104;
        fVar37.___x_0 = local_108;
        local_44 = math_length_m25A33854A8D7F4A4B96C82171BE616376ECA25CE_inline
                             (fVar37,(MethodInfo *)0x0);
        local_10c = local_48 - local_40;
        local_110 = local_c0.___x_0 - local_3c;
        fVar38.___y_1 = local_10c;
        fVar38.___x_0 = local_110;
        local_48 = math_length_m25A33854A8D7F4A4B96C82171BE616376ECA25CE_inline
                             (fVar38,(MethodInfo *)0x0);
        local_114 = local_30 - local_40;
        local_118 = local_c8.___x_0 - local_3c;
        fVar39.___y_1 = local_114;
        fVar39.___x_0 = local_118;
        local_30 = math_length_m25A33854A8D7F4A4B96C82171BE616376ECA25CE_inline
                             (fVar39,(MethodInfo *)0x0);
        local_2c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                   il2cpp_array_new_specific
                             (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var
                              ,5);
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_2c == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
        goto LAB_10e1b032;
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,0,local_98);
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,1,local_50);
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,2,local_44);
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,3,local_48);
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,4,local_30);
        local_98 = Mathf_Max_mF4D4C83FF7655E1D027E2D445280E72000958E2C
                             ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,
                              (MethodInfo *)0x0);
        local_30 = local_98;
        local_2c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                   il2cpp_array_new_specific
                             (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var
                              ,5);
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_2c == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
        goto LAB_10e1b032;
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,0,local_78);
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,1,
                   (float)((uint)(local_3c - local_b0.___x_0) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff));
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,2,
                   (float)((uint)(local_3c - local_b8.___x_0) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff));
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,3,
                   (float)((uint)(local_3c - local_c0.___x_0) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff));
        SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA::SetAt
                  ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,4,
                   (float)((uint)(local_3c - local_c8.___x_0) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff));
        local_78 = Mathf_Max_mF4D4C83FF7655E1D027E2D445280E72000958E2C
                             ((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA *)local_2c,
                              (MethodInfo *)0x0);
        iVar40.___y_1 = (int)pSVar60;
        iVar40.___x_0 = local_70;
        local_30 = local_78;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_3b8,iVar40,(MethodInfo *)0x0);
        uVar5 = piVar56->___x_0;
        uVar14 = piVar56->___y_1;
        local_30 = (float)piVar56->___z_2;
        iVar41.___y_1 = (int)pSVar60;
        iVar41.___x_0 = local_70;
        local_f8.___c1_1.___y_1 = uVar5;
        local_f8.___c1_1.___z_2 = uVar14;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_338,iVar41,(MethodInfo *)0x0);
        local_e0 = CONCAT44(local_f8.___c1_1.___z_2,local_f8.___c1_1.___y_1);
        uVar6 = piVar56->___x_0;
        uVar15 = piVar56->___y_1;
        iStack_cc = piVar56->___z_2;
        iStack_d8 = (int)local_30;
        iVar42.___y_1 = (int)local_94;
        iVar42.___x_0 = local_90;
        iStack_d4 = uVar6;
        iStack_d0 = uVar15;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_348,iVar42,(MethodInfo *)0x0);
        uVar63._0_4_ = piVar56->___x_0;
        uVar63._4_4_ = piVar56->___y_1;
        local_30 = (float)piVar56->___z_2;
        local_f8.___c1_1.___y_1 = (undefined4)uVar63;
        local_f8.___c1_1.___z_2 = uVar63._4_4_;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          uVar63 = CONCAT44(local_f8.___c1_1.___z_2,local_f8.___c1_1.___y_1);
        }
        iVar20.___c0_0.___z_2 = iStack_d8;
        iVar20.___c0_0.___x_0 = (int)local_e0;
        iVar20.___c0_0.___y_1 = local_e0._4_4_;
        iVar20.___c1_1.___x_0 = iStack_d4;
        iVar20.___c1_1.___y_1 = iStack_d0;
        iVar20.___c1_1.___z_2 = iStack_cc;
        iVar33.___z_2 = (int)local_30;
        iVar33.___x_0 = (int)uVar63;
        iVar33.___y_1 = (int)((ulonglong)uVar63 >> 0x20);
        piVar58 = ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
                            (&local_f8,iVar20,iVar33,(MethodInfo *)0x0);
        local_158 = (piVar58->___c0_0).___x_0;
        iStack_154 = (piVar58->___c0_0).___y_1;
        uStack_150._0_4_ = (piVar58->___c0_0).___z_2;
        uStack_150._4_4_ = (piVar58->___c1_1).___x_0;
        uVar7 = (piVar58->___c1_1).___y_1;
        uVar16 = (piVar58->___c1_1).___z_2;
        iVar43.___y_1 = (int)local_64;
        iVar43.___x_0 = local_60;
        local_f8.___c1_1.___y_1 = uVar7;
        local_f8.___c1_1.___z_2 = uVar16;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_358,iVar43,(MethodInfo *)0x0);
        iVar21.___c0_0.___y_1 = iStack_154;
        iVar21.___c0_0.___x_0 = local_158;
        iVar21.___c0_0.___z_2 = (int)uStack_150;
        iVar21.___c1_1.___x_0 = uStack_150._4_4_;
        iVar21.___c1_1.___y_1 = local_f8.___c1_1.___y_1;
        iVar21.___c1_1.___z_2 = local_f8.___c1_1.___z_2;
        piVar58 = ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
                            ((int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *)&local_268,iVar21,
                             *piVar56,(MethodInfo *)0x0);
        local_158 = (piVar58->___c0_0).___x_0;
        iStack_154 = (piVar58->___c0_0).___y_1;
        uStack_150 = *(undefined8 *)&(piVar58->___c0_0).___z_2;
        uVar8 = (piVar58->___c1_1).___y_1;
        uVar17 = (piVar58->___c1_1).___z_2;
        iVar44.___y_1 = (int)pSVar61;
        iVar44.___x_0 = (int)local_38;
        local_f8.___c1_1.___y_1 = uVar8;
        local_f8.___c1_1.___z_2 = uVar17;
        piVar56 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                            (&local_368,iVar44,(MethodInfo *)0x0);
        iVar22.___c0_0.___y_1 = iStack_154;
        iVar22.___c0_0.___x_0 = local_158;
        iVar22.___c0_0.___z_2 = (int)uStack_150;
        iVar22.___c1_1.___x_0 = uStack_150._4_4_;
        iVar22.___c1_1.___y_1 = local_f8.___c1_1.___y_1;
        iVar22.___c1_1.___z_2 = local_f8.___c1_1.___z_2;
        piVar58 = ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
                            ((int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *)&local_268,iVar22,
                             *piVar56,(MethodInfo *)0x0);
        local_e0._0_4_ = (piVar58->___c0_0).___x_0;
        local_e0._4_4_ = (piVar58->___c0_0).___y_1;
        iStack_d8 = (piVar58->___c0_0).___z_2;
        iStack_d4 = (piVar58->___c1_1).___x_0;
        uVar9 = (piVar58->___c1_1).___y_1;
        uVar18 = (piVar58->___c1_1).___z_2;
        iStack_d0 = uVar9;
        iStack_cc = uVar18;
        local_2c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                   il2cpp_array_new_specific
                             (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var
                              ,4);
        BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
        BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_60;
        BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
        BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_90;
        iVar57 = (int)local_e0;
        if (local_2c == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
        goto LAB_10e1b032;
        ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(local_2c,0,local_7c);
        ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                  (local_2c,1,(Il2CppObject *)(iStack_d4 - (int)local_e0));
        ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                  (local_2c,2,(Il2CppObject *)(iStack_d0 - local_e0._4_4_));
        ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                  (local_2c,3,(Il2CppObject *)(iStack_cc - iStack_d8));
        local_7c = (Il2CppObject *)
                   Mathf_Max_mC299EEF1FD6084E41A182E2033790DB50DEF5B39
                             ((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32 *)local_2c,
                              (MethodInfo *)0x0);
        local_120 = (float)(int)local_70 + (float)(int)local_90 + (float)(int)local_60 +
                    (float)(int)local_38;
        local_11c = (float)(int)pSVar60 + (float)(int)local_94 + (float)(int)local_64 +
                    (float)(int)pSVar61;
        fVar45.___y_1 = local_11c;
        fVar45.___x_0 = local_120;
        pfVar59 = HexMath_GetHex3_m93C715F98C4C7C0F754D4D419756B3D546287763
                            (&local_378,fVar45,(MethodInfo *)0x0);
        local_238._0_4_ = pfVar59->___x_0;
        local_238._4_4_ = pfVar59->___y_1;
        local_23c = pfVar59->___z_2;
        local_244._0_4_ = pfVar59->___x_0;
        local_244._4_4_ = pfVar59->___y_1;
        local_30 = (float)(undefined4)local_238 * __real_3e800000;
        local_48 = (float)local_238._4_4_ * __real_3e800000;
        local_44 = local_23c * __real_3e800000;
        local_128 = local_3c;
        local_124 = local_40;
        local_22c = local_238;
        if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
        }
        fVar46.___y_1 = local_124;
        fVar46.___x_0 = local_128;
        pfVar59 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                            (&local_388,fVar46,(MethodInfo *)0x0);
        local_140._0_4_ = pfVar59->___x_0;
        local_140._4_4_ = pfVar59->___y_1;
        local_138 = pfVar59->___z_2;
        local_a4 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                             (local_74,(float)((uint)((float)(undefined4)local_140 - local_30) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff),
                              (MethodInfo *)0x0);
        local_74 = local_a4;
        local_30 = local_a4;
        local_a0 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                             (local_a0,(float)((uint)(local_140._4_4_ - local_48) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff),
                              (MethodInfo *)0x0);
        local_30 = local_a0;
        local_9c = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                             (local_9c,(float)((uint)(local_138 - local_44) &
                                              __xmm_7fffffff7fffffff7fffffff7fffffff),
                              (MethodInfo *)0x0);
        iVar62 = local_54 + 4;
        local_30 = local_9c;
      }
    }
  }
LAB_10e1b032:
  local_e0._0_4_ = iVar57;
  local_64 = BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
  local_60 = BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
  local_94 = BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
  local_90 = BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
