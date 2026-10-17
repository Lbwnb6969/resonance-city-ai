// RVA 0x233410 | Placemaker.ClickEffect$$SetColorPickColor
// PDB: ClickEffect_SetColorPickColor_m347C6C9E560FCEA2DD4F483EADA1D80F536E9D6E
// Body: [[10233410, 1023355b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1026bae0 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
// 1067c710 oLnKGZHnehyBMlNmQHrWtAcXfaZG_get_Range_m3924668D6ADAC0EF2EA39F41A33A579E046CE87A
// 1067c740 oLnKGZHnehyBMlNmQHrWtAcXfaZG_set_Range_mD6A307356791BE9EB3F691E1B6E35EB2E0E4450F
// 11143030 MainModule_get_startColor_mC8BAD25B55ACF9586BAFEECF047CCE5268123DD4
// 111430a0 MainModule_set_startColor_m19663CAE16C6A546B7BC4B949EBA0CCE3DD51A42

void __cdecl
ClickEffect_SetColorPickColor_m347C6C9E560FCEA2DD4F483EADA1D80F536E9D6E
          (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *param_1,schar param_2,
          MethodInfo *param_3)

{
  TexturePngMaster_t66DC98DAEB68DC2C477793AAAD65DD4068F9A252 *pTVar1;
  PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *pPVar2;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar3;
  MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 MVar4;
  eAYABoeHXLJyrylxMarCevuKncWu_t41B63A8104557E106953DFC8B114369A8DBEB598 eVar5;
  schar sVar6;
  int iVar7;
  MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 *pMVar8;
  eAYABoeHXLJyrylxMarCevuKncWu_t41B63A8104557E106953DFC8B114369A8DBEB598 *peVar9;
  undefined3 in_stack_00000009;
  MinMaxGradient_tF4530B26F29D9635D670A33B9EE581EAC48C12B7 local_6c;
  undefined1 local_40 [12];
  float fStack_34;
  float local_30;
  float fStack_2c;
  UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF *pUStack_28;
  float fStack_24;
  undefined8 local_20;
  float local_18;
  float local_14 [4];

  sVar6 = param_2;
  if (sVar6 == param_1->___lastColorPickType_10) {
    return;
  }
  param_1->___lastColorPickType_10 = sVar6;
  if ((((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pTVar1 = param_1->___master_4->___texturePngMaster_34,
       pTVar1 != (TexturePngMaster_t66DC98DAEB68DC2C477793AAAD65DD4068F9A252 *)0x0)) &&
      (pPVar2 = pTVar1->___paletteTex_7,
      pPVar2 != (PngTexture_t89D9DA2502E70FAFB9C1AA22ED6922734AEB6457 *)0x0)) &&
     (pTVar3 = pPVar2->___srcTex_0,
     pTVar3 != (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0)) {
    iVar7 = (**(code **)(*(int *)pTVar3 + 0xdc))(pTVar3,*(undefined4 *)(*(int *)pTVar3 + 0xe0));
    if ((String_t *)param_1->___colorPickEffect_8 != (String_t *)0x0) {
      _param_2 = (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)
                 SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                           ((String_t *)param_1->___colorPickEffect_8,(MethodInfo *)0x0);
      pMVar8 = MainModule_get_startColor_mC8BAD25B55ACF9586BAFEECF047CCE5268123DD4
                         (&local_6c,(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)&param_2
                          ,(MethodInfo *)0x0);
      local_40._0_4_ = pMVar8->___m_Mode_0;
      local_40._4_4_ = pMVar8->___m_GradientMin_1;
      local_40._8_4_ = pMVar8->___m_GradientMax_2;
      fStack_34 = (pMVar8->___m_ColorMin_3).___r_0;
      local_30 = (pMVar8->___m_ColorMin_3).___g_1;
      fStack_2c = (pMVar8->___m_ColorMin_3).___b_2;
      pUStack_28 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF *)
                   (pMVar8->___m_ColorMin_3).___a_3;
      fStack_24 = (pMVar8->___m_ColorMax_4).___r_0;
      local_20 = *(undefined8 *)&(pMVar8->___m_ColorMax_4).___g_1;
      local_18 = (pMVar8->___m_ColorMax_4).___a_3;
      peVar9 = oLnKGZHnehyBMlNmQHrWtAcXfaZG_get_Range_m3924668D6ADAC0EF2EA39F41A33A579E046CE87A
                         ((eAYABoeHXLJyrylxMarCevuKncWu_t41B63A8104557E106953DFC8B114369A8DBEB598 *)
                          local_14,(oLnKGZHnehyBMlNmQHrWtAcXfaZG_t14A9DF1E2244BBCD7C62183662687200B8840699
                                    *)local_40,(MethodInfo *)0x0);
      local_14[1]._0_2_ = peVar9->___ytYaiQGlzQFldUnXpRdceZRgbqkQ_2;
      local_14[1]._2_2_ = peVar9->___LifzpNLEwDMAoFSAxIEYhgrGjhV_3;
      local_14[2]._0_2_ = peVar9->___peobFtFZkiCmXrCeTemJxfIOvRnk_4;
      local_14[2]._2_2_ = peVar9->___tSKuRPwbLKFodoJLghPBMXtWmHT_5;
      local_14[3]._0_2_ = peVar9->___YzHUqsIGNtSYqEizzOGpxItLrYt_6;
      local_14[3]._2_2_ = peVar9->___LUleirBOdfiVlaSdKIJgWRZpneQK_7;
      local_14[0] = (float)(int)sVar6 / (float)iVar7;
      eVar5.___ytYaiQGlzQFldUnXpRdceZRgbqkQ_2 = local_14[1]._0_2_;
      eVar5.___LifzpNLEwDMAoFSAxIEYhgrGjhV_3 = local_14[1]._2_2_;
      eVar5._0_4_ = local_14[0];
      eVar5.___peobFtFZkiCmXrCeTemJxfIOvRnk_4 = local_14[2]._0_2_;
      eVar5.___tSKuRPwbLKFodoJLghPBMXtWmHT_5 = local_14[2]._2_2_;
      eVar5.___YzHUqsIGNtSYqEizzOGpxItLrYt_6 = local_14[3]._0_2_;
      eVar5.___LUleirBOdfiVlaSdKIJgWRZpneQK_7 = local_14[3]._2_2_;
      oLnKGZHnehyBMlNmQHrWtAcXfaZG_set_Range_mD6A307356791BE9EB3F691E1B6E35EB2E0E4450F
                ((oLnKGZHnehyBMlNmQHrWtAcXfaZG_t14A9DF1E2244BBCD7C62183662687200B8840699 *)local_40,
                 eVar5,(MethodInfo *)0x0);
      MVar4.___m_GradientMin_1 =
           (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)local_40._4_4_;
      MVar4.___m_Mode_0 = local_40._0_4_;
      MVar4.___m_GradientMax_2 =
           (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)local_40._8_4_;
      MVar4.___m_ColorMin_3.___r_0 = fStack_34;
      MVar4.___m_ColorMin_3.___g_1 = local_30;
      MVar4.___m_ColorMin_3.___b_2 = fStack_2c;
      MVar4.___m_ColorMin_3.___a_3 = (float)pUStack_28;
      MVar4.___m_ColorMax_4.___r_0 = fStack_24;
      MVar4.___m_ColorMax_4.___g_1 = (float)(int)local_20;
      MVar4.___m_ColorMax_4.___b_2 = (float)SUB84(local_20,4);
      MVar4.___m_ColorMax_4.___a_3 = local_18;
      MainModule_set_startColor_m19663CAE16C6A546B7BC4B949EBA0CCE3DD51A42
                ((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)&param_2,MVar4,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
