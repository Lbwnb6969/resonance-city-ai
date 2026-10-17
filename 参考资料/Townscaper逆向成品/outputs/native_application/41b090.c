// RVA 0x41b090 | Os.Utils.Intersections$$TriangleTriangleInternal
// PDB: Intersections_TriangleTriangleInternal_m640087FEEA5ED18268DE27894AC4185F19A145C8
// Body: [[1041b090, 1041b73e]]
// Direct callees:
// 10673720 Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
// 10674430 Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
// 10a44440 Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB

bool __cdecl
Intersections_TriangleTriangleInternal_m640087FEEA5ED18268DE27894AC4185F19A145C8
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_4,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_5,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_6,float param_7,
          MethodInfo *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar25;
  float fVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar27;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_7c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_70;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_64;
  float local_58;
  float fStack_54;
  float local_50;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c;
  undefined4 uStack_40;
  undefined4 local_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  local_70.___z_4 = param_1.___z_4 - param_2.___z_4;
  local_4c.___y_3 = param_1.___y_3 - param_2.___y_3;
  local_4c.___x_2 = param_1.___x_2 - param_2.___x_2;
  local_4c.___z_4 = local_70.___z_4;
  pVVar27 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                      (&local_70,&local_4c,(MethodInfo *)0x0);
  uVar1 = pVVar27->___x_2;
  uVar10 = pVVar27->___y_3;
  fVar19 = pVVar27->___z_4;
  local_70.___z_4 = param_2.___z_4 - param_3.___z_4;
  local_4c.___y_3 = param_2.___y_3 - param_3.___y_3;
  local_4c.___x_2 = param_2.___x_2 - param_3.___x_2;
  local_4c.___z_4 = local_70.___z_4;
  local_30 = uVar1;
  fStack_2c = (float)uVar10;
  pVVar27 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                      (&local_70,&local_4c,(MethodInfo *)0x0);
  local_28 = pVVar27->___z_4;
  uVar2 = pVVar27->___x_2;
  uVar11 = pVVar27->___y_3;
  VVar20.___y_3 = fStack_2c;
  VVar20.___x_2 = (float)local_30;
  VVar20.___z_4 = fVar19;
  local_3c = uVar2;
  fStack_38 = (float)uVar11;
  pVVar27 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                      (&local_7c,VVar20,*pVVar27,(MethodInfo *)0x0);
  local_64.___x_2 = pVVar27->___x_2;
  local_64.___y_3 = pVVar27->___y_3;
  local_70.___z_4 = pVVar27->___z_4;
  local_70.___x_2 = pVVar27->___x_2;
  local_70.___y_3 = pVVar27->___y_3;
  local_10 = (float)((uint)local_64.___x_2 ^ __xmm_80000000800000008000000080000000);
  local_14 = (float)((uint)local_64.___y_3 ^ __xmm_80000000800000008000000080000000);
  local_50 = (float)((uint)local_70.___z_4 ^ __xmm_80000000800000008000000080000000);
  local_20 = param_4.___x_2 - param_1.___x_2;
  local_1c = param_4.___y_3 - param_1.___y_3;
  local_24 = param_4.___z_4 - param_1.___z_4;
  local_18 = local_1c * local_14 + local_20 * local_10 + local_24 * local_50;
  local_64.___z_4 = local_70.___z_4;
  local_8 = local_50;
  local_58 = local_10;
  fStack_54 = local_14;
  local_c = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(local_18,(MethodInfo *)0x0);
  fVar26 = local_50;
  local_8 = local_8 * local_c;
  if (((param_7 < local_18 * local_c) &&
      (param_7 < (param_5.___y_3 - param_1.___y_3) * local_14 * local_c +
                 (param_5.___x_2 - param_1.___x_2) * local_10 * local_c +
                 (param_5.___z_4 - param_1.___z_4) * local_8)) &&
     (param_7 < (param_6.___y_3 - param_1.___y_3) * local_14 * local_c +
                (param_6.___x_2 - param_1.___x_2) * local_10 * local_c +
                (param_6.___z_4 - param_1.___z_4) * local_8)) {
    return false;
  }
  VVar21.___y_3 = fStack_2c;
  VVar21.___x_2 = (float)local_30;
  VVar21.___z_4 = fVar19;
  VVar23.___y_3 = fStack_54;
  VVar23.___x_2 = local_58;
  VVar23.___z_4 = local_50;
  pVVar27 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                      (&local_7c,VVar21,VVar23,(MethodInfo *)0x0);
  local_64.___x_2 = pVVar27->___x_2;
  local_64.___y_3 = pVVar27->___y_3;
  local_70.___z_4 = pVVar27->___z_4;
  uVar3 = pVVar27->___x_2;
  uVar12 = pVVar27->___y_3;
  uStack_34 = uVar3;
  local_30 = uVar12;
  if (param_7 < local_1c * local_64.___y_3 + local_64.___x_2 * local_20 + local_24 * local_70.___z_4
     ) {
    local_64.___x_2 = pVVar27->___x_2;
    local_64.___y_3 = pVVar27->___y_3;
    uVar4 = pVVar27->___x_2;
    uVar13 = pVVar27->___y_3;
    uStack_34 = uVar4;
    local_30 = uVar13;
    if (param_7 < (param_5.___y_3 - param_1.___y_3) * local_64.___y_3 +
                  (param_5.___x_2 - param_1.___x_2) * local_64.___x_2 +
                  (param_5.___z_4 - param_1.___z_4) * local_70.___z_4) {
      local_64.___x_2 = pVVar27->___x_2;
      local_64.___y_3 = pVVar27->___y_3;
      uVar5 = pVVar27->___x_2;
      uVar14 = pVVar27->___y_3;
      uStack_34 = uVar5;
      local_30 = uVar14;
      if (param_7 < (param_6.___y_3 - param_1.___y_3) * local_64.___y_3 +
                    (param_6.___x_2 - param_1.___x_2) * local_64.___x_2 +
                    (param_6.___z_4 - param_1.___z_4) * local_70.___z_4) {
        return false;
      }
    }
  }
  VVar22.___y_3 = fStack_38;
  VVar22.___x_2 = (float)local_3c;
  VVar22.___z_4 = local_28;
  VVar24.___y_3 = fStack_54;
  VVar24.___x_2 = local_58;
  VVar24.___z_4 = fVar26;
  local_70._0_8_ = local_64._0_8_;
  local_64.___z_4 = local_70.___z_4;
  fStack_2c = local_70.___z_4;
  pVVar27 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                      (&local_7c,VVar22,VVar24,(MethodInfo *)0x0);
  local_70.___x_2 = pVVar27->___x_2;
  local_70.___y_3 = pVVar27->___y_3;
  local_70.___z_4 = pVVar27->___z_4;
  uVar6 = pVVar27->___x_2;
  uVar15 = pVVar27->___y_3;
  local_64._0_8_ = local_70._0_8_;
  if (param_7 < (param_4.___y_3 - param_2.___y_3) * local_70.___y_3 +
                (param_4.___x_2 - param_2.___x_2) * local_70.___x_2 +
                (param_4.___z_4 - param_2.___z_4) * local_70.___z_4) {
    local_70.___x_2 = pVVar27->___x_2;
    local_70.___y_3 = pVVar27->___y_3;
    local_64.___x_2 = pVVar27->___x_2;
    local_64.___y_3 = pVVar27->___y_3;
    if (param_7 < (param_5.___y_3 - param_2.___y_3) * local_70.___y_3 +
                  (param_5.___x_2 - param_2.___x_2) * local_70.___x_2 +
                  (param_5.___z_4 - param_2.___z_4) * local_70.___z_4) {
      local_70.___x_2 = pVVar27->___x_2;
      local_70.___y_3 = pVVar27->___y_3;
      local_64.___x_2 = pVVar27->___x_2;
      local_64.___y_3 = pVVar27->___y_3;
      if (param_7 < (param_6.___y_3 - param_2.___y_3) * local_70.___y_3 +
                    (param_6.___x_2 - param_2.___x_2) * local_70.___x_2 +
                    (param_6.___z_4 - param_2.___z_4) * local_70.___z_4) {
        return false;
      }
    }
  }
  param_1.___z_4 = param_3.___z_4 - param_1.___z_4;
  local_4c.___y_3 = param_3.___y_3 - param_1.___y_3;
  local_4c.___x_2 = param_3.___x_2 - param_1.___x_2;
  local_64.___z_4 = local_70.___z_4;
  local_4c.___z_4 = param_1.___z_4;
  uStack_40 = uVar6;
  local_3c = uVar15;
  fStack_38 = local_70.___z_4;
  pVVar27 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                      (&param_1,&local_4c,(MethodInfo *)0x0);
  VVar25.___y_3 = fStack_54;
  VVar25.___x_2 = local_58;
  VVar25.___z_4 = fVar26;
  pVVar27 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                      (&local_7c,*pVVar27,VVar25,(MethodInfo *)0x0);
  uVar7 = pVVar27->___x_2;
  uVar16 = pVVar27->___y_3;
  fVar19 = pVVar27->___z_4;
  if (param_7 < (param_4.___x_2 - param_3.___x_2) * (float)uVar7 +
                (param_4.___y_3 - param_3.___y_3) * (float)uVar16 +
                (param_4.___z_4 - param_3.___z_4) * fVar19) {
    uVar8 = pVVar27->___x_2;
    uVar17 = pVVar27->___y_3;
    if (param_7 < (param_5.___x_2 - param_3.___x_2) * (float)uVar8 +
                  (param_5.___y_3 - param_3.___y_3) * (float)uVar17 +
                  (param_5.___z_4 - param_3.___z_4) * fVar19) {
      uVar9 = pVVar27->___x_2;
      uVar18 = pVVar27->___y_3;
      if (param_7 < (param_6.___x_2 - param_3.___x_2) * (float)uVar9 +
                    (param_6.___y_3 - param_3.___y_3) * (float)uVar18 +
                    (param_6.___z_4 - param_3.___z_4) * fVar19) {
        return false;
      }
    }
  }
  return true;
}
