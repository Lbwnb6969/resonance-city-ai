// RVA 0x2328b0 | Placemaker.ClickEffect$$Click
// PDB: ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE
// Body: [[102328b0, 10232bd3] [10232bdd, 10232d47] [10232d4e, 10232f31] [10232f38, 10232ff0]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10195ff0 _CIfmod
// 10233560 ClickEffect_SetColor_m8675FDFBC4D050B03156CAA18C0E187DF0845826
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 103efe60 VoxelBobEffect_ClickBobEffect_mBC8B78F25332BF09125BF8FAC6ADE9139C8F2350
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 106603a0 Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
// 1066d940 Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10873d50 AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
// 1087f8c0 BirdFlock_UprootRadius_m51C3EB1C297B41F21BE80455DB820CBE093C0F44
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11143460 ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50
// 111435d0 ShapeModule_set_position_mB8D508F24BBFFE138D64F78A8A70FDB20305C66B
// 11143630 ShapeModule_set_rotation_m5D3ADA2AB7B18F261FFB6A16055140920CA6CBE1
// 11143690 ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158
// 11143ce0 AudioSource_GetPitch_mE457F85FAAFC820665BF001939C7C9DC3DAD1B62
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
// 11143d70 AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
// 11143f00 AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

void __cdecl
ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE
          (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *param_1,bool param_2,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_3,int param_4,schar param_5,
          MethodInfo *param_6)

