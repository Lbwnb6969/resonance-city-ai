// VA 0x1419c1ac0, PDB extent 974 bytes
// country_core::resources::terrain_height::TerrainHeightsData::sample_at_world_xz<country_core::resources::terrain_height::TerrainHeightSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::terrain_height::TerrainHeightsData::sample_at_world_xz<country_core::resources::terrain_height::TerrainHeightSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
   Extent: 974 */

float pdb_1419c1ac0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar1 = *(longlong *)(param_1 + 8);
  fVar15 = *(float *)(param_1 + 0x50);
  fVar16 = *(float *)(param_1 + 0x54);
  auVar18._0_8_ = in_XMM2._0_8_;
  auVar18._8_4_ = in_XMM2._4_4_;
  auVar18._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  auVar19._8_8_ = auVar18._8_8_;
  auVar19._0_4_ = in_XMM2._0_4_;
  auVar19._4_4_ = (int)param_2;
  auVar19 = divps(auVar19,_DAT_142e61200);
  auVar20._0_4_ = auVar19._0_4_ + _DAT_142e36f60;
  auVar20._4_4_ = auVar19._4_4_ + _UNK_142e36f64;
  auVar20._8_4_ = auVar19._8_4_ + _UNK_142e36f68;
  auVar20._12_4_ = auVar19._12_4_ + _UNK_142e36f6c;
  if (*_DAT_143ca4b38 == '\0') {
    auVar19 = maxps(auVar20,ZEXT816(0));
    iVar12 = -(uint)(auVar19._0_4_ < _DAT_142e37950);
    iVar13 = -(uint)(auVar19._4_4_ < _UNK_142e37954);
    auVar3._4_4_ = iVar12;
    auVar3._0_4_ = iVar12;
    auVar3._8_4_ = iVar13;
    auVar3._12_4_ = iVar13;
    uVar6 = movmskpd((int)_DAT_143ca4b38,auVar3);
    fVar23 = _DAT_142e61210;
    if ((uVar6 & 2) != 0) {
      fVar23 = auVar19._4_4_ * _DAT_142e61210;
    }
    fVar14 = _DAT_142e61210;
    if ((uVar6 & 1) != 0) {
      fVar14 = _DAT_142e61210 * auVar19._0_4_;
    }
    uVar6 = (uint)(longlong)fVar23;
    if (fVar23 < 0.0) {
      uVar6 = 0;
    }
    if (_DAT_142e46a48 < fVar23) {
      uVar6 = 0xffffffff;
    }
    uVar9 = (uint)(longlong)fVar14;
    if (fVar14 < 0.0) {
      uVar9 = 0;
    }
    if (_DAT_142e46a48 < fVar14) {
      uVar9 = 0xffffffff;
    }
    if (0x1fd < uVar6) {
      uVar6 = 0x1fe;
    }
    if (0x1fd < uVar9) {
      uVar9 = 0x1fe;
    }
    fVar23 = fVar23 - (float)(int)uVar6;
    uVar9 = uVar9 * 0x200;
    fVar14 = (float)*(ushort *)(lVar1 + (ulonglong)((uVar9 | uVar6) * 2)) / _DAT_142e3b1dc;
    fVar24 = (float)*(ushort *)(lVar1 + (ulonglong)((uVar9 + uVar6 + 1) * 2)) / _DAT_142e3b1dc;
    fVar24 = fVar24 * fVar16 + (_DAT_142e36f28 - fVar24) * fVar15;
    fVar17 = (float)*(ushort *)(lVar1 + (ulonglong)((uVar9 + 0x200 | uVar6) * 2)) / _DAT_142e3b1dc;
    fVar25 = (float)*(ushort *)(lVar1 + (ulonglong)((uVar6 + uVar9 + 0x201) * 2)) / _DAT_142e3b1dc;
    fVar25 = fVar25 * fVar16 + (_DAT_142e36f28 - fVar25) * fVar15;
    fVar15 = (float)pdb_140de9fd0(fVar14 * fVar16 + (_DAT_142e36f28 - fVar14) * fVar15,
                                  fVar17 * fVar16 + (_DAT_142e36f28 - fVar17) * fVar15);
  }
  else {
    auVar5._4_4_ = _UNK_142e37954;
    auVar5._0_4_ = _DAT_142e37950;
    auVar5._8_8_ = _UNK_142e37958;
    auVar19 = minps(auVar20,auVar5);
    auVar21._0_4_ = auVar19._0_4_ * _DAT_142e61220 + _DAT_142e61230;
    auVar21._4_4_ = auVar19._4_4_ * _UNK_142e61224 + _UNK_142e61234;
    auVar21._8_4_ = auVar19._8_4_ * _UNK_142e61228 + _UNK_142e61238;
    auVar21._12_4_ = auVar19._12_4_ * _UNK_142e6122c + _UNK_142e6123c;
    auVar2._4_4_ = -(uint)(0.0 < auVar21._0_4_);
    auVar2._0_4_ = -(uint)(0.0 < auVar21._0_4_);
    auVar2._8_4_ = -(uint)(0.0 < auVar21._4_4_);
    auVar2._12_4_ = -(uint)(0.0 < auVar21._4_4_);
    uVar6 = movmskpd((int)_DAT_143ca4b38,auVar2);
    fVar23 = auVar21._4_4_;
    if ((uVar6 & 2) == 0) {
      fVar23 = 0.0;
    }
    if ((uVar6 & 1) == 0) {
      auVar21 = ZEXT816(0);
    }
    uVar7 = (longlong)fVar23 & 0xffffffff;
    if (fVar23 < 0.0) {
      uVar7 = 0;
    }
    if (_DAT_142e46a48 < fVar23) {
      uVar7 = 0xffffffff;
    }
    uVar6 = (uint)uVar7;
    fVar14 = auVar21._0_4_;
    uVar10 = (longlong)fVar14 & 0xffffffff;
    if (fVar14 < 0.0) {
      uVar10 = 0;
    }
    if (_DAT_142e46a48 < fVar14) {
      uVar10 = 0xffffffff;
    }
    uVar8 = (uint)uVar10;
    fVar23 = fVar23 - (float)uVar7;
    auVar22._4_12_ = auVar21._4_12_;
    auVar22._0_4_ = fVar14 - (float)uVar10;
    uVar9 = 0x1ff;
    if (uVar6 < 0x1ff) {
      uVar9 = uVar6;
    }
    uVar6 = uVar6 + 1;
    if (0x1fe < uVar6) {
      uVar6 = 0x1ff;
    }
    uVar11 = 0x1ff;
    if (uVar8 < 0x1ff) {
      uVar11 = uVar8;
    }
    uVar4 = uVar8 + 1;
    if (0x1fe < uVar8 + 1) {
      uVar4 = 0x1ff;
    }
    fVar14 = (float)*(ushort *)(lVar1 + (ulonglong)((uVar11 << 9 | uVar9) * 2)) / _DAT_142e3b1dc;
    fVar24 = (float)*(ushort *)(lVar1 + (ulonglong)((uVar11 << 9 | uVar6) * 2)) / _DAT_142e3b1dc;
    fVar24 = fVar24 * fVar16 + (_DAT_142e36f28 - fVar24) * fVar15;
    fVar17 = (float)*(ushort *)(lVar1 + (ulonglong)((uVar9 | uVar4 << 9) * 2)) / _DAT_142e3b1dc;
    fVar25 = (float)*(ushort *)(lVar1 + (ulonglong)((uVar4 << 9 | uVar6) * 2)) / _DAT_142e3b1dc;
    fVar25 = fVar25 * fVar16 + (_DAT_142e36f28 - fVar25) * fVar15;
    fVar15 = (float)pdb_140de9fd0(fVar14 * fVar16 + (_DAT_142e36f28 - fVar14) * fVar15,
                                  fVar17 * fVar16 + (_DAT_142e36f28 - fVar17) * fVar15,auVar22._0_8_
                                 );
  }
  fVar16 = (float)pdb_140de9fd0(fVar24,fVar25);
  return fVar15 + (fVar16 - fVar15) * fVar23;
}

