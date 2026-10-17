// RVA 0x749690 | Placemaker.Ui.OrbitalCamera$$GetRelativePos
// PDB: OrbitalCamera_GetRelativePos_m98711F2CC6B78B9ABFC60B5625CC111FB222AD8D
// Body: [[10749690, 1074981e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040e150 HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10e1e320 GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA

ValueTuple_3_tB661459D04B1EB1AD68A4A08C4EBD34A51323E88 * __cdecl
OrbitalCamera_GetRelativePos_m98711F2CC6B78B9ABFC60B5625CC111FB222AD8D
          (ValueTuple_3_tB661459D04B1EB1AD68A4A08C4EBD34A51323E88 *__return_storage_ptr__,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,
          float3x2_t0D922384417AC3A91D9C89C83E8A4B004CB2D0A7 param_2,float param_3,
          MethodInfo *param_4)

{
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar1;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar2;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar3;
  float fVar4;
  float fVar5;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_20;
  undefined8 local_14;
  float local_8;

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
  fVar3 = HexMath_WorldToPlane_m197D62925CE6F4F50EA2CEDD13B5F99106D024A3
                    ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D)param_1,(MethodInfo *)0x0);
  iVar1.___z_2 = 0;
  iVar1.___x_0 = (int)fVar3.___x_0;
  iVar1.___y_1 = (int)fVar3.___y_1;
  fVar3 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
          HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                    (iVar1,(MethodInfo *)param_1.___x_2);
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
  }
  pfVar2 = GridGenerator_PlaneToHex_m7E26A9719055A41DED33BCD7D028F083724CD1FA
                     (&local_20,fVar3,(MethodInfo *)0x0);
  local_14._0_4_ = pfVar2->___x_0;
  local_14._4_4_ = pfVar2->___y_1;
  local_8 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                      (param_2.___c0_0.___x_0,param_2.___c1_1.___x_0,(float)(undefined4)local_14,
                       (MethodInfo *)0x0);
  fVar4 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    (param_2.___c0_0.___y_1,param_2.___c1_1.___y_1,local_14._4_4_,(MethodInfo *)0x0)
  ;
  fVar5 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                    (0.0,param_3,param_1.___y_3,(MethodInfo *)0x0);
  __return_storage_ptr__->___Item1_0 = 0.0;
  __return_storage_ptr__->___Item2_1 = 0.0;
  __return_storage_ptr__->___Item3_2 = 0.0;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)__return_storage_ptr__,local_8,
             fVar4,fVar5,
             ValueTuple_3__ctor_m8A1A215A5945D06EC6AE27DCEBA931324B1CC030_RuntimeMethod_var);
  return __return_storage_ptr__;
}
