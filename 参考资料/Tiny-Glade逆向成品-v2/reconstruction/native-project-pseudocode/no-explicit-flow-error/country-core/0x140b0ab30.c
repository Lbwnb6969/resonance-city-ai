// VA 0x140b0ab30, PDB extent 690 bytes
// country_core::startup::background_terrain_maps::BackgroundTerrainInfo::floor_height_ws
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::background_terrain_maps::BackgroundTerrainInfo::floor_height_ws
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
   Extent: 690 */

float pdb_140b0ab30(longlong param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined4 in_EAX;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  
  auVar17._0_4_ =
       (_DAT_142e36f28 - (param_2 / _DAT_142e4bfe4 + _DAT_142e36f50)) * _DAT_143053c80 +
       _DAT_142e61230;
  auVar17._4_4_ =
       ((float)param_3 / _DAT_142e4bfe4 + _DAT_142e36f50) * _UNK_143053c84 + _UNK_142e61234;
  auVar17._8_4_ = _UNK_143053c88 * 0.0 + _UNK_142e61238;
  auVar17._12_4_ = (float)((ulonglong)param_3 >> 0x20) * _UNK_143053c8c + _UNK_142e6123c;
  auVar17 = maxps(auVar17,ZEXT816(0));
  fVar18 = auVar17._4_4_;
  iVar11 = -(uint)(auVar17._0_4_ < _DAT_142f5d870);
  auVar4._4_4_ = iVar11;
  auVar4._0_4_ = iVar11;
  auVar4._8_4_ = -(uint)(fVar18 < _UNK_142f5d874);
  auVar4._12_4_ = -(uint)(fVar18 < _UNK_142f5d874);
  uVar5 = movmskpd(in_EAX,auVar4);
  if ((uVar5 & 2) == 0) {
    fVar18 = _DAT_142e4fba0;
  }
  if ((uVar5 & 1) == 0) {
    auVar17 = ZEXT416((uint)_DAT_142e4fba0);
  }
  fVar12 = (float)pub_142e32a40(fVar18);
  fVar16 = auVar17._0_4_;
  fVar13 = (float)pub_142e32a40(fVar16);
  fVar1 = _DAT_142e36f30;
  fVar15 = _DAT_142e36f2c;
  uVar10 = 0;
  uVar8 = (longlong)(fVar12 - _DAT_142e36f2c) & (longlong)fVar12 >> 0x3f | (longlong)fVar12;
  if (fVar12 < 0.0) {
    uVar8 = uVar10;
  }
  if (_DAT_142e36f30 < fVar12) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar7 = (longlong)(fVar13 - _DAT_142e36f2c) & (longlong)fVar13 >> 0x3f | (longlong)fVar13;
  if (fVar13 < 0.0) {
    uVar7 = uVar10;
  }
  if (_DAT_142e36f30 < fVar13) {
    uVar7 = 0xffffffffffffffff;
  }
  fVar12 = (float)pub_142e329c0(fVar18);
  fVar13 = (float)pub_142e329c0(fVar16);
  uVar6 = (longlong)(fVar12 - fVar15) & (longlong)fVar12 >> 0x3f | (longlong)fVar12;
  if (fVar12 < 0.0) {
    uVar6 = uVar10;
  }
  if (fVar1 < fVar12) {
    uVar6 = 0xffffffffffffffff;
  }
  uVar9 = (longlong)(fVar13 - fVar15) & (longlong)fVar13 >> 0x3f | (longlong)fVar13;
  if (fVar13 < 0.0) {
    uVar9 = uVar10;
  }
  if (fVar1 < fVar13) {
    uVar9 = 0xffffffffffffffff;
  }
  uVar10 = uVar7 * 0x100 + uVar8;
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar10,uVar2,&UNK_1430541d0);
  }
  uVar7 = uVar7 * 0x100 + uVar6;
  if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar7,uVar2,&UNK_1430541d0);
  }
  uVar8 = uVar8 + uVar9 * 0x100;
  if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar8,uVar2,&UNK_1430541d0);
  }
  uVar6 = uVar9 * 0x100 + uVar6;
  if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar6,uVar2,&UNK_1430541d0);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  fVar15 = *(float *)(lVar3 + uVar10 * 4);
  fVar1 = *(float *)(lVar3 + uVar7 * 4);
  fVar13 = (float)pub_142e32bc0(fVar18);
  fVar14 = (float)pub_142e32bc0(fVar16);
  fVar12 = *(float *)(lVar3 + uVar8 * 4);
  fVar15 = (fVar18 - fVar13) * (fVar1 - fVar15) + fVar15;
  return (((fVar18 - fVar13) * (*(float *)(lVar3 + uVar6 * 4) - fVar12) + fVar12) - fVar15) *
         (fVar16 - fVar14) + fVar15;
}

