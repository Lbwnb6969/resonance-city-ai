// RVA 0x3d2bb0 | Placemaker.Audio.ManySoundsManager$$OnUpdate
// PDB: ManySoundsManager_OnUpdate_m767E2749F0A12DC7A9ACAD40E4271DB6CF98479C
// Body: [[103d2bb0, 103d3232]]
// Direct callees:
// 1003e1c0 GetAt
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10196230 _libm_sse2_exp_precise
// 103d3244 FUN_103d3244
// 105cc160 KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 1066d890 Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10674380 Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10873d50 AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
// 10a38100 Camera_ViewportPointToRay_mA5F17F1603768A23286A637F706B612BCEF8D2C8
// 10a383a0 Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D
// 10a385b0 Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a44230 Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
// 10cc1400 Enumerator_MoveNext_m80F3FF01D8D7F1984ECCCB4530C537211153F4C8_gshared
// 10cf86d0 Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
// 10e75050 Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6
// 1113e920 Physics_Raycast_mFDC4B8E7979495E3C22D0E3CEA4BCAB271EEC25A
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
// 11143d70 AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
// 11143f00 AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
// 11143f30 AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

void __cdecl
ManySoundsManager_OnUpdate_m767E2749F0A12DC7A9ACAD40E4271DB6CF98479C
          (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *param_1,MethodInfo *param_2)