{
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar1;
  AudioSourcePool_t87D6EFFAF997FFAFAFAA45A89CEA7603ABC24401 *pAVar2;
  BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *pBVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar5;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar14;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar15;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar16;
  List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *pLVar17;
  uint uVar18;
  float10 extraout_ST0;
  float fVar19;
  float fVar20;
  float fVar21;
  MethodInfo *pMVar22;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_44;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_38;
  undefined8 local_2c;
  undefined8 local_20;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *local_18;
  float local_14;
  undefined8 uStack_10;
  ShapeModule_t3A89D143F5CAF357ECCE8B4A4F2BBD57816F98CA local_8;

  if (DAT_1151b58b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var)
    ;
    DAT_1151b58b = '\x01';
  }
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  pfVar13 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                      (&local_38,(float2_tCB7B81181978EDE17722C533A55E345D9A413274)param_3,
                       (float)param_4 + __real_3f000000,(MethodInfo *)0x0);
  local_20._0_4_ = pfVar13->___x_0;
  local_20._4_4_ = pfVar13->___y_1;
  fVar21 = pfVar13->___z_2;
  if ((String_t *)param_1->___particle_5 != (String_t *)0x0) {
    local_8.___m_ParticleSystem_0 =
         (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)
         SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                   ((String_t *)param_1->___particle_5,(MethodInfo *)0x0);
    pVVar14 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_44,
                         (MethodInfo *)0x0);
    local_2c._0_4_ = pVVar14->___x_2;
    local_2c._4_4_ = pVVar14->___y_3;
    uStack_10._4_4_ = pVVar14->___z_4;
    local_38.___x_0 = pVVar14->___x_2;
    local_38.___y_1 = pVVar14->___y_3;
    local_38.___z_2 = uStack_10._4_4_ * __real_3f000000;
    VVar8.___y_3 = (float)local_2c._4_4_ * __real_3f000000;
    VVar8.___x_2 = (float)(undefined4)local_2c * __real_3f000000;
    VVar8.___z_4 = local_38.___z_2;
    local_14 = (float)(undefined4)local_2c;
    uStack_10._0_4_ = (float)local_2c._4_4_;
    ShapeModule_set_scale_m2951583898F18878E6F238100045072F44AD9158
              (&local_8,VVar8,(MethodInfo *)0x0);
    pVVar14 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_44,
                         (MethodInfo *)0x0);
    ShapeModule_set_rotation_m5D3ADA2AB7B18F261FFB6A16055140920CA6CBE1
              (&local_8,*pVVar14,(MethodInfo *)0x0);
    pVVar14 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_44,
                         (MethodInfo *)0x0);
    ShapeModule_set_position_mB8D508F24BBFFE138D64F78A8A70FDB20305C66B
              (&local_8,*pVVar14,(MethodInfo *)0x0);
    ClickEffect_SetColor_m8675FDFBC4D050B03156CAA18C0E187DF0845826
              (param_1,param_5,(MethodInfo *)0x0);
    if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___particle_5 !=
         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
       (pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             param_1->___particle_5,(MethodInfo *)0x0),
       pTVar15 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
      VVar9.___z_4 = fVar21;
      VVar9.___x_2 = (float)(undefined4)local_20;
      VVar9.___y_3 = (float)local_20._4_4_;
      Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                (pTVar15,VVar9,(MethodInfo *)0x0);
      if (param_1->___particle_5 != (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)0x0)
      {
        ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50
                  (param_1->___particle_5,(MethodInfo *)0x0);
        if (param_4 == 0) {
          if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___voxelSplash_6 ==
              (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_10232fec;
          pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                               param_1->___voxelSplash_6,(MethodInfo *)0x0);
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          fVar5.___z_2 = fVar21;
          fVar5.___x_0 = (float)(undefined4)local_20;
          fVar5.___y_1 = (float)local_20._4_4_;
          pfVar13 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                              (&local_44,fVar5,0.0,(MethodInfo *)0x0);
          if (pTVar15 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_10232fec;
          Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                    (pTVar15,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar13,
                     (MethodInfo *)0x0);
          if (param_1->___voxelSplash_6 ==
              (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)0x0) goto LAB_10232fec;
          ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50
                    (param_1->___voxelSplash_6,(MethodInfo *)0x0);
          if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             || (pAVar2 = param_1->___master_4->___audioSourcePool_23,
                pAVar2 == (AudioSourcePool_t87D6EFFAF997FFAFAFAA45A89CEA7603ABC24401 *)0x0))
          goto LAB_10232fec;
          pAVar16 = AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
                              (pAVar2,(MethodInfo *)0x0);
          pLVar17 = param_1->___splashClips_15;
          if (pLVar17 == (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)0x0) goto LAB_10232fec;
          uStack_10._4_4_ =
               (float)Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                                (0,pLVar17->____size_2,(MethodInfo *)0x0);
          if ((uint)pLVar17->____size_2 <= (uint)uStack_10._4_4_) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          if (pAVar16 == (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
          goto LAB_10232fec;
          AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
                    (pAVar16,pLVar17->____items_1->m_Items[(int)uStack_10._4_4_],(MethodInfo *)0x0);
          AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                    (pAVar16,1.0,(MethodInfo *)0x0);
          fVar20 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(0.5,0.8,(MethodInfo *)0x0)
          ;
          AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
                    (pAVar16,fVar20,(MethodInfo *)0x0);
          pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pAVar16,
                               (MethodInfo *)0x0);
          fVar6.___z_2 = fVar21;
          fVar6.___x_0 = (float)(undefined4)local_20;
          fVar6.___y_1 = (float)local_20._4_4_;
          pfVar13 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                              (&local_44,fVar6,0.0,(MethodInfo *)0x0);
          if (pTVar15 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_10232fec;
          Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                    (pTVar15,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar13,
                     (MethodInfo *)0x0);
          AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(pAVar16,(MethodInfo *)0x0);
        }
        else {
          if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___dust_7 ==
               (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
             (pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   param_1->___dust_7,(MethodInfo *)0x0),
             pTVar15 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_10232fec;
          VVar10.___z_4 = fVar21;
          VVar10.___x_2 = (float)(undefined4)local_20;
          VVar10.___y_3 = (float)local_20._4_4_;
          Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                    (pTVar15,VVar10,(MethodInfo *)0x0);
          if (param_1->___dust_7 == (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)0x0)
          goto LAB_10232fec;
          ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50
                    (param_1->___dust_7,(MethodInfo *)0x0);
        }
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pVVar1 = param_1->___master_4->___voxelBobEffect_15,
              pVVar1 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
          VVar7.___z_4 = fVar21;
          VVar7.___x_2 = (float)(undefined4)local_20;
          VVar7.___y_3 = (float)local_20._4_4_;
          VoxelBobEffect_ClickBobEffect_mBC8B78F25332BF09125BF8FAC6ADE9139C8F2350
                    (pVVar1,VVar7,param_2,(MethodInfo *)0x0);
          if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             && (pAVar2 = param_1->___master_4->___audioSourcePool_23,
                pAVar2 != (AudioSourcePool_t87D6EFFAF997FFAFAFAA45A89CEA7603ABC24401 *)0x0)) {
            pAVar16 = AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
                                (pAVar2,(MethodInfo *)0x0);
            if (param_2) {
              pLVar17 = param_1->___addClips_11;
            }
            else {
              pLVar17 = param_1->___removeClips_12;
            }
            local_18 = pAVar16;
            if (pLVar17 != (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)0x0) {
              uStack_10._4_4_ =
                   (float)Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                                    (0,pLVar17->____size_2,(MethodInfo *)0x0);
              if ((uint)pLVar17->____size_2 <= (uint)uStack_10._4_4_) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              if (pAVar16 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
                AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
                          (pAVar16,pLVar17->____items_1->m_Items[(int)uStack_10._4_4_],
                           (MethodInfo *)0x0);
                pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pAVar16,
                                     (MethodInfo *)0x0);
                if (pTVar15 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                  VVar11.___z_4 = fVar21;
                  VVar11.___x_2 = (float)(undefined4)local_20;
                  VVar11.___y_3 = (float)local_20._4_4_;
                  Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                            (pTVar15,VVar11,(MethodInfo *)0x0);
                  AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                            (pAVar16,0.4,(MethodInfo *)0x0);
                  fVar19 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
                                     ((MethodInfo *)0x0);
                  fVar20 = __real_42c80000;
                  if (fVar19 - param_1->___lastClick_17 <= __real_40000000) {
                    if (param_2) {
                      fVar20 = param_1->___lastPitch_18 + __real_3e4ccccd;
                    }
                    else {
                      fVar20 = param_1->___lastPitch_18 + __real_be4ccccd;
                    }
                  }
                  param_1->___lastPitch_18 = fVar20;
                  pMVar22 = (MethodInfo *)0x0;
                  uStack_10 = (double)(fVar20 - __real_3f000000);
                  _CIfmod();
                  uStack_10 = (double)extraout_ST0;
                  fVar20 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                     (0.4,2.0,(float)((uint)((float)extraout_ST0 - __real_3f800000)
                                                     & __xmm_7fffffff7fffffff7fffffff7fffffff),
                                      pMVar22);
                  uStack_10._4_4_ = fVar20;
                  fVar20 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
                                     ((MethodInfo *)0x0);
                  param_1->___lastClick_17 = fVar20;
                  if ((param_1->___master_4 !=
                       (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                     (pBVar3 = param_1->___master_4->___flock_21,
                     pBVar3 != (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)0x0)) {
                    VVar4.___z_4 = fVar21;
                    VVar4.___x_2 = (float)(undefined4)local_20;
                    VVar4.___y_3 = (float)local_20._4_4_;
                    BirdFlock_UprootRadius_m51C3EB1C297B41F21BE80455DB820CBE093C0F44
                              (pBVar3,VVar4,1.0,1.0,(MethodInfo *)0x0);
                    fVar20 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4
                                       ((MethodInfo *)0x0);
                    AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
                              (pAVar16,fVar20 * uStack_10._4_4_,(MethodInfo *)0x0);
                    AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
                              (pAVar16,(MethodInfo *)0x0);
                    if ((param_1->___master_4 !=
                         (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                       (pAVar2 = param_1->___master_4->___audioSourcePool_23,
                       pAVar2 != (AudioSourcePool_t87D6EFFAF997FFAFAFAA45A89CEA7603ABC24401 *)0x0))
                    {
                      pAVar16 = AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
                                          (pAVar2,(MethodInfo *)0x0);
                      if (param_2) {
                        pLVar17 = param_1->___addClips1_13;
                      }
                      else {
                        pLVar17 = param_1->___removeClips1_14;
                      }
                      if (pLVar17 != (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)0x0) {
                        uVar18 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                                           (0,pLVar17->____size_2,(MethodInfo *)0x0);
                        if ((uint)pLVar17->____size_2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                    ((MethodInfo *)0x0);
                        }
                        if (pAVar16 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0)
                        {
                          AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
                                    (pAVar16,pLVar17->____items_1->m_Items[uVar18],(MethodInfo *)0x0
                                    );
                          pTVar15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)pAVar16,(MethodInfo *)0x0);
                          if (pTVar15 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
                          {
                            VVar12.___z_4 = fVar21;
                            VVar12.___x_2 = (float)(undefined4)local_20;
                            VVar12.___y_3 = (float)local_20._4_4_;
                            Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                                      (pTVar15,VVar12,(MethodInfo *)0x0);
                            AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                                      (pAVar16,0.25,(MethodInfo *)0x0);
                            fVar21 = AudioSource_GetPitch_mE457F85FAAFC820665BF001939C7C9DC3DAD1B62
                                               (local_18,(MethodInfo *)0x0);
                            fVar20 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                                               (1.0,1.2,(MethodInfo *)0x0);
                            AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
                                      (pAVar16,fVar20 * fVar21,(MethodInfo *)0x0);
                            AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
                                      (pAVar16,(MethodInfo *)0x0);
                            return;
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
      }
    }
  }
LAB_10232fec:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
