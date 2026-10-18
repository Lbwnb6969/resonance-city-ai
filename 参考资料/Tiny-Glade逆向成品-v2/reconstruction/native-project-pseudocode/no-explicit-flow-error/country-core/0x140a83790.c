// VA 0x140a83790, PDB extent 555 bytes
// country_core::utils::dirty_tiles::DirtyTiles::rasterize_world_space_rect
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::rasterize_world_space_rect
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 555 */

void pdb_140a83790(longlong param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  
  lVar7 = param_1;
  pub_142e32a50(param_1,_DAT_142f3e5f8,_DAT_142e37994);
  uVar5 = (undefined4)lVar7;
  pub_142e32a50();
  uVar14 = pub_142e32a40();
  uVar15 = pub_142e32a40();
  pub_142e32a50();
  pub_142e32a50();
  uVar16 = pub_142e329c0();
  auVar18._0_4_ = pub_142e329c0();
  auVar18._4_4_ = uVar16;
  auVar18._12_4_ = uVar14;
  auVar18._8_4_ = uVar15;
  auVar19 = maxps(auVar18,ZEXT816(0));
  fVar17 = auVar19._0_4_;
  fVar20 = auVar19._4_4_;
  fVar21 = auVar19._8_4_;
  fVar22 = auVar19._12_4_;
  auVar19._4_4_ = -(uint)(fVar20 < _UNK_143043144);
  auVar19._0_4_ = -(uint)(fVar17 < _DAT_143043140);
  auVar19._8_4_ = -(uint)(fVar21 < _UNK_143043148);
  auVar19._12_4_ = -(uint)(fVar22 < _UNK_14304314c);
  uVar6 = movmskps(uVar5,auVar19);
  uVar11 = 0;
  uVar3 = (uint)(longlong)fVar22;
  if (fVar22 < 0.0) {
    uVar3 = uVar11;
  }
  if (_DAT_142e46a48 < fVar22) {
    uVar3 = 0xffffffff;
  }
  if ((uVar6 & 8) == 0) {
    uVar3 = 0x3f;
  }
  uVar9 = (uint)(longlong)fVar21;
  if (fVar21 < 0.0) {
    uVar9 = uVar11;
  }
  if (_DAT_142e46a48 < fVar21) {
    uVar9 = 0xffffffff;
  }
  if ((uVar6 & 4) == 0) {
    uVar9 = 0x3f;
  }
  uVar12 = (longlong)fVar20 & 0xffffffff;
  if (fVar20 < 0.0) {
    uVar12 = 0;
  }
  if (_DAT_142e46a48 < fVar20) {
    uVar12 = 0xffffffff;
  }
  if ((uVar6 & 2) == 0) {
    uVar12 = 0x3f;
  }
  uVar10 = (uint)(longlong)fVar17;
  if (fVar17 < 0.0) {
    uVar10 = uVar11;
  }
  if (_DAT_142e46a48 < fVar17) {
    uVar10 = 0xffffffff;
  }
  if ((uVar6 & 1) == 0) {
    uVar10 = 0x3f;
  }
  if ((uVar9 < uVar10) && (uVar3 < (uint)uVar12)) {
    uVar4 = 0x40;
    if (0x40 < uVar9) {
      uVar4 = (ulonglong)uVar9;
    }
    uVar13 = (ulonglong)uVar9;
    do {
      if (uVar13 == uVar4) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar4,0x40,&UNK_143043228);
      }
      uVar1 = uVar13 + 1;
      uVar8 = (ulonglong)uVar3;
      do {
        if (uVar8 >> 6 != 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar8 >> 6,1,&UNK_143043228);
        }
        puVar2 = (ulonglong *)(param_1 + uVar13 * 8);
        *puVar2 = *puVar2 | 1L << ((byte)uVar8 & 0x3f);
        uVar8 = uVar8 + 1;
      } while (uVar12 != uVar8);
      uVar13 = uVar1;
    } while (uVar1 != uVar10);
  }
  return;
}

