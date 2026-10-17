// RVA 0x749820 | Placemaker.Ui.OrbitalCamera$$GetWorldPos
// PDB: OrbitalCamera_GetWorldPos_mD3309437D8829599F16FF37DC515A540137D03F8
// Body: [[10749820, 10749a49]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10a43e60 Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
// 10e13a30 GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
OrbitalCamera_GetWorldPos_mD3309437D8829599F16FF37DC515A540137D03F8
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,float param_1,
          float param_2,float param_3,float3x2_t0D922384417AC3A91D9C89C83E8A4B004CB2D0A7 param_4,
          float param_5,MethodInfo *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar7;
  undefined8 *extraout_EAX;
  undefined8 *extraout_EAX_00;
  undefined8 *extraout_EAX_01;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar8;
  undefined8 *extraout_EAX_02;
  undefined8 uVar9;
  float fVar10;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_34;
  undefined8 local_28;
  float local_20;
  undefined8 local_1c;
  undefined8 local_10;

  if (DAT_1151ebd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    DAT_1151ebd4 = '\x01';
  }
  __return_storage_ptr__->___x_2 = param_1;
  __return_storage_ptr__->___y_3 = param_2;
  __return_storage_ptr__->___z_4 = 0.0;
  uVar1 = __return_storage_ptr__->___x_2;
  uVar4 = __return_storage_ptr__->___y_3;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            (&local_34,(float)uVar1,(float)uVar4,__return_storage_ptr__->___z_4,(MethodInfo *)0x0);
  local_10 = *extraout_EAX;
  local_20 = *(float *)(extraout_EAX + 1);
  local_1c._4_4_ = (float)((ulonglong)local_10 >> 0x20);
  fVar10 = (param_4.___c1_1.___y_1 - param_4.___c0_0.___y_1) * local_1c._4_4_;
  local_28 = *extraout_EAX;
  param_4.___c1_1.___z_2 =
       (param_4.___c1_1.___z_2 - param_4.___c0_0.___z_2) * local_20 + param_4.___c0_0.___z_2;
  local_1c = local_10;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            (&local_34,
             (param_4.___c1_1.___x_0 - param_4.___c0_0.___x_0) * (float)local_10 +
             param_4.___c0_0.___x_0,fVar10 + param_4.___c0_0.___y_1,param_4.___c1_1.___z_2,
             (MethodInfo *)0x0);
  uVar9 = *extraout_EAX_00;
  param_4.___c1_1.___z_2 = *(float *)(extraout_EAX_00 + 1);
  __return_storage_ptr__->___x_2 = (float)(int)uVar9;
  __return_storage_ptr__->___y_3 = (float)(int)((ulonglong)uVar9 >> 0x20);
  __return_storage_ptr__->___z_4 = param_4.___c1_1.___z_2;
  param_4.___c1_1.___x_0 = (float)uVar9;
  param_4.___c1_1.___y_1 = (float)((ulonglong)uVar9 >> 0x20);
  __return_storage_ptr__->___z_4 =
       (float)((uint)__return_storage_ptr__->___x_2 ^ __xmm_80000000800000008000000080000000) -
       param_4.___c1_1.___y_1;
  uVar2 = __return_storage_ptr__->___x_2;
  uVar5 = __return_storage_ptr__->___y_3;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            (&local_34,(float)uVar2,(float)uVar5,__return_storage_ptr__->___z_4,(MethodInfo *)0x0);
  uVar9 = *extraout_EAX_01;
  fVar10 = *(float *)(extraout_EAX_01 + 1);
  param_4.___c1_1.___y_1 = (float)uVar9;
  param_4.___c1_1.___z_2 = (float)((ulonglong)uVar9 >> 0x20);
  if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    uVar9 = CONCAT44(param_4.___c1_1.___z_2,param_4.___c1_1.___y_1);
  }
  fVar7.___z_2 = fVar10;
  fVar7.___x_0 = (float)(int)uVar9;
  fVar7.___y_1 = (float)(int)((ulonglong)uVar9 >> 0x20);
  fVar11 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                     (fVar7,(MethodInfo *)0x0);
  fVar10 = Mathf_LerpUnclamped_mF68548D1AA22018863B6EBE911A5F7A959F94C1E
                     (0.0,param_5,param_3,(MethodInfo *)0x0);
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  pfVar8 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                     (&param_4.___c1_1,fVar11,fVar10,(MethodInfo *)0x0);
  uVar3 = pfVar8->___x_0;
  uVar6 = pfVar8->___y_1;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&param_4.___c1_1,(float)uVar3,
             (float)uVar6,pfVar8->___z_2,(MethodInfo *)0x0);
  uVar9 = *extraout_EAX_02;
  fVar10 = *(float *)(extraout_EAX_02 + 1);
  __return_storage_ptr__->___x_2 = (float)(int)uVar9;
  __return_storage_ptr__->___y_3 = (float)(int)((ulonglong)uVar9 >> 0x20);
  __return_storage_ptr__->___z_4 = fVar10;
  return __return_storage_ptr__;
}
