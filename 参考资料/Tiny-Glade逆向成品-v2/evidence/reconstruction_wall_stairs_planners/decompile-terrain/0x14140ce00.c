// Matched PDB: country_core::resources::terrain_height::TerrainHeightsData::sample_at_world_xz<country_core::resources::terrain_height::TerrainHeightSsbo>
// VA 0x14140ce00, PDB extent 760 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   country_core::resources::terrain_height::TerrainHeightsData::sample_at_world_xz<country_core::resources::terrain_height::TerrainHeightSsbo>
   Extent: 760 bytes. No whole-program auto-analysis. */

void pdb_14140ce00(longlong param_1,undefined8 param_2)

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
  float fVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  lStack_98 = *(longlong *)(param_1 + 0x10) * 2;
  uStack_90 = *(undefined8 *)(param_1 + 0x50);
  auVar17._0_8_ = in_XMM2._0_8_;
  auVar17._8_4_ = in_XMM2._4_4_;
  auVar17._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  auVar18._8_8_ = auVar17._8_8_;
  auVar18._0_4_ = in_XMM2._0_4_;
  auVar18._4_4_ = (int)param_2;
  auVar18 = divps(auVar18,_DAT_142e61200);
  auVar19._0_4_ = auVar18._0_4_ + _DAT_142e36f60;
  auVar19._4_4_ = auVar18._4_4_ + _UNK_142e36f64;
  auVar19._8_4_ = auVar18._8_4_ + _UNK_142e36f68;
  auVar19._12_4_ = auVar18._12_4_ + _UNK_142e36f6c;
  if (*_DAT_143ca4b38 == '\0') {
    auVar18 = maxps(auVar19,ZEXT816(0));
    iVar10 = -(uint)(auVar18._0_4_ < _DAT_142e37950);
    iVar11 = -(uint)(auVar18._4_4_ < _UNK_142e37954);
    auVar2._4_4_ = iVar10;
    auVar2._0_4_ = iVar10;
    auVar2._8_4_ = iVar11;
    auVar2._12_4_ = iVar11;
    uVar5 = movmskpd((int)_DAT_143ca4b38,auVar2);
    fVar20 = _DAT_142e61210;
    if ((uVar5 & 2) != 0) {
      fVar20 = auVar18._4_4_ * _DAT_142e61210;
    }
    fVar16 = _DAT_142e61210;
    if ((uVar5 & 1) != 0) {
      fVar16 = _DAT_142e61210 * auVar18._0_4_;
    }
    uVar5 = (uint)(longlong)fVar20;
    if (fVar20 < 0.0) {
      uVar5 = 0;
    }
    if (_DAT_142e46a48 < fVar20) {
      uVar5 = 0xffffffff;
    }
    uVar8 = (uint)(longlong)fVar16;
    if (fVar16 < 0.0) {
      uVar8 = 0;
    }
    if (_DAT_142e46a48 < fVar16) {
      uVar8 = 0xffffffff;
    }
    if (0x1fd < uVar5) {
      uVar5 = 0x1fe;
    }
    uVar9 = (ulonglong)uVar5;
    if (0x1fd < uVar8) {
      uVar8 = 0x1fe;
    }
    uVar7 = (ulonglong)(uVar8 << 9);
    uVar12 = pdb_140927ec0(&uStack_a0,uVar8 << 9 | uVar5);
    uVar13 = pdb_140927ec0(&uStack_a0,uVar7 + uVar9 + 1);
    uVar14 = pdb_140927ec0(&uStack_a0,uVar7 + uVar9 + 0x200);
    uVar9 = uVar7 + uVar9 + 0x201;
  }
  else {
    auVar4._4_4_ = _UNK_142e37954;
    auVar4._0_4_ = _DAT_142e37950;
    auVar4._8_8_ = _UNK_142e37958;
    auVar18 = minps(auVar19,auVar4);
    fVar16 = auVar18._0_4_ * _DAT_142e61220 + _DAT_142e61230;
    fVar20 = auVar18._4_4_ * _UNK_142e61224 + _UNK_142e61234;
    auVar1._4_4_ = -(uint)(0.0 < fVar16);
    auVar1._0_4_ = -(uint)(0.0 < fVar16);
    auVar1._8_4_ = -(uint)(0.0 < fVar20);
    auVar1._12_4_ = -(uint)(0.0 < fVar20);
    uVar5 = movmskpd((int)_DAT_143ca4b38,auVar1);
    if ((uVar5 & 2) == 0) {
      fVar20 = 0.0;
    }
    if ((uVar5 & 1) == 0) {
      fVar16 = 0.0;
    }
    uVar9 = (longlong)fVar20 & 0xffffffff;
    if (fVar20 < 0.0) {
      uVar9 = 0;
    }
    if (_DAT_142e46a48 < fVar20) {
      uVar9 = 0xffffffff;
    }
    uVar5 = (uint)(longlong)fVar16;
    if (fVar16 < 0.0) {
      uVar5 = 0;
    }
    if (_DAT_142e46a48 < fVar16) {
      uVar5 = 0xffffffff;
    }
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
    uVar12 = pdb_140927ec0(&uStack_a0,uVar6 << 9 | uVar7);
    uVar13 = pdb_140927ec0(&uStack_a0,uVar6 << 9 | uVar8);
    uVar14 = pdb_140927ec0(&uStack_a0,uVar7 | uVar3 << 9);
    uVar9 = (ulonglong)(uVar3 << 9 | uVar8);
  }
  uVar15 = pdb_140927ec0(&uStack_a0,uVar9);
  uVar12 = pdb_140de9fd0(uVar12,uVar14);
  uVar13 = pdb_140de9fd0(uVar13,uVar15);
  pdb_140de9fd0(uVar12,uVar13);
  return;
}

