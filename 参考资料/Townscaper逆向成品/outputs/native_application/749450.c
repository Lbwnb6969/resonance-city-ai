// RVA 0x749450 | Placemaker.Ui.OrbitalCamera$$Focus
// PDB: OrbitalCamera_Focus_m8D43000879742A47C39946280F083C1844E1BDD6
// Body: [[10749450, 10749587]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA

void __cdecl
OrbitalCamera_Focus_m8D43000879742A47C39946280F083C1844E1BDD6
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar3;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar4;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar5;
  float fVar6;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_10;

  if (DAT_1151ebd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    DAT_1151ebd6 = '\x01';
  }
  fVar6 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                    (param_2.___y_3 / param_1->___heightTarget_23,(MethodInfo *)0x0);
  param_1->___panHeightTarget_17 = fVar6;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  fVar5 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                    ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D)param_2,(MethodInfo *)0x0);
  iVar3.___z_2 = 0;
  iVar3.___x_0 = (int)fVar5.___x_0;
  iVar3.___y_1 = (int)fVar5.___y_1;
  fVar5 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
          HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                    (iVar3,(MethodInfo *)param_2.___x_2);
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
  pfVar4 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                     (&local_10,fVar5,(MethodInfo *)0x0);
  uVar1 = pfVar4->___x_0;
  uVar2 = pfVar4->___y_1;
  fVar6 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    ((param_1->___boundsTarget_21).___c0_0.___x_0,
                     (param_1->___boundsTarget_21).___c1_1.___x_0,(float)uVar1,(MethodInfo *)0x0);
  param_1->___panHexTargetX_15 = fVar6;
  fVar6 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    ((param_1->___boundsTarget_21).___c0_0.___y_1,
                     (param_1->___boundsTarget_21).___c1_1.___y_1,(float)uVar2,(MethodInfo *)0x0);
  param_1->___panHexTargetY_16 = fVar6;
  return;
}
