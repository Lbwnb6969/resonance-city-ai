// RVA 0x40e180 | Os.Hex.HexMath$$.cctor
// PDB: HexMath__cctor_m227B8E6B86805E2ABCBAC2EBE69792D450637FD1
// Body: [[1040e180, 1040ec68]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10192150 memset
// 10196010 _libm_sse2_sqrt_precise
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 10836e20 ExtraMath_Rotate2D_mE079BC3EC508C08E42F7554AB12CEE2F109E5835
// 10a45e00 Matrix4x4__ctor_mFDDCE13D7171353ED7BA9A9B6885212DFC9E1076
// 10a45f00 Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F

void __cdecl HexMath__cctor_m227B8E6B86805E2ABCBAC2EBE69792D450637FD1(MethodInfo *param_1)

{
  uint uVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar17;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar18;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar19;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar20;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar21;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar22;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar23;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar24;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar25;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar26;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar27;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar28;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar29;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar30;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar31;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar32;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar33;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar34;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar35;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar36;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar37;
  float fVar38;
  double dVar39;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar40;
  float local_24c;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_248;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_238;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_228;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_218;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_208;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_1f8;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_1e8;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_1d8;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_1c8;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_1b8;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_1a8;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_198;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_188;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_178;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_168;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_158;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_148;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_108;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_c8;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_88;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_48;

  if (DAT_1151ca8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_1151ca8a = '\x01';
  }
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  fVar40 = ExtraMath_Rotate2D_mE079BC3EC508C08E42F7554AB12CEE2F109E5835
                     ((float2_tCB7B81181978EDE17722C533A55E345D9A413274)0x3f800000,120.0,
                      (MethodInfo *)0x0);
  fVar38 = __real_3f800000 - 1.0;
  local_24c = fVar40.___y_1;
  if (`float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    `float___cdecl_math_sqrt_mCFFE475634B2765D4E1A8DE9A9B331742E0637CF_inline(float,MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
  }
  dVar39 = (double)(fVar38 * fVar38 + (0.0 - local_24c) * (0.0 - local_24c));
  _libm_sse2_sqrt_precise();
  *(float *)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields =
       __real_3f800000 / (float)dVar39;
  uVar1 = *(uint *)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                   static_fields;
  fVar40.___y_1 = 0.0;
  fVar40.___x_0 = (float)uVar1;
  fVar40 = ExtraMath_Rotate2D_mE079BC3EC508C08E42F7554AB12CEE2F109E5835
                     (fVar40,0.0,(MethodInfo *)0x0);
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(uint *)((int)pvVar2 + 4) = uVar1;
  local_24c = fVar40.___y_1;
  *(float *)((int)pvVar2 + 8) = local_24c;
  uVar1 = *(uint *)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                   static_fields;
  fVar33.___y_1 = 0.0;
  fVar33.___x_0 = (float)uVar1;
  fVar40 = ExtraMath_Rotate2D_mE079BC3EC508C08E42F7554AB12CEE2F109E5835
                     (fVar33,120.0,(MethodInfo *)0x0);
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(uint *)((int)pvVar2 + 0xc) = uVar1;
  local_24c = fVar40.___y_1;
  *(float *)((int)pvVar2 + 0x10) = local_24c;
  uVar1 = *(uint *)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                   static_fields;
  fVar34.___y_1 = 0.0;
  fVar34.___x_0 = (float)uVar1;
  fVar40 = ExtraMath_Rotate2D_mE079BC3EC508C08E42F7554AB12CEE2F109E5835
                     (fVar34,240.0,(MethodInfo *)0x0);
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(uint *)((int)pvVar2 + 0x14) = uVar1;
  local_24c = fVar40.___y_1;
  *(float *)((int)pvVar2 + 0x18) = local_24c;
  local_218.___m_Left_0 = 0.0;
  local_218.___m_Right_1 = 0.0;
  local_218.___m_Top_2 = 0.0;
  local_218.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_218,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 4),
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 8),0.0,0.0,(MethodInfo *)0x0);
  local_228.___m_Left_0 = 0.0;
  local_228.___m_Right_1 = 0.0;
  local_228.___m_Top_2 = 0.0;
  local_228.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_228,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0xc),
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0x10),0.0,0.0,(MethodInfo *)0x0);
  local_238.___m_Left_0 = 0.0;
  local_238.___m_Right_1 = 0.0;
  local_238.___m_Top_2 = 0.0;
  local_238.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_238,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0x14),
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0x18),0.0,0.0,(MethodInfo *)0x0);
  local_248.___m_Left_0 = 0.0;
  local_248.___m_Right_1 = 0.0;
  local_248.___m_Top_2 = 0.0;
  local_248.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_248,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  memset((uchar *)&local_148,'\0',0x40);
  VVar17.___y_2 = local_218.___m_Right_1;
  VVar17.___x_1 = local_218.___m_Left_0;
  VVar17.___z_3 = local_218.___m_Top_2;
  VVar17.___w_4 = local_218.___m_Bottom_3;
  VVar21.___y_2 = local_228.___m_Right_1;
  VVar21.___x_1 = local_228.___m_Left_0;
  VVar21.___z_3 = local_228.___m_Top_2;
  VVar21.___w_4 = local_228.___m_Bottom_3;
  VVar25.___y_2 = local_238.___m_Right_1;
  VVar25.___x_1 = local_238.___m_Left_0;
  VVar25.___z_3 = local_238.___m_Top_2;
  VVar25.___w_4 = local_238.___m_Bottom_3;
  VVar29.___y_2 = local_248.___m_Right_1;
  VVar29.___x_1 = local_248.___m_Left_0;
  VVar29.___z_3 = local_248.___m_Top_2;
  VVar29.___w_4 = local_248.___m_Bottom_3;
  Matrix4x4__ctor_mFDDCE13D7171353ED7BA9A9B6885212DFC9E1076
            (&local_148,VVar17,VVar21,VVar25,VVar29,(MethodInfo *)0x0);
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(float *)((int)pvVar2 + 0x1c) = local_148.___m00_0;
  *(float *)((int)pvVar2 + 0x20) = local_148.___m10_1;
  *(float *)((int)pvVar2 + 0x24) = local_148.___m20_2;
  *(float *)((int)pvVar2 + 0x28) = local_148.___m30_3;
  *(float *)((int)pvVar2 + 0x2c) = local_148.___m01_4;
  *(float *)((int)pvVar2 + 0x30) = local_148.___m11_5;
  *(float *)((int)pvVar2 + 0x34) = local_148.___m21_6;
  *(float *)((int)pvVar2 + 0x38) = local_148.___m31_7;
  *(float *)((int)pvVar2 + 0x3c) = local_148.___m02_8;
  *(float *)((int)pvVar2 + 0x40) = local_148.___m12_9;
  *(float *)((int)pvVar2 + 0x44) = local_148.___m22_10;
  *(float *)((int)pvVar2 + 0x48) = local_148.___m32_11;
  *(float *)((int)pvVar2 + 0x4c) = local_148.___m03_12;
  *(float *)((int)pvVar2 + 0x50) = local_148.___m13_13;
  *(float *)((int)pvVar2 + 0x54) = local_148.___m23_14;
  *(float *)((int)pvVar2 + 0x58) = local_148.___m33_15;
  local_1d8.___m_Left_0 = 0.0;
  local_1d8.___m_Right_1 = 0.0;
  local_1d8.___m_Top_2 = 0.0;
  local_1d8.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_1d8,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 4),0.0,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 8),0.0,(MethodInfo *)0x0);
  local_1e8.___m_Left_0 = 0.0;
  local_1e8.___m_Right_1 = 0.0;
  local_1e8.___m_Top_2 = 0.0;
  local_1e8.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_1e8,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0xc),0.0,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0x10),0.0,(MethodInfo *)0x0);
  local_1f8.___m_Left_0 = 0.0;
  local_1f8.___m_Right_1 = 0.0;
  local_1f8.___m_Top_2 = 0.0;
  local_1f8.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_1f8,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0x14),0.0,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0x18),0.0,(MethodInfo *)0x0);
  local_208.___m_Left_0 = 0.0;
  local_208.___m_Right_1 = 0.0;
  local_208.___m_Top_2 = 0.0;
  local_208.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_208,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  memset((uchar *)&local_108,'\0',0x40);
  VVar18.___y_2 = local_1d8.___m_Right_1;
  VVar18.___x_1 = local_1d8.___m_Left_0;
  VVar18.___z_3 = local_1d8.___m_Top_2;
  VVar18.___w_4 = local_1d8.___m_Bottom_3;
  VVar22.___y_2 = local_1e8.___m_Right_1;
  VVar22.___x_1 = local_1e8.___m_Left_0;
  VVar22.___z_3 = local_1e8.___m_Top_2;
  VVar22.___w_4 = local_1e8.___m_Bottom_3;
  VVar26.___y_2 = local_1f8.___m_Right_1;
  VVar26.___x_1 = local_1f8.___m_Left_0;
  VVar26.___z_3 = local_1f8.___m_Top_2;
  VVar26.___w_4 = local_1f8.___m_Bottom_3;
  VVar30.___y_2 = local_208.___m_Right_1;
  VVar30.___x_1 = local_208.___m_Left_0;
  VVar30.___z_3 = local_208.___m_Top_2;
  VVar30.___w_4 = local_208.___m_Bottom_3;
  Matrix4x4__ctor_mFDDCE13D7171353ED7BA9A9B6885212DFC9E1076
            (&local_108,VVar18,VVar22,VVar26,VVar30,(MethodInfo *)0x0);
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(float *)((int)pvVar2 + 0x5c) = local_108.___m00_0;
  *(float *)((int)pvVar2 + 0x60) = local_108.___m10_1;
  *(float *)((int)pvVar2 + 100) = local_108.___m20_2;
  *(float *)((int)pvVar2 + 0x68) = local_108.___m30_3;
  *(float *)((int)pvVar2 + 0x6c) = local_108.___m01_4;
  *(float *)((int)pvVar2 + 0x70) = local_108.___m11_5;
  *(float *)((int)pvVar2 + 0x74) = local_108.___m21_6;
  *(float *)((int)pvVar2 + 0x78) = local_108.___m31_7;
  *(float *)((int)pvVar2 + 0x7c) = local_108.___m02_8;
  *(float *)((int)pvVar2 + 0x80) = local_108.___m12_9;
  *(float *)((int)pvVar2 + 0x84) = local_108.___m22_10;
  *(float *)((int)pvVar2 + 0x88) = local_108.___m32_11;
  *(float *)((int)pvVar2 + 0x8c) = local_108.___m03_12;
  *(float *)((int)pvVar2 + 0x90) = local_108.___m13_13;
  *(float *)((int)pvVar2 + 0x94) = local_108.___m23_14;
  *(float *)((int)pvVar2 + 0x98) = local_108.___m33_15;
  local_198.___m_Left_0 = 0.0;
  local_198.___m_Right_1 = 0.0;
  local_198.___m_Top_2 = 0.0;
  local_198.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_198,1.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  local_1a8.___m_Left_0 = 0.0;
  local_1a8.___m_Right_1 = 0.0;
  local_1a8.___m_Top_2 = 0.0;
  local_1a8.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_1a8,0.0,0.0,1.0,0.0,(MethodInfo *)0x0);
  local_1b8.___m_Left_0 = 0.0;
  local_1b8.___m_Right_1 = 0.0;
  local_1b8.___m_Top_2 = 0.0;
  local_1b8.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_1b8,0.0,1.0,0.0,0.0,(MethodInfo *)0x0);
  local_1c8.___m_Left_0 = 0.0;
  local_1c8.___m_Right_1 = 0.0;
  local_1c8.___m_Top_2 = 0.0;
  local_1c8.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_1c8,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  memset((uchar *)&local_c8,'\0',0x40);
  VVar19.___y_2 = local_198.___m_Right_1;
  VVar19.___x_1 = local_198.___m_Left_0;
  VVar19.___z_3 = local_198.___m_Top_2;
  VVar19.___w_4 = local_198.___m_Bottom_3;
  VVar23.___y_2 = local_1a8.___m_Right_1;
  VVar23.___x_1 = local_1a8.___m_Left_0;
  VVar23.___z_3 = local_1a8.___m_Top_2;
  VVar23.___w_4 = local_1a8.___m_Bottom_3;
  VVar27.___y_2 = local_1b8.___m_Right_1;
  VVar27.___x_1 = local_1b8.___m_Left_0;
  VVar27.___z_3 = local_1b8.___m_Top_2;
  VVar27.___w_4 = local_1b8.___m_Bottom_3;
  VVar31.___y_2 = local_1c8.___m_Right_1;
  VVar31.___x_1 = local_1c8.___m_Left_0;
  VVar31.___z_3 = local_1c8.___m_Top_2;
  VVar31.___w_4 = local_1c8.___m_Bottom_3;
  Matrix4x4__ctor_mFDDCE13D7171353ED7BA9A9B6885212DFC9E1076
            (&local_c8,VVar19,VVar23,VVar27,VVar31,(MethodInfo *)0x0);
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(float *)((int)pvVar2 + 0x9c) = local_c8.___m00_0;
  *(float *)((int)pvVar2 + 0xa0) = local_c8.___m10_1;
  *(float *)((int)pvVar2 + 0xa4) = local_c8.___m20_2;
  *(float *)((int)pvVar2 + 0xa8) = local_c8.___m30_3;
  fVar38 = __real_3f800000;
  *(float *)((int)pvVar2 + 0xac) = local_c8.___m01_4;
  *(float *)((int)pvVar2 + 0xb0) = local_c8.___m11_5;
  *(float *)((int)pvVar2 + 0xb4) = local_c8.___m21_6;
  *(float *)((int)pvVar2 + 0xb8) = local_c8.___m31_7;
  *(float *)((int)pvVar2 + 0xbc) = local_c8.___m02_8;
  *(float *)((int)pvVar2 + 0xc0) = local_c8.___m12_9;
  *(float *)((int)pvVar2 + 0xc4) = local_c8.___m22_10;
  *(float *)((int)pvVar2 + 200) = local_c8.___m32_11;
  *(float *)((int)pvVar2 + 0xcc) = local_c8.___m03_12;
  *(float *)((int)pvVar2 + 0xd0) = local_c8.___m13_13;
  *(float *)((int)pvVar2 + 0xd4) = local_c8.___m23_14;
  *(float *)((int)pvVar2 + 0xd8) = local_c8.___m33_15;
  fVar38 = fVar38 / *(float *)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                              ->static_fields;
  fVar35.___y_1 = 0.0;
  fVar35.___x_0 = fVar38;
  fVar40 = ExtraMath_Rotate2D_mE079BC3EC508C08E42F7554AB12CEE2F109E5835
                     (fVar35,0.0,(MethodInfo *)0x0);
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(float *)((int)pvVar2 + 0xdc) = fVar38;
  local_24c = fVar40.___y_1;
  *(float *)((int)pvVar2 + 0xe0) = local_24c;
  fVar38 = __real_3f800000 /
           *(float *)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                     static_fields;
  fVar36.___y_1 = 0.0;
  fVar36.___x_0 = fVar38;
  fVar40 = ExtraMath_Rotate2D_mE079BC3EC508C08E42F7554AB12CEE2F109E5835
                     (fVar36,60.0,(MethodInfo *)0x0);
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(float *)((int)pvVar2 + 0xe4) = fVar38;
  local_24c = fVar40.___y_1;
  *(float *)((int)pvVar2 + 0xe8) = local_24c;
  local_158.___m_Left_0 = 0.0;
  local_158.___m_Right_1 = 0.0;
  local_158.___m_Top_2 = 0.0;
  local_158.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_158,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0xdc),
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0xe0),0.0,0.0,(MethodInfo *)0x0);
  local_168.___m_Left_0 = 0.0;
  local_168.___m_Right_1 = 0.0;
  local_168.___m_Top_2 = 0.0;
  local_168.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_168,
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0xe4),
             *(float *)((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0xe8),0.0,0.0,(MethodInfo *)0x0);
  local_178.___m_Left_0 = 0.0;
  local_178.___m_Right_1 = 0.0;
  local_178.___m_Top_2 = 0.0;
  local_178.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_178,0.0,0.0,1.0,0.0,(MethodInfo *)0x0);
  local_188.___m_Left_0 = 0.0;
  local_188.___m_Right_1 = 0.0;
  local_188.___m_Top_2 = 0.0;
  local_188.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_188,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  memset((uchar *)&local_88,'\0',0x40);
  VVar20.___y_2 = local_158.___m_Right_1;
  VVar20.___x_1 = local_158.___m_Left_0;
  VVar20.___z_3 = local_158.___m_Top_2;
  VVar20.___w_4 = local_158.___m_Bottom_3;
  VVar24.___y_2 = local_168.___m_Right_1;
  VVar24.___x_1 = local_168.___m_Left_0;
  VVar24.___z_3 = local_168.___m_Top_2;
  VVar24.___w_4 = local_168.___m_Bottom_3;
  VVar28.___y_2 = local_178.___m_Right_1;
  VVar28.___x_1 = local_178.___m_Left_0;
  VVar28.___z_3 = local_178.___m_Top_2;
  VVar28.___w_4 = local_178.___m_Bottom_3;
  VVar32.___y_2 = local_188.___m_Right_1;
  VVar32.___x_1 = local_188.___m_Left_0;
  VVar32.___z_3 = local_188.___m_Top_2;
  VVar32.___w_4 = local_188.___m_Bottom_3;
  Matrix4x4__ctor_mFDDCE13D7171353ED7BA9A9B6885212DFC9E1076
            (&local_88,VVar20,VVar24,VVar28,VVar32,(MethodInfo *)0x0);
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(float *)((int)pvVar2 + 0xec) = local_88.___m00_0;
  *(float *)((int)pvVar2 + 0xf0) = local_88.___m10_1;
  *(float *)((int)pvVar2 + 0xf4) = local_88.___m20_2;
  *(float *)((int)pvVar2 + 0xf8) = local_88.___m30_3;
  *(float *)((int)pvVar2 + 0xfc) = local_88.___m01_4;
  *(float *)((int)pvVar2 + 0x100) = local_88.___m11_5;
  *(float *)((int)pvVar2 + 0x104) = local_88.___m21_6;
  *(float *)((int)pvVar2 + 0x108) = local_88.___m31_7;
  *(float *)((int)pvVar2 + 0x10c) = local_88.___m02_8;
  *(float *)((int)pvVar2 + 0x110) = local_88.___m12_9;
  *(float *)((int)pvVar2 + 0x114) = local_88.___m22_10;
  *(float *)((int)pvVar2 + 0x118) = local_88.___m32_11;
  *(float *)((int)pvVar2 + 0x11c) = local_88.___m03_12;
  *(float *)((int)pvVar2 + 0x120) = local_88.___m13_13;
  *(float *)((int)pvVar2 + 0x124) = local_88.___m23_14;
  *(float *)((int)pvVar2 + 0x128) = local_88.___m33_15;
  pMVar37 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225
                      (&local_48,
                       (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                       ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0xec),(MethodInfo *)0x0);
  fVar38 = pMVar37->___m10_1;
  fVar3 = pMVar37->___m20_2;
  fVar4 = pMVar37->___m30_3;
  fVar5 = pMVar37->___m01_4;
  fVar6 = pMVar37->___m11_5;
  fVar7 = pMVar37->___m21_6;
  fVar8 = pMVar37->___m31_7;
  fVar9 = pMVar37->___m02_8;
  fVar10 = pMVar37->___m12_9;
  fVar11 = pMVar37->___m22_10;
  fVar12 = pMVar37->___m32_11;
  fVar13 = pMVar37->___m03_12;
  fVar14 = pMVar37->___m13_13;
  fVar15 = pMVar37->___m23_14;
  fVar16 = pMVar37->___m33_15;
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(float *)((int)pvVar2 + 300) = pMVar37->___m00_0;
  *(float *)((int)pvVar2 + 0x130) = fVar38;
  *(float *)((int)pvVar2 + 0x134) = fVar3;
  *(float *)((int)pvVar2 + 0x138) = fVar4;
  *(float *)((int)pvVar2 + 0x13c) = fVar5;
  *(float *)((int)pvVar2 + 0x140) = fVar6;
  *(float *)((int)pvVar2 + 0x144) = fVar7;
  *(float *)((int)pvVar2 + 0x148) = fVar8;
  *(float *)((int)pvVar2 + 0x14c) = fVar9;
  *(float *)((int)pvVar2 + 0x150) = fVar10;
  *(float *)((int)pvVar2 + 0x154) = fVar11;
  *(float *)((int)pvVar2 + 0x158) = fVar12;
  *(float *)((int)pvVar2 + 0x15c) = fVar13;
  *(float *)((int)pvVar2 + 0x160) = fVar14;
  *(float *)((int)pvVar2 + 0x164) = fVar15;
  *(float *)((int)pvVar2 + 0x168) = fVar16;
  pMVar37 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                      (&local_48,
                       *(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                        ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                              ->static_fields + 300),
                       *(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                        ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var
                              ->static_fields + 0x1c),(MethodInfo *)0x0);
  fVar38 = pMVar37->___m10_1;
  fVar3 = pMVar37->___m20_2;
  fVar4 = pMVar37->___m30_3;
  fVar5 = pMVar37->___m01_4;
  fVar6 = pMVar37->___m11_5;
  fVar7 = pMVar37->___m21_6;
  fVar8 = pMVar37->___m31_7;
  fVar9 = pMVar37->___m02_8;
  fVar10 = pMVar37->___m12_9;
  fVar11 = pMVar37->___m22_10;
  fVar12 = pMVar37->___m32_11;
  fVar13 = pMVar37->___m03_12;
  fVar14 = pMVar37->___m13_13;
  fVar15 = pMVar37->___m23_14;
  fVar16 = pMVar37->___m33_15;
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(float *)((int)pvVar2 + 0x16c) = pMVar37->___m00_0;
  *(float *)((int)pvVar2 + 0x170) = fVar38;
  *(float *)((int)pvVar2 + 0x174) = fVar3;
  *(float *)((int)pvVar2 + 0x178) = fVar4;
  *(float *)((int)pvVar2 + 0x17c) = fVar5;
  *(float *)((int)pvVar2 + 0x180) = fVar6;
  *(float *)((int)pvVar2 + 0x184) = fVar7;
  *(float *)((int)pvVar2 + 0x188) = fVar8;
  *(float *)((int)pvVar2 + 0x18c) = fVar9;
  *(float *)((int)pvVar2 + 400) = fVar10;
  *(float *)((int)pvVar2 + 0x194) = fVar11;
  *(float *)((int)pvVar2 + 0x198) = fVar12;
  *(float *)((int)pvVar2 + 0x19c) = fVar13;
  *(float *)((int)pvVar2 + 0x1a0) = fVar14;
  *(float *)((int)pvVar2 + 0x1a4) = fVar15;
  *(float *)((int)pvVar2 + 0x1a8) = fVar16;
  pMVar37 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225
                      (&local_48,
                       (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                       ((int)HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->
                             static_fields + 0x16c),(MethodInfo *)0x0);
  fVar38 = pMVar37->___m10_1;
  fVar3 = pMVar37->___m20_2;
  fVar4 = pMVar37->___m30_3;
  fVar5 = pMVar37->___m01_4;
  fVar6 = pMVar37->___m11_5;
  fVar7 = pMVar37->___m21_6;
  fVar8 = pMVar37->___m31_7;
  fVar9 = pMVar37->___m02_8;
  fVar10 = pMVar37->___m12_9;
  fVar11 = pMVar37->___m22_10;
  fVar12 = pMVar37->___m32_11;
  fVar13 = pMVar37->___m03_12;
  fVar14 = pMVar37->___m13_13;
  fVar15 = pMVar37->___m23_14;
  fVar16 = pMVar37->___m33_15;
  pvVar2 = HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->static_fields;
  *(float *)((int)pvVar2 + 0x1ac) = pMVar37->___m00_0;
  *(float *)((int)pvVar2 + 0x1b0) = fVar38;
  *(float *)((int)pvVar2 + 0x1b4) = fVar3;
  *(float *)((int)pvVar2 + 0x1b8) = fVar4;
  *(float *)((int)pvVar2 + 0x1bc) = fVar5;
  *(float *)((int)pvVar2 + 0x1c0) = fVar6;
  *(float *)((int)pvVar2 + 0x1c4) = fVar7;
  *(float *)((int)pvVar2 + 0x1c8) = fVar8;
  *(float *)((int)pvVar2 + 0x1cc) = fVar9;
  *(float *)((int)pvVar2 + 0x1d0) = fVar10;
  *(float *)((int)pvVar2 + 0x1d4) = fVar11;
  *(float *)((int)pvVar2 + 0x1d8) = fVar12;
  *(float *)((int)pvVar2 + 0x1dc) = fVar13;
  *(float *)((int)pvVar2 + 0x1e0) = fVar14;
  *(float *)((int)pvVar2 + 0x1e4) = fVar15;
  *(float *)((int)pvVar2 + 0x1e8) = fVar16;
  return;
}
