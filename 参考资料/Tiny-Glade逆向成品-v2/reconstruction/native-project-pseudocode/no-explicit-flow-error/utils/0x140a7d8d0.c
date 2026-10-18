// VA 0x140a7d8d0, PDB extent 753 bytes
// utils::float_grid::impl$0::bilinear_sample_at_world_xz<country_core::resources::world_raster::RasterBufferRef<512> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/float_grid.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::float_grid::impl$0::bilinear_sample_at_world_xz<country_core::resources::world_raster::RasterBufferRef<512>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/float_grid.rs
   Extent: 753 */

float pdb_140a7d8d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar17 [16];
  
  fVar15 = _DAT_142e4fba0;
  auVar17._0_8_ = in_XMM2._0_8_;
  auVar17._8_4_ = in_XMM2._4_4_;
  auVar17._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  auVar16._8_8_ = auVar17._8_8_;
  auVar16._0_4_ = in_XMM2._0_4_;
  auVar16._4_4_ = (int)param_2;
  auVar18._4_4_ = (int)param_4;
  auVar18._0_4_ = param_5;
  auVar18._8_4_ = 0;
  auVar18._12_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar18 = divps(auVar16,auVar18);
  auVar19._0_4_ = auVar18._0_4_ + _DAT_142e36f60;
  auVar19._4_4_ = auVar18._4_4_ + _UNK_142e36f64;
  auVar19._8_4_ = auVar18._8_4_ + _UNK_142e36f68;
  auVar19._12_4_ = auVar18._12_4_ + _UNK_142e36f6c;
  if (*_DAT_143ca4b38 == '\0') {
    auVar18 = maxps(auVar19,ZEXT816(0));
    iVar12 = -(uint)(auVar18._0_4_ < _DAT_142e37950);
    iVar13 = -(uint)(auVar18._4_4_ < _UNK_142e37954);
    auVar5._4_4_ = iVar12;
    auVar5._0_4_ = iVar12;
    auVar5._8_4_ = iVar13;
    auVar5._12_4_ = iVar13;
    uVar8 = movmskpd((int)_DAT_143ca4b38,auVar5);
    fVar22 = _DAT_142e61210;
    if ((uVar8 & 2) != 0) {
      fVar22 = auVar18._4_4_ * _DAT_142e61210;
    }
    fVar14 = _DAT_142e61210;
    if ((uVar8 & 1) != 0) {
      fVar14 = _DAT_142e61210 * auVar18._0_4_;
    }
    uVar8 = (uint)(longlong)fVar22;
    if (fVar22 < 0.0) {
      uVar8 = 0;
    }
    if (_DAT_142e46a48 < fVar22) {
      uVar8 = 0xffffffff;
    }
    uVar9 = (uint)(longlong)fVar14;
    if (fVar14 < 0.0) {
      uVar9 = 0;
    }
    if (_DAT_142e46a48 < fVar14) {
      uVar9 = 0xffffffff;
    }
    uVar10 = (ulonglong)uVar8;
    if (0x1fd < uVar8) {
      uVar10 = 0x1fe;
    }
    if (0x1fd < uVar9) {
      uVar9 = 0x1fe;
    }
    uVar11 = (ulonglong)(uVar9 << 9);
    fVar22 = fVar22 - (float)(int)uVar10;
    lVar3 = *param_1;
    bVar1 = *(byte *)(lVar3 + uVar11 + uVar10 + 1);
    bVar2 = *(byte *)(lVar3 + uVar11 + uVar10 + 0x201);
    fVar14 = (float)pdb_140de9fd0((float)*(byte *)(lVar3 + (uVar11 | uVar10)) / _DAT_142e4fba0,
                                  (float)*(byte *)(lVar3 + uVar11 + uVar10 + 0x200) / _DAT_142e4fba0
                                 );
  }
  else {
    auVar7._4_4_ = _UNK_142e37954;
    auVar7._0_4_ = _DAT_142e37950;
    auVar7._8_8_ = _UNK_142e37958;
    auVar18 = minps(auVar19,auVar7);
    auVar20._0_4_ = auVar18._0_4_ * _DAT_142e61220 + _DAT_142e61230;
    auVar20._4_4_ = auVar18._4_4_ * _UNK_142e61224 + _UNK_142e61234;
    auVar20._8_4_ = auVar18._8_4_ * _UNK_142e61228 + _UNK_142e61238;
    auVar20._12_4_ = auVar18._12_4_ * _UNK_142e6122c + _UNK_142e6123c;
    auVar4._4_4_ = -(uint)(0.0 < auVar20._0_4_);
    auVar4._0_4_ = -(uint)(0.0 < auVar20._0_4_);
    auVar4._8_4_ = -(uint)(0.0 < auVar20._4_4_);
    auVar4._12_4_ = -(uint)(0.0 < auVar20._4_4_);
    uVar8 = movmskpd((int)_DAT_143ca4b38,auVar4);
    fVar22 = auVar20._4_4_;
    if ((uVar8 & 2) == 0) {
      fVar22 = 0.0;
    }
    if ((uVar8 & 1) == 0) {
      auVar20 = ZEXT816(0);
    }
    uVar10 = (longlong)fVar22 & 0xffffffff;
    if (fVar22 < 0.0) {
      uVar10 = 0;
    }
    if (_DAT_142e46a48 < fVar22) {
      uVar10 = 0xffffffff;
    }
    fVar14 = auVar20._0_4_;
    uVar11 = (longlong)fVar14 & 0xffffffff;
    if (fVar14 < 0.0) {
      uVar11 = 0;
    }
    if (_DAT_142e46a48 < fVar14) {
      uVar11 = 0xffffffff;
    }
    uVar8 = (uint)uVar11;
    fVar22 = fVar22 - (float)uVar10;
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = fVar14 - (float)uVar11;
    uVar11 = 0x1ff;
    if ((uint)uVar10 < 0x1ff) {
      uVar11 = uVar10;
    }
    uVar9 = (uint)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    if (0x1fe < uVar9) {
      uVar10 = 0x1ff;
    }
    uVar9 = 0x1ff;
    if (uVar8 < 0x1ff) {
      uVar9 = uVar8;
    }
    uVar6 = uVar8 + 1;
    if (0x1fe < uVar8 + 1) {
      uVar6 = 0x1ff;
    }
    lVar3 = *param_1;
    bVar1 = *(byte *)(lVar3 + (uVar9 << 9 | uVar10));
    bVar2 = *(byte *)(lVar3 + (uVar6 << 9 | uVar10));
    fVar14 = (float)pdb_140de9fd0((float)*(byte *)(lVar3 + (uVar9 << 9 | uVar11)) / _DAT_142e4fba0,
                                  (float)*(byte *)(lVar3 + (uVar11 | uVar6 << 9)) / _DAT_142e4fba0,
                                  auVar21._0_8_);
  }
  fVar15 = (float)pdb_140de9fd0((float)bVar1 / fVar15,(float)bVar2 / fVar15);
  return fVar14 + (fVar15 - fVar14) * fVar22;
}

