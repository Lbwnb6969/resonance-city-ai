// VA 0x140de83f0, PDB extent 493 bytes
// utils::pack_srgba_u32
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::pack_srgba_u32
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 493 */

uint pdb_140de83f0(float *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 auVar6 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  
  fVar8 = _DAT_142f89650;
  fVar11 = param_1[1];
  fVar10 = param_1[2];
  fVar7 = param_1[3];
  if (*param_1 <= _DAT_142f89650) {
    fVar5 = *param_1 * _DAT_1431fec50;
  }
  else {
    fVar5 = (float)pub_142e32ad0();
    fVar5 = fVar5 * _DAT_1431fec54 + _DAT_1431fec58;
  }
  if (fVar11 <= fVar8) {
    fVar11 = fVar11 * _DAT_1431fec50;
  }
  else {
    fVar11 = (float)pub_142e32ad0();
    fVar11 = fVar11 * _DAT_1431fec54 + _DAT_1431fec58;
  }
  if (fVar8 < fVar10) {
    fVar10 = (float)pub_142e32ad0();
    fVar10 = fVar10 * _DAT_1431fec54 + _DAT_1431fec58;
  }
  else {
    fVar10 = fVar10 * _DAT_1431fec50;
  }
  auVar9._4_4_ = fVar11 * DAT_142e4fb90._4_4_ + _UNK_142e36f44;
  auVar9._0_4_ = fVar5 * (float)DAT_142e4fb90 + _DAT_142e36f40;
  auVar9._8_4_ = fVar10 * DAT_142e4fb90._8_4_ + _UNK_142e36f48;
  auVar9._12_4_ = fVar7 * DAT_142e4fb90._12_4_ + _UNK_142e36f4c;
  auVar9 = maxps(ZEXT816(0),auVar9);
  auVar9 = minps(_DAT_142e4fb90,auVar9);
  fVar11 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar7 = auVar9._8_4_;
  fVar8 = auVar9._12_4_;
  uVar1 = (undefined4)(longlong)fVar8;
  if (fVar8 < 0.0) {
    uVar1 = 0;
  }
  if (_DAT_142e46a48 < fVar8) {
    uVar1 = 0xffffffff;
  }
  iVar3 = (int)(longlong)fVar7;
  if (fVar7 < 0.0) {
    iVar3 = 0;
  }
  if (_DAT_142e46a48 < fVar7) {
    iVar3 = -1;
  }
  iVar2 = (int)(longlong)fVar11;
  if (fVar11 < 0.0) {
    iVar2 = 0;
  }
  if (_DAT_142e46a48 < fVar11) {
    iVar2 = -1;
  }
  iVar4 = (int)(longlong)fVar10;
  if (fVar10 < 0.0) {
    iVar4 = 0;
  }
  if (_DAT_142e46a48 < fVar10) {
    iVar4 = -1;
  }
  auVar6._4_4_ = iVar4;
  auVar6._0_4_ = iVar4;
  auVar6._8_4_ = uVar1;
  auVar6._12_4_ = uVar1;
  return (uint)((auVar6._8_8_ & 0xffffffff) * (ulonglong)_UNK_1431fec78) | iVar4 * _DAT_1431fec70 |
         iVar3 * _UNK_1431fec68 | iVar2 * _DAT_1431fec60;
}

