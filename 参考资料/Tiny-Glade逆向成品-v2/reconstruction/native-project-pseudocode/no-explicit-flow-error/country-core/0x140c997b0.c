// VA 0x140c997b0, PDB extent 1525 bytes
// country_core::systems::wooden_stair_support::curved_brace_placement
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wooden_stair_support.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wooden_stair_support::curved_brace_placement
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wooden_stair_support.rs
   Extent: 1525 */

void pdb_140c997b0(undefined4 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  float fVar14;
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  byte *pbStack_198;
  ulonglong uStack_190;
  undefined8 uStack_188;
  float fStack_180;
  undefined8 uStack_178;
  float fStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  float fStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  fVar19 = _DAT_143009d64;
  uVar3 = *param_2;
  fVar29 = (float)uVar3;
  fVar30 = (float)((ulonglong)uVar3 >> 0x20);
  fVar1 = *(float *)(param_2 + 1);
  auVar23._0_4_ = *param_3 - fVar29;
  auVar23._4_4_ = param_3[2] - fVar1;
  auVar23._8_8_ = 0;
  fVar26 = SQRT(auVar23._4_4_ * auVar23._4_4_ + auVar23._0_4_ * auVar23._0_4_);
  if (fVar26 < _DAT_143009d64) {
LAB_140c998e5:
    *param_1 = 2;
    return;
  }
  fVar2 = param_3[1];
  fStack_1a0 = fVar29;
  fStack_19c = fVar1;
  pdb_140df4540(&uStack_1b0,&fStack_1a0,_DAT_143009d0c + fVar2);
  fStack_180 = fStack_1a8;
  uStack_188 = uStack_1b0;
  fStack_170 = param_3[2];
  uStack_178 = *(undefined8 *)param_3;
  pdb_141473cd0(&fStack_1a0,&uStack_188,&uStack_178);
  lVar4 = CONCAT44(fStack_19c,fStack_1a0);
  if (SBORROW8(0,lVar4)) goto LAB_140c998e5;
  if (uStack_190 == 0) {
    fVar11 = 0.0;
  }
  else {
    auVar12._4_4_ = fVar26;
    auVar12._0_4_ = fVar26;
    auVar12._8_8_ = 0;
    auVar23 = divps(auVar23,auVar12);
    fVar22 = auVar23._0_4_;
    fVar25 = auVar23._4_4_;
    if (uStack_190 < 8) {
      uVar7 = 0;
      fVar11 = 0.0;
    }
    else {
      uStack_148 = CONCAT44(fVar1,fVar29);
      uStack_140 = 0;
      uVar7 = uStack_190 & 0xfffffffffffffff8;
      uStack_124 = 0;
      uStack_120 = 0;
      uStack_11c = 0;
      auStack_158 = ZEXT416((uint)fVar26);
      uStack_110 = 0;
      auStack_168 = ZEXT416((uint)fVar2);
      pfVar8 = (float *)(pbStack_198 + 0x5c);
      auVar12 = ZEXT816(0);
      auVar27 = ZEXT816(0);
      uVar9 = uVar7;
      do {
        auVar10._0_4_ = (pfVar8[-0x15] - fVar1) * fVar25 + (pfVar8[-0x17] - fVar29) * fVar22;
        auVar10._4_4_ = (pfVar8[-0x12] - fVar1) * fVar25 + (pfVar8[-0x14] - fVar29) * fVar22;
        auVar10._8_4_ = (pfVar8[-0xf] - fVar1) * fVar25 + (pfVar8[-0x11] - fVar29) * fVar22;
        auVar10._12_4_ = (pfVar8[-0xc] - fVar1) * fVar25 + (pfVar8[-0xe] - fVar29) * fVar22;
        auVar15._0_4_ = (pfVar8[-9] - fVar1) * fVar25 + (pfVar8[-0xb] - fVar29) * fVar22;
        auVar15._4_4_ = (pfVar8[-6] - fVar1) * fVar25 + (pfVar8[-8] - fVar29) * fVar22;
        auVar15._8_4_ = (pfVar8[-3] - fVar1) * fVar25 + (pfVar8[-5] - fVar29) * fVar22;
        auVar15._12_4_ = (*pfVar8 - fVar1) * fVar25 + (pfVar8[-2] - fVar29) * fVar22;
        auVar16._4_4_ = fVar26;
        auVar16._0_4_ = fVar26;
        auVar16._8_4_ = fVar26;
        auVar16._12_4_ = fVar26;
        auVar10 = divps(auVar10,auVar16);
        auVar16 = divps(auVar15,auVar16);
        auVar10 = maxps(ZEXT816(0),auVar10);
        auVar16 = maxps(ZEXT816(0),auVar16);
        auVar10 = minps(_DAT_142e3c640,auVar10);
        auVar16 = minps(_DAT_142e3c640,auVar16);
        auVar21._0_4_ =
             pfVar8[-0x16] -
             (auVar10._0_4_ * fVar2 + ((float)DAT_142e3c640 - auVar10._0_4_) * fVar30);
        auVar21._4_4_ =
             pfVar8[-0x13] -
             (auVar10._4_4_ * fVar2 + (DAT_142e3c640._4_4_ - auVar10._4_4_) * fVar30);
        auVar21._8_4_ =
             pfVar8[-0x10] -
             (auVar10._8_4_ * fVar2 + (DAT_142e3c640._8_4_ - auVar10._8_4_) * fVar30);
        auVar21._12_4_ =
             pfVar8[-0xd] -
             (auVar10._12_4_ * fVar2 + (DAT_142e3c640._12_4_ - auVar10._12_4_) * fVar30);
        auVar24._0_4_ =
             pfVar8[-10] - (auVar16._0_4_ * fVar2 + ((float)DAT_142e3c640 - auVar16._0_4_) * fVar30)
        ;
        auVar24._4_4_ =
             pfVar8[-7] - (auVar16._4_4_ * fVar2 + (DAT_142e3c640._4_4_ - auVar16._4_4_) * fVar30);
        auVar24._8_4_ =
             pfVar8[-4] - (auVar16._8_4_ * fVar2 + (DAT_142e3c640._8_4_ - auVar16._8_4_) * fVar30);
        auVar24._12_4_ =
             pfVar8[-1] -
             (auVar16._12_4_ * fVar2 + (DAT_142e3c640._12_4_ - auVar16._12_4_) * fVar30);
        auVar16 = maxps(auVar21,ZEXT816(0));
        auVar12 = maxps(auVar12,auVar16);
        auVar16 = maxps(auVar24,ZEXT816(0));
        auVar27 = maxps(auVar27,auVar16);
        pfVar8 = pfVar8 + 0x18;
        uVar9 = uVar9 - 8;
      } while (uVar9 != 0);
      auVar16 = maxps(auVar27,auVar12);
      auVar28._0_4_ = auVar27._0_4_ & -(uint)NAN(auVar12._0_4_);
      auVar28._4_4_ = auVar27._4_4_ & -(uint)NAN(auVar12._4_4_);
      auVar28._8_4_ = auVar27._8_4_ & -(uint)NAN(auVar12._8_4_);
      auVar28._12_4_ = auVar27._12_4_ & -(uint)NAN(auVar12._12_4_);
      auVar27._0_4_ = ~-(uint)NAN(auVar12._0_4_) & auVar16._0_4_;
      auVar27._4_4_ = ~-(uint)NAN(auVar12._4_4_) & auVar16._4_4_;
      auVar27._8_4_ = ~-(uint)NAN(auVar12._8_4_) & auVar16._8_4_;
      auVar27._12_4_ = ~-(uint)NAN(auVar12._12_4_) & auVar16._12_4_;
      auVar27 = auVar27 | auVar28;
      fVar11 = auVar27._0_4_;
      fVar20 = auVar27._4_4_;
      fVar17 = auVar27._8_4_;
      fVar14 = auVar27._12_4_;
      auVar18._0_8_ = auVar27._8_8_;
      auVar18._8_4_ = fVar17;
      auVar18._12_4_ = fVar14;
      fVar19 = fVar20;
      if (fVar20 <= fVar11) {
        fVar19 = fVar11;
      }
      fVar19 = (float)(~-(uint)NAN(fVar11) & (uint)fVar19 | -(uint)NAN(fVar11) & (uint)fVar20);
      if (fVar17 <= fVar19) {
        auVar13._4_12_ = auVar18._4_12_;
        auVar13._0_4_ = fVar19;
        auVar18._0_8_ = auVar13._0_8_;
      }
      fVar11 = (float)(-(uint)NAN(fVar19) & (uint)fVar17 | ~-(uint)NAN(fVar19) & (uint)auVar18._0_8_
                      );
      fVar19 = fVar14;
      if (fVar14 <= fVar11) {
        fVar19 = fVar11;
      }
      fVar11 = (float)(-(uint)NAN(fVar11) & (uint)fVar14 | ~-(uint)NAN(fVar11) & (uint)fVar19);
      fVar19 = _DAT_143009d64;
      auStack_138 = auVar23;
      fStack_128 = fVar1;
      uStack_118 = uVar3;
      fStack_108 = fVar26;
      fStack_104 = fVar26;
      fStack_100 = fVar26;
      fStack_fc = fVar26;
      fStack_f8 = fVar25;
      fStack_f4 = fVar25;
      fStack_f0 = fVar25;
      fStack_ec = fVar25;
      fStack_e8 = fVar22;
      fStack_e4 = fVar22;
      fStack_e0 = fVar22;
      fStack_dc = fVar22;
      fStack_d8 = fVar1;
      fStack_d4 = fVar1;
      fStack_d0 = fVar1;
      fStack_cc = fVar1;
      fStack_c8 = fVar29;
      fStack_c4 = fVar29;
      fStack_c0 = fVar29;
      fStack_bc = fVar29;
      if (uStack_190 == uVar7) goto LAB_140c99cf1;
    }
    lVar6 = uStack_190 - uVar7;
    pfVar8 = (float *)(pbStack_198 + uVar7 * 0xc + 8);
    do {
      fVar17 = ((*pfVar8 - fVar1) * fVar25 + (pfVar8[-2] - fVar29) * fVar22) / fVar26;
      fVar20 = 0.0;
      if (0.0 <= fVar17) {
        fVar20 = fVar17;
      }
      fVar17 = _DAT_142e36f28;
      if (fVar20 <= _DAT_142e36f28) {
        fVar17 = fVar20;
      }
      fVar20 = pfVar8[-1] - (fVar17 * fVar2 + (_DAT_142e36f28 - fVar17) * fVar30);
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      if (fVar11 <= fVar20) {
        fVar11 = fVar20;
      }
      pfVar8 = pfVar8 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
LAB_140c99cf1:
  fVar26 = _DAT_143009d10 + uStack_1b0._4_4_;
  if (((fVar26 <= *(float *)((longlong)param_2 + 0xc)) || (fVar19 < fVar11)) ||
     (fVar30 < uStack_1b0._4_4_)) {
    uVar5 = 1;
    if (fVar11 < _DAT_142e3798c) {
      uStack_1b0 = CONCAT44(fVar30 + _UNK_143077134,fVar29 + _DAT_143077130);
      fVar26 = fVar30 + _UNK_143077134 + _DAT_143009d10;
      fStack_1a8 = fVar1;
      goto joined_r0x000140c99d60;
    }
  }
  else {
joined_r0x000140c99d60:
    uVar5 = 2;
    if (*(float *)((longlong)param_2 + 0xc) <= fVar26) {
      param_1[3] = fStack_1a8;
      *(undefined8 *)(param_1 + 1) = uStack_1b0;
      *param_1 = 0;
      goto joined_r0x000140c99d67;
    }
  }
  *param_1 = uVar5;
joined_r0x000140c99d67:
  if (lVar4 == 0) {
    return;
  }
  pub_1406abac0(pbStack_198,lVar4 * 0xc,4);
  return;
}