{
  Il2CppObject_u_0 IVar1;
  MonitorData *pMVar2;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar3;
  MonitorData *pMVar4;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 RVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Il2CppObject *pIVar8;
  undefined1 *puVar9;
  bool bVar10;
  Enumerator_t422CDF583628437EEE8599A7AA3F52CA93612E67 *pEVar11;
  ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *pVVar12;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar14;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 *pRVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar16;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar17;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar18;
  uint uVar19;
  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *pAVar20;
  double dVar21;
  float fVar22;
  Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 local_184;
  undefined1 local_16c [24];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_154;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_148;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_13c;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_118;
  Il2CppClass *local_10c;
  MonitorData *local_100;
  float local_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  Enumerator_tE9365A698EB22A78CDB2D70C86BAB69BA9156ED3 local_ec;
  KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E local_d4;
  undefined8 local_c4;
  undefined8 local_bc;
  float local_b4;
  undefined8 local_b0;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 local_8c;
  MonitorData *local_84;
  undefined8 local_80;
  undefined8 local_74;
  undefined8 local_68;
  MonitorData *local_60;
  undefined8 local_5c;
  undefined8 local_50;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_40;
  undefined8 local_34;
  float local_2c;
  MonitorData *local_28;
  float local_24;
  float local_20;
  float local_1c;
  Il2CppClass *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__ManySoundsManager_OnUpdate_m767E2749F0A12DC7A9ACAD40E4271DB6CF98479C;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffe70;
  ExceptionList = &pvStack_10;
  puVar9 = &stack0xfffffe70;
  if (DAT_1151c859 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_GetEnumerator_mF4F96622ED8D263AAFDF7A94DC214879042E3F20_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m38274BC9AD38A0A3A189A8957781849E06EE70F7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m2DEEF04ACA8AA4563D270D1927ECBE3CDFAA565B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m00E6ED5C9A5931E5A231B451175AD26F5F082E07_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Value_mDD895DAFB625E014CDA2F5216ADF659FB55D19D1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
    DAT_1151c859 = '\x01';
    puVar9 = local_14;
  }
  local_14 = puVar9;
  local_d4.___key_0.___x_0 = 0;
  local_d4.___key_0.___y_1 = 0;
  local_d4.___key_0.___z_2 = 0;
  local_d4.___value_1 = (Il2CppObject *)0x0;
  local_40.___z_4 = 0.0;
  local_c4 = 0;
  local_40.___x_2 = 0.0;
  local_40.___y_3 = 0.0;
  param_1->___counter_7 = 0;
  local_1c = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
  dVar21 = (double)((float)((uint)local_1c ^ __xmm_80000000800000008000000080000000) *
                   __real_3dcccccd);
  _libm_sse2_exp_precise();
  local_2c = (float)dVar21;
  if ((Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *)param_1->___soundDict_6 !=
      (Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *)0x0) {
    pEVar11 = Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
                        ((Enumerator_t422CDF583628437EEE8599A7AA3F52CA93612E67 *)local_16c,
                         (Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *)
                         param_1->___soundDict_6,
                         Dictionary_2_GetEnumerator_mF4F96622ED8D263AAFDF7A94DC214879042E3F20_RuntimeMethod_var
                        );
    local_ec.___dictionary_0 =
         (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 *)pEVar11->___dictionary_0;
    local_ec.___version_1 = pEVar11->___version_1;
    local_ec.___index_2 = pEVar11->___index_2;
    local_ec.___current_3.___key_0 = *(int *)&pEVar11->___current_3;
    local_ec._16_8_ = *(undefined8 *)&(pEVar11->___current_3).___value_1;
    local_8 = 0;
    do {
      bVar10 = Enumerator_MoveNext_m80F3FF01D8D7F1984ECCCB4530C537211153F4C8_gshared
                         (&local_ec,
                          Enumerator_MoveNext_m2DEEF04ACA8AA4563D270D1927ECBE3CDFAA565B_RuntimeMethod_var
                         );
      if (!bVar10) {
        FUN_103d3244();
        return;
      }
      pIVar8 = local_ec.___current_3.___value_1;
      if (local_ec.___current_3.___value_1 == (Il2CppObject *)0x0) break;
      IVar1 = local_ec.___current_3.___value_1[6].field0_0x0;
      if (0.0 < (float)IVar1) {
        local_50 = *(undefined8 *)&local_ec.___current_3.___value_1[4].monitor;
        fVar22 = __real_3f800000 / (float)IVar1;
        local_60 = local_ec.___current_3.___value_1[5].monitor;
        local_68 = *(undefined8 *)&local_ec.___current_3.___value_1[4].monitor;
        local_5c._4_4_ = (float)((ulonglong)local_50 >> 0x20);
        local_100 = (MonitorData *)((float)local_60 * fVar22);
        *(ulonglong *)&local_ec.___current_3.___value_1[4].monitor =
             CONCAT44(local_5c._4_4_ * fVar22,(float)local_50 * fVar22);
        local_ec.___current_3.___value_1[5].monitor = local_100;
        local_ec.___current_3.___value_1[7].field0_0x0 =
             (Il2CppClass *)(local_ec.___current_3.___value_1[7].field0_0x0 * fVar22);
        local_ec.___current_3.___value_1[7].monitor =
             (MonitorData *)((float)local_ec.___current_3.___value_1[7].monitor * fVar22);
        local_5c = local_50;
        local_1c = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                             ((float)IVar1,(MethodInfo *)0x0);
        pIVar8[6].monitor = (MonitorData *)(local_1c * (float)pIVar8[8].monitor);
        pIVar8[8].monitor = (MonitorData *)((float)pIVar8[8].monitor * (float)pIVar8[3].monitor);
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pGVar3 = param_1->___master_4->___graph_7,
              pGVar3 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) break;
        pVVar12 = Graph_SampleNormalCoverage_m2AD216321513386346D97377B46D1A2D96BB74C6
                            ((ValueTuple_2_tD5237F7D16FC4700D2616854F59A55FBD6C4D734 *)
                             (local_16c + 8),pGVar3,
                             *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                              &pIVar8[4].monitor,(MethodInfo *)0x0);
        fStack_f8 = (pVVar12->___Item1_0).___y_3;
        fStack_f4 = (pVVar12->___Item1_0).___z_4;
        fStack_f0 = pVVar12->___Item2_1;
        local_74 = *(undefined8 *)&pIVar8[4].monitor;
        local_84 = pIVar8[5].monitor;
        local_8c = *(undefined8 *)&pIVar8[4].monitor;
        local_80._4_4_ = (float)((ulonglong)local_74 >> 0x20);
        local_1c = local_80._4_4_ + fStack_f8 * fStack_f0;
        local_fc = (pVVar12->___Item1_0).___x_2 * fStack_f0 + (float)local_74;
        local_10c = (Il2CppClass *)((float)local_84 + fStack_f4 * fStack_f0);
        local_80 = local_74;
        local_18 = local_10c;
        pCVar13 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
        if (pCVar13 == (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) break;
        VVar6.___y_3 = local_1c;
        VVar6.___x_2 = local_fc;
        VVar6.___z_4 = (float)local_10c;
        pVVar14 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D
                            (&local_13c,pCVar13,VVar6,(MethodInfo *)0x0);
        local_98._0_4_ = pVVar14->___x_2;
        local_98._4_4_ = pVVar14->___y_3;
        fVar22 = pVVar14->___z_4;
        local_28 = pIVar8[7].monitor;
        local_34 = local_98;
        local_20 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
        local_24 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
        local_20 = Mathf_PerlinNoise_mBCF172821FEB8FAD7E7CF7F7982018846E702519
                             (local_20 + (float)local_98,local_24 + local_98._4_4_,(MethodInfo *)0x0
                             );
        dVar21 = (double)((local_20 - __real_3f000000) * (float)pIVar8[4].field0_0x0 +
                         (float)local_28);
        _libm_sse2_exp_precise();
        pIVar8[7].monitor = (MonitorData *)(float)dVar21;
        pCVar13 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C((MethodInfo *)0x0);
        if (pCVar13 == (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) break;
        VVar7.___z_4 = fVar22;
        VVar7.___x_2 = (float)(undefined4)local_34;
        VVar7.___y_3 = (float)local_34._4_4_;
        pRVar15 = Camera_ViewportPointToRay_mA5F17F1603768A23286A637F706B612BCEF8D2C8
                            (&local_184,pCVar13,VVar7,(MethodInfo *)0x0);
        local_d4.___key_0.___x_0 = (int)(pRVar15->___m_Origin_0).___x_2;
        local_d4.___key_0.___y_1 = (int)(pRVar15->___m_Origin_0).___y_3;
        local_d4.___key_0.___z_2 = (int)(pRVar15->___m_Origin_0).___z_4;
        local_d4.___value_1 = (Il2CppObject *)(pRVar15->___m_Direction_1).___x_2;
        local_c4._0_4_ = (pRVar15->___m_Direction_1).___y_3;
        local_c4._4_4_ = (pRVar15->___m_Direction_1).___z_4;
        local_130 = (pRVar15->___m_Origin_0).___x_2;
        fStack_12c = (pRVar15->___m_Origin_0).___y_3;
        fStack_128 = (pRVar15->___m_Origin_0).___z_4;
        fStack_124 = (pRVar15->___m_Direction_1).___x_2;
        local_34._0_4_ = (pRVar15->___m_Direction_1).___y_3;
        local_34._4_4_ = (pRVar15->___m_Direction_1).___z_4;
        piVar16 = KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                            (&local_148,&local_d4,(MethodInfo *)0x0);
        local_b0._0_4_ = piVar16->___x_0;
        local_b0._4_4_ = piVar16->___y_1;
        local_b4 = (float)piVar16->___z_2;
        local_bc._0_4_ = piVar16->___x_0;
        local_bc._4_4_ = piVar16->___y_1;
        local_118 = local_b4 - (float)local_18;
        local_40.___y_3 = (float)local_b0._4_4_ - local_1c;
        local_40.___x_2 = (float)(undefined4)local_b0 - local_fc;
        local_a4 = local_b0;
        local_40.___z_4 = local_118;
        local_18 = (Il2CppClass *)
                   Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
                             (&local_40,(MethodInfo *)0x0);
        if ((LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var);
        }
        RVar5.___m_Origin_0.___y_3 = fStack_12c;
        RVar5.___m_Origin_0.___x_2 = local_130;
        RVar5.___m_Origin_0.___z_4 = fStack_128;
        RVar5.___m_Direction_1.___x_2 = fStack_124;
        RVar5.___m_Direction_1.___y_3 = (float)(int)local_34;
        RVar5.___m_Direction_1.___z_4 = (float)((ulonglong)local_34 >> 0x20);
        bVar10 = Physics_Raycast_mFDC4B8E7979495E3C22D0E3CEA4BCAB271EEC25A
                           (RVar5,(float)local_18,
                            *(int *)((int)LayerMaster_t51769E171D1E3A3E035713F7E1C462CDFBA0D99A_il2cpp_TypeInfo_var
                                          ->static_fields + 0x2c),(MethodInfo *)0x0);
        if (bVar10) {
          pIVar8[6].monitor = (MonitorData *)((float)pIVar8[6].monitor * __real_3ecccccd);
          pIVar8[7].monitor = (MonitorData *)((float)pIVar8[7].monitor * __real_3f4ccccd);
        }
        if (pIVar8[1].monitor == (MonitorData *)0x0) break;
        pAVar17 = AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
                            ((AudioSourcePool_t87D6EFFAF997FFAFAFAA45A89CEA7603ABC24401 *)
                             pIVar8[1].monitor,(MethodInfo *)0x0);
        if (pAVar17 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) break;
        AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                  (pAVar17,(float)pIVar8[6].monitor,(MethodInfo *)0x0);
        AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
                  (pAVar17,(float)pIVar8[7].monitor,(MethodInfo *)0x0);
        AudioSource_set_panStereo_mACEB98E6EBB22616F66175EEFC5ADEAFACB3209C
                  (pAVar17,((float)pIVar8[7].field0_0x0 + (float)pIVar8[7].field0_0x0) -
                           __real_3f800000,(MethodInfo *)0x0);
        pTVar18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pAVar17,
                             (MethodInfo *)0x0);
        if (pTVar18 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
        Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                  (pTVar18,*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&pIVar8[4].monitor,
                   (MethodInfo *)0x0);
        local_18 = pIVar8[2].field0_0x0.klass;
        if (local_18 == (Il2CppClass *)0x0) break;
        uVar19 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                           (0,(int)local_18->namespaze,(MethodInfo *)0x0);
        pAVar20 = (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)
                  CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA::GetAt
                            ((CustomEntryU5BU5D_t371EC688E6A81C1A4C46C5AEF2FBE0694D488EFA *)local_18
                             ,uVar19);
        AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
                  (pAVar17,pAVar20,(MethodInfo *)0x0);
        AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(pAVar17,(MethodInfo *)0x0);
        local_18 = (Il2CppClass *)
                   Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
        pIVar8[8].field0_0x0 = (Il2CppObject_u_0)((float)local_18 + (float)pIVar8[2].monitor);
      }
      pVVar14 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                          (&local_154,(MethodInfo *)0x0);
      pMVar4 = (MonitorData *)pVVar14->___z_4;
      *(undefined8 *)&pIVar8[4].monitor = *(undefined8 *)pVVar14;
      pMVar2 = pIVar8[8].monitor;
      pIVar8[5].monitor = pMVar4;
      pIVar8[6].field0_0x0.klass = (Il2CppClass *)0x0;
      pIVar8[7].field0_0x0.klass = (Il2CppClass *)0x0;
      pIVar8[6].monitor = (MonitorData *)0x0;
      pIVar8[7].monitor = (MonitorData *)0x0;
      local_18 = (Il2CppClass *)
                 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                           (1.0,(float)pMVar2,local_2c,(MethodInfo *)0x0);
      pIVar8[8].monitor = (MonitorData *)local_18;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
