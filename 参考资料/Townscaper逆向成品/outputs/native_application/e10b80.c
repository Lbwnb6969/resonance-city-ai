// RVA 0xe10b80 | Placemaker.GridGenerator$$GetClostestVertPosition
// PDB: GridGenerator_GetClostestVertPosition_m4A26C0EB32D236A773BF3CD93B30D653A015707D
// Body: [[10e10b80, 10e10e6f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10192150 memset
// 10806c40 Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
// 10836df0 ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
// 10e116a0 GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B

Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C * __cdecl
GridGenerator_GetClostestVertPosition_m4A26C0EB32D236A773BF3CD93B30D653A015707D
          (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *__return_storage_ptr__,
          GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_2,MethodInfo *param_3)

{
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar1;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar2;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar3;
  bool bVar4;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *pQVar5;
  float fVar6;
  float fVar7;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar8;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_b8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_74;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_6c;
  float local_64;
  float local_60;
  float local_5c;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_58;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_11522676 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_11522676 = '\x01';
  }
  memset((uchar *)__return_storage_ptr__,'\0',0x1b0);
  pQVar5 = GridGenerator_GetQuad_m963CD2BA23D7114412D08BAC7FDB9A4FC579CB2B
                     (&local_b8,param_1,param_2,(MethodInfo *)0x0);
  local_58.___quadIndex_0 = pQVar5->___quadIndex_0;
  local_58._1_3_ = *(undefined3 *)&pQVar5->field_0x1;
  local_58.___v0_1.___x_0 = (pQVar5->___v0_1).___x_0;
  local_58.___v0_1.___y_1 = (pQVar5->___v0_1).___y_1;
  local_58.___v1_2.___x_0 = (pQVar5->___v1_2).___x_0;
  local_58.___v1_2.___y_1 = (pQVar5->___v1_2).___y_1;
  local_58.___v2_3.___x_0 = (pQVar5->___v2_3).___x_0;
  local_58.___v2_3.___y_1 = (pQVar5->___v2_3).___y_1;
  local_58.___v3_4.___x_0 = (pQVar5->___v3_4).___x_0;
  local_58.___v3_4.___y_1 = (pQVar5->___v3_4).___y_1;
  local_58.___p0_5.___x_0 = (pQVar5->___p0_5).___x_0;
  local_58.___p0_5.___y_1 = (pQVar5->___p0_5).___y_1;
  local_58.___p1_6.___x_0 = (pQVar5->___p1_6).___x_0;
  local_58.___p1_6.___y_1 = (pQVar5->___p1_6).___y_1;
  local_58.___p2_7.___x_0 = (pQVar5->___p2_7).___x_0;
  local_58.___p2_7.___y_1 = (pQVar5->___p2_7).___y_1;
  local_58.___p3_8.___x_0 = (pQVar5->___p3_8).___x_0;
  local_58.___p3_8.___y_1 = (pQVar5->___p3_8).___y_1;
  memset((uchar *)__return_storage_ptr__,'\0',0x1b0);
  bVar4 = Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0(&local_58,(MethodInfo *)0x0);
  if (!bVar4) {
    __return_storage_ptr__->___quadCount_8 = -1;
    return __return_storage_ptr__;
  }
  local_c = local_58.___p1_6.___x_0 - local_58.___p0_5.___x_0;
  local_8 = local_58.___p1_6.___y_1 - local_58.___p0_5.___y_1;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  VVar3.___y_1 = local_8;
  VVar3.___x_0 = local_c;
  local_6c = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B(VVar3,(MethodInfo *)0x0)
  ;
  local_60 = param_2.___x_0 - local_58.___p0_5.___x_0;
  local_c = local_58.___p2_7.___x_0 - local_58.___p1_6.___x_0;
  local_5c = param_2.___y_1 - local_58.___p0_5.___y_1;
  local_8 = local_58.___p2_7.___y_1 - local_58.___p1_6.___y_1;
  VVar2.___y_1 = local_8;
  VVar2.___x_0 = local_c;
  VVar8 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B(VVar2,(MethodInfo *)0x0);
  local_c = VVar8.___x_0;
  fVar6 = local_8 * (param_2.___y_1 - local_58.___p1_6.___y_1) +
          local_c * (param_2.___x_0 - local_58.___p1_6.___x_0);
  _local_c = CONCAT44(local_58.___p3_8.___y_1 - local_58.___p2_7.___y_1,
                      local_58.___p3_8.___x_0 - local_58.___p2_7.___x_0);
  VVar1.___y_1 = local_58.___p3_8.___y_1 - local_58.___p2_7.___y_1;
  VVar1.___x_0 = local_58.___p3_8.___x_0 - local_58.___p2_7.___x_0;
  local_74 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B(VVar1,(MethodInfo *)0x0)
  ;
  local_64 = param_2.___x_0 - local_58.___p2_7.___x_0;
  _local_14 = CONCAT44(local_58.___p0_5.___y_1 - local_58.___p3_8.___y_1,
                       local_58.___p0_5.___x_0 - local_58.___p3_8.___x_0);
  VVar8.___y_1 = local_58.___p0_5.___y_1 - local_58.___p3_8.___y_1;
  VVar8.___x_0 = local_58.___p0_5.___x_0 - local_58.___p3_8.___x_0;
  local_8 = param_2.___y_1 - local_58.___p2_7.___y_1;
  VVar8 = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B(VVar8,(MethodInfo *)0x0);
  local_10 = VVar8.___y_1;
  fVar7 = local_14 * (param_2.___x_0 - local_58.___p3_8.___x_0) +
          local_10 * (param_2.___y_1 - local_58.___p3_8.___y_1);
  if (local_74.___x_0 * local_64 + local_74.___y_1 * local_8 <=
      local_6c.___y_1 * local_5c + local_6c.___x_0 * local_60) {
    if (fVar7 <= fVar6) {
      (__return_storage_ptr__->___hexPos_0).___x_0 = local_58.___v3_4.___x_0;
      (__return_storage_ptr__->___hexPos_0).___y_1 = local_58.___v3_4.___y_1;
      (__return_storage_ptr__->___planePos_1).___x_0 = local_58.___p3_8.___x_0;
      (__return_storage_ptr__->___planePos_1).___y_1 = local_58.___p3_8.___y_1;
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->___hexPos_0).___x_0 = local_58.___v2_3.___x_0;
    (__return_storage_ptr__->___planePos_1).___x_0 = local_58.___p2_7.___x_0;
    (__return_storage_ptr__->___hexPos_0).___y_1 = local_58.___v2_3.___y_1;
    (__return_storage_ptr__->___planePos_1).___y_1 = local_58.___p2_7.___y_1;
    return __return_storage_ptr__;
  }
  if (fVar7 <= fVar6) {
    (__return_storage_ptr__->___hexPos_0).___x_0 = local_58.___v0_1.___x_0;
    (__return_storage_ptr__->___planePos_1).___x_0 = local_58.___p0_5.___x_0;
    (__return_storage_ptr__->___hexPos_0).___y_1 = local_58.___v0_1.___y_1;
    (__return_storage_ptr__->___planePos_1).___y_1 = local_58.___p0_5.___y_1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->___hexPos_0).___x_0 = local_58.___v1_2.___x_0;
  (__return_storage_ptr__->___planePos_1).___x_0 = local_58.___p1_6.___x_0;
  (__return_storage_ptr__->___hexPos_0).___y_1 = local_58.___v1_2.___y_1;
  (__return_storage_ptr__->___planePos_1).___y_1 = local_58.___p1_6.___y_1;
  return __return_storage_ptr__;
}
