// VA 0x142b4d1f0, PDB extent 707 bytes
// utils::float_grid::impl$0::bilinear_sample_at_world_xz<country_core::systems::audio::water_ambience_audio::WaterAudioGrid>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/float_grid.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::float_grid::impl$0::bilinear_sample_at_world_xz<country_core::systems::audio::water_ambience_audio::WaterAudioGrid>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/float_grid.rs
   Extent: 707 */

float pdb_142b4d1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar23;
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar20 [16];
  
  auVar20._0_8_ = in_XMM2._0_8_;
  auVar20._8_4_ = in_XMM2._4_4_;
  auVar20._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  auVar19._8_8_ = auVar20._8_8_;
  auVar19._0_4_ = in_XMM2._0_4_;
  auVar19._4_4_ = (int)param_2;
  auVar21._4_4_ = (int)param_4;
  auVar21._0_4_ = param_5;
  auVar21._8_4_ = 0;
  auVar21._12_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar21 = divps(auVar19,auVar21);
  auVar22._0_4_ = auVar21._0_4_ + _DAT_142e36f60;
  auVar22._4_4_ = auVar21._4_4_ + _UNK_142e36f64;
  auVar22._8_4_ = auVar21._8_4_ + _UNK_142e36f68;
  auVar22._12_4_ = auVar21._12_4_ + _UNK_142e36f6c;
  if (*_DAT_143ca4b38 == '\0') {
    auVar21 = maxps(auVar22,ZEXT816(0));
    iVar11 = -(uint)(auVar21._0_4_ < _DAT_142e37950);
    iVar12 = -(uint)(auVar21._4_4_ < _UNK_142e37954);
    auVar2._4_4_ = iVar11;
    auVar2._0_4_ = iVar11;
    auVar2._8_4_ = iVar12;
    auVar2._12_4_ = iVar12;
    uVar5 = movmskpd((int)_DAT_143ca4b38,auVar2);
    fVar23 = _DAT_142e37878;
    if ((uVar5 & 2) != 0) {
      fVar23 = auVar21._4_4_ * _DAT_142e37878;
    }
    fVar18 = _DAT_142e37878;
    if ((uVar5 & 1) != 0) {
      fVar18 = _DAT_142e37878 * auVar21._0_4_;
    }
    uVar5 = (uint)(longlong)fVar23;
    if (fVar23 < 0.0) {
      uVar5 = 0;
    }
    if (_DAT_142e46a48 < fVar23) {
      uVar5 = 0xffffffff;
    }
    uVar9 = (uint)(longlong)fVar18;
    if (fVar18 < 0.0) {
      uVar9 = 0;
    }
    if (_DAT_142e46a48 < fVar18) {
      uVar9 = 0xffffffff;
    }
    if (7 < uVar5) {
      uVar5 = 8;
    }
    uVar10 = (ulonglong)uVar5;
    if (7 < uVar9) {
      uVar9 = 8;
    }
    fVar23 = fVar23 - (float)(int)uVar5;
    uVar7 = (ulonglong)(uVar9 * 10);
    uVar13 = pdb_1419ba630((float)(int)uVar5,uVar7 + uVar10);
    uVar14 = pdb_1419ba630(param_1,uVar7 + uVar10 + 1);
    uVar15 = pdb_1419ba630(param_1,uVar7 + uVar10 + 10);
    lVar8 = uVar7 + uVar10 + 0xb;
  }
  else {
    auVar4._4_4_ = _UNK_142e37954;
    auVar4._0_4_ = _DAT_142e37950;
    auVar4._8_8_ = _UNK_142e37958;
    auVar21 = minps(auVar22,auVar4);
    fVar18 = auVar21._0_4_ * _DAT_143314da0 + _DAT_142e61230;
    fVar23 = auVar21._4_4_ * _UNK_143314da4 + _UNK_142e61234;
    auVar1._4_4_ = -(uint)(0.0 < fVar18);
    auVar1._0_4_ = -(uint)(0.0 < fVar18);
    auVar1._8_4_ = -(uint)(0.0 < fVar23);
    auVar1._12_4_ = -(uint)(0.0 < fVar23);
    uVar5 = movmskpd((int)_DAT_143ca4b38,auVar1);
    if ((uVar5 & 2) == 0) {
      fVar23 = 0.0;
    }
    if ((uVar5 & 1) == 0) {
      fVar18 = 0.0;
    }
    uVar10 = (longlong)fVar23 & 0xffffffff;
    if (fVar23 < 0.0) {
      uVar10 = 0;
    }
    if (_DAT_142e46a48 < fVar23) {
      uVar10 = 0xffffffff;
    }
    uVar5 = (uint)(longlong)fVar18;
    if (fVar18 < 0.0) {
      uVar5 = 0;
    }
    if (_DAT_142e46a48 < fVar18) {
      uVar5 = 0xffffffff;
    }
    fVar23 = fVar23 - (float)uVar10;
    uVar7 = 9;
    if ((uint)uVar10 < 9) {
      uVar7 = uVar10;
    }
    uVar9 = (uint)uVar10 + 1;
    if (8 < uVar9) {
      uVar9 = 9;
    }
    uVar6 = 9;
    if (uVar5 < 9) {
      uVar6 = uVar5;
    }
    uVar3 = uVar5 + 1;
    if (8 < uVar5 + 1) {
      uVar3 = 9;
    }
    uVar13 = pdb_1419ba630((float)uVar10,uVar6 * 10 + uVar7);
    uVar14 = pdb_1419ba630(param_1,(ulonglong)(uVar6 * 10) + (ulonglong)uVar9);
    uVar15 = pdb_1419ba630(param_1,uVar7 + uVar3 * 10);
    lVar8 = (ulonglong)(uVar3 * 10) + (ulonglong)uVar9;
  }
  uVar16 = pdb_1419ba630(param_1,lVar8);
  fVar18 = (float)pdb_140de9fd0(uVar13,uVar15);
  fVar17 = (float)pdb_140de9fd0(uVar14,uVar16);
  return fVar18 + (fVar17 - fVar18) * fVar23;
}

