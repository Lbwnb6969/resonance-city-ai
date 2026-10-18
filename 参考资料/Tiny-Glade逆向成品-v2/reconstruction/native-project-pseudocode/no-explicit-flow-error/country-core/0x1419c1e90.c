// VA 0x1419c1e90, PDB extent 217 bytes
// country_core::resources::terrain_rock_mask::impl$1::sample_at_world_xz
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_rock_mask.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::terrain_rock_mask::impl$1::sample_at_world_xz
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_rock_mask.rs
   Extent: 217 */

undefined4 pdb_1419c1e90(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar11._0_8_ = in_XMM3._0_8_;
  auVar11._8_4_ = in_XMM3._4_4_;
  auVar11._12_4_ = (int)((ulonglong)param_3 >> 0x20);
  auVar12._8_8_ = auVar11._8_8_;
  auVar12._0_4_ = in_XMM3._0_4_;
  auVar12._4_4_ = (int)param_3;
  auVar12 = divps(auVar12,_DAT_142e61200);
  auVar13._0_4_ = auVar12._0_4_ + _DAT_142e36f60;
  auVar13._4_4_ = auVar12._4_4_ + _UNK_142e36f64;
  auVar13._8_4_ = auVar12._8_4_ + _UNK_142e36f68;
  auVar13._12_4_ = auVar12._12_4_ + _UNK_142e36f6c;
  auVar12 = maxps(auVar13,ZEXT816(0));
  fVar9 = auVar12._4_4_ * _DAT_142e61210;
  fVar10 = auVar12._0_4_ * _DAT_142e61210;
  uVar4 = (uint)(longlong)fVar9;
  if (fVar9 < 0.0) {
    uVar4 = 0;
  }
  iVar7 = -(uint)(auVar12._0_4_ < _DAT_142e37950);
  iVar8 = -(uint)(auVar12._4_4_ < _UNK_142e37954);
  if (_DAT_142e46a48 < fVar9) {
    uVar4 = 0xffffffff;
  }
  uVar6 = (uint)(longlong)fVar10;
  if (fVar10 < 0.0) {
    uVar6 = 0;
  }
  if (_DAT_142e46a48 < fVar10) {
    uVar6 = 0xffffffff;
  }
  if (0x1fe < uVar4) {
    uVar4 = 0x1ff;
  }
  auVar1._4_4_ = iVar7;
  auVar1._0_4_ = iVar7;
  auVar1._8_4_ = iVar8;
  auVar1._12_4_ = iVar8;
  uVar5 = movmskpd(0xffffffff,auVar1);
  if ((uVar5 & 2) == 0) {
    uVar4 = 0x1ff;
  }
  if (0x1fe < uVar6) {
    uVar6 = 0x1ff;
  }
  uVar2 = 0x3fe00;
  if ((uVar5 & 1) != 0) {
    uVar2 = uVar6 << 9;
  }
  uVar3 = (ulonglong)((uVar2 | uVar4) >> 5);
  if (uVar3 < param_2) {
    uVar6 = *(uint *)(param_1 + uVar3 * 4);
    return CONCAT31((int3)(uVar6 >> 8),(uVar6 >> (uVar4 & 0x1f) & 1) != 0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar3,fVar9,&UNK_143360e88);
}

