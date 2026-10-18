// VA 0x1421a6e80, PDB extent 653 bytes
// country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_rect_cells<system_clutter::autoclutter::read_bush_positions_from_gpu::read_bush_positions_from_gpu::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::iter_world_space_rect_cells<system_clutter::autoclutter::read_bush_positions_from_gpu::read_bush_positions_from_gpu::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 653 */

void pdb_1421a6e80(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  
  pub_142e32a50(param_1,_DAT_142f3e5f8,_DAT_142e37994);
  uVar7 = (undefined4)param_1;
  pub_142e32a50();
  uVar19 = pub_142e32a40();
  uVar20 = pub_142e32a40();
  pub_142e32a50();
  pub_142e32a50();
  uVar21 = pub_142e329c0();
  auVar23._0_4_ = pub_142e329c0();
  auVar23._4_4_ = uVar21;
  auVar23._12_4_ = uVar19;
  auVar23._8_4_ = uVar20;
  auVar24 = maxps(auVar23,ZEXT816(0));
  fVar22 = auVar24._0_4_;
  fVar25 = auVar24._4_4_;
  fVar26 = auVar24._8_4_;
  fVar27 = auVar24._12_4_;
  auVar24._4_4_ = -(uint)(fVar25 < _UNK_143043144);
  auVar24._0_4_ = -(uint)(fVar22 < _DAT_143043140);
  auVar24._8_4_ = -(uint)(fVar26 < _UNK_143043148);
  auVar24._12_4_ = -(uint)(fVar27 < _UNK_14304314c);
  uVar8 = movmskps(uVar7,auVar24);
  uVar15 = 0;
  uVar6 = (uint)(longlong)fVar27;
  if (fVar27 < 0.0) {
    uVar6 = uVar15;
  }
  if (_DAT_142e46a48 < fVar27) {
    uVar6 = 0xffffffff;
  }
  if ((uVar8 & 8) == 0) {
    uVar6 = 0x3f;
  }
  uVar11 = (uint)(longlong)fVar26;
  if (fVar26 < 0.0) {
    uVar11 = uVar15;
  }
  if (_DAT_142e46a48 < fVar26) {
    uVar11 = 0xffffffff;
  }
  if ((uVar8 & 4) == 0) {
    uVar11 = 0x3f;
  }
  uVar16 = (uint)(longlong)fVar25;
  if (fVar25 < 0.0) {
    uVar16 = uVar15;
  }
  if (_DAT_142e46a48 < fVar25) {
    uVar16 = 0xffffffff;
  }
  if ((uVar8 & 2) == 0) {
    uVar16 = 0x3f;
  }
  uVar12 = (uint)(longlong)fVar22;
  if (fVar22 < 0.0) {
    uVar12 = uVar15;
  }
  if (_DAT_142e46a48 < fVar22) {
    uVar12 = 0xffffffff;
  }
  if ((uVar8 & 1) == 0) {
    uVar12 = 0x3f;
  }
  if ((uVar11 < uVar12) && (uVar6 < uVar16)) {
    lVar3 = *(longlong *)(param_2 + 8);
    uVar4 = *(ulonglong *)(param_2 + 0x10);
    uVar2 = *param_3;
    uVar18 = (ulonglong)uVar11;
    lVar13 = CONCAT44(uVar11,uVar6);
    do {
      uVar18 = uVar18 + 1;
      lVar14 = lVar13;
      lVar17 = (ulonglong)uVar16 - (ulonglong)uVar6;
      do {
        uVar8 = pdb_140c6c1a0(lVar14);
        uVar9 = (ulonglong)uVar8;
        if (uVar4 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar9,uVar4,&UNK_14346cc80);
        }
        lVar10 = uVar9 * 0x20;
        lVar1 = lVar3 + lVar10;
        lVar5 = *(longlong *)(lVar3 + 0x10 + lVar10);
        if (lVar5 == *(longlong *)(lVar3 + lVar10)) {
          pdb_142db07d0(lVar1);
        }
        *(undefined8 *)(*(longlong *)(lVar1 + 8) + lVar5 * 8) = uVar2;
        *(longlong *)(lVar1 + 0x10) = lVar5 + 1;
        lVar14 = lVar14 + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      lVar13 = lVar13 + 0x100000000;
    } while (uVar18 != uVar12);
  }
  return;
}

