// RVA 0x233080 | Placemaker.ClickEffect$$ColorPick
// PDB: ClickEffect_ColorPick_m43147E628DA95AC83F3B63EF300805B3BD94CF2E
// Body: [[10233080, 1023335d] [10233364, 10233401]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 103efe60 VoxelBobEffect_ClickBobEffect_mBC8B78F25332BF09125BF8FAC6ADE9139C8F2350
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 106603a0 Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 1067c710 oLnKGZHnehyBMlNmQHrWtAcXfaZG_get_Range_m3924668D6ADAC0EF2EA39F41A33A579E046CE87A
// 1067c740 oLnKGZHnehyBMlNmQHrWtAcXfaZG_set_Range_mD6A307356791BE9EB3F691E1B6E35EB2E0E4450F
// 10873d50 AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
// 1087f8c0 BirdFlock_UprootRadius_m51C3EB1C297B41F21BE80455DB820CBE093C0F44
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11143030 MainModule_get_startColor_mC8BAD25B55ACF9586BAFEECF047CCE5268123DD4
// 111430a0 MainModule_set_startColor_m19663CAE16C6A546B7BC4B949EBA0CCE3DD51A42
// 11143460 ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50
// 11143d40 AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
// 11143d70 AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
// 11143f00 AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
// 11143f70 AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58

void __cdecl
ClickEffect_ColorPick_m43147E628DA95AC83F3B63EF300805B3BD94CF2E
          (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *param_1,
          HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_2,MethodInfo *param_3)

