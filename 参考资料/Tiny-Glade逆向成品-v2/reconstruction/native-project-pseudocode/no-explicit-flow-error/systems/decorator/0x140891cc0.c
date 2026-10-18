// VA 0x140891cc0, PDB extent 2173 bytes
// system_decorator::decorator_visual::flag_connections::clothline
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/flag_connections.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::decorator_visual::flag_connections::clothline
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/flag_connections.rs
   Extent: 2173 */

void pdb_140891cc0(undefined8 param_1,undefined8 param_2,float param_3,char param_4,float param_5,
                  longlong param_6,longlong param_7,undefined4 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,float param_13,
                  char *param_14,undefined8 *param_15)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  float fVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  ulonglong uVar19;
  ulonglong unaff_R13;
  bool bVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 auStack_258 [2];
  undefined8 uStack_248;
  undefined8 uStack_238;
  undefined8 uStack_228;
  undefined4 uStack_218;
  undefined4 uStack_208;
  undefined4 uStack_1f8;
  undefined4 uStack_1e8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 uStack_153;
  undefined4 uStack_150;
  undefined1 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  
  fVar1 = *(float *)(param_6 + 0x18);
  fVar32 = (float)*(undefined8 *)(param_6 + 0x10);
  fVar33 = (float)((ulonglong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
  fVar25 = (float)*(undefined8 *)(param_7 + 0x10);
  fVar27 = (float)((ulonglong)*(undefined8 *)(param_7 + 0x10) >> 0x20);
  fVar2 = *(float *)(param_7 + 0x18);
  fVar34 = SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                (fVar33 - fVar27) * (fVar33 - fVar27) + (fVar32 - fVar25) * (fVar32 - fVar25));
  fVar21 = (float)pub_142e329c0(fVar34 / param_3);
  fVar13 = _DAT_142e36f28;
  uVar17 = (longlong)(fVar21 - _DAT_142e36f2c) & (longlong)fVar21 >> 0x3f | (longlong)fVar21;
  if (fVar21 < 0.0) {
    uVar17 = 0;
  }
  uVar16 = 0xffffffffffffffff;
  if (fVar21 <= _DAT_142e36f30) {
    uVar16 = uVar17;
  }
  uVar17 = 2;
  if (2 < uVar16) {
    uVar17 = uVar16;
  }
  fVar21 = 0.0;
  if (0.0 <= param_13 / fVar34) {
    fVar21 = param_13 / fVar34;
  }
  fVar10 = _DAT_142e37ae4;
  if (fVar21 <= _DAT_142e37ae4) {
    fVar10 = fVar21;
  }
  cVar3 = *param_14;
  uVar4 = *(undefined4 *)(param_14 + 4);
  uVar5 = *(undefined4 *)(param_14 + 8);
  uVar6 = *(undefined4 *)(param_14 + 0xc);
  uVar7 = *(undefined4 *)(param_14 + 0x10);
  uVar8 = *param_15;
  lVar9 = param_15[2];
  auVar11._4_4_ = (float)uVar17;
  auVar11._0_4_ = (float)uVar17;
  bVar12 = false;
  bVar18 = false;
  uVar16 = 0;
  do {
    if (uVar16 < uVar17) {
      uVar19 = uVar16 + 1;
      if (!bVar12) {
        bVar20 = uVar17 <= uVar19;
        uVar14 = uVar19;
        uVar15 = uVar16 + 2;
        unaff_R13 = uVar16;
        if (bVar20) {
          uVar15 = uVar19;
        }
        goto joined_r0x000140891f64;
      }
      bVar20 = false;
      if ((longlong)unaff_R13 < 0) goto LAB_140891fa9;
LAB_140891f66:
      fVar21 = (float)(longlong)unaff_R13;
      if ((longlong)uVar16 < 0) goto LAB_140891f73;
LAB_140891fc6:
      fVar23 = (float)(longlong)uVar16;
      unaff_R13 = uVar16;
    }
    else {
      bVar20 = true;
      uVar14 = uVar16;
      uVar15 = uVar16;
      if (!bVar12) {
        return;
      }
joined_r0x000140891f64:
      uVar19 = uVar15;
      uVar16 = uVar14;
      if (-1 < (longlong)unaff_R13) goto LAB_140891f66;
LAB_140891fa9:
      fVar21 = (float)unaff_R13;
      if (-1 < (longlong)uVar16) goto LAB_140891fc6;
LAB_140891f73:
      fVar23 = (float)uVar16;
      unaff_R13 = uVar16;
    }
    auVar22._4_4_ = fVar23;
    auVar22._0_4_ = fVar21;
    auVar22._8_8_ = 0;
    auVar11._8_8_ = 0;
    auVar22 = divps(auVar22,auVar11);
    fVar28 = (_DAT_142e37950 - auVar22._0_4_) * fVar10 + auVar22._0_4_;
    fVar29 = (_UNK_142e37954 - auVar22._4_4_) * fVar10 + auVar22._4_4_;
    fVar21 = _DAT_142e37950 - fVar28;
    fVar24 = _UNK_142e37954 - fVar29;
    fVar23 = fVar28 + fVar28 + _DAT_142e37960;
    fVar30 = fVar29 + fVar29 + _UNK_142e37964;
    fVar26 = (_DAT_142e37950 - fVar23 * fVar23) * _DAT_143012500 * fVar34;
    fVar30 = (_UNK_142e37954 - fVar30 * fVar30) * _UNK_143012504 * fVar34;
    fStack_190 = fVar26 * 0.0;
    fVar31 = fVar30 * 0.0;
    fVar23 = (fVar28 * fVar25 + fVar21 * fVar32) - fStack_190;
    fVar26 = (fVar28 * fVar27 + fVar21 * fVar33) - fVar26;
    uStack_198 = CONCAT44(fVar26,fVar23);
    fStack_190 = (fVar2 * fVar28 + fVar1 * fVar21) - fStack_190;
    fVar28 = ((fVar2 * fVar29 + fVar1 * fVar24) - fVar31) - fStack_190;
    fVar23 = ((fVar29 * fVar25 + fVar24 * fVar32) - fVar31) - fVar23;
    fVar26 = ((fVar29 * fVar27 + fVar24 * fVar33) - fVar30) - fVar26;
    fStack_184 = SQRT(fVar28 * fVar28 + fVar26 * fVar26 + fVar23 * fVar23);
    fVar21 = fVar13 / fStack_184;
    fVar28 = fVar28 * fVar21;
    fVar23 = fVar23 * fVar21;
    fVar26 = fVar26 * fVar21;
    fStack_1a0 = fVar28 + fVar26 * _DAT_142e377f0;
    fVar21 = fVar23 * 0.0 + fVar28 * _DAT_142e377f0;
    fVar30 = (float)((uint)fVar23 ^ _DAT_142e37820) - fVar26 * _DAT_142e377f0;
    fVar31 = fVar13 / SQRT(fVar30 * fVar30 + fVar21 * fVar21 + fStack_1a0 * fStack_1a0);
    fStack_1a0 = fStack_1a0 * fVar31;
    fVar21 = fVar21 * fVar31;
    fVar24 = fVar23 * fVar21 - fVar26 * fStack_1a0;
    fVar31 = fVar31 * fVar30;
    fVar30 = fVar26 * fVar31 - fVar28 * fVar21;
    fVar35 = fVar28 * fStack_1a0 - fVar23 * fVar31;
    fVar29 = fVar13 / SQRT(fVar35 * fVar35 + fVar30 * fVar30 + fVar24 * fVar24);
    fVar30 = fVar30 * fVar29;
    fVar24 = fVar29 * fVar24;
    if (fVar28 <= 0.0) {
      fStack_1a0 = fVar35 * fVar29 - fStack_1a0;
      if (0.0 < fStack_1a0) {
        fStack_1a8 = fVar21 + fVar30;
        fStack_1a0 = (fVar13 - fVar28) + fStack_1a0;
        fVar21 = fVar24 + fVar26;
        fVar23 = fVar23 - fVar31;
        fStack_1a4 = fStack_1a0;
        goto LAB_14089227c;
      }
      fStack_1a0 = (fVar13 - fVar28) - fStack_1a0;
      fStack_19c = _DAT_142e36f50 / SQRT(fStack_1a0);
      fStack_1a8 = fStack_1a0 * fStack_19c;
      fStack_1a4 = (fVar30 + fVar21) * fStack_19c;
      fStack_1a0 = (fVar31 + fVar23) * fStack_19c;
      fStack_19c = (fVar24 - fVar26) * fStack_19c;
    }
    else {
      fStack_1a0 = fStack_1a0 + fVar35 * fVar29;
      if (fStack_1a0 <= 0.0) {
        fStack_1a0 = (fVar28 + fVar13) - fStack_1a0;
        fStack_19c = _DAT_142e36f50 / SQRT(fStack_1a0);
        fStack_1a8 = fStack_19c * (fVar23 + fVar31);
        fStack_1a4 = fStack_19c * (fVar24 + fVar26);
        fStack_1a0 = fStack_1a0 * fStack_19c;
        fStack_19c = fStack_19c * (fVar21 - fVar30);
      }
      else {
        fStack_1a8 = fVar24 - fVar26;
        fVar21 = fVar21 - fVar30;
        fStack_1a0 = fStack_1a0 + fVar28 + fVar13;
        fStack_1a4 = fVar23 - fVar31;
        fVar23 = fStack_1a0;
LAB_14089227c:
        fStack_19c = _DAT_142e36f50 / SQRT(fStack_1a0);
        fStack_1a8 = fStack_19c * fStack_1a8;
        fStack_1a4 = fStack_19c * fStack_1a4;
        fStack_1a0 = fStack_19c * fVar21;
        fStack_19c = fStack_19c * fVar23;
      }
    }
    if (param_4 == '\0') {
      fStack_184 = param_5;
    }
    fStack_18c = param_5;
    uStack_ea = 0;
    uStack_178 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    auStack_258[0] = 0;
    puStack_1b8 = &UNK_14330daf5;
    uStack_1b0 = 0x16;
    uStack_218 = 0;
    uStack_fc = 2;
    uStack_153 = 2;
    uStack_208 = 0;
    uStack_248 = 0;
    uStack_e9 = 0;
    uStack_ec = 2;
    uStack_170 = 0;
    uStack_1e8 = 2;
    uStack_1f8 = 0;
    uStack_238 = 0;
    uStack_228 = 0;
    uStack_150 = 0;
    if (cVar3 != '\0') {
      uStack_16c = uVar7;
      uStack_174 = uVar6;
      if (!bVar18) {
        uStack_16c = uVar5;
        uStack_174 = uVar4;
      }
      uStack_178 = 1;
      puStack_1b8 = &UNK_14330dcfa;
      uStack_1b0 = 0x17;
      uStack_170 = 1;
    }
    uStack_1c8 = param_1;
    uStack_1c0 = param_2;
    fStack_188 = fStack_18c;
    pdb_141490a20(auStack_258,param_8,param_9,param_10,param_11,param_12,uVar8,lVar9 + 0x48);
    bVar18 = (bool)(bVar18 ^ 1);
    bVar12 = true;
    uVar16 = uVar19;
    if (bVar20 || uVar17 < uVar19) {
      return;
    }
  } while( true );
}

