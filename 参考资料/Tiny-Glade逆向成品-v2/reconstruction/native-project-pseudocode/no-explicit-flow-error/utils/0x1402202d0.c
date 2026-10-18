// VA 0x1402202d0, PDB extent 705 bytes
// utils::float_grid::impl$0::bilinear_sample_at_world_xz<country_core::resources::terrain_height::TerrainHeightFloatGrid>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/float_grid.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::float_grid::impl$0::bilinear_sample_at_world_xz<country_core::resources::terrain_height::TerrainHeightFloatGrid>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/float_grid.rs
   Extent: 705 */

float pdb_1402202d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar21;
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
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
    iVar10 = -(uint)(auVar19._0_4_ < _DAT_142e37950);
    iVar11 = -(uint)(auVar19._4_4_ < _UNK_142e37954);
    auVar2._4_4_ = iVar10;
    auVar2._0_4_ = iVar10;
    auVar2._8_4_ = iVar11;
    auVar2._12_4_ = iVar11;
    uVar5 = movmskpd((int)_DAT_143ca4b38,auVar2);
    fVar21 = _DAT_142e61210;
    if ((uVar5 & 2) != 0) {
      fVar21 = auVar19._4_4_ * _DAT_142e61210;
    }
    fVar17 = _DAT_142e61210;
    if ((uVar5 & 1) != 0) {
      fVar17 = _DAT_142e61210 * auVar19._0_4_;
    }
    uVar5 = (uint)(longlong)fVar21;
    if (fVar21 < 0.0) {
      uVar5 = 0;
    }
    if (_DAT_142e46a48 < fVar21) {
      uVar5 = 0xffffffff;
    }
    uVar8 = (uint)(longlong)fVar17;
    if (fVar17 < 0.0) {
      uVar8 = 0;
    }
    if (_DAT_142e46a48 < fVar17) {
      uVar8 = 0xffffffff;
    }
    if (0x1fd < uVar5) {
      uVar5 = 0x1fe;
    }
    uVar9 = (ulonglong)uVar5;
    if (0x1fd < uVar8) {
      uVar8 = 0x1fe;
    }
    fVar21 = fVar21 - (float)(int)uVar5;
    uVar7 = (ulonglong)(uVar8 << 9);
    uVar12 = pdb_140927ec0((float)(int)uVar5,uVar8 << 9 | uVar5);
    uVar13 = pdb_140927ec0(param_1,uVar7 + uVar9 + 1);
    uVar14 = pdb_140927ec0(param_1,uVar7 + uVar9 + 0x200);
    uVar9 = uVar7 + uVar9 + 0x201;
  }
  else {
    auVar4._4_4_ = _UNK_142e37954;
    auVar4._0_4_ = _DAT_142e37950;
    auVar4._8_8_ = _UNK_142e37958;
    auVar19 = minps(auVar20,auVar4);
    fVar17 = auVar19._0_4_ * _DAT_142e61220 + _DAT_142e61230;
    fVar21 = auVar19._4_4_ * _UNK_142e61224 + _UNK_142e61234;
    auVar1._4_4_ = -(uint)(0.0 < fVar17);
    auVar1._0_4_ = -(uint)(0.0 < fVar17);
    auVar1._8_4_ = -(uint)(0.0 < fVar21);
    auVar1._12_4_ = -(uint)(0.0 < fVar21);
    uVar5 = movmskpd((int)_DAT_143ca4b38,auVar1);
    if ((uVar5 & 2) == 0) {
      fVar21 = 0.0;
    }
    if ((uVar5 & 1) == 0) {
      fVar17 = 0.0;
    }
    uVar9 = (longlong)fVar21 & 0xffffffff;
    if (fVar21 < 0.0) {
      uVar9 = 0;
    }
    if (_DAT_142e46a48 < fVar21) {
      uVar9 = 0xffffffff;
    }
    uVar5 = (uint)(longlong)fVar17;
    if (fVar17 < 0.0) {
      uVar5 = 0;
    }
    if (_DAT_142e46a48 < fVar17) {
      uVar5 = 0xffffffff;
    }
    fVar21 = fVar21 - (float)uVar9;
    uVar7 = 0x1ff;
    if ((uint)uVar9 < 0x1ff) {
      uVar7 = uVar9;
    }
    uVar8 = (uint)uVar9 + 1;
    if (0x1fe < uVar8) {
      uVar8 = 0x1ff;
    }
    uVar6 = 0x1ff;
    if (uVar5 < 0x1ff) {
      uVar6 = uVar5;
    }
    uVar3 = uVar5 + 1;
    if (0x1fe < uVar5 + 1) {
      uVar3 = 0x1ff;
    }
    uVar12 = pdb_140927ec0((float)uVar9,uVar6 << 9 | uVar7);
    uVar13 = pdb_140927ec0(param_1,uVar6 << 9 | uVar8);
    uVar14 = pdb_140927ec0(param_1,uVar7 | uVar3 << 9);
    uVar9 = (ulonglong)(uVar3 << 9 | uVar8);
  }
  uVar15 = pdb_140927ec0(param_1,uVar9);
  fVar17 = (float)pdb_140de9fd0(uVar12,uVar14);
  fVar16 = (float)pdb_140de9fd0(uVar13,uVar15);
  return fVar17 + (fVar16 - fVar17) * fVar21;
}

