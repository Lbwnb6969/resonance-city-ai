// RVA 0x74c960 | Placemaker.Ui.OrbitalCamera$$RemapPans
// PDB: OrbitalCamera_RemapPans_mD62459BF5811847D3E9C1096F9B3EEB7AC2980D4
// Body: [[1074c960, 1074cd49]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43e60 Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
// 10e13a30 GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA

void __cdecl
OrbitalCamera_RemapPans_mD62459BF5811847D3E9C1096F9B3EEB7AC2980D4
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,
          float3x2_t0D922384417AC3A91D9C89C83E8A4B004CB2D0A7 param_2,
          float3x2_t0D922384417AC3A91D9C89C83E8A4B004CB2D0A7 param_3,float param_4,float param_5,
          MethodInfo *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar3;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar5;
  undefined8 *extraout_EAX;
  undefined8 *extraout_EAX_00;
  undefined8 *extraout_EAX_01;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar6;
  undefined8 *extraout_EAX_02;
  float fVar7;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar8;
  MethodInfo *pMVar9;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_90;
  undefined4 uStack_84;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_78;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_68;
  undefined8 local_58;
  float local_50;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_48;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_38;
  undefined8 local_28;
  float local_20;
  float local_18;
  float local_14;

  local_14 = param_1->___panHexTargetY_16;
  local_90.___x_0 = param_1->___panHexTargetX_15;
  local_18 = param_1->___panHeightTarget_17;
  local_90.___y_1 = 0.0;
  local_90.___z_2 = 0.0;
  uStack_84 = 0;
  if (DAT_1151ebd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    DAT_1151ebd4 = '\x01';
  }
  local_20 = 0.0;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            (&local_68,local_90.___x_0,local_14,0.0,(MethodInfo *)0x0);
  local_48._0_8_ = *extraout_EAX;
  local_48.___z_4 = *(float *)(extraout_EAX + 1);
  local_58 = *extraout_EAX;
  local_38.___y_3 = local_48.___y_3;
  fVar7 = (param_2.___c1_1.___y_1 - param_2.___c0_0.___y_1) * local_38.___y_3;
  local_50 = (param_2.___c1_1.___z_2 - param_2.___c0_0.___z_2) * local_48.___z_4 +
             param_2.___c0_0.___z_2;
  local_38._0_8_ = local_48._0_8_;
  local_38.___z_4 = local_48.___z_4;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            (&local_48,
             (param_2.___c1_1.___x_0 - param_2.___c0_0.___x_0) * local_48.___x_2 +
             param_2.___c0_0.___x_0,fVar7 + param_2.___c0_0.___y_1,local_50,(MethodInfo *)0x0);
  local_28 = *extraout_EAX_00;
  local_58._4_4_ = (float)((ulonglong)local_28 >> 0x20);
  fVar7 = local_58._4_4_;
  local_20 = (float)((uint)(float)local_28 ^ __xmm_80000000800000008000000080000000) -
             local_58._4_4_;
  local_58 = local_28;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            (&local_38,(float)local_28,fVar7,local_20,(MethodInfo *)0x0);
  local_28 = *extraout_EAX_01;
  fVar7 = *(float *)(extraout_EAX_01 + 1);
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
  fVar4.___z_2 = fVar7;
  fVar4.___x_0 = (float)local_28;
  fVar4.___y_1 = (float)local_28._4_4_;
  fVar8 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                    (fVar4,(MethodInfo *)0x0);
  local_18 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                       (0.0,param_4,local_18,(MethodInfo *)0x0);
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  pfVar6 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                     (&local_78,fVar8,local_18,(MethodInfo *)0x0);
  uVar1 = pfVar6->___x_0;
  uVar2 = pfVar6->___y_1;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_90,(float)uVar1,
             (float)uVar2,pfVar6->___z_2,(MethodInfo *)0x0);
  local_58 = *extraout_EAX_02;
  fVar7 = *(float *)(extraout_EAX_02 + 1);
  local_28 = local_58;
  if (DAT_1151ebd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ValueTuple_3__ctor_m8A1A215A5945D06EC6AE27DCEBA931324B1CC030_RuntimeMethod_var
              );
    DAT_1151ebd5 = '\x01';
  }
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  pMVar9 = (MethodInfo *)local_28;
  fVar5.___z_2 = fVar7;
  fVar5.___x_0 = (float)local_28;
  fVar5.___y_1 = (float)local_28._4_4_;
  fVar8 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3(fVar5,(MethodInfo *)0x0);
  iVar3.___z_2 = 0;
  iVar3.___x_0 = (int)fVar8.___x_0;
  iVar3.___y_1 = (int)fVar8.___y_1;
  fVar8 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
          HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar3,pMVar9);
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
  pfVar6 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                     (&local_90,fVar8,(MethodInfo *)0x0);
  local_48.___x_2 = pfVar6->___x_0;
  local_48.___y_3 = pfVar6->___y_1;
  local_20 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (param_3.___c0_0.___x_0,param_3.___c1_1.___x_0,local_48.___x_2,
                        (MethodInfo *)0x0);
  local_14 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (param_3.___c0_0.___y_1,param_3.___c1_1.___y_1,local_48.___y_3,
                        (MethodInfo *)0x0);
  local_18 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (0.0,param_5,local_58._4_4_,(MethodInfo *)0x0);
  local_38.___z_4 = 0.0;
  local_38.___x_2 = 0.0;
  local_38.___y_3 = 0.0;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            (&local_38,local_20,local_14,local_18,
             ValueTuple_3__ctor_m8A1A215A5945D06EC6AE27DCEBA931324B1CC030_RuntimeMethod_var);
  param_1->___panHexTargetX_15 = local_38.___x_2;
  param_1->___panHexTargetY_16 = local_38.___y_3;
  param_1->___panHeightTarget_17 = local_38.___z_4;
  return;
}