{
  char cVar1;
  float fVar2;
  BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *pBVar3;
  VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *pVVar4;
  TexturePngMaster_t66DC98DAEB68DC2C477793AAAD65DD4068F9A252 *pTVar5;
  PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *pPVar6;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar7;
  AudioSourcePool_t87D6EFFAF997FFAFAFAA45A89CEA7603ABC24401 *pAVar8;
  List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *pLVar9;
  MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 MVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  eAYABoeHXLJyrylxMarCevuKncWu_t41B63A8104557E106953DFC8B114369A8DBEB598 eVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar17;
  int iVar18;
  MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 *pMVar19;
  eAYABoeHXLJyrylxMarCevuKncWu_t41B63A8104557E106953DFC8B114369A8DBEB598 *peVar20;
  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *pAVar21;
  uint uVar22;
  float fVar23;
  MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 local_78;
  undefined1 local_4c [12];
  float fStack_40;
  float local_3c;
  float fStack_38;
  UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF *pUStack_34;
  float fStack_30;
  undefined8 local_2c;
  float local_24;
  float local_20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_1c;
  undefined8 local_10;
  MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B local_8;

  if (DAT_1151b58a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C98EA9359999773111E0918F7CE4783B66413F1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mE58237A66DC244F0D9956EF071E36DF135972BC2_RuntimeMethod_var)
    ;
    DAT_1151b58a = '\x01';
  }
  if ((param_2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) &&
     (param_2->___voxel_9 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) {
    pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2->___voxel_9,
                         (MethodInfo *)0x0);
    if (pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      pVVar17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                          (&VStack_1c,pTVar16,(MethodInfo *)0x0);
      local_10._0_4_ = pVVar17->___x_2;
      local_10._4_4_ = pVVar17->___y_3;
      fVar2 = pVVar17->___z_4;
      fVar23 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
      param_1->___lastClick_17 = fVar23;
      if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pBVar3 = param_1->___master_4->___flock_21,
         pBVar3 != (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)0x0)) {
        VVar11.___z_4 = fVar2;
        VVar11.___x_2 = (float)(undefined4)local_10;
        VVar11.___y_3 = (float)local_10._4_4_;
        BirdFlock_UprootRadius_m51C3EB1C297B41F21BE80455DB820CBE093C0F44
                  (pBVar3,VVar11,1.0,0.5,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pVVar4 = param_1->___master_4->___voxelBobEffect_15,
              pVVar4 != (VoxelBobEffect_tD2C01D3045012E9B5393A0C2387BDF9BB9EB2CA1 *)0x0)) {
          VVar12.___z_4 = fVar2;
          VVar12.___x_2 = (float)(undefined4)local_10;
          VVar12.___y_3 = (float)local_10._4_4_;
          VoxelBobEffect_ClickBobEffect_mBC8B78F25332BF09125BF8FAC6ADE9139C8F2350
                    (pVVar4,VVar12,true,(MethodInfo *)0x0);
          if (param_2->___voxel_9 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
            cVar1 = param_2->___voxel_9->___type_4;
            if (cVar1 != param_1->___lastColorPickType_10) {
              param_1->___lastColorPickType_10 = cVar1;
              if ((((param_1->___master_4 ==
                     (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                   (pTVar5 = param_1->___master_4->___texturePngMaster_34,
                   pTVar5 == (TexturePngMaster_t66DC98DAEB68DC2C477793AAAD65DD4068F9A252 *)0x0)) ||
                  (pPVar6 = pTVar5->___paletteTex_7,
                  pPVar6 == (PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *)0x0)) ||
                 (pTVar7 = pPVar6->___srcTex_0,
                 pTVar7 == (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0))
              goto LAB_102333fd;
              iVar18 = (**(code **)(*(int *)pTVar7 + 0xdc))
                                 (pTVar7,*(undefined4 *)(*(int *)pTVar7 + 0xe0));
              if ((String_t *)param_1->___colorPickEffect_8 == (String_t *)0x0) goto LAB_102333fd;
              local_8.___m_ParticleSystem_0 =
                   (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)
                   SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                             ((String_t *)param_1->___colorPickEffect_8,(MethodInfo *)0x0);
              pMVar19 = MainModule_get_startColor_mC8BAD25B55ACF9586BAFEECF047CCE5268123DD4
                                  (&local_78,&local_8,(MethodInfo *)0x0);
              local_4c._0_4_ = pMVar19->___m_Mode_0;
              local_4c._4_4_ = pMVar19->___m_GradientMin_1;
              local_4c._8_4_ = pMVar19->___m_GradientMax_2;
              fStack_40 = (pMVar19->___m_ColorMin_3).___r_0;
              local_3c = (pMVar19->___m_ColorMin_3).___g_1;
              fStack_38 = (pMVar19->___m_ColorMin_3).___b_2;
              pUStack_34 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF *)
                           (pMVar19->___m_ColorMin_3).___a_3;
              fStack_30 = (pMVar19->___m_ColorMax_4).___r_0;
              local_2c = *(undefined8 *)&(pMVar19->___m_ColorMax_4).___g_1;
              local_24 = (pMVar19->___m_ColorMax_4).___a_3;
              peVar20 = oLnKGZHnehyBMlNmQHrWtAcXfaZG_get_Range_m3924668D6ADAC0EF2EA39F41A33A579E046CE87A
                                  ((eAYABoeHXLJyrylxMarCevuKncWu_t41B63A8104557E106953DFC8B114369A8DBEB598
                                    *)&local_20,
                                   (oLnKGZHnehyBMlNmQHrWtAcXfaZG_t14A9DF1E2244BBCD7C62183662687200B8840699
                                    *)local_4c,(MethodInfo *)0x0);
              VStack_1c.___x_2 = *(float *)&peVar20->___ytYaiQGlzQFldUnXpRdceZRgbqkQ_2;
              VStack_1c.___y_3 = *(float *)&peVar20->___peobFtFZkiCmXrCeTemJxfIOvRnk_4;
              VStack_1c.___z_4 = *(float *)&peVar20->___YzHUqsIGNtSYqEizzOGpxItLrYt_6;
              local_20 = (float)(int)cVar1 / (float)iVar18;
              eVar13._4_4_ = VStack_1c.___x_2;
              eVar13._0_4_ = local_20;
              eVar13._8_4_ = VStack_1c.___y_3;
              eVar13._12_4_ = VStack_1c.___z_4;
              oLnKGZHnehyBMlNmQHrWtAcXfaZG_set_Range_mD6A307356791BE9EB3F691E1B6E35EB2E0E4450F
                        ((oLnKGZHnehyBMlNmQHrWtAcXfaZG_t14A9DF1E2244BBCD7C62183662687200B8840699 *)
                         local_4c,eVar13,(MethodInfo *)0x0);
              MVar10.___m_GradientMin_1 =
                   (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)local_4c._4_4_;
              MVar10.___m_Mode_0 = local_4c._0_4_;
              MVar10.___m_GradientMax_2 =
                   (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)local_4c._8_4_;
              MVar10.___m_ColorMin_3.___r_0 = fStack_40;
              MVar10.___m_ColorMin_3.___g_1 = local_3c;
              MVar10.___m_ColorMin_3.___b_2 = fStack_38;
              MVar10.___m_ColorMin_3.___a_3 = (float)pUStack_34;
              MVar10.___m_ColorMax_4.___r_0 = fStack_30;
              MVar10.___m_ColorMax_4.___g_1 = (float)(int)local_2c;
              MVar10.___m_ColorMax_4.___b_2 = (float)SUB84(local_2c,4);
              MVar10.___m_ColorMax_4.___a_3 = local_24;
              MainModule_set_startColor_m19663CAE16C6A546B7BC4B949EBA0CCE3DD51A42
                        (&local_8,MVar10,(MethodInfo *)0x0);
            }
            if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___colorPickEffect_8
                != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
              pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   param_1->___colorPickEffect_8,(MethodInfo *)0x0);
              if (pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                VVar14.___z_4 = fVar2;
                VVar14.___x_2 = (float)(undefined4)local_10;
                VVar14.___y_3 = (float)local_10._4_4_;
                Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                          (pTVar16,VVar14,(MethodInfo *)0x0);
                if (param_1->___colorPickEffect_8 !=
                    (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)0x0) {
                  ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50
                            (param_1->___colorPickEffect_8,(MethodInfo *)0x0);
                  if ((param_1->___master_4 !=
                       (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                     (pAVar8 = param_1->___master_4->___audioSourcePool_23,
                     pAVar8 != (AudioSourcePool_t87D6EFFAF997FFAFAFAA45A89CEA7603ABC24401 *)0x0)) {
                    pAVar21 = AudioSourcePool_GetAudioSource_mC156D669A7CC0940945E70CB8902F7B0F11890A7
                                        (pAVar8,(MethodInfo *)0x0);
                    pLVar9 = param_1->___colorPickClips_16;
                    if (pLVar9 != (List_1_tBF175DCB1D181F84E3F680773C5F2728DF5D3EE8 *)0x0) {
                      uVar22 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                                         (0,pLVar9->____size_2,(MethodInfo *)0x0);
                      if ((uint)pLVar9->____size_2 <= uVar22) {
                    /* WARNING: Subroutine does not return */
                        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                  ((MethodInfo *)0x0);
                      }
                      if (pAVar21 != (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *)0x0) {
                        AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B
                                  (pAVar21,pLVar9->____items_1->m_Items[uVar22],(MethodInfo *)0x0);
                        AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58
                                  (pAVar21,1.0,(MethodInfo *)0x0);
                        fVar23 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                                           (0.8,1.2,(MethodInfo *)0x0);
                        AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928
                                  (pAVar21,fVar23,(MethodInfo *)0x0);
                        pTVar16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             pAVar21,(MethodInfo *)0x0);
                        if (pTVar16 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                          VVar15.___z_4 = fVar2;
                          VVar15.___x_2 = (float)(undefined4)local_10;
                          VVar15.___y_3 = (float)local_10._4_4_;
                          Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                                    (pTVar16,VVar15,(MethodInfo *)0x0);
                          AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1
                                    (pAVar21,(MethodInfo *)0x0);
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
LAB_102333fd:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
